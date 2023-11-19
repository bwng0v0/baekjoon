#include <stdio.h>
int main(){

int testCase;
scanf("%d",&testCase);

int arr[42][2];
arr[0][0] = 1;
arr[0][1] = 0;
arr[1][0] = 0;
arr[1][1] = 1;
int save = 2;// 2부터 구해야한다는 뜻 ( 중복방지 )

for ( int t=0; t<testCase; t++ ){

int n;
scanf("%d",&n);//입력
for ( int i=save; i<=n; i++ ){
    arr[i][1] = arr[i-1][1] + arr[i-2][1];
    arr[i][0] = arr[i-1][0] + arr[i-2][0];
    save = i+1;
}

printf("%d %d\n",arr[n][0],arr[n][1]);//출력


}

    return 0;
}