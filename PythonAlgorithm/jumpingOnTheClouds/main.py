n = int(input().strip())
c = [int(tmp) for tmp in input().strip().split(' ')]

cnt = 0
end = n - 1
jump = 0

while cnt < end:
  if ((cnt + 2) <= end) and (c[cnt + 2] == 0):
    cnt = cnt + 2
    jump = jump + 1
  elif (c[cnt + 1] == 0):
    cnt = cnt + 1
    jump = jump + 1

print(jump)