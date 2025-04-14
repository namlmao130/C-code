#include <stdio.h>
main(){
    int a,b=0,c;
    scanf("%d",&a);
    for (int i=1;i<a;i++){
        c = a%i;
        if (c==0){
              b+=i;
        }
    }
    if (a==b){
        printf ("1");
    }
    else {printf ("0");}
}
