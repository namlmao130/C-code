#include <stdio.h>
main(){
    int i=0;
    long long a;
    scanf("%lld",&a);
    while (a!=0){
            a/=10;
        i++;
    }
    printf ("%d",i);
}
