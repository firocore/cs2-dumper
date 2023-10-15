from schemas.schema_fields import Field




def add_module_fields(module_name: str,  class_name: str, fields: list[Field]) -> None:
    with open(f'py/{module_name}.py', 'a+') as file:
        file.write(f"\n\n\n\nclass {class_name.replace('::', '_')}:\n")

        for field in fields:
            file.write(f"\n   {field.name}: int = {field.offset}")
