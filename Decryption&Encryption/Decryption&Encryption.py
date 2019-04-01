print("암호화 할 평문을 입력하세요: ")
secret = input()
secret1 = ""

print("변경할 만큼의 숫자를 입력하세요: ")
k = int(input())

for add in secret:
    s = ord(add)
    s = s + k
    plus = chr(s)
    secret1 += plus
print("암호화 된 문자: " + secret1)

secret1 = ""

for add in secret1:
    s = ord(add)
    s = s - k
    plus = chr(s)
    secret += plus
print("복호화 된 문자: " + secret)
