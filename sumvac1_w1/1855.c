k = int(input())
char = input()

row_count = len(char) // k
table = []

for i in range(row_count) :
    start = i * k
    end = start + k
    row = char[start:end]


    if i % 2 == 0:
table.append(row)  # 왼 → 오
    else:
table.append(row[:: - 1])  # 오 → 왼

# 열 기준으로 출력(세로로 읽기)
for col in range(k) :
    for row in range(row_count) :
        print(table[row][col], end = '')