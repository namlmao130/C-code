#include <stdio.h>
int main(){
    int n;
    scanf ("%d",&n);
    if (n==0||n==1) printf ("1");
    while (n>=2){
    int A[100];
    A[0]=1;
    A[1]=1;
    for (int i=2;;i++){
        A[i]=A[i-1]+A[i-2];
        if (A[i]==n) {
            printf ("1");
            return 0;
        }
        else if(A[i]>n) {
            printf("0");
            return 0;
        }
    }
    }
    return 0;
}

