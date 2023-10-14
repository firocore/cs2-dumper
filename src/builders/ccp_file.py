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

"""
#pragma once

#include <cstddef>

using namespace std;

namespace Offsets
{
	constexpr ptrdiff_t dwLocalPlayerController = 0x17DE5
	constexpr ptrdiff_t dwEntityList = 0x178FC88;
	constexpr ptrdiff_t dwLocalPlayerPawn = 0x187CFC8;
	constexpr ptrdiff_t iTeamNum = 0x3BF;
	constexpr ptrdiff_t m_vecOrigin = 0x540;
	constexpr ptrdiff_t dwViewMatrix = 0x187DA
	constexpr ptrdiff_t dwForceJump = 0x1697300;
	constexpr ptrdiff_t m_fFlags = 0x3
	constexpr ptrdiff_t dwForceLeft = 0x1697150;
	constexpr ptrdiff_t dwForceRight = 0x16971
	constexpr ptrdiff_t m_iHealth = 0x32C;
	constexpr ptrdiff_t m_iPawnHealth = 0x7C8;

}
"""