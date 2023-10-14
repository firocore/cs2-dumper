from memory.memory import Memory
from schemas.system import SchemaSystem
from schemas.schema_fields import Fields
from builders.builder import Builder


def dump_schemas(memory: Memory):
    schema = SchemaSystem()
    builder = Builder()
    schema.new_schema(memory)

    print("Количество модулей", len(schema.type_scopes()))
    for type_scope in schema.type_scopes():
        # print(f"{type_scope.get_module_name()} | {hex(type_scope.address)}")

        # Тут создавать файл
        module_name = type_scope.get_module_name()[:-4]
        builder.create_file(module_name)

        for classes in type_scope.get_classes():
            class_name = classes.get_class_name()
            size = classes.get_class_size()
            print("[", class_name, "]")
            
            if size == 0: continue
            classes_fields = Fields(memory, classes.address).get_class_fields(size)
            builder.add_class(module_name, class_name, classes_fields)

        # break
        # break
