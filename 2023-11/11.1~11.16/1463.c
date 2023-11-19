#include <stdio.h>
//https://www.acmicpc.net/problem/1463
//DP 실버3 1로만들기
int min( int a, int b){
    if ( a>b ){
        return b;
    }else{
        return a;
    }
}
int main(){

int D[1000001];
D[2] = 1;
D[3] = 1;

int n,i;
scanf("%d",&n);

for( i=4; i<=n; i++){
    D[i] = D[i-1] +1;

    if ( i%3 == 0 ){
        D[i] = min(D[i], D[i/3]+1);
    }
    if ( i%2 == 0 ){
        D[i] = min(D[i], D[i/2]+1);
    }
}

printf("%d",D[n]);
    return 0;
}