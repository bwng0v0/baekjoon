//https://www.acmicpc.net/problem/1312
#include <stdio.h>
int main(){

int A,B,N;
scanf("%d %d %d",&A,&B,&N);

int cnt = 0;
int arr[N+1];


for (int i=0; i<=N; i++){
    int multiple_of_B = 0;
    int cnt = 0;
    for(int j=1; B*j<=A; j++){// 또 범위설정 실수?
        multiple_of_B = B*j;
        cnt += 1;
    }
    A -= multiple_of_B;
    arr[i] = cnt;
    A *= 10;
}


printf("%d",arr[N]);


    return 0;
}