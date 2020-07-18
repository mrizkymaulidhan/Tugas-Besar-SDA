#include "Library/Tree/bintree.h"
#include "Library/Stack/stackTree.h"

BinTree constructTree(infotypeTree postfix) { 
	stackTree st;
	BinTree t, t1, t2;
	infotypeF emptyDel;
	infotypeTree tempOpr, tempStr;
	int i=0, j, k;
 	
 	createStackF(&st);
 	
	while (i<strlen(postfix)) 
	{ 
		if (!isOperator(postfix[i]) && postfix[i]!=' ') 
		{
			j=0;
			tempStr[j]=postfix[i];
			while(!isOperator(postfix[i+1]) && postfix[i+1]!=' '){
				tempStr[j+1]=postfix[i+1];
				j++;
				i++;	
			}
			newNode(&t, tempStr);
			for(k=0; k<strlen(tempStr); k++){
				tempStr[k]=' ';
			}
			pushStackF(&st, t);
		} 
		else if(postfix[i]!=' ')
		{ 
			tempOpr[0]=postfix[i];
			newNode(&t, tempOpr);
			
			t1 = Info(Top(st));
			popStackF(&st, emptyDel);
							 
			t2 = Info(Top(st));
			popStackF(&st, emptyDel);
			
			MakeTree(tempOpr, t2, t1, &t);
			
			pushStackF(&st, t); 
		} 
		i++;
	} 

	t = Info(Top(st)); 
	
	popStackF(&st, t); 

	return t; 
}

int main(){
    String input, tpostfix, temp;
    float hasil;
    int i, j=0, num;
    BinTree ex;
    
    scanf(" %s",input);
    Convert(input, tpostfix);
	printf("%s", tpostfix);
	printf("\n");
	printf("\n");
	
	ex = constructTree(tpostfix);
	PrintInfoTree(ex);
	printf("%.2f", evaluate(ex));
	
	return 0;
}
