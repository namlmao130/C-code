#include <stdio.h>
void nhapmang(int a[],int n){
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
}
int main(){
    int a[100],b[100],n,m,t,p;
    scanf ("%d",&t);
    for (int test=1;test<=t;test++){
    scanf ("%d%d%d",&n,&m,&p);
    nhapmang(a,n);
    nhapmang(b,m);
    printf ("Test %d:\n",test);
    for (int i=0;i<p;i++){
       printf ("%d ",a[i]);
    }
    for (int i=0;i<m;i++){
       printf ("%d ",b[i]);
    }
    for (int i=p;i<n;i++){
        printf ("%d ",a[i]);
    }
    printf ("\n");
    }
}

