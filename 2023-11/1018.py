#�ǹ�4 ü���� �ٽ� ĥ�ϱ� (���Ʈ����)
def reverse(is_black):
    if is_black:
        return 0
    else:
        return 1
    
N,M = map(int,input().split())
board = []
cnt = 0
for i in range(N):
    board.append(input())

if board[0][0] == 'B':
    is_black = 1
else:
    is_black = 0

for i in range(0,8):
    for j in range(1,8):
        #��ĭ�� ���̾��ٸ�
        if is_black == 1:
            #�̹�ĭ�� ���̶��
            if board[i][j] == 'B':
                cnt += 1
                is_black