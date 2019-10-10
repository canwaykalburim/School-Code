n = int(input())
s = input()

strLen = len(s)
cnt = 0
rst = 0

for i in range(strLen):
    pCnt = cnt
    if s[i] == 'U':
        cnt += 1
    else:
        cnt -= 1
    if cnt == 0 and pCnt < 0:
        rst += 1

print(rst)
