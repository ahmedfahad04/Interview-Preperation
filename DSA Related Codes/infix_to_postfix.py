string = input()
stack = []
postfix = ""

for char in string:

    if char == ' ':
        continue

    if char >= '1' and char <= 'Z':
        postfix += char

    else:
        if char == ')':

            stack_top = stack.pop()
            while stack_top != '(':
                postfix += stack_top
                stack_top = stack.pop()
        else:
            stack.append(char)

for rem in stack:
    postfix += rem

print(postfix)
