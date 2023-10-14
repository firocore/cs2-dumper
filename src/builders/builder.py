import builders.json_file
import os
#import .cpp
#import hueta

class Builder(object):
    def __init__(self) -> None:
        try:
            os.remove("output")
        except FileNotFoundError:
            ...
        finally:
            os.mkdir("output")
        
        os.chdir("output")
        os.mkdir("json")
        os.mkdir("csharp")
        os.mkdir("cpp")


    def create_file(self, filename):
        builders.json_file.create_module_file(filename)


    def add_class(self, module_name: str, class_name: str, fields: list):
        builders.json_file.add_class(module_name, class_name, fields)

