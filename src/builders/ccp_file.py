from schemas.schema_fields import Field



cpp_base = """#pragma once

#include <cstddef>

using namespace std;

"""


def create_module_file(module_name: str) -> None:
    with open(f'cpp/{module_name}.hpp', 'w') as file:
        file.write(cpp_base)


def add_module_fields(module_name: str,  class_name: str, fields: list[Field]) -> None:
    with open(f'cpp/{module_name}.hpp', 'a+') as file:
        file.write(f"namespace {class_name} {{\n")

        for field in fields:
            file.write(f"\n   constexpr ptrdiff_t {field.name} = {hex(field.offset)};")

        file.write("\n\n}\n\n")
