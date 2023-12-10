matrix = [[1,2,3],[4,5,6],[7,8,9]]
# # test = [2,4,6,3,5,9,1]
# # idx, vals = zip(*sorted([(i,v) for i,v in enumerate(test)], key=lambda x:x[1]))
# # print("Sort:", vals)
# # print("IDX:", idx)


print(list(zip(*matrix)))
# # print(map(list, zip(*matrix)))

# a = ['Ahmed', 'Fahad']

# # nums = list(map(int, input("Enter number: ").split(' ')))
# # # nums = [int(n) for n in nums]
# # # print(int('2'))
# # print(nums)


# def myFunc(elem):
#     return elem + '04'


# print(tuple(map(myFunc, a)))


# scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]
# over_75 = list(map(lambda x: x>75, scores)) # [90, 76, 88, 81]
# print(over_75)

print(hash(str('Fahads')==str('Fahad')))