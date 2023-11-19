#include <stdio.h>

int sum(int *arr, int R){
    int sum = 0;
    for ( int i=1; i<=R; i++ ){
        sum += arr[i];
    }
    return sum;
}
int main(){

int arr[100][15];
for ( int i=1; i<=14; i++ ){
    arr[0][i] = i;
}

int testCase;
scanf("%d",&testCase);
for ( int t=0; t<testCase; t++ ){

int F;
scanf("%d",&F);
int R;
scanf("%d",&R);

for ( int f=1; f<=F; f++){
    for ( int r=1; r<=R; r++){
        arr[f][r] = sum(arr[f-1], r); //아래층 1~R호 합계
    }

}
printf("%d\n",arr[F][R]);
}

    return 0;
}