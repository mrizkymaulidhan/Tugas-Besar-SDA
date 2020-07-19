#include "kalkulator.h"

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

void kalkulatorMenu() {
	String input, postfix;
	BinTree ex;
	
	system("cls");
	system("MODE 46,10");
	puts("\t\t# KALKULATOR #\n");
	scanf(" %s",input);
	InfixToPostfix(input, postfix);
	printf("\n");
	ex = BuildExpressionTree(postfix);
	printf("= %.2f\n", CalculateTree(ex)); 
}

void fiturMenu(){	
	system("cls");
	puts("\t # BANGUN DATAR #\n");
	puts("1. Persegi Panjang");
	puts("2. Persegi");
	puts("3. Trapesium");
	puts("4. JajarGenjang");
	puts("5. Layang-Layang");
	puts("6. Belah Ketupat");
	puts("7. Segitiga");
	puts("8. Lingkaran");
	puts("Pilihan : ");
	switch(getch()) {	
	    case '1' :
	    	system("cls");
	    	HitungPersegiPanjang();
			break;
		case '2' :
			system("cls");
			HitungPersegi();
			break;
		case '3' : 
			system("cls");
			HitungTrapesium();
			break;
		case '4' :
			system("cls");
			HitungJajarGenjang(); 
			break;
		case '5' :
			system("cls");
			HitungLayangLayang();
			break;
		case '6' :
			system("cls"); 
			HitungBelahKetupat();
			break;
		case '7' :
			system("cls");
			HitungSegitiga();
			break;
		case '8' :
			system("cls"); 
			HitungLingkaran();
			break;
		default :
			puts("\nMasukkan pilihan sesuai nomor!");
	}
}

int mainMenu() {
	int i;
	
	while(i<=100) {
		system("MODE 34,19");
		puts("\tAPLIKASI KALULATOR\t");
		puts("\n\t    MAIN MENU\n");
		puts("1. Kalkulator");
		puts("2. Bangun Datar");
		puts("3. About");
		puts("4. Exit");
		puts("Pilihan : ");
		switch(getch()) {	
		    case '1' :
		    	kalkulatorMenu();
				break;
			case '2' : 
				fiturMenu();
				break;
			case '3' : 
				break;
			case '4' :
				return 0;
			default :
				puts("\nMasukkan pilihan sesuai nomor!");
		}
		printf("\n");
		system("PAUSE");
		system("cls");
	}
}
