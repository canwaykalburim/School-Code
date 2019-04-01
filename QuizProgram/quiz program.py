import random

class quiz:
    __dic = {
        "apple":"사과", "airplane":"비행기", "zoo":"동물원",
        "beauty":"미인", "handsome":"잘생긴", "monster":"괴물",
        "sun":"태양", "test":"연습, 실험", "level":"단계",
        "human":"사람", "rock":"바위", "love":"사랑",
        "lover":"연인", "classic":"오래된, 고전의", "mouse":"쥐"
    }
    __list = []

    def __init__(self):
        self.__list = []

        for x in self.__dic:
           self.__list.append(x)

    def printlist(self):
        return self.__list

    def insertword(self, word, detail):
        self.__dic[word] = detail

        self.__list = []

        for x in self.__dic:
            self.__list.append(x)

    def searchword(self, word):
        try:
            searchValue = self.__dic[word]
        except KeyError:
            return "NULL"
        else:
            return searchValue

    def choiceword(self):
        random.shuffle(self.__list)
        string = self.__list[0]
        strlist = []
        for x in string:
            strlist.append(x)
        random.shuffle(strlist)

        strshuffle = ""
        for x in strlist:
            strshuffle += x

        return [strshuffle, string, self.__dic[string]]

    def delword(self, word):
        del self.__dic[word]

        self.__list = []
        for x in self.__dic:
            self.__list.append(x)

game = quiz()

while 1:
    print("===== !Menu! =====")
    print("1. 시작")
    print("2. 삽입")
    print("3. 출력")
    print("4. 삭제")
    print("5. 종료")
    print("=====================")

    choi = input("≫ ")
    print (" ")

    if (choi == "1"):
        exam = game.choiceword()
        print("===== EXAM =====".center(20))
        print(exam[0].center(20))
        print("================".center(20))
        print(exam[2].center(20))
        print("================".center(20))
        tt = input("답 > ")

        print ("")

        if (tt == exam[1]):
            print ("정답\n")
        else:
            print ("오답\n")
    elif (choi == "2"):
        t1 = input("영 단어 : ")
        t2 = input("뜻 : ")

        if (game.searchword(t1) != "NULL"):
            print ("입력된 단어입니다.")
        else:
            print ("단어를 입력합니다.")
            game.insertword(t1, t2)
    elif (choi == "3"):
        print (game.printlist())
    elif (choi == "4"):
        tt = input("지울 단어 : ")

        if (game.searchword(tt) == "NULL"):
            print
            "지울 단어는 없습니다."
        else:
            print ("단어를 지웁니다.")
            game.delword(tt)

    elif (choi == "5"):
        print ("게임을 끝냅니다.")
        break;