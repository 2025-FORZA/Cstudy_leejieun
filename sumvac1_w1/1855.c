k = int(input())
char = input()

row_count = len(char) // k
table = []

for i in range(row_count) :
    start = i * k
    end = start + k
    row = char[start:end]


    if i % 2 == 0:
table.append(row)  # �� �� ��
    else:
table.append(row[:: - 1])  # �� �� ��

# �� �������� ���(���η� �б�)
for col in range(k) :
    for row in range(row_count) :
        print(table[row][col], end = '')