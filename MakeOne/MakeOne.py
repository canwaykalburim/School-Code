a = int(input())

cnt = 0
least = [a]

def cal(a):
    list = []
    for i in a:
        list.append(i - 1)
        if i % 5 == 0:
            list.append(i / 5)
        if i % 2 == 0:
            list.append(i / 2)
    return list

while True:
    if a == 1:
        print(cnt)
        break
    tmp = least[:]
    least = []
    least = cal(tmp)
    cnt += 1
    if min(least) == 1:
        print(cnt)
        break
