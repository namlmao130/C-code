#include <stdio.h>
#include <string.h>
int thuannghich(char s[]){
    int len=strlen(s);
    for (int i=0;i<len /2; i++) {
        if (s[i] != s[len - 1 - i]) return 0;
    }
    return 1;
}
int chan(char s[]){
    for (int i=0;i<strlen(s);i++){
        if(s[i]%2 !=0) return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf ("%d",&t);
    getchar( );
    while(t--){
        char s[501];
        gets(s);
        if(thuannghich(s) && chan(s)){
            printf ("YES\n");
        }

        else {printf ("NO\n");}
    }
    return 0;
}
