import os
import sys
from memory.memory import Memory
from dumpers.offsets import dump_offsets

def main():
    memory = Memory()
    memory.attach_process("cs2.exe")
    memory.get_loaded_modules()
    # memory.find_pattern("client.dll", "48 89 0D ?? ?? ?? ?? 48 89 41")

    dump_offsets(memory)

if __name__ == "__main__":
    main()