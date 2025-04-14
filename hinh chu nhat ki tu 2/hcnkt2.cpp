#include <stdio.h>
int min(int a,int b){
    return a<b ? a:b;
}
main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    for (int i=1;i<=hang;i++){
            int j=min(i,cot);
        for (int t=1;t<=cot;t++){
            if( t<=cot-i+1){
            printf ("%c",64+j+t-1);
            }
        else{
            if(cot<i) printf ("%c",64+j--);
            else printf ("%c",--j+64);
            }
        }
        printf ("\n");
    }

    }
