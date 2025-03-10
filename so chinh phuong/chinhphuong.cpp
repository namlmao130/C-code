#include <stdio.h>
#include <math.h>
main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,can;
        scanf("%d",&n);
        can=sqrt(n);
        if (can*can==n){
            printf ("YES\n");
        }
        else {printf ("NO\n");}
    }
}
