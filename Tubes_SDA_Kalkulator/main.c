#include "Library/Tree/bintree.h"
#include "Library/Stack/stackTree.h"

BinTree BuildExpressionTree(infotypeTree postfix) {
	/* Membuat sebuah Expression Tree dari ekspresi postfix.	*/
	/* I.S   : postfix terdefinisi.								*/
	/* F.S   : Expression Tree dikembalikan.					*/
	
	int i=0, j, k; 
	stackTree StackT;
	BinTree ExpTree, Right, Left;
	infotypeStackTree emptyDel;
	infotypeTree tempOpr, tempStr;
 	
 	createStackTree(&StackT);
 	
	while (i<strlen(postfix)) { 
		if (!isOperator(postfix[i]) && postfix[i]!=' ') {
			j=0;
			tempStr[j]=postfix[i];
			while(!isOperator(postfix[i+1]) && postfix[i+1]!=' ') {
				tempStr[j+1]=postfix[i+1];
				j++;
				i++;	
			}
			newNodeTree(&ExpTree, tempStr);
			for(k=0; k<strlen(tempStr); k++) {
				tempStr[k]=' ';
			}
			pushStackTree(&StackT, ExpTree);
		} 
		else if(postfix[i]!=' ') { 
			tempOpr[0]=postfix[i];
			newNodeTree(&ExpTree, tempOpr);
		
			Right = Info(Top(StackT));
			popStackTree(&StackT, &emptyDel);
							 
			Left = Info(Top(StackT));
			popStackTree(&StackT, &emptyDel);
			
			MakeTree(tempOpr, Left, Right, &ExpTree);
			
			pushStackTree(&StackT, ExpTree); 
		} 
		i++;
	} 
	ExpTree = Info(Top(StackT)); 
	popStackTree(&StackT, &ExpTree); 
	return ExpTree; 
}

int main() {
    String input, postfix;
    BinTree ex;
    
    system("MODE 80,20");
    scanf(" %s",input);
    InfixToPostfix(input, postfix);
//	printf("%s", postfix);
	printf("\n");
	printf("\n");
	ex = BuildExpressionTree(postfix);
//	PrintInfoTree(ex);
	printf("%.2f", CalculateTree(ex));
	
	return 0;
}
