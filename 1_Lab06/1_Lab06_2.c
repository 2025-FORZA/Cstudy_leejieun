position = []
string = input()
alphabet = 'abcdefghijklmnopqrstuvwxyz'
if len(string) <= 101 :
for i in alphabet :
if i in string :
position.append(str(string.find(i)))
else:
position.append('-1') #(-1)�׳� ����('-1')���ڷ� �Ǵ� #����Ʈ ������ ���� �ڷ����� ������


    print(' '.join(position))

