position = []
string = input()
alphabet = 'abcdefghijklmnopqrstuvwxyz'
if len(string) <= 101 :
for i in alphabet :
if i in string :
position.append(str(string.find(i)))
else:
position.append('-1') #(-1)그냥 정수('-1')문자로 판단 #리스트 내에는 동일 자료형이 들어가야함


    print(' '.join(position))

