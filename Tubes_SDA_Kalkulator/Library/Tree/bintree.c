/* File    : bintree.c 					*/
/* Desk    : Body primitif Binary Tree secara rekursif 	*/
/* Oleh    : ANI RAHMANI / 23501007			*/
/* Tgl	   : 21 / 11 / 2001	  			*/
/* Mod     : Mohammad Rizky Maulidhan */
/* Tgl Mod : 23 /06 / 2020 */

#include "bintree.h"

/* ****** MANAJEMEN MEMORY ******* */
addressTree AlokasiTree(infotypeTree X) {
   	addressTree P;

   	P=(addressTree)malloc(sizeof(ElmtNode));   
	if(P!=Nil) {
		strcpy(Info(P),X);
		Left(P)=Nil;
		Right(P)=Nil;	 
   	}
   	return P;
}

boolean IsEmptyTree(BinTree P) {
	return (P==Nil);
}

void CreateEmptyTree(BinTree *P) {
	*P = Nil;
}

BinTree GetLeft(BinTree P) { 
    return Left(P); 	
}

BinTree GetRight(BinTree P) {
    return Right(P);
}

void newNode(BinTree *P, infotypeTree X) {   
	*P=AlokasiTree(X);
	if(*P!=Nil) {
		strcpy(Info(*P),X);
	    Left(*P)=Right(*P)=Nil;
	} 
} 

void MakeTree(infotypeTree X, BinTree L, BinTree R, BinTree *P) {
	*P=AlokasiTree(X);
	if(*P!=Nil) {
		strcpy(Info(*P),X);
	   	Left(*P)=L;
		Right(*P)=R;	
	}
}

void Preorder(BinTree P) {	
	if(P !=Nil) {
		printf("%s ",Info(P));   
		Preorder(Left(P));
		Preorder(Right(P));
    }		   
}

void Inorder(BinTree P){
	if(P!=Nil) {
	     Inorder(Left(P));	
	     printf("%s ",Info(P));
	     Inorder(Right(P));
	}
}

void Postorder(BinTree P) { 
	if(P!=Nil) {
	    Postorder(Left(P));	
	    Postorder(Right(P));
	    printf("%s ",Info(P));
	}
}

void PrintInfoTree(BinTree P) {
	BinTree L, R, Px;
	
	if(P != Nil) {
		PrintInfoTree(Left(P)); 
		printf("Info Node\t: %s\n",Info(P));
		if(GetLeft(P)!=Nil) {
			L = GetLeft(P);
			printf("Left Son\t: %s\n",Info(L));
		}
		else {
			printf("Left Son\t: null\n");
		}
		if(GetRight(P)!=Nil) {
			R = GetRight(P);
			printf("Right Son\t: %s\n",Info(R));
		}
		else{
			printf("Right Son\t: null\n");
		}	
		printf("\n");  
		PrintInfoTree(Right(P));
	}
}

int Prior(char x) {
    switch(x) {
        case ')': return 0;
        case '(': return 0;
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case '/': return 2;
		case '^': return 3;    
    }
}

int Priority(char a, char b) {
    return (Prior(a)>=Prior(b));
}

void Convert(String infix, String postfix) {
    int i, index=0, size;
	char tmpchar;
    stackChar tmp;
    
    createStackC(&tmp);
    
    size=strlen(infix);
    for(i=0; i<size; i++) {
        switch(infix[i]) {
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
            case '^':
                postfix[index]=' ';
                index++;            
                if(isEmptyC(tmp)){
                    pushStackC(&tmp,infix[i]);
                }
				else if(!Priority(Info(Top(tmp)),infix[i])){
                    pushStackC(&tmp,infix[i]);
                }
				else{
                    while(!isEmptyC(tmp)&&Priority(Info(Top(tmp)),infix[i])){
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
    while(!isEmptyC(tmp)) {
        popStackC(&tmp,&tmpchar);
        postfix[index]=tmpchar;
        index++;                  
    }    
    postfix[index]='\0';
}


int toInt(String X) {
	return atoi(X);
} 

float evaluate(BinTree P) {
	int i;
	float tmp=1.0;
	  
    if (IsEmptyTree(P)) {
        return 0;  
	}
    else if (IsEmptyTree(Left(P)) && IsEmptyTree(Right(P))) {
        return toInt(Info(P));  
    }
  
    float left = evaluate(Left(P));  
    float right = evaluate(Right(P));  
    
    if(strcmp(Info(P),"+")==0){
		return left+right;
	}
	else if(strcmp(Info(P),"-")==0){
		return left-right;
	}
	else if(strcmp(Info(P),"*")==0){
		return left*right;
	}
	else if(strcmp(Info(P),"/")==0){
		return left/right;
	}
	for(i=0; i<right; i++){
		tmp *= left;
	}
	return tmp;
} 
