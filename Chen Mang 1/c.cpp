#include <stdio.h>
void nhapmang(int a[],int n){
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
}
int main(){
    int a[100],b[100],c[100],n,m;
    scanf ("%d%d",&n,&m);
    nhapmang(a,n);
    nhapmang(b,m);
    int vt;
    scanf ("%d",&vt);
    for (int i=0;i<vt;i++){
       printf ("%d ",a[i]);
    }
    for (int i=0;i<m;i++){
       printf ("%d ",b[i]);
    }
    for (int i=vt;i<n;i++){
        printf ("%d ",a[i]);
    }
    }

