#include <stdio.h>
int min(int a,int b){
if (a<b) return a;
return b;
}

main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    for (int i=1;i<=hang;i++){
            int j=i;
        for (int t=1;t<=cot;t++){
            if (t<=cot-i) printf ("%d",j++);
            else printf ("%d",j--);
        }
        printf ("\n");
    }
}
