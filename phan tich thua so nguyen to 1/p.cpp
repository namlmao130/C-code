#include <stdio.h>
#include <math.h>
 main() {
    long long t;
    scanf("%lld", &t);
    while (t--) {
        long long n;
        scanf("%lld",&n);
        long long x=sqrt(n);
                for (long long i=2;i<=x;i++) {
            while (n%i==0) {
                printf("%lld",i);
                printf (" ");
                n/=i;
            }
        }
        if (n!=1) {
            printf("%lld",n);
        }
        printf ("\n");
    }
}
