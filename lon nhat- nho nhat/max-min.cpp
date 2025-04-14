#include <stdio.h>
int a[10000001];
void max(){
    int max=a[0];
    for (int i=0;i<=100000;i++){
    scanf ("%d",&a[i]);
    if(a[i]>max) {
            max=a[i];
    }
    if (a[i]==0) break;
    }
    printf ("%d",max);
    }

void min(){
    int min=a[0];
    for (int j=0;j<=100000;j++){
        scanf ("%d",&a[j]);
        if(min>a[j] && a[j]!=0) {min=a[j];}
        if (a[j]==0) break;
    }
    printf ("%d",min);
}

main(){
    max();
    printf ("\t");
    min();
}
