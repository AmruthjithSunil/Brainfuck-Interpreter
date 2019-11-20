#include<stdio.h>

int a[100];
char s[100];

void main(){
    int StringValid();
    do {
        printf("fuck ~ ");
        scanf("%s",s);
    }while(StringValid());
}

int StringValid(){
    for(int i = 0; s[i]!='\0'; i++){
        if(s[i]!='[' && s[i]!=']' && s[i]!='<' && s[i]!='>' && s[i]!='.' && s[i]!=',' && s[i]!='+' && s[i]!='-')
            return 0;
    }
    return 1;
}