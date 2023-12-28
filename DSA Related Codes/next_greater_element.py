arr = list(map(int, input().split(' , ')))

for i in range(0, len(arr)):

    found = False
    for j in range(i+1, len(arr)):

        if arr[j] > arr[i]:
            print(arr[i], '=>', arr[j])
            found = True
            break

    if not found:
        print(arr[i], '=>', -1)
