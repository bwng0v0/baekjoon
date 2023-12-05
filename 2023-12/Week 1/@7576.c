#include <stdio.h>
//38% 시간초과;;
// 내 코드는 하루마다 모든 칸을 다 확인함
// 때문에 시간초과를 해결하려면 BFS가 요구됨
// 근데 BFS전에 큐,링크드 리스트 등의 자료구조를 알아야함

//https://www.acmicpc.net/problem/7576
//골드5 토마토
int main(){

int N,M;
scanf("%d %d",&M,&N);
int arr[N][M];
for ( int i=0; i<N; i++ ){
    for ( int j=0; j<M; j++ ){
        scanf("%d",&arr[i][j]);
    }
}


//일단 익히는 기능 구현

int change_cnt = 0; //하루동안 익혀진 토마토 카운트 ( 변경이없다면 다익었거나 다못익히던가니까 )
int day_cnt = 0;


while ( 1 ){

change_cnt = 0;

for ( int i=0; i<N; i++ ){
    for ( int j=0; j<M; j++ ){
        if (  arr[i][j] == 2 )
            arr[i][j] = 1;
    }
}

for ( int i=0; i<N; i++ ){
    for ( int j=0; j<M; j++ ){
        
        if (  arr[i][j] == 1 ){
        int left = j-1;
        if (left >= 0 && arr[i][left] != -1 && arr[i][left] != 2 && arr[i][left] != 1){//왜 1을 2로 만드냐
        arr[i][left] = 2;
        change_cnt += 1;
        }

        int right = j+1;
        if (right <= M-1 && arr[i][right] != -1 && arr[i][right] != 2 && arr[i][right] != 1){
        arr[i][right] = 2;
        change_cnt += 1;
        }

        int up = i-1;
        if (up >= 0 && arr[up][j] != -1 && arr[up][j] != 2 && arr[up][j] != 1){
        arr[up][j] = 2;
        change_cnt += 1;
        }

        int down = i+1;
        if (down <= N-1 && arr[down][j] != -1 && arr[down][j] != 2 && arr[down][j] != 1){
        arr[down][j] = 2;
        change_cnt += 1;
        }

        }
    }
}

if ( change_cnt == 0 )
break;

day_cnt += 1;

}

//모두 이미 익었다면 <- 얘는 따로구현 안해도될듯 익을게 없으면 카운트가 0이니까

//모두 익지 못한다면 = 0이 있는데 불가능이라면
//-1출력

//익을때까지의 날짜


int zero_cnt = 0;
for ( int i=0; i<N; i++ ){
    for ( int j=0; j<M; j++ ){
        if ( arr[i][j] == 0 ){
        zero_cnt = 1;
        break;
        }
    }
}

if( zero_cnt == 0 ){
    printf("%d",day_cnt);
}else{
    printf("%d",-1);
    //왜 "-1"하면 프로그램이 안멈추냐
}

    return 0;
}