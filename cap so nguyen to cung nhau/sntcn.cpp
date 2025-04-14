#include <stdio.h>
min(int a,int b){
    return a<b ? a:b;
}
max(int a,int b){
    return a>b ? a:b;
}
uocchungmax (int a,int b){
     while (b!=0){
        int r=a%b;
        a=b;
        b=r;
     }
     return a;
}
main(){
    int a,b;
    scanf ("%d %d",&a,&b);
    for (int i=min(a,b);i<=max(a,b);i++){
            for (int j=i;j<=max(a,b);j++){
    if (uocchungmax(i,j)==1)
        printf ("(%d,%d)\n",min(i,j),max(i,j));
}
    }
}
