import requests
from bs4 import BeautifulSoup

print('-----Mode-----\n1. Translation\n2. English\n3. Korean\n')

chNum = int(input('select mode: '))
scpNum = input('select scp number: ')

if(chNum == 1):
    req = requests.get('http://ko.scp-wiki.net/scp-' + scpNum)
elif(chNum == 2):
    req = requests.get('http://scp-wiki.net/scp-' + scpNum)
elif(chNum == 3):
    req = requests.get('http://ko.scp-wiki.net/scp-' + scpNum + '-ko')
else:
    req = requests.get('http://ko.scp-wiki.net/scp-' + scpNum)

html = req.text
soup = BeautifulSoup(html, 'html.parser')
my_titles = soup.select('#page-content p')

for title in my_titles:
    print(title.text)
