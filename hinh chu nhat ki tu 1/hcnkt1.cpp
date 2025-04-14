#include <stdio.h>
int max(int a,int b){
    return a>b ? a:b;
}
main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    for (int i=1;i<=hang;i++){
            int t=max(hang,cot);
        for (int j=1;j<=cot;j++){
            if (j<i) printf ("%c",96+t--);
            else printf ("%c",96+t);
            }
    printf ("\n");
        }
    }

