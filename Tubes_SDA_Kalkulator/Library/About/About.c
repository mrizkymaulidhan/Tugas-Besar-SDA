#include "About.h"

void Rizky(){
	/* Menampilkan informasi mengenai developer.			*/
	/* I.S   : Sembarang.									*/
	/* F.S   : Informasi mengenai developer ditampilkan.	*/
	
	printf("\nNama Lengkap\t: Mohammad Rizky Maulidhan");
	printf("\nNama Panggilan\t: Rizky");
	printf("\nNIM\t\t: 191524049");
	printf("\nInstagram\t: mrizkymaulidhan");
	printf("\nAlamat\t\t: Garut");
	printf("\nMoto Hidup\t: ~ To Infinity and Beyond ~");
	printf("\nHarapan\t\t: Selamat Dunia dan Akhirat\n");
}

void Shinta(){
	/* Menampilkan informasi mengenai developer.			*/
	/* I.S   : Sembarang.									*/
	/* F.S   : Informasi mengenai developer ditampilkan.	*/
	
	printf("\nNama Lengkap\t: Shinta Nurkaafi");
	printf("\nNama Panggilan\t: Shinta");
	printf("\nNIM\t\t: 191524061");
	printf("\nInstagram\t: shnrkfevv_");
	printf("\nAlamat\t\t: Palembang");
	printf("\nMoto Hidup\t: ~ Semua orang bisa jatuh cinta. Tapi besarkanlah cintamu kepada Illahi ~");
	printf("\nHarapan\t\t: Can be a STRONG WOMAN!\n");
}

void AplKalkulator(){
	/* Menampilkan informasi mengenai aplikasi.			*/
	/* I.S   : Sembarang.								*/
	/* F.S   : Informasi mengenai aplikasi ditampilkan.	*/
	
	printf("\n\n");
	system("cls");
	
	printf("\n\t\t\t# APLIKASI KALKULATOR #\n");
	printf("\n     Aplikasi yang akan kami buat adalah aplikasi kalkulator yang menggunakan");
	printf("\nkonsep binary tree dalam melakukan proses perhitungannya. Dalam proses");
	printf("\nperhitungannya dibutuhkan inputan berupa string yaitu sebuah ekspresi");
	printf("\nmatematika yang mengandung operator dan operand. Operator yang berlaku dalam");
	printf("\naplikasi kalkulator ini, diantaranya ( ), ^, * atau x, : atau /, +, dan -,");
	printf("\nsedangkan operand-nya berupa bilangan bulat, bilangan desimal, nol, bernilai");
	printf("\npositif atau bernilai negatif. Aplikasi ini akan menetukan operator mana yang");
	printf("\nakan diproses terlebih dahulu berdasarkan derajat operatornya. Selanjutnya");
	printf("\nmemberikan hasil perhitungan ke layar dan output yang dihasilkan akan berupa");
	printf("\nbilangan desimal dengan dua angka di belakang koma.");
	printf("\n");
	printf("\n     Selain itu, aplikasi yang kami buat juga memiliki fitur tambahan untuk");
	printf("\nmenghitung besaran geometri suatu bangun datar dan bangun ruang. Pada fitur");
	printf("\nbangun datar terdapat operasi menghitung luas dan keliling bangun datar.");
	printf("\nBangun datar yang tersedia di dalam aplikasi ini terdiri dari persegi panjang,");
	printf("\npersegi, trapesium, jajar genjang, layang-layang, belah ketupat, segitiga, dan");
	printf("\nlingkaran. Sedangkan pada fitur bangun ruang terdapat operasi menghitung luas");
	printf("\npermukaan dan volume bangun ruang. Bangun ruang yang tersedia di dalam aplikasi");
	printf("\nini terdiri dari balok, kubus, bola, kerucut, tabung, limas dan prisma.\n");
	}

void Identitas(){
	/* Menampilkan menu identitas.				*/
	/* I.S   : Sembarang.						*/
	/* F.S   : Menu identitas ditampilkan.		*/
	
	printf("\n\n");
	system("cls");
	
	printf("\n\t\t# IDENTITAS DEVELOPER #\n");
	puts("\n1. MOHAMMAD RIZKY MAULIDHAN - 191524049");
	puts("2. SHINTA NURKAAFI - 191524061\n");
	puts("Masukkan pilihan sesuai nomor : ");
	switch(getch()) {	
	    case '1' :
	    	Rizky();
			break;
		case '2' : 
			Shinta();
			break;
		default :
			puts("\nNomor yang Anda masukkan tidak valid!");
	}
}
