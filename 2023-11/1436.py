# 실버5 영화감독 숌 (브루트포스)
N = int(input())

cnt = 0
number = 666
while cnt<=N-1: # 수정: 2일때 2666출력이어서 즉, 한 단계 앞에 수열을 출력해서 N-1로 한 순서 앞당김

    s = str(number) #숫자를 배열로 변환해서 확인(카운트 메소드 쓰기 위해서)
    for i in range(0,len(s)-2):
        if s[i]=='6' and s[i+1]=='6' and s[i+2]=='6':
            cnt += 1
            break
        
    number += 1

print(number-1)
# str도 카운트메소드 가능한데 .count('6') 매개변수를 문자열로
# 아니 카운트 말고 in이 진짜 개사기구나..