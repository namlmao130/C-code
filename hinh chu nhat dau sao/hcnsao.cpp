#include <stdio.h>
main(){
    int chieurong,chieucao;
    scanf("%d %d",&chieurong,&chieucao);
    for (int i=1;i<=chieucao;i++){
        for (int t=1;t<=chieurong;t++){
                if ((i==1 || i==chieucao) || (t==1 || t==chieurong)){
            printf ("*");
            }
        else{
            printf (" ");
        }
        }
        printf ("\n \n");
    }
}

