#include "stack.h"

int isEmpty(Stack S){
    return (Top(S)==Nil);
}

void createStack(Stack *S){
    Top(*S)=Nil;
}

address alokasi(infotype X){
    address p;
    
    p=(address)malloc(sizeof(elmStack));
    if(p!=Nil){
        Info(p)=X;
        Next(p)=Nil;
    }
    return p;
}

void dealokasi(address P){
    free(P);
}

int findElmAddrs(Stack S, address P){
    address Q;
    Q=Top(S);
    while(Q!=Nil&&Q!=P)
        Q=Next(Q);
    return (Q==P);
}

void pushStack(Stack *S, infotype X){
    address p;
    
    p=alokasi(X);
    Next(p)=Top(*S);
    Top(*S)=p;
}

void popStack(Stack *S, infotype *X){
    address p;
    
    if(!isEmpty(*S)){
        p=Top(*S);
        Top(*S)=Next(p);
        *X= Info(p);
        dealokasi(p);
    }else{
        printf("Stack is empty!\n");
    }
}

void printAllInfo(Stack S){
    address p;
    if(!isEmpty(S)){
        p=Top(S);
        while(p!=Nil){
            printf("%d ", Info(p));
            p=Next(p);       
        }
        printf("\n");
    }else{
        printf("Stack is empty!\n");
    }
}

void deleteAll(Stack *S){
    infotype x;
    while(!isEmpty(*S)){
        popStack(S,&x);
    }
}
