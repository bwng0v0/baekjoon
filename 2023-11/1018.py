#실버4 체스판 다시 칠하기 (브루트포스)
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
        #앞칸이 블랙이었다면
        if is_black == 1:
            #이번칸도 블랙이라면
            if board[i][j] == 'B':
                cnt += 1
                is_black