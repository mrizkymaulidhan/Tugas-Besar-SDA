#include "BangunDatar.h"

float LuasPersegiPanjang(PersegiPanjang P){
	/* Mengembalikan hasil perhitungan luas persegi panjang.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.			*/
	return Panjang(P)*Lebar(P);
}

float KelilingPersegiPanjang(PersegiPanjang P){
	/* Mengembalikan hasil perhitungan keliling persegi panjang.	*/
	/* I.S   : P terdefinisi.										*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.			*/
	return 2*(Panjang(P)+Lebar(P));
}

void HitungPersegiPanjang(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling persegi panjang.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas dan keliling persegi panjang ditamplkan ke layar.	*/

	PersegiPanjang P;
	printf("\n\t\t# BANGUN DATAR PERSEGI PANJANG #\n");
	printf("\nPanjang Persegi Panjang\t : "); scanf("%d", &Panjang(P));
	printf("Lebar Persegi Panjang\t : "); scanf("%d", &Lebar(P));
	printf("\nLuas Persegi Panjang\t = %.2f", LuasPersegiPanjang(P));
	printf("\nKeliling Persegi Panjang = %.2f\n", KelilingPersegiPanjang(P));
}

float LuasPersegi(Persegi P){
	/* Mengembalikan hasil perhitungan luas persegi.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.	*/
	return (Sisi(P)*Sisi(P));
}

float KelilingPersegi(Persegi P){
	/* Mengembalikan hasil perhitungan keliling persegi.	*/
	/* I.S   : P terdefinisi.								*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/
	return 4*Sisi(P);
}

void HitungPersegi(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling persegi.		*/
	/* I.S   : Sembarang.														*/
	/* F.S   : Hasil perhitungan luas dan keliling persegi ditamplkan ke layar.	*/
	Persegi P;
	printf("\n\t\t# BANGUN DATAR PERSEGI #\n");
	printf("\nSisi Persegi\t : "); scanf("%d", &Sisi(P));
	printf("\nLuas Persegi\t = %.2f", LuasPersegi(P));
	printf("\nKeliling Persegi = %.2f\n", KelilingPersegi(P));
}

float LuasLingkaran(Lingkaran P){
	/* Mengembalikan hasil perhitungan luas lingkaran.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.	*/
	return 3.14*Radius(P)*Radius(P);
}

float KelilingLingkaran(Lingkaran P){
	/* Mengembalikan hasil perhitungan keliling lingkaran.	*/
	/* I.S   : P terdefinisi.								*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/
	return 2*3.14*Radius(P);
}

void HitungLingkaran(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling lingkaran.		*/
	/* I.S   : Sembarang.															*/
	/* F.S   : Hasil perhitungan luas dan keliling lingkaran ditamplkan ke layar.	*/
	Lingkaran P;
	printf("\n\t\t# BANGUN DATAR LINGKARAN #\n");
	printf("\nRadius Lingkaran\t: "); scanf("%d", &Radius(P));
	printf("\nLuas Lingkaran\t\t= %.2f", LuasLingkaran(P));
	printf("\nKeliling Lingkaran\t= %.2f\n", KelilingLingkaran(P));
}

float LuasSegitiga(Segitiga P){
	/* Mengembalikan hasil perhitungan luas segitiga.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.	*/
	return 0.5*Alas(P)*Tinggi(P);
}

float KelilingSegitiga(Segitiga P){
	/* Mengembalikan hasil perhitungan keliling segitiga.	*/
	/* I.S   : P terdefinisi.								*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/
	return Sisi(P)+Tinggi(P)+Alas(P);
}

void HitungSegitiga(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling segitiga.			*/
	/* I.S   : Sembarang.															*/
	/* F.S   : Hasil perhitungan luas dan keliling segitiga ditamplkan ke layar.	*/
	Segitiga P;
	printf("\n\t\t# BANGUN DATAR SEGITIGA #\n");
	printf("\nAlas Segitiga\t\t : "); scanf("%d", &Alas(P));
	printf("Tinggi Segitiga\t\t : "); scanf("%d", &Tinggi(P));
	printf("Sisi Miring Segitiga\t : "); scanf("%d", &Sisi(P));
	printf("\nLuas Segitiga\t\t = %.2f", LuasSegitiga(P));
	printf("\nKeliling Segitiga\t = %.2f\n", KelilingSegitiga(P));
}

float LuasJajarGenjang(JajarGenjang P){
	/* Mengembalikan hasil perhitungan luas jajar genjang.	*/
	/* I.S   : P terdefinisi.								*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.		*/
	return Alas(P)*Tinggi(P);
}

float KelilingJajarGenjang(JajarGenjang P){
	/* Mengembalikan hasil perhitungan keliling jajar genjang.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.		*/
	return 2*(Sisi(P)*Alas(P));
}

