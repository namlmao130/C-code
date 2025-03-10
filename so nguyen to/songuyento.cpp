#include <stdio.h>
#include <math.h>
int main(){
    int x;
    scanf("%d",&x);
    while(x--){
    long long t;
    scanf("%lld", &t);
    if(t<2){printf("NO\n");}
    else{
            int mark=1;
        for(long long i=2;i<=sqrt(t);i++){
            if(t%i==0){
                mark=0;
                break;
            }
        }
    if(mark == 1) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
    }
}

}
