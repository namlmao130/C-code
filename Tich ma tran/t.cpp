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
    int m,n,p;
    int a[100][100],b[100][100],c[100][100];
    scanf ("%d%d%d",&n,&m,&p);
    nhapmang(a,n,m);
    nhapmang(b,m,p);
    for (int i=0;i<n;i++){
        for (int j=0;j<p;j++){
                 c[i][j]=0;
            for (int t=0;t<m;t++){
            c[i][j]+=a[i][t]*b[t][j];
        }
     }
   }
  xuatmang(c,n,p);
    return 0;
}
