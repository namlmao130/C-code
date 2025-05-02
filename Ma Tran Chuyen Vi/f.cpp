#include <stdio.h>
void nhapmang(int a[][10],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
}
}
}
void chuyenvi(int a[][10],int m,int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
        printf ("%d ",a[j][i]);
printf ("\n");
}
}
int main(){
    int m,n;
    int a[10][10];
    scanf ("%d %d",&m,&n);
    nhapmang(a,m,n);
    chuyenvi(a,m,n);
    return 0;
}
