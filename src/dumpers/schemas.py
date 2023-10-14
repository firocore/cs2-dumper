from memory.memory import Memory
from schemas.system import SchemaSystem
from schemas.schema_fields import Fields


def dump_schemas(memory: Memory):
    schema = SchemaSystem()
    schema.new_schema(memory)

    print("Количество модулей", len(schema.type_scopes()))
    for type_scope in schema.type_scopes():
        # print(f"{type_scope.get_module_name()} | {hex(type_scope.address)}")
        
        for classes in type_scope.get_classes():
            print('\n')
            print("[", classes.get_class_name(), "]")
            size = classes.get_class_size()
            
            if size == 0: continue
            classes_fields = Fields(memory, classes.address).get_class_fields(size)
        
        break
        # break

