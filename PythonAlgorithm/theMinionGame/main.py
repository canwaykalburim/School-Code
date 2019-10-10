Str = input()
stringLen = len(Str)

stuart = 0
kevin = 0

for i in range(stringLen):
    if Str[i] in ('A', 'E', 'I', 'O', 'U'):
        kevin += stringLen - i
    else:
        stuart += stringLen - i

if kevin > stuart:
    print('Kevin', kevin)
elif stuart > kevin:
    print('Stuart', stuart)
else:
    print('Draw')
