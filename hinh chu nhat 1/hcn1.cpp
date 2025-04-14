#include <stdio.h>
main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    for (int i=1;i<=hang;i++){
        for (int t=i;t<=cot;t++){
                printf ("%d",t);
            }
            if( i<=cot){
        for (int j=i-1;j>=1;j--){
            printf ("%d",j);
        }
            }
        else{
            printf ("%d",i);
            for (int a=cot-1;a>=1;a--){
                printf ("%d",a);
            }
        }
        printf ("\n");
    }

    }
