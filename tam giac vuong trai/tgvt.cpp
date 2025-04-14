#include <stdio.h>
main(){
    int n;
    scanf ("%d",&n);
    for (int i=1;i<=n;i++){
        for (int t=1;t<=i;t++){
                printf ("*");
            }
        printf ("\n");
}
}
