#include <stdio.h>
main(){
    int cao;
    scanf ("%d",&cao);
    for (int i=cao;i>=1;i--){
        for (int j=1;j<=cao;j++){
        if(j<=i) {printf ("%c",63+j+i-1);}
    }
    printf ("\n");
}
}
