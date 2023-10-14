from memory.memory import Memory
from schemas.type_scope import TypeScope



class SchemaSystem:
    memory: Memory = None
    address: int = None

    def new_schema(self, memory: Memory):
        address = memory.find_pattern(
            "schemasystem.dll", 
            "48 8D 0D ?? ?? ?? ?? E9 ?? ?? ?? ?? CC CC CC CC 48 8D 0D ?? ?? ?? ?? E9 ?? ?? ?? ?? CC CC CC CC 48 83 EC 28"
            )
        
        self.address = memory.resolve_rip(address)
        self.memory = memory

    def type_scopes(self) -> list[TypeScope]:
        size = self.memory.process.read_ulonglong(self.address + 0x190)
        data = self.memory.process.read_ulonglong(self.address + 0x198)
        
        addreses = []

        for i in range(size):
            addreses.append(TypeScope(
                self.memory, 
                self.memory.process.read_ulonglong(data + i * 8)
                ))

        return addreses