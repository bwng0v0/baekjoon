#include <stdio.h>
int main(){

int n;
scanf("%d",&n);

int arr[1001];
arr[0] = 1;
arr[1] = 1;

for ( int i=2; i<=n; i++ ){
    arr[i] = arr[i-1] +arr[i-2];
    arr[i] %= 10007;
}
printf("%d",arr[n]);

/*
1 1
2 2
3 3
4 5
5 8
6 13
*/

    return 0;
}