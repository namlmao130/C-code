#include <stdio.h>
main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    for (int i=1;i<=hang;i++){
            int j=i;
        for (int t=1;t<=cot;t++){
            if (t<i) printf ("%d",j--);
            else printf ("%d",j++);
        }
        printf ("\n");
    }
    return 0;
}
