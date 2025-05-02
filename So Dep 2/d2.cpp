#include <stdio.h>
#include <string.h>
int thuannghich(char s[]){
    int len=strlen(s);
    for (int i=0;i<len /2; i++) {
        if (s[i] != s[len - 1 - i]) return 0;
    }
    return 1;
}
int chiahetcho10(char s[]){
    int sum=0;
    for (int i=0;i<strlen(s);i++){
        sum+=s[i]-'0';
    }
    if(sum%10==0) return 1;
    else return 0;
}
int daucuoi(char s[]){
    if(s[0]=='8' && s[strlen(s)-1]=='8'){ return 1;
    }
    return 0;
}
int main(){
    int t;
    scanf ("%d",&t);
    getchar( );
    while(t--){
        char s[501];
        gets(s);
        if(thuannghich(s) && chiahetcho10(s) && daucuoi(s)){
            printf ("YES\n");
        }

        else {printf ("NO\n");}
    }
    return 0;
}
