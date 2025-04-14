#include <stdio.h>
main(){
    int hang,cot;
    scanf ("%d %d",&hang,&cot);
    if (hang>=cot){
    for (int i=hang;i>=1;i--){
            int j=i;
        for (int t=1;t<=cot;t++){
            if (t<i) printf ("%d",j--);
            else printf ("%d",j++);
        }
        printf ("\n");
    }
}
  else {
    for (int i=1;i<=hang;i++){
            int j=cot-i+1;
        for (int t=1;t<=cot;t++){
             if (t<cot-i+1) printf ("%d",j--);
            else printf ("%d",j++);
        }
        printf ("\n");
}
}
}
