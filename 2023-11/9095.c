#include <stdio.h>
int main(){

int T;
scanf("%d",&T);

int arr[11];
arr[0] = 1;
arr[1] = 1;
arr[2] = 2;
int max = 3; //지금까지 메모해놓은 인덱스+1

for ( int t=0; t<T; t++ ){

int n;
scanf("%d",&n);
for ( int i=max; i<=n; i++ ){
    arr[i] = arr[i-1] +arr[i-2] +arr[i-3];
}
printf("%d\n",arr[n]);

}
    return 0;
}