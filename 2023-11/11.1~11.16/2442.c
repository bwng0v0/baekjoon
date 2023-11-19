#include <stdio.h>
int main(){

int n;
scanf("%d",&n);
int star =  1;
int air = n-1;
int i,j;
for ( i=0; i<n; i++ ){
    for ( j=0; j<air; j++ ){
        printf(" ");
    }
    for ( j=0; j<star; j++ ){
        printf("*");
    }
    printf("\n");
    star += 2;
    air -= 1;
}

    return 0;
}