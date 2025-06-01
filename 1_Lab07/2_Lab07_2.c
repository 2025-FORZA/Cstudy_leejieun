n = int(input())
big = []

# 사람들의(몸무게, 키)를 입력받아 리스트에 저장
for i in range(n) :
    line = input()
    parts = line.split()
    weight = int(parts[0])
    height = int(parts[1])
    big.append((weight, height))

    # 등수 계산
    for i in range(n) :
        rank = 1  # 시작 등수는 1
        for j in range(n) :
            if big[j][0] > big[i][0] and big[j][1] > big[i][1]:
rank += 1  # 덩치가 더 큰 사람 수만큼 등수 밀림
print(rank, end = ' ')  # 줄 바꿈 없이 한 줄로 출력
