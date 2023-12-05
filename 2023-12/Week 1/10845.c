#include <stdio.h>
#include <string.h>
//https://www.acmicpc.net/problem/10845
//실버4 큐
void push( int arr[], int *f){
    int num;
    scanf("%d",&num);
    arr[(*f)] = num;
    *f += 1;
}

void pop(int arr[], int *f, int *b){
    if ( (*f) - (*b) > 0 ){
    printf("%d\n",arr[(*b)]);
    *b += 1;
    }else
    printf("-1\n");
}

void size(int *f, int *b){
    printf("%d\n",(*f) - (*b));
}

void empty(int *f, int *b){
    if ( (*f) - (*b) == 0 )
    printf("1\n");
    else
    printf("0\n");
}

void front( int arr[], int *f, int *b ){
    if ( (*f) - (*b) > 0 )
    printf("%d\n",arr[(*b)]);
    else
    printf("-1\n");
}

void back( int arr[], int *f, int *b ){
    if ( (*f) - (*b) > 0 )
    printf("%d\n",arr[(*f)-1]);
    else
    printf("-1\n");
}

int main(){

int arr[10000];
int f=0, b=0;
int N;
scanf("%d",&N);

char str[6];
for ( int i=0; i<N; i++ ){

    scanf("%s",&str);

    if ( strcmp(str,"push") == 0 )
    push(arr,&f);

    else if ( strcmp(str,"pop") == 0 )
    pop(arr,&f,&b);

    else if ( strcmp(str,"size") == 0 )
    size(&f,&b);

    else if ( strcmp(str,"empty") == 0 )
    empty(&f,&b);

    else if ( strcmp(str,"front") == 0 )
    front(arr,&f,&b);

    else if ( strcmp(str,"back") == 0 )
    back(arr,&f,&b);

}

    return 0;
}