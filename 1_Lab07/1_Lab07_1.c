
# 입력 받기
n = int(input())

# 소 위치를 저장할 딕셔너리
position = {}

# 길을 건넌 횟수
cross_count = 0

# 관찰 정보 처리
for i in range(n) :
    # 소 번호와 위치를 문자열로 입력받기
    line = input()
    parts = line.split()  # 예: "3 0" →["3", "0"]
    cow = int(parts[0])
    pos = int(parts[1])


    if cow not in position : #처음보는 소

        position[cow] = pos

        elif position[cow] != pos: # 이전 위치와 다를 경우
        cross_count += 1
        position[cow] = pos

        # 결과 출력
        print(cross_count)