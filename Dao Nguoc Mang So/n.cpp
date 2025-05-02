#include <stdio.h>
int main(){
    int a[100],n,b[100];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
        b[i]=a[i];
    }
    for (int i=0;i<n;i++){
        b[i]=a[n-i-1];
        printf ("%d ",b[i]);
    }
    return 0;
}
