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
		else if((postfix[i]=='-' && postfix[i-1]==' ' && postfix[i+1]!=' ' && postfix[i+2]!=' ' && !isOperator(postfix[i+2])) || 
				(postfix[i]=='-' && postfix[i-1]!=' ' && postfix[i+1]==' ') || 
				(postfix[i]=='-' && postfix[i-1]!=' ' && isOperator(postfix[i+1])) ||
				(postfix[i]=='-' && postfix[i-1]==' ' && postfix[i+1]==' ')) { 
			tempOpr[0]=postfix[i];
			newNodeTree(&ExpTree, tempOpr);
		
			Right = Info(Top(StackT));
			popStackTree(&StackT, &emptyDel);
							 
			newNodeTree(&Left, "0");
			
			MakeTree(tempOpr, Left, Right, &ExpTree);
			
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
	/* Menampilkan menu untuk kalkulator.			*/
	/* I.S   : Sembarang.							*/
	/* F.S   : Menu untuk kalkulator ditampilkan.	*/
	String input, postfix;
	BinTree ex;
	
	system("cls");
	puts("\t\t# KALKULATOR #\n");
	printf("PETUNJUK : ");
	printf("\n1. Gunakan '^' untuk melakukan operasi perpangkatan.");
	printf("\n2. Gunakan '*' atau 'x' untuk melakukan operasi perkalian.");
	printf("\n3. Gunakan ':' atau '/' untuk melakukan operasi pembagian.");
	printf("\n4. Gunakan '+' untuk melakukan operasi penjumlahan.");
	printf("\n5. Gunakan '-' untuk melakukan operasi pengurangan.");
	printf("\n6. Bisa menambahkan '( dan )' ke dalam operasi perhitungan.");
	printf("\n7. Bilangan yang berlaku adalah bilangan positif, negatif, dan desimal.");
	printf("\n\n");
	system("PAUSE");
	system("cls");
	printf("Lakukan perhitungan :\n\n"); scanf(" %s",input);
	InfixToPostfix(input, postfix);
	printf("\n");
	ex = BuildExpressionTree(postfix);
	printf("= %.2f\n", CalculateTree(ex)); 
}

void fiturDatarMenu(){	
	/* Menampilkan menu untuk bangun datar.			*/
	/* I.S   : Sembarang.							*/
	/* F.S   : Menu untuk bangun datar ditampilkan.	*/
	system("cls");
	puts("\n\t\t# BANGUN DATAR #");
	printf("\nBangun datar yang tersedia :\n");
	puts("1. Persegi Panjang");
	puts("2. Persegi");
	puts("3. Lingkaran");
	puts("4. Segitiga");
	puts("5. Trapesium");
	puts("6. JajarGenjang");
	puts("7. Layang-Layang");
	puts("8. Belah Ketupat");
	
	puts("\nMasukkan pilihan sesuai nomor : ");
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
			HitungLingkaran();
			break;
		case '4' :
			system("cls");
			HitungSegitiga();
			break;
		case '5' : 
			system("cls");
			HitungTrapesium();
			break;
		case '6' :
			system("cls");
			HitungJajarGenjang(); 
			break;
		case '7' :
			system("cls");
			HitungLayangLayang();
			break;
		case '8' :
			system("cls"); 
			HitungBelahKetupat();
			break;
		default :
			puts("\nMasukkan pilihan sesuai nomor!");
	}
}

void fiturRuangMenu(){	
	/* Menampilkan menu untuk bangun ruang.			*/
	/* I.S   : Sembarang.							*/
	/* F.S   : Menu untuk bangun ruang ditampilkan.	*/
	system("cls");
	puts("\n\t\t# BANGUN RUANG #");
	printf("\nBangun ruang yang tersedia :\n");
	puts("1. Balok");
	puts("2. Kubus");
	puts("3. Bola");
	puts("4. Kerucut");
	puts("5. Tabung");
	puts("6. Limas Segiempat");
	puts("7. Prisma Segitiga");
	puts("\nMasukkan pilihan sesuai nomor : ");
	switch(getch()) {	
	    case '1' :
	    	system("cls");
	    	HitungBalok();
			break;
		case '2' :
			system("cls");
			HitungKubus();
			break;
		case '3' : 
			system("cls");
			HitungBola();
			break;
		case '4' :
			system("cls");
			HitungKerucut(); 
			break;
		case '5' :
			system("cls");
			HitungTabung();
			break;
		case '6' :
			system("cls"); 
			HitungLimas();
			break;
		case '7' :
			system("cls");
			HitungPrisma();
			break;
		default :
			puts("\nMasukkan pilihan sesuai nomor!");
	}
}


int mainMenu() {
	/* Menampilkan menu utama aplikasi ini.			*/
	/* I.S   : Sembarang.							*/
	/* F.S   : Menu utama aplikasi ditampilkan.		*/
	int i;
	
	while(i<=100) {
		//system("MODE 34,19");
		puts("\n=`=`=`=`=`=`=`=`=`=APLIKASI KALULATOR=`=`=`=`=`=`=`=`=`=");
		puts("\n*** MAIN MENU ***");
		puts("1. Kalkulator");
		puts("2. Bangun Datar");
		puts("3. Bangun Ruang");
		puts("4. About");
		puts("5. Exit");
		puts("Masukkan pilihan sesuai nomor : ");
		switch(getch()) {	
		    case '1' :
		    	kalkulatorMenu();
				break;
			case '2' : 
				fiturDatarMenu();
				break;
			case '3' : 
				fiturRuangMenu();
				break;
			case '4' :
				
				break;
			case '5' :
				system("cls");
				puts("\nBYE-BYE! See You Later..");
				return 0;
			default :
				puts("\nMasukkan pilihan sesuai nomor!");
		}
		printf("\n");
		system("PAUSE");
		system("cls");
	}
}
