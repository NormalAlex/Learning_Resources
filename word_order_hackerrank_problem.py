x = int(input())
d = {}
for i in range(x):
    s = input()
    if s not in d.keys():
        d[s] = 1
    else:
        d[s] += 1
l = d.keys()
print(len(l))
for i in l:
    print(d[i], end = " ")
