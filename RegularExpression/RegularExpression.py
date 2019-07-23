import re

data = "seo: 020211-1111111\npark: 030412-2222222\nlee: 591210-3333333"

pat = re.compile("(\d{6})[-](\d{7})")
print(pat.sub("\g<1>-*******", data))

# 주민등록 번호 뒷자리 *로 바꾸기