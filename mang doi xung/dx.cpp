#include <stdio.h>
int doixung(int n,int a[100],int b[100]){
    for (int i=0;i<n;i++)
        if (a[i]!=b[i])
            return 0;
    return 1;
}
void kiemtra(){
    int n;
    scanf("%d",&n);
    int a[100],b[100];
    for (int i=0,j=n-1;i<n,j>=0;i++,j--){
        scanf("%lld",&a[i]);
        b[j]=a[i];
    }
    if (doixung(n,a,b)==1)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
        kiemtra();
    return 0;
}
