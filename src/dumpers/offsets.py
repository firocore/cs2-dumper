import json
from memory.memory import Memory
from builders.builder import Builder
from schemas.schema_fields import Field



def dump_offsets(memory: Memory):
    

    with open("signatures.json", "r") as file:
        config: dict = json.load(file)
        file.close()

    builder = Builder()
    output_filds = []

    for signature in config.get("signatures"):
        name = signature.get("name")
        module = signature.get("module")
        pattern = signature.get("pattern")
        offset: int = None

        if name is None or module is None or pattern is None:
            continue

        address = memory.find_pattern(module, pattern)
        module = memory.get_module(module)

        for operation in signature.get("operations"):
            operation_type = operation['type'] 

            if operation_type == 'add':
                address += operation['value']

            elif operation_type == "rip_relative":
                address = memory.resolve_rip(address)

            elif operation_type == "dereference":
                times = operation.get("times", 0)
                for _ in range(times):
                    address = memory.process.read_uint(address)
                    
            elif operation_type == "offset":
                offset = memory.process.read_int(address + operation['position'])

        if offset is not None:
            value = offset
        else:
            value = int(address) - module.BaseAddress
        
        output_filds.append(Field(name, value))
        print(f"{name}, {hex(value)}")
    
    builder.create_file("offsets")
    builder.add_class("offsets", "Offsets", output_filds)