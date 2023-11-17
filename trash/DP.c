#include <stdio.h>
int main(){

int n,cnt1=0,cnt2=0,cnt3=0;
scanf("%d",&n);
int num=1, n2=n, n3=n;
//역계산
while( n != num ){

if ( num*3 <= n ){
    num *= 3;
}else if ( num*2 <= n ){
    num *= 2;
}else{
    num += 1;
}
cnt1 += 1;
}
//3우선
while( n2 != 1 ){

if ( n2%3 == 0 ){
    n2 /= 3;
}else if ( n2%2 == 0 ){
    n2 /= 2;
}else{
    n2 -= 1;
}
cnt2 += 1;
}
//2우선
while( n3 != 1 ){

if ( n3%2 == 0 ){
    n3 /= 2;
}else if ( n3%3 == 0 ){
    n3 /= 3;
}else{
    n3 -= 1;
}
cnt3 += 1;
}

int min = cnt1;
if( min > cnt2 ){
    min = cnt2;
}
if ( min > cnt3 ){
    min = cnt3;
}

printf("%d",min);

    return 0;
}