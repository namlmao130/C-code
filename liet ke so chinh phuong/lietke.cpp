#include <stdio.h>
#include <math.h>
 main() {
    long long a,b,d=0;
        scanf("%lld %lld",&a,&b);
        long long c1=sqrt(a),c2=sqrt(b);
        for (long long i=c1;i<=c2;i++){
         if(i*i>=a && i*i<=b){
          d++;
        }
        }
        printf("%lld",d);
         printf ("\n");
    for (long long i=c1;i<=c2;i++){
            if(i*i>=a && i*i<=b){
        printf("%lld\n",i*i);}
    }

    }
