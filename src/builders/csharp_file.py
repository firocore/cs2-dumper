from schemas.schema_fields import Field



def add_module_fields(module_name: str,  class_name: str, fields: list[Field]) -> None:
    with open(f'csharp/{module_name}.cs', 'a+') as file:
        file.write(f"public static class {class_name} {{\n")

        for field in fields:
            file.write(f"\n   public const nint {field.name} = {hex(field.offset)};")

        file.write("\n\n}\n\n")
