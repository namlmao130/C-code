#include <stdio.h>
main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    for (int i=hang;i>=1;i--){
        for(int j=1;j<=cot;j++){
            if (j<=cot-i) printf ("%c",63+j+i);
            else printf ("%c",63+cot+1);
        }
        printf ("\n");
    }
}
