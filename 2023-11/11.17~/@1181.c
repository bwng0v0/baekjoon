#include <stdio.h>
#include <string.h>
//시간초과 -> 정렬알고리즘 교체해야함

/* 포인터로 선언한 문자열만?
void str_swap(char **s1, char **s2) {
    char *tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}
*/
void str_swap(char *str1 , char *str2){
char temp[51];
strcpy( temp ,str1);
strcpy( str1 ,str2);
strcpy( str2 ,temp);
}
int main(){

char arr[20001][51];
int N;
scanf("%d",&N);
for ( int i=0; i<N; i++){
    scanf("%s",&arr[i]);
}

//정렬
for( int i=0; i<N; i++ ){
    for ( int j=0; j<N-1; j++){
        if( strlen(arr[j]) > strlen(arr[j+1]) ){
            str_swap( arr[j], arr[j+1] );
        }
        if( strlen(arr[j]) == strlen(arr[j+1]) ){
            if ( strcmp(arr[j],arr[j+1]) > 0 ) //큰수 - 작은수 = 양수 -> 앞문자열이 사전순으로 뒤
            str_swap( arr[j], arr[j+1] );
        }
    }
}

//중복제외 출력
for ( int i=0; i<N; i++){
    if ( strcmp(arr[i],arr[i+1]) == 0 )
    continue;
    printf("%s\n",arr[i]);
}
    return 0;
}