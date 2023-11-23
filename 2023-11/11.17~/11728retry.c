#include <stdio.h>
int main() {
    
int N,M;
scanf("%d %d",&N,&M);
int arr1[N], arr2[M], arr3[N+M]; //메모리 개선버전
for ( int i=0; i<N; i++ ){
    scanf("%d",&arr1[i]);
}
for ( int i=0; i<M; i++ ){
    scanf("%d",&arr2[i]);
}

//한쪽이 먼저끝났을때
int p1=0,p2=0;
for ( int i=0; p1+p2<N+M; i++){
    if ( arr1[p1] < arr2[p2] ){
        arr3[i] = arr1[p1];
        p1 += 1;
    }else{
        arr3[i] = arr2[p2];
        p2 += 1;
    }
    //한쪽이 먼저 끝났다면
    if ( p1 == N ){
        for ( int j=i+1; j<N+M; j++ ){
            arr3[j] = arr2[p2];
            p2 += 1;
        }
        break;
    }
    if ( p2 == M ){
        for ( int j=i+1; j<N+M; j++ ){
            arr3[j] = arr1[p1];
            p1 += 1;
        }
        break;
    }
}

for ( int i = 0; i<N+M; i++ ){
    printf("%d ",arr3[i]);
}

    return 0;
}
