#include <stdio.h>
main(){
   int t;
    scanf ("%d",&t);
    while(t--){
            int dung=1;
        long long n;
        scanf ("%lld",&n);
        while(n!=0){
                int j=n%10;
                    n/=10;
                       int e=n%10;
        if (e>j){
                dung=0;
             printf ("NO\n"); break;
        }
        }
        if(dung){printf ("YES\n");}
    }
    return 0;
}
