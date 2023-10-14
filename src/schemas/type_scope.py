from memory.memory import Memory
from schemas.diclared_class import DiclaredClass


class TypeScope:
    def __init__(self, memory: Memory, address: int) -> None:
        self.memory = memory
        self.address = address

    def classes(self):
        # class_address = DiclaredClass(self.memory, self.address + 0x588)
        # print(class_address.name())
        size = self.memory.process.read_short(self.address + 0x588 + 0x10)
        # classes = self.memory.process.read_int()
        print("module address:", hex(self.address + 0x588))
        print("module size:", size)

        # print(hex(self.memory.process.read_ulonglong(self.address + 0x588 + 0x18)))
        # print(hex(self.memory.process.read_ulonglong(class_address + 0x20)))
        # print(hex(self.memory.process.read_ulonglong(class_address + 0x28)))
        # print(hex(classes))

    def get_module_name(self):
        return self.memory.process.read_string(self.address + 0x8, 256)
    