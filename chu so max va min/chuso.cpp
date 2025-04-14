#include <stdio.h>
int s[101];
main(){
    int t;
    scanf ("%d",&t);
    while (t--){
        long long n;
        scanf ("%lld",&n);
        if(n>=10 && n<=1000000000000000000){
        long long m=n;
        int max=s[0];
        for (int i=0;i<=100;i++){
                while (n!=0){
            s[i]=n%10;
            if(max<s[i]){max=s[i];}
            n/=10;
                }
        }
        int min=s[0];
        for (int j=0;j<=100;j++){
            while (m!=0){
                s[j]=m%10;
                if(min>s[j]){min=s[j];}
                m/=10;
            }
        }
    printf ("%d %d",max,min);
    printf ("\n");
        }
}
}
