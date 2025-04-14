#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
        char s[100];
        gets (s);
        int chucai=0,chuso=0;
        for (int i=0;i<strlen(s);i++){
         if(isalpha(s[i])) ++chuso;
         else if(isdigit(s[i])) ++chucai;
}
printf ("%d %d %d",chuso,chucai,strlen(s)-chucai-chuso);
}

