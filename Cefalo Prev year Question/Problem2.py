'''
Statement: Convert Roman Notation to Numeric Notation
Sample I/O
Input: CCCL
Output: 350
'''

roman_to_decimal_dict = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000
}

romanNumerals = input('Enter Roman Numerals: ')
decimalValue = 0

for numeral in romanNumerals:
    decimalValue += roman_to_decimal_dict[numeral]
    
print(decimalValue)