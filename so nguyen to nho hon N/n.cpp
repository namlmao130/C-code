#include <math.h>
#include <stdio.h>

int snt[1000001];
void lietkesnt(){
    for (int i=0;i<=1000000;i++)
        snt[i]=1;
        snt[0]=snt[1]=0;
        for (int i=2;i<=1000;i++){
            if(snt[i]){
                for (int j=i*i;j<=1000000; j+=i){
                snt[j]=0;
            }
        }
    }
}
int main(){
    lietkesnt();
    int n;
    scanf ("%d",&n);
    for (int i=0;i<=n;i++){
        if(snt[i]) printf ("%d\n",i);
    }
}
