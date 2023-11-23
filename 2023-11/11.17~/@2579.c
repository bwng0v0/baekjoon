#include <stdio.h>
//https://www.acmicpc.net/problem/2579
int main(){

int N;
scanf("%d",&N);

int arr[N+1];
for ( int n=0; n<N; n++ ){
scanf("%d",&arr[n]);
}
//입력 끝---------------

int sum = arr[N-1];
for ( int i=N-2; i>=0; i-- ){
    if ( arr[i] > arr[i-1] ){
        
    }
}


    return 0;
}