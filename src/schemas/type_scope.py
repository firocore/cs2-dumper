from memory.memory import Memory



class DiclaredClass:
    def __init__(self, memory: Memory, address: int) -> None:
        self.memory = memory
        self.address = address

    def get_class_size(self):
        return self.memory.process.read_short(self.address + 28)

    def get_class_name(self):
        name_address = self.memory.process.read_ulonglong(self.address + 0x8)
        return self.memory.process.read_string(name_address, 64)


class TypeScope:
    def __init__(self, memory: Memory, address: int) -> None:
        self.memory = memory
        self.address = address

    def get_classes(self) -> list[DiclaredClass]: 
        size = self.memory.process.read_short(self.address + 0x588 + 0x10)
        count = self.memory.process.read_short(self.address + 0x588 + 0x16)
        classes_list = []
        output_classes_list = []
        
        print("module_name:", self.get_module_name(), "size:", size, "count:", count, "address:", hex(self.address))

        for i in range(count):
            classes = self.memory.process.read_ulonglong(self.address + 0x588 + 0x28 + 0x8 * i) + 0x20
            classes_list.append(classes)

        for classes in classes_list:
            for i in range(size):
                class_address = self.memory.process.read_ulonglong(classes + i * 24)
                diclared_class = DiclaredClass(self.memory, class_address)
                if diclared_class.get_class_name() != None:
                    # print(hex(class_address), diclared_class.name())
                    output_classes_list.append(diclared_class)
                else:
                    break

        # if len(output_classes_list) == size:
        #    print(self.get_module_name(), "Получен полностью")
        # else:
        #    print(self.get_module_name(), "ШЛО ОНО ВСЕ НАХУЙ", len(output_classes_list))

        return output_classes_list

    def get_module_name(self):
        return self.memory.process.read_string(self.address + 0x8, 256)
    