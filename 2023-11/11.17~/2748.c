#include <stdio.h>
#include <stdint.h>
int main(){

int n;
scanf("%d",&n);

uint64_t arr[n+1];
arr[0] = 0;
arr[1] = 1;
for ( int i=2; i<=n; i++ ){
    arr[i] = arr[i-1] +arr[i-2];
}
printf("%lu",arr[n]);
    return 0;
}