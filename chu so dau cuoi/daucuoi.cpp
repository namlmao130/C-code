#include <stdio.h>
main(){
    long long n,chusodau,chusocuoi;
    scanf("%lld",&n);
    chusocuoi=n%10;
    while(n!=0){
            chusodau=n%10;
        n/=10;
    }
    printf ("%lld %lld",chusodau,chusocuoi);
}
