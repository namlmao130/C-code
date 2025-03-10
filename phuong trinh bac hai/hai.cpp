#include <stdio.h>
#include <math.h>
 int main(){
double a,b,c,n;
scanf("%lf %lf %lf",&a,&b,&c);
n=(b*b-4*a*c);
if(n<0){
    printf ("NO");
}
else if(n==0){
    printf ("%.2lf",(-b/(a*2)));
}
else {
    printf ("%.2lf ",(-b+sqrt(n))/(2*a));
    printf ("%.2lf",(-b-sqrt(n))/(2*a));
}

}
