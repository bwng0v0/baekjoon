#include <stdio.h>
#include <stdlib.h>
int main(){

int N,M,i;
scanf("%d %d",&N,&M);

long long int *arr1 = (long long int *)malloc((N + 1) * sizeof(long long int));
long long int *arr2 = (long long int *)malloc((M + 1) * sizeof(long long int));
long long int *res = (long long int *)malloc((N + M) * sizeof(long long int));


for ( i=0; i<N; i++){
    scanf("%lld",&arr1[i]);
}
for ( i=0; i<M; i++){
    scanf("%lld",&arr2[i]);
}

//문제1: 한쪽이 먼저 다떨어지면 0이랑 비교함
//해결1: 인덱스N,M에 범위 최대값 저장
arr1[N] = 10000000000;
arr2[M] = 10000000000;
int p1=0,p2=0;

for ( i=0; i<N+M; i++){
    if ( arr1[p1] < arr2[p2] ){
        res[i] = arr1[p1];
        p1 += 1;
    }else{
        res[i] = arr2[p2];
        p2 += 1;
    }
}

for ( i=0; i<N+M; i++ ){
    printf("%lld ",res[i]);
}

free(arr1);
free(arr2);
free(res);

    return 0;
}