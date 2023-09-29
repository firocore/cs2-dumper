import memory.pymemoryapi as pymem
from ctypes import *
from win32 import *


class Memory:
    process: pymem.Process = None
    process_name: str = None
    process_handle: int = None
    
    def attach_process(self, process_name: str):
        process_list = pymem.list_processes()

        for name, id in process_list:
            if name != process_name: continue
            else: break          
        
        self.process = pymem.Process(process_name)
        self.process_name = name
        self.process_handle = id
        
        # self.client_module = self.process.get_module_info('client.dll').BaseAddress
        # self.engine_module = self.process.get_module_info('engine2.dll').BaseAddress

        return True
    
    def get_loaded_modules(self):
        return self.process.list_modules()
    
    def get_module(self, module_name: str):
        return self.process.get_module_info(module_name)

    def find_pattern(self, module_name: str, pattern: str):
        module = self.process.get_module_info(module_name)
        base_address = module.BaseAddress
        end_address = base_address + module.SizeOfImage 
        
        return self.process.raw_pattern_scan(base_address, end_address, pattern, True)
    
    def resolve_rip(self, address: int):
        displacement = self.process.read_int(address + 0x3)
        return (address + 0x7) + displacement