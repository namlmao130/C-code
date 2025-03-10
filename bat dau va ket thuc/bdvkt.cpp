#include <stdio.h>
main(){
   int t;
   scanf("%d",&t);
   while(t--){
    long long n;
    scanf("%lld",&n);
   long long chusocuoicung=n%10;
    while (n>10){
        n/=10;
    }
    if(n==chusocuoicung){
        printf("YES\n");
    }
else{printf("NO\n");}

   }
   return 0;
}
