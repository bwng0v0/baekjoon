#include <stdio.h>
//실버5 메시지
//구조체 사용 풀이
int main(){

int n;
while (1){

scanf("%d",&n);
if ( n==0 ){
    break;
}

char name[n][61][n];
char paper[n][n];
//입력
for ( int i=0; i<n; i++ ){
    scanf("%s",&name[i]);
    for ( int j=0; j<n-1; j++ ){
        scanf("%s",paper[i][j]); //!!!!!!!!!! 입력을 어케받냐
        }
}

int was_print = 0;
for ( int i=0; i<n; i++ ){
    for (int j=0; j<n-1; j++){
        if ( paper[i][j] == 'N' ){
            printf("%s was nasty about %s",name[i-(j+1)<0 ? n-(j+1) : i-(j+1) ],name[i]);
        }
    }
}
if ( was_print = 0 ){
    printf("Nobody was nasty");
}


}

    return 0;
}