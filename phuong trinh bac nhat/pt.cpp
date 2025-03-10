#include <stdio.h>
main(){
    float a,b,x;
    scanf("%f %f",&a,&b);
    if(a!=0 && b!=0){
        printf("%.2f",x=-b/a);
    }
    else if(a==0 && b!=0){
        printf("Vo nghiem");
    }
    else {printf("Vo so nghiem");}
}
