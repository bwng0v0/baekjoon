#include <stdio.h>
//브론즈2 블랙잭 (브루트포스)
int main(){

int N,M;
scanf("%d %d",&N,&M);
int cards[N];
for (int i=0; i<N; i++){
    scanf("%d",&cards[i]);
}

int nearest = 2;
int num;
// 도대체 어떻게 정확히 nCr번 연산하는거지??
for ( int i=0; i<N; i++ ){
    for ( int j=i+1; j<N; j++ ){
        for ( int k=j+1; k<N; k++ ){

            num = cards[i] +cards[j] + cards[k];
            if ( (M-nearest > M-num )&&(M-num>=0) ){
                nearest = num;
            }

        }
    }
}

printf("%d",nearest);

    return 0;
}