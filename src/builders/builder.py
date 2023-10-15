import builders.json_file
import builders.ccp_file
import builders.csharp_file
import builders.py_file
import os
import shutil
#import .cpp
#import hueta

class Builder(object):
    def create_output(self) -> None:
        try:
            shutil.rmtree("output")
        except FileNotFoundError:
            ...
        finally:
            os.mkdir("output")
        
        os.chdir("output")
        os.mkdir("json")
        os.mkdir("csharp")
        os.mkdir("cpp")
        os.mkdir("py")


    def create_file(self, filename):
        builders.ccp_file.create_module_file(filename)

    def add_class(self, module_name: str, class_name: str, fields: list):
        builders.json_file.add_module_fields(module_name, class_name, fields)
        builders.ccp_file.add_module_fields(module_name, class_name, fields)
        builders.csharp_file.add_module_fields(module_name, class_name, fields)
        builders.py_file.add_module_fields(module_name, class_name, fields)