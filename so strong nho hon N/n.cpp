#include <stdio.h>
int strong(long long n){
    long long tich,tong=0,n2;
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
            return 1;
        }
      return 0;
}
int main(){
    long long n;
    scanf ("%lld",&n);
    for (int i=1;i<=n;i++){
        if(strong(i))
        printf ("%d ",i);
    }
}
