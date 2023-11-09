#include <stdio.h>
void print_arr( int arr[][8], int N, int M ){
    // 왜 2차원 이상부터만 리터럴로 크기를 명시함??
    for ( int i=0; i<N; i++ ){
        for ( int j=0; j<M; j++ ){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
int main(){

int N,M;
scanf("%d %d",&N,&M);
int arr[N][M];

for ( int i=0; i<N; i++ ){
        for ( int j=0; j<M; j++ ){
            arr[i][j] = i*N+j+1;
        }
    }
    
print_arr(arr,N,M);

    return 0;
}