#include <stdio.h>

int main(){
    int a[101],t,n;
    scanf ("%d",&t);
    while (t--){
        scanf ("%d",&n);
        for (int i=1;i<=n;i++){
            scanf ("%d",&a[i]);
            if(a[i]%2==0) printf ("%d ",a[i]);
        }
        printf ("\n");
    }

}
