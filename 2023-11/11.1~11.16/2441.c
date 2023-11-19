#include <stdio.h>
//브론즈 2 별찍기-4
int main(){

int n;
scanf("%d",&n);
for ( int i=n; i>=1; i-- ){
    for( int j=0; j<(n-i); j++ ){
        printf(" ");
    }
    for( int j=0; j<i; j++ ){
        printf("*");
    }
    printf("\n");
}

    return 0;
}