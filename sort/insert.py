l_test = [11, 15, 9, 5, 2, 4, 6, 1, 3]

j = 0
k = len(l_test)
while j < k:
    key = l_test[j]
    i = j - 1
    while i >= 0 and l_test[i] > key:
        l_test[i + 1] = l_test[i]
        i = i - 1
    l_test[i + 1] = key
    j += 1

print(l_test)
