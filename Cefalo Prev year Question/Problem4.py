class TextInput:
    def __init__(self) -> None:
        self._input = ""

    def add(self, c):
        self._input += c

    def get_value(self):
        return self._input


class NumericInput(TextInput):
    def add(self, c):
        if c.isdigit():
            self._input += c


def test():
    input_obj = NumericInput()
    input_obj.add('1')
    input_obj.add('a')
    input_obj.add('9')
    print(input_obj.get_value())


if __name__ == '__main__':
    test()
