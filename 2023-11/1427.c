#include <stdio.h>
#include <string.h>
//실버5 소트인사이드
int main(){

char str[11];
scanf("%s",&str);
int len = strlen(str);
char tmp;

for( int i=0; i<len-1; i++ ){
    for ( int j=0; j<len-1; j++ ){
        if ( str[j] < str[j+1] ){
            tmp = str[j];
            str[j] = str[j+1];
            str[j+1] = tmp;
        }
    }
}

printf("%s",str);

    return 0;
}