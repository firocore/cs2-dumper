from memory.memory import Memory



class DiclaredClass:
    def __init__(self, memory: Memory, address: int) -> None:
        self.memory = memory
        self.address = address

    def name(self):
        name_address = self.memory.process.read_ulonglong(self.address + 0x8)
        return self.memory.process.read_string(name_address, 64)