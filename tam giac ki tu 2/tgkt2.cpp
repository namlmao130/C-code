#include <stdio.h>
main(){
    int cao;
    scanf ("%d",&cao);
    for (int i=1;i<=cao;i++){
            printf ("%c",63+i*2);
        for (int j=1;j<=cao;j++){
        if(j<=cao-i) {printf ("%c",63+j*2+i*2);}

    }
    printf ("\n");
}
}

