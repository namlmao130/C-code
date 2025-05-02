#include <stdio.h>
int main(){
    int t;
    scanf ("%d",&t);
    while (t--){
    long long a[100],n;
    scanf ("%lld",&n);
    a[1]=1;
    a[2]=1;
    for (long long i=3;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
    }
    printf ("%lld",a[n]);
    printf ("\n");
}
return 0;
}
