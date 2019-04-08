import re

txt = open('ocr.txt', 'r')
result = txt.read()

answer = ''

for i in result:
    if i.isalpha():
        answer += i

answer2 = re.findall("[A-Za-z]", result)

print(answer)
print(answer2)