#include "stackFloat.h"

int isEmptyF(stackFloat S){
    return (Top(S)==Nil)?1:0;
}

void createStackF(stackFloat *S){
    Top(*S)=Nil;
}

addressF alokasiF(infotypeF X){
    addressF p;
    
    p=(addressF)malloc(sizeof(elmStackF));
    if(p!=Nil){
        Info(p)=X;
        Next(p)=Nil;
    }
    return p;
}

void dealokasiF(addressF P){
    free(P);
}

int findElmAddrsF(stackFloat S, addressF P){
    addressF Q;
    Q=Top(S);
    while(Q!=Nil&&Q!=P)
        Q=Next(Q);
    return (Q==P)?1:0;
}

void pushStackF(stackFloat *S, infotypeF X){
    addressF p;
    
    p=alokasiF(X);
    Next(p)=Top(*S);
    Top(*S)=p;
}

void popStackF(stackFloat *S, infotypeF *X){
    addressF p;
    
    if(!isEmptyF(*S)){
        p=Top(*S);
        Top(*S)=Next(p);
        *X=Info(p);
        dealokasiF(p);
    }else{
        printf("kesalahan : stackFloat kosong\n");
    }
}

void printAllInfoF(stackFloat S){
    addressF p;
    if(!isEmptyC(S)){
        p=Top(S);
        while(p!=Nil){
            printf("%.2f ",Info(p));
            p=Next(p);       
        }
        printf("\n");
    }else{
        printf("stackChar kosong\n");
    }
}

void deleteAllF(stackFloat *S){
    infotypeF x;
    while(!isEmptyF(*S)){
        popStackF(S,&x);
    }
}
