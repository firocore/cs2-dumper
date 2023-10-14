import json
from schemas.schema_fields import Field




def add_class(module_name,  class_name: str, fields: Field):
    with open(f'json/{module_name}.json', 'a+') as f:
        f.seek(0)

        try:
            existing_data = json.load(f)
        except json.JSONDecodeError:
            existing_data = {}

        payload = {
            class_name: {}
        }

        for field in fields:
            payload[class_name][field.name] = field.offset

        existing_data.update(payload)

        f.seek(0)
        f.truncate()
        f.write(json.dumps(existing_data, indent=4))