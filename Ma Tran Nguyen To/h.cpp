#include <stdio.h>
#include <math.h>
int snt(int n) {
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++)
    if (n%i==0) return 0;
    return 1;
}
void nhapmatran(int a[][100],int hang,int cot){
    for (int i=0;i<hang;i++){
        for (int j=0;j<cot;j++){
            scanf ("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][100],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }
}
int main(){
    int a[100][100];
    int m,n;
    scanf ("%d%d",&m,&n);
    nhapmatran(a,m,n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if(snt(a[i][j])) a[i][j]=1;
            else a[i][j]=0;
        }
    }
    xuatmang(a,m,n);
    return 0;
}
