#include <stdio.h>
#include <math.h>
main(){
    long long n;
    int t;
    scanf("%d",&t);
    while (t--){
        scanf("%lld",&n);
       long long tong=0;
    while(n!=0){
            tong+= n%10;
        n/=10;
    }
printf("%lld\n",tong);
    }
}
