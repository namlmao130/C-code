#include <stdio.h>

int main(){
    int t;
    scanf ("%d",&t);
    for(int test=1;test<=t;test++){
    int n;
    scanf("%d", &n);
    int a[n];
    int b[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    printf ("Test %d:\n",test);
    for (int i=0; i<n;i++)
        if (b[a[i]] >= 1)
        {
            printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
            b[a[i]] = 0;
        }
    }
    return 0;
}
