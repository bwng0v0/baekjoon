#�����2 ������ (���Ʈ����)
def is_cr(num,N):
    # ����� N�� ���������� Ȯ���ϴ� �Լ�
    summ = num +sum(list(map(int,str(num))))
    if  summ== N:
        return 1
    else:
        return 0
    
N = int(input())

num = N
min_creator = N+1

# N~1���� �������鼭 Ž��
while num>0:
    if is_cr(num,N):
        min_creator = num
    num -= 1
if min_creator > N:
    print(0)
else:
    print(min_creator)