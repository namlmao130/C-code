#include <stdio.h>
void nhapmang(int a[][100],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
}
}
}
void xuatmang(int a[][100],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
        printf ("%d ",a[i][j]);
printf ("\n");
}
}
int main(){
    int m,n,p,q;
    int a[100][100],b[100][100],c[100][100],d[100][100],e[100][100];
    scanf ("%d%d%d%d",&m,&n,&p,&q);
    nhapmang(a,m,n);
    nhapmang(b,n,p);
    nhapmang(c,p,q);
    for (int i=0;i<m;i++){
        for (int j=0;j<p;j++){
            d[i][j]=0;
            for (int t=0;t<n;t++){
               d[i][j]+=a[i][t]*b[t][j];
            }
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<q;j++){
                e[i][j]=0;
            for (int t=0;t<p;t++){
                e[i][j]+=d[i][t]*c[t][j];
            }
        }
    }
    xuatmang(e,m,q);
    return 0;
}
