#include <stdio.h>
#include <math.h>
int snt(int n) {
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++)
    if (n%i==0) return 0;
    return 1;
}
int main(){
    int a[101],t,n;
    scanf ("%d",&t);
    while (t--){
        scanf ("%d",&n);
        for (int i=1;i<=n;i++){
            scanf ("%d",&a[i]);
            if(snt(a[i])) printf ("%d ",a[i]);
        }
        printf ("\n");
    }

}

