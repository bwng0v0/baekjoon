#include <stdio.h>
int min( int arr[][3], int n ){
    int mini = arr[n][0];

    for ( int i=0; i<3; i++ ){
        if ( arr[n][i] < mini )
        mini = arr[n][i];
    }

    return mini;
}

int main(){

int N;
scanf("%d",&N);
int arr[N+1][3];

//집 입력
for( int i=0; i<N; i++ ){
scanf("%d %d %d",&arr[n][0], &arr[n][1], &arr[n][2]);
}

int sum = 0;
for ( int i=0; i<N; i++ ){
    
}

    return 0;
}