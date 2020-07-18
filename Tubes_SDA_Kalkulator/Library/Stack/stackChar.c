#include "stackChar.h"

boolean isEmptyC(stackChar S){
    return (Top(S)==Nil);
}

void createStackC(stackChar *S){
    Top(*S)=Nil;
}

addressC alokasiC(infotypeC X){
    addressC p;
    
    p=(addressC)malloc(sizeof(elmStackC));
    if(p!=Nil){
        Info(p)=X;
        Next(p)=Nil;
    }
    return p;
}
void dealokasiC(addressC P){
    free(P);
}

boolean findElmAddrsC(stackChar S, addressC P){
    addressC Q;
    Q=Top(S);
    while(Q!=Nil&&Q!=P)
        Q=Next(Q);
    return (Q==P);
}

void pushStackC(stackChar *S, infotypeC X){
    addressC p;
    
    p=alokasiC(X);
    Next(p)=Top(*S);
    Top(*S)=p;
}

void popStackC(stackChar *S, infotypeC *X){
    addressC p;
    
    if(!isEmptyC(*S)){
        p=Top(*S);
        Top(*S)=Next(p);
        *X=Info(p);
        dealokasiC(p);
    }else{
        printf("kesalahan : stackChar kosong\n");
    }
}

void printAllInfoC(stackChar S){
    addressC p;
    if(!isEmptyC(S)){
        p=Top(S);
        while(p!=Nil){
            printf("%d ",Info(p));
            p=Next(p);       
        }
        printf("\n");
    }else{
        printf("kesalahan : stackChar kosong\n");
    }
}

void deleteAllC(stackChar *S){
    infotypeC x;
    while(!isEmptyC(*S)){
        popStackC(S,&x);
    }
}
