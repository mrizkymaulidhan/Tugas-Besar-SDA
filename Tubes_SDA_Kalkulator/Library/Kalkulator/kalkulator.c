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
	//system("MODE 46,10");
	puts("\n\t\t# KALKULATOR #\n");
	printf("INSTRUKSI AWAL :");
		printf("\n1. Gunakan '^' untuk melakukan operasi perpangkatan");
		printf("\n2. Gunakan '*' untuk melakukan operasi perkalian");
		printf("\n3. Gunakan ':' untuk melakukan operasi pembagian");
		printf("\n4. Gunakan '+' untuk melakukan operasi penjumlahan");
		printf("\n5. Gunakan '-' untuk melakukan operasi pengurangan");
		printf("\nTambahan :bisa menambahkan '( )' ke dalam operasi perhitungan");
		
	printf("\n\nSilakan lakukan perhitungan :\n"); scanf(" %s",input);
	InfixToPostfix(input, postfix);
	printf("\n");
	ex = BuildExpressionTree(postfix);
	printf("= %.2f\n", CalculateTree(ex)); 
}

void fiturMenu(){	
	system("cls");
	puts("\n\t\t# BANGUN DATAR #");
	printf("\nBangun datar yang tersedia :\n");
	puts("1. Persegi Panjang");
	puts("2. Persegi");
	puts("3. Lingkaran");
	puts("4. Segitiga");
	puts("5. Jajar Genjang");
	puts("6. Trapesium");
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
			HitungJajarGenjang(); 
			break;
		case '6' : 
			system("cls");
			HitungTrapesium();
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
			puts("\nNomor yang Anda masukkan tidak valid!");
			puts("\nSilakan coba kembali :)");
			puts("BYE-BYE! See You Later..");
	}
}

//taa's
void fiturRuangMenu(){	
	system("cls");
	puts("\n\t\t# BANGUN RUANG #\n");
	printf("Bangun ruang yang tersedia :\n");
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
			puts("\nNomor yang Anda masukkan tidak valid!");
			puts("\nSilakan coba kembali :)");
			puts("BYE-BYE! See You Later..");
	}
}

void About(){	
	system("cls");
	puts("\n\t\t# About #\n");
	puts("1. Aplikasi Kalkulator");
	puts("2. Tentang Kita");
	puts("\nMasukkan pilihan sesuai nomor : ");
	switch(getch()) {	
	    case '1' :
	    	system("cls");
	    	AboutKalkulator();
			break;
		case '2' :
			system("cls");
			AboutUs();
			break;
		default :
			puts("\nNomor yang Anda masukkan tidak valid!");
			puts("\nSilakan coba kembali :)");
			puts("BYE-BYE! See You Later..");
	}
}


int mainMenu() {
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
				fiturMenu();
				break;
			case '3' : 
				fiturRuangMenu();
				break;
			case '4' :
				About();
				break;
			case '5' :
				return 0;
			default :
				puts("\nBYE-BYE! See You Later..");
		}
		printf("\n");
		system("PAUSE");
		system("cls");
	}
}
