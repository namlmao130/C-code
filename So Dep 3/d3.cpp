#include <stdio.h>
#include <string.h>
#include <math.h>
int thuannghich(char s[]){
    int len=strlen(s);
    for (int i=0;i<len /2; i++) {
        if (s[i] != s[len - 1 - i]) return 0;
    }
    return 1;
}
int snt(char s[]){
    for (int i=0;i<strlen(s);i++){
        int so=s[i]-'0';
        if(so<2) return 0;
        for (int j=2;j< sqrt(so);j++){
            if(so%j==0) return 0;
            else return 1;
        }
    }
}
int main(){
    int t;
    scanf ("%d",&t);
    getchar( );
    while(t--){
        char s[501];
        gets(s);
        if(thuannghich(s) && snt(s)){
            printf ("YES\n");
        }

        else {printf ("NO\n");}
    }
    return 0;
}
