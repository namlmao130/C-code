#include <stdio.h>
#include <math.h>
int perfect(int n){
    int tong = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            tong+=i;
            if(i!=n/i){
                tong +=n/i;
            }
        }
    }
    if(tong==n && n!=1){
        return 1;
    }
    return 0;
}

int main(){
    int a;
    scanf ("%d",&a);
    for (int i=1;i<=a;i++){
        if(perfect(i)){
            printf("%d ",i);
        }
    }
    return 0;
}
