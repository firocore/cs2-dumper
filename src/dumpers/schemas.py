from memory.memory import Memory
from schemas.system import SchemaSystem


def dump_schemas(memory: Memory):
    schema = SchemaSystem()
    schema.new_schema(memory)

    for type_scope in schema.type_scopes():
        print('\n')
        print(f"{type_scope.get_module_name()} | {hex(type_scope.address)}")
        
        type_scope.classes()

