n = int(input())
big = []

# �������(������, Ű)�� �Է¹޾� ����Ʈ�� ����
for i in range(n) :
    line = input()
    parts = line.split()
    weight = int(parts[0])
    height = int(parts[1])
    big.append((weight, height))

    # ��� ���
    for i in range(n) :
        rank = 1  # ���� ����� 1
        for j in range(n) :
            if big[j][0] > big[i][0] and big[j][1] > big[i][1]:
rank += 1  # ��ġ�� �� ū ��� ����ŭ ��� �и�
print(rank, end = ' ')  # �� �ٲ� ���� �� �ٷ� ���
