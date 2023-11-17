#include <stdio.h>
//https://www.acmicpc.net/problem/1037
int main(){

int n;
scanf("%d",&n);
int arr[n];
for (int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}

int min = arr[0],max = arr[0];
for (int i=0; i<n; i++){
    if ( min > arr[i] ){
        min = arr[i];
    }
    if ( max < arr[i] ){
        max = arr[i];
    }
}
printf("%d",min*max);
    return 0;
}