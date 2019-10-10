from collections import defaultdict

n = int(input().strip())
ar = map(int, input().strip().split(' '))

d = defaultdict(int)

for i in ar:
    d[i] += 1

cnt = 0

for k in d.values():
    cnt += k // 2

print(cnt)
