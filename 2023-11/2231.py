#브론즈2 분해합 (브루트포스)
def is_cr(num,N):
    # 대상이 N의 생성자인지 확인하는 함수
    summ = num +sum(list(map(int,str(num))))
    if  summ== N:
        return 1
    else:
        return 0
    
N = int(input())

num = N
min_creator = N+1

# N~1까지 내려가면서 탐색
while num>0:
    if is_cr(num,N):
        min_creator = num
    num -= 1
if min_creator > N:
    print(0)
else:
    print(min_creator)