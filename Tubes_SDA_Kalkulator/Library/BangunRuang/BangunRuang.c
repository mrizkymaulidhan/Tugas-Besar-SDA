#include "BangunRuang.h"


//BALOK
float LuasBalok(Balok P){
	/* Mengembalikan hasil perhitungan luas permukaan balok.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/
	return 2*((Panjang(P)*Lebar(P))+(Lebar(P)*Tinggi(P))+(Panjang(P)*Tinggi(P))); //2(pl+lt+pt)
}

float VolumeBalok(Balok P){
	/* Mengembalikan hasil perhitungan volume balok.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan volume P dikembalikan.	*/
	return Panjang(P)*Lebar(P)*Tinggi(P); //pxlxt
}

void HitungBalok(){
	/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume balok.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas permukaan dan volume balok ditampilkan ke layar.	*/

	Balok P;
	printf("\nPanjang Balok\t: "); scanf("%d", &Panjang(P));
	printf("\nLebar Balok\t: "); scanf("%d", &Lebar(P));
	printf("\nTinggi Balok\t: "); scanf("%d", &Tinggi(P));
	printf("\nLuas Permukaan Balok\t= %.2f", LuasBalok(P));
	printf("\nVolume Balok\t= %.2f\n", VolumeBalok(P));
}


//KUBUS
float LuasKubus(Kubus P){
	/* Mengembalikan hasil perhitungan luas permukaan kubus.	*/
	/* I.S   : P terdefinisi.						  			*/
	/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/
	return 6*(Sisi(P)*Sisi(P)); //6(sxs)
}

float VolumeKubus(Kubus P){
	/* Mengembalikan hasil perhitungan volume kubus.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan volume P dikembalikan.	*/
	return Sisi(P)*Sisi(P)*Sisi(P); //sxsxs
}

void HitungKubus(){
	/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume kubus.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas permukaan dan volume kubus ditampilkan ke layar.	*/
	Kubus P;
	printf("\nSisi Kubus\t: "); scanf("%d", &Sisi(P));
	printf("\nLuas Permukaan Kubus\t= %.2f", LuasKubus(P));
	printf("\nVolume Kubus\t= %.2f\n", VolumeKubus(P));
}


//BOLA
float LuasBola(Bola P){
	/* Mengembalikan hasil perhitungan luas permukaan bola.		*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/
	return 4*3.14*Radius(P)*Radius(P); //4xphixrxr
}

float VolumeBola(Bola P){
	/* Mengembalikan hasil perhitungan volume bola.		*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan volume P dikembalikan.	*/
	return 4/3*3.14*Radius(P)*Radius(P)*Radius(P); //4/3xphixrxrxr
}

void HitungBola(){
	/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume bola.			*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas permukaan dan volume bola ditampilkan ke layar.	*/
	Bola P;
	printf("\nRadius Bola\t: "); scanf("%d", &Radius(P));
	printf("\nLuas Permukaan Bola\t= %.2f", LuasBola(P));
	printf("\nVolume Bola\t= %.2f\n", VolumeBola(P));
}


//KERUCUT
float LuasKerucut(Kerucut P){
	/* Mengembalikan hasil perhitungan luas permukaan kerucut.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/
	return ((3.14*Radius(P))*(Radius(P)+sqrt((Radius(P)*Radius(P))+(Tinggi(P)*Tinggi(P))))); //phixr(r+s)
}

float VolumeKerucut(Kerucut P){
	/* Mengembalikan hasil perhitungan volume kerucut.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan volume P dikembalikan.	*/
	return 1/3*3.14*Radius(P)*Radius(P)*Tinggi(P); //1/3xphixrxrxt
}

void HitungKerucut(){
	/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume kerucut.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas permukaan dan volume kerucut ditampilkan ke layar.*/
	Kerucut P;
	printf("\nRadius Kerucut\t: "); scanf("%d", &Radius(P));
	printf("\nTinggi Kerucut\t: "); scanf("%d", &Tinggi(P));
	printf("\nLuas Permukaan Kerucut\t= %.2f", LuasKerucut(P));
	printf("\nVolume Kerucut\t= %.2f\n", VolumeKerucut(P));
}


//TABUNG
float LuasTabung(Tabung P){
	/* Mengembalikan hasil perhitungan luas permukaan tabung.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/
	return ((2*3.14*Radius(P))*(Radius(P)+Tinggi(P))); //2xphixr(r+t)
}

float VolumeTabung(Tabung P){
	/* Mengembalikan hasil perhitungan volume tabung.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan volume P dikembalikan.	*/
	return 3.14*Radius(P)*Radius(P)*Tinggi(P); //phixrxrxt
}

void HitungTabung(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling jajar genjang.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas dan keliling jajar genjang ditampilkan ke layar.	*/
	Tabung P;
	printf("\nRadius Tabung\t: "); scanf("%d", &Radius(P));
	printf("Tinggi Tabung\t: "); scanf("%d", &Tinggi(P));
	printf("\nLuas Permukaan Tabung\t= %.2f", LuasTabung(P));
	printf("\nVolume Tabung\t= %.2f\n", VolumeTabung(P));
}


//LIMAS
float LuasLimas(Limas P){
	/* Mengembalikan hasil perhitungan luas permukaan limas.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/
	return (Sisi(P)*Sisi(P)+4*0.5*(Sisi(P)*Tinggi1(P))); //sxs + 4x0.5xaxt
}

float VolumeLimas(Limas P){
	/* Mengembalikan hasil perhitungan volume limas.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan volume P dikembalikan.	*/
	return 1/3*Sisi(P)*Sisi(P)*Tinggi(P); //1/3xsxsxt
}

void HitungLimas(){
	/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume limas.	*/
	/* I.S   : Sembarang.															*/
	/* F.S   : Hasil perhitungan luas permukaan dan volume ditampilkan ke layar.	*/
	Limas P;
	printf("Sisi Alas Limas\t: "); scanf("%d", &Sisi(P));
	printf("Tinggi Limas\t: "); scanf("%d", &Tinggi(P));
	printf("Tinggi Selimut Limas\t: "); scanf("%d", &Tinggi1(P));
	printf("\nLuas Permukaan Limas\t= %.2f", LuasLimas(P));
	printf("\nVolume Limas\t= %.2f\n", VolumeLimas(P));
}


//PRISMA
float LuasPrisma(Prisma P){
	/* Mengembalikan hasil perhitungan luas permukaan prisma.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/
	return (Sisi(P)*Tinggi1(P)+3*Sisi(P)*Tinggi(P)); //sxt1 + 3(sxt)
}

float VolumePrisma(Prisma P){
	/* Mengembalikan hasil perhitungan volume prisma.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan volume P dikembalikan.	*/
	return (0.5*Sisi(P)*Tinggi1(P))*Tinggi(P); //0.5xaxt1xt
}

void HitungPrisma(){
	/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume prisma.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas permukaan dan volume prisma ditampilkan ke layar.	*/
	Prisma P;
	printf("Sisi Alas Prisma\t: "); scanf("%d", &Sisi(P));
	printf("Tinggi Alas Prisma\t: "); scanf("%d", &Tinggi1(P));
	printf("Tinggi Prisma\t: "); scanf("%d", &Tinggi(P));
	printf("\nLuas Permukaan Prisma\t= %.2f", LuasPrisma(P));
	printf("\nVolume Prisma\t= %.2f\n", VolumePrisma(P));
}
