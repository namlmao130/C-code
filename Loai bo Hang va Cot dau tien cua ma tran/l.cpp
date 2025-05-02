#include <stdio.h>
void nhapmang(int a[][100],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
}
}
}
void xuatmang(int a[][100],int m,int n){
    for (int i=1;i<m;i++){
        for (int j=1;j<n;j++)
        printf ("%d ",a[i][j]);
printf ("\n");
}
}
int main(){
    int t,dem=1;
    scanf ("%d",&t);
    while (t--){
    int m,n;
    int a[100][100];
    scanf ("%d%d",&m,&n);
    nhapmang(a,m,n);
    printf ("Test %d:",dem);
    printf ("\n");
    xuatmang(a,m,n);
    dem ++;
    }
    return 0;
}
