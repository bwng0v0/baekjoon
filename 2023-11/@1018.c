//실버4 체스판 다시 칠하기 (브루트포스)
#include <stdio.h>
int get_wrong(char *bd, int x, int y){

}

int main(){

int N,M,smallest=33,wrong;
scanf("%d %d",&N,&M);
char bd[N+1][M+1]; //문자열은 널문자 자리도
for (int i=0; i<N; i++){
    scanf("%s",&bd[i]);
}

for ( int i=0; i<=N-8; i++ ){
    for ( int j=0; j<=M-8; j++ ){

        wrong = get_wrong(bd,i,j);
        if ( wrong < smallest ){
            smallest = wrong;
        }

    }
}

printf("%d",smallest);

    return 0;
}