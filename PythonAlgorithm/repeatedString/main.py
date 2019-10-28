s = input()
n = int(input())

aCnt = s.count('a')

if aCnt == 1 and len(s) == 1:
    print(n)
else:
    rep = n // len(s)
    rem = n % len(s)
    s = s * rep + s[:rem]

print(aCnt * rep + s[:rem].count('a'))
