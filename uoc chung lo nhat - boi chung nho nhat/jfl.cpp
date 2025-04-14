#include <stdio.h>
uocchungmax(long long a,long long b){
    while (b!=0){
        int r= a%b;
        a=b;
        b=r;
    }
    return a;
}
uocchungmax1(long long a,long long b){
if (b==0) return a;
return uocchungmax(b,a%b);
}
boichungmin(long long a,long long b){
    return a*b/uocchungmax(a,b);
}

int main(){
    long long a,b;
    scanf ("%lld %lld",&a,&b);
    printf ("%lld\n%lld",uocchungmax(a,b),boichungmin(a,b));
}
