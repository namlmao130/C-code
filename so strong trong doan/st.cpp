#include <stdio.h>
int strong(long long n){
    long long tich,tong=0,n2;
    n2=n;
    while (n!=0){
        long long a=n%10;
            n/=10;
            tich=1;
    for (int i=1;i<=a;i++){

            tich*=i;
    }
    tong +=tich;
    }
        if(tong==n2)
            return 1;
        else
      return 0;
}
int main(){
    long long a,b;
    scanf ("%lld %lld",&a,&b);
    if (a>b){
        long long c=a;
        a=b;
        b=c;
    }
    for (int i=a;i<=b;i++){
        if(strong(i))
        printf ("%d ",i);
    }
    return 0;
}
