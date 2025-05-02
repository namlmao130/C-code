#include <stdio.h>
void xuatmang(int a[][100],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
        printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }
}
int main(){
    int n;
    scanf ("%d",&n);
    int a[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++) a[i][j]=0;
        int t=0;
        for (int j=i;j<n;j++)
        a[i][j]=t++;
    }
    xuatmang(a,n);
}
