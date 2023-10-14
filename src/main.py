from memory.memory import Memory
from dumpers.offsets import dump_offsets
from dumpers.schemas import dump_schemas


import shutil

def main():
    memory = Memory()
    memory.attach_process("cs2.exe")

    dump_schemas(memory)
    # dump_offsets(memory)

if __name__ == "__main__":
    main()