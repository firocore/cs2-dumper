from memory.memory import Memory
from dumpers.offsets import dump_offsets
from dumpers.schemas import dump_schemas
from builders.builder import Builder



def main():
    Builder().create_output()
    memory = Memory()
    memory.attach_process("cs2.exe")

    dump_offsets(memory)
    dump_schemas(memory)

if __name__ == "__main__":
    main()
