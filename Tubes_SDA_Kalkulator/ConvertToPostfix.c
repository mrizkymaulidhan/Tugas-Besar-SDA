#include "Library/Stack/stack.h"
#include "Library/Stack/stackFloat.h"
#include "Library/Stack/stackChar.h"

int prior(char x)
{
    switch(x)
    {
        case ')': return 0;
        case '(': return 0;
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
		case '^': return 3;    
    }
}

int prioritas(char a, char b){
    return (prior(a)>=prior(b));
}

char *konversi(char *infix){
    int i, index=0, panjang;
    char *postfix, tmpchar;
    stackChar tmp;
    
    createStackC(&tmp);
    postfix=(char*)malloc(sizeof(char)*100);
    
    panjang=strlen(infix);
    for(i=0; i<panjang; i++){
        switch(infix[i]){
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                postfix[index]=infix[i];
                index++;
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                postfix[index]=' ';
                index++;            
                if(isEmptyC(tmp)){
                    pushStackC(&tmp,infix[i]);
                }else if(!prioritas(Info(Top(tmp)),infix[i])){
                    pushStackC(&tmp,infix[i]);
                }else{
                    while(!isEmptyC(tmp)&&prioritas(Info(Top(tmp)),infix[i])){
                        popStackC(&tmp,&tmpchar);
                        postfix[index]=tmpchar;
                        index++;
                    }                
                    pushStackC(&tmp,infix[i]);
                }
                break;
            case ')':
                while(!isEmptyC(tmp)&&Info(Top(tmp))!='('){
                        popStackC(&tmp,&tmpchar);
                        postfix[index]=tmpchar;
                        index++;                    
                }
                popStackC(&tmp,&tmpchar);
                break;
            case '(':
                pushStackC(&tmp,infix[i]);
                break;
        }
        
    }
    while(!isEmptyC(tmp)){
            popStackC(&tmp,&tmpchar);
            postfix[index]=tmpchar;
            index++;                  
    }    
    postfix[index]='\0';
    return postfix;
}

int main(){
	char input[100];
    char *tpostfix;
    
    printf("Masukkan infix : ");
    scanf("%s",input);
    tpostfix=konversi(input);
    printf("notasi postfix : %s \n",tpostfix);
}
