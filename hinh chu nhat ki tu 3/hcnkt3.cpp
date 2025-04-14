#include <stdio.h>
main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    for (int i=1;i<=hang;i++){
        for(int j=1;j<=cot;j++){
            if (j<=cot-i+1) printf ("%c",63+i+j-1);
            else printf ("%c",63+cot);
        }
        printf ("\n");
    }
}
