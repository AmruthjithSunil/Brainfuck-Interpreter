#include<stdio.h>

int a[100];                         //Memory of the program
int MemoryIndex = 0;                //Index of the Memory
char s[100];                        //to store the input string

void main(){
    int StringValid();
    void Compile();
    printf("BrainFuck 0.0.1\nType \"exit\" or \"quit\" to terminate.\nType \"help\", \"copyright\", \"credits\" or \"license\" for more information.\n");
    do {
        printf("fuck ~ ");
        scanf("%s",s);
        Compile();
    }while(StringValid());
}

//to check the input string is valid or not
int StringValid(){
    for(int i = 0; s[i]!='\0'; i++){
        if(s[i]!='[' && s[i]!=']' && s[i]!='<' && s[i]!='>' && s[i]!='.' && s[i]!=',' && s[i]!='+' && s[i]!='-')
            return 0;
    }
    return 1;
}

//to compile the input string
void Compile(){
    for(int i = 0; s[i]!='\0'; i++){

    }
}