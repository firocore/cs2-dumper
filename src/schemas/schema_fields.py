from memory.memory import Memory

class Field:
    def __init__(self, name, offset) -> None:
        self.name = name
        self.offset = offset

class Fields:
    def __init__(self, memory: Memory, address: int) -> None:
        self.memory = memory
        self.address = address

    def get_class_fields(self, size: int) -> list[Field]:
        output_fields = []
        fields_address = self.memory.process.read_ulonglong(self.address + 40)

        for i in range(size):
            name_address = self.memory.process.read_ulonglong(fields_address + i * 32)
            offset = self.memory.process.read_long(fields_address + i * 32 + 16)
            name = self.memory.process.read_string(name_address, 64)
            print("     ", name, " = ", hex(offset))
            output_fields.append(Field(name, offset))

        return output_fields

