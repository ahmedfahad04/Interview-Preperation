

'''
Problem: Convert the Linux file Permission notation into Numeric Value
Sample I/O-

input = '-rw-rw-r--'
output = 664
'''

notationToValueMap = {
    'r': 4,
    'w': 2,
    'x': 1,
    '-': 0
}

notation = input('Enter File Permission Notation: ')
numericValue = ''
userPermission = notation[1:4]
groupPermission = notation[4:7]
othersPermission = notation[7:10]

for eachPermission in [userPermission, groupPermission, othersPermission]:
    octal_value = 0
    for char in eachPermission:
        octal_value += notationToValueMap[char]

    numericValue += str(octal_value)

print(f"Numeric Value of {notation} file permission is: ", numericValue)
