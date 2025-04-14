#include <stdio.h>
main(){
    long long n,tich,tong=0,n2;
    scanf ("%lld",&n);
    n2=n;
    for (;n!=0;){
        long long a=n%10;
            n/=10;
            tich=1;
    for (int i=1;i<=a;i++){

            tich*=i;
    }
    tong +=tich;
    }
        if(tong ==n2){
            printf ("1");
        }
        else {printf ("0");}
}
