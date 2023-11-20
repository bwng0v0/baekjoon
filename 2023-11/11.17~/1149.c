#include <stdio.h>
int min2( int a, int b){
    if ( a>b ){
        return b;
    }else
        return a;
}
int min3( int a, int b ,int c){
    if ( a<=b && a<=c )
    return a;
    if ( b<=a && b<=c )
    return b;
    if ( c<=a && c<=b )
    return c;
}
int main(){

int N;
scanf("%d",&N);
int arr[N+1][3];

//집 입력
for( int i=0; i<N; i++ ){ // 0~N-1
scanf("%d %d %d",&arr[i][0], &arr[i][1], &arr[i][2]);
}

for ( int i=1; i<N; i++ ){
    arr[i][0] += min2( arr[i-1][1], arr[i-1][2] );
    arr[i][1] += min2( arr[i-1][0], arr[i-1][2] );
    arr[i][2] += min2( arr[i-1][0], arr[i-1][1] );
}

printf("%d",min3(arr[N-1][0], arr[N-1][1], arr[N-1][2]));
    return 0;
}