void HitungJajarGenjang(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling jajar genjang.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas dan keliling jajar genjang ditamplkan ke layar.	*/
	JajarGenjang P;
	printf("\n\t\t# BANGUN DATAR JAJAR GENJANG #\n");
	printf("\nAlas Jajar Genjang\t  : "); scanf("%d", &Alas(P));
	printf("Tinggi Jajar Genjang\t  : "); scanf("%d", &Tinggi(P));
	printf("Sisi Miring Jajar Genjang : "); scanf("%d", &Sisi(P));
	printf("\nLuas Jajar Genjang\t  = %.2f", LuasJajarGenjang(P));
	printf("\nKeliling\t\t  = %.2f\n", KelilingJajarGenjang(P));
}

float LuasTrapesium(Trapesium P){
	/* Mengembalikan hasil perhitungan luas trapesium.	*/
	/* I.S   : P terdefinisi.							*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.	*/
	return 0.5*(SisiSejajar1(P)+SisiSejajar2(P))*Tinggi(P);
}

float KelilingTrapesium(Trapesium P){
	/* Mengembalikan hasil perhitungan keliling trapesium.	*/
	/* I.S   : P terdefinisi.								*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/
	return Sisi1(P)+Sisi2(P)+SisiSejajar1(P)+SisiSejajar2(P);
}

void HitungTrapesium(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling trapesium.		*/
	/* I.S   : Sembarang.															*/
	/* F.S   : Hasil perhitungan luas dan keliling trapesium ditamplkan ke layar.	*/
	Trapesium P;
	printf("\n\t\t# BANGUN DATAR TRAPESIUM #\n");
	printf("\nSisi Sejajar 1 Trapesium : "); scanf("%d", &SisiSejajar1(P));
	printf("Sisi Sejajar 2 Trapesium : "); scanf("%d", &SisiSejajar2(P));
	printf("Tinggi Trapesium\t : "); scanf("%d", &Tinggi(P));
	printf("Sisi Kiri Trapesium\t : "); scanf("%d", &Sisi1(P));
	printf("Sisi Kanan Trapesium\t : "); scanf("%d", &Sisi2(P));
	printf("\nLuas Trapesium\t\t = %.2f", LuasTrapesium(P));
	printf("\nKeliling Trapesium\t = %.2f\n", KelilingTrapesium(P));
}

float LuasLayangLayang(LayangLayang P){
	/* Mengembalikan hasil perhitungan luas layang-layang.	*/
	/* I.S   : P terdefinisi.								*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.		*/
	return 0.5*(Diagonal1(P)+Diagonal2(P));
}

float KelilingLayangLayang(LayangLayang P){
	/* Mengembalikan hasil perhitungan keliling layang-layang.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.		*/
	return 2*(Sisi1(P)*Sisi2(P));
}

void HitungLayangLayang(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling layang-layang.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas dan keliling layang-layang ditamplkan ke layar.	*/
	LayangLayang P;
	printf("\n\t\t# BANGUN DATAR LAYANG-LAYANG #\n");
	printf("\nDiagonal 1 Layang-layang\t: "); scanf("%d", &Diagonal1(P));
	printf("Diagonal 2 Layang-layang\t: "); scanf("%d", &Diagonal2(P));
	printf("Sisi Miring Kiri Layang-layang\t: "); scanf("%d", &Sisi1(P));
	printf("Sisi Miring Kanan Layang-layang\t: "); scanf("%d", &Sisi2(P));
	printf("\nLuas Layang-layang\t\t= %.2f", LuasLayangLayang(P));
	printf("\nKeliling Layang-layang\t\t= %.2f\n", KelilingLayangLayang(P));
}

float LuasBelahKetupat(BelahKetupat P){
	/* Mengembalikan hasil perhitungan luas belah ketupat.	*/
	/* I.S   : P terdefinisi.								*/
	/* F.S   : Hasil perhitungan luas P dikembalikan.		*/
	return 0.5*(Diagonal1(P)+Diagonal2(P));
}

float KelilingBelahKetupat(BelahKetupat P){
	/* Mengembalikan hasil perhitungan keliling belah ketupat.	*/
	/* I.S   : P terdefinisi.									*/
	/* F.S   : Hasil perhitungan keliling P dikembalikan.		*/
	return 4*Sisi(P);
}

void HitungBelahKetupat(){
	/* Prosedur untuk menginput, dan menghitung luas dan keliling belah ketupat.		*/
	/* I.S   : Sembarang.																*/
	/* F.S   : Hasil perhitungan luas dan keliling belah ketupat ditamplkan ke layar.	*/
	BelahKetupat P;
	printf("\n\t\t# BANGUN DATAR BELAH KETUPAT #\n");
	printf("\nDiagonal 1 Belah Ketupat : "); scanf("%d", &Diagonal1(P));
	printf("Diagonal 2 Belah Ketupat : "); scanf("%d", &Diagonal2(P));
	printf("Sisi Belah Ketupat\t : "); scanf("%d", &Sisi(P));
	printf("\nLuas Belah Ketupat \t = %.2f", LuasBelahKetupat(P));
	printf("\nKeliling Layang-layang   = %.2f\n", KelilingBelahKetupat(P));
}
