#include <math.h>
#include <stdio.h>
int lietkesnt(int n){
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
        return n>=2;
}
int main(){
    int t,n=0,i=0;
    scanf ("%d",&t);
    while (n<t){
        if(lietkesnt(i)) {printf ("%d\n",i);
        ++n;
    }
     i++;
    }
}
