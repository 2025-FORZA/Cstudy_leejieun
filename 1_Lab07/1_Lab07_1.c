
# �Է� �ޱ�
n = int(input())

# �� ��ġ�� ������ ��ųʸ�
position = {}

# ���� �ǳ� Ƚ��
cross_count = 0

# ���� ���� ó��
for i in range(n) :
    # �� ��ȣ�� ��ġ�� ���ڿ��� �Է¹ޱ�
    line = input()
    parts = line.split()  # ��: "3 0" ��["3", "0"]
    cow = int(parts[0])
    pos = int(parts[1])


    if cow not in position : #ó������ ��

        position[cow] = pos

        elif position[cow] != pos: # ���� ��ġ�� �ٸ� ���
        cross_count += 1
        position[cow] = pos

        # ��� ���
        print(cross_count)