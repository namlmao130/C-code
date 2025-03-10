#include <stdio.h>
#include <math.h>
main(){
    int a;
    scanf("%d",&a);
    int nam=a/365;
    a%=365;
    int tuan=a/7;
    a%=7;
    printf("%d %d %d",nam,tuan,a);
}
