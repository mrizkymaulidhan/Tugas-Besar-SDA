#ifndef BANGUNDATAR_H
#define BANGUNDATAR_H

#define Panjang(P) P.panjang
#define Lebar(P) P.lebar
#define Sisi(P) P.sisi
#define Radius(P) P.radius
#define Alas(P) P.alas
#define Tinggi(P) P.tinggi
#define Sisi1(P) P.sisi1
#define Sisi2(P) P.sisi2
#define SisiSejajar1(P) P.sejajar1
#define SisiSejajar2(P) P.sejajar2
#define Diagonal1(P) P.diagonal1
#define Diagonal2(P) P.diagonal2

#include<stdio.h>
#include<math.h>

typedef struct {
	int panjang;
	int lebar;
}PersegiPanjang;

typedef struct {
	int sisi;
}Persegi;

typedef struct {
	int radius;
}Lingkaran;

typedef struct {
	int alas;
	int tinggi;
	int sisi;
}Segitiga;

typedef struct {
	int alas;
	int tinggi;
	int sisi;
}JajarGenjang;

typedef struct {
	int sejajar1;
	int sejajar2;
	int sisi1;
	int sisi2;
	int tinggi;
}Trapesium;

typedef struct {
	int diagonal1;
	int diagonal2;
	int sisi1;
	int sisi2;
}LayangLayang;

typedef struct{
	int diagonal1;
	int diagonal2;
	int sisi;
}BelahKetupat;

float LuasPersegiPanjang(PersegiPanjang P);
/* Mengembalikan hasil perhitungan luas persegi panjang.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan luas P dikembalikan.			*/

float KelilingPersegiPanjang(PersegiPanjang P);
/* Mengembalikan hasil perhitungan keliling persegi panjang.	*/
/* I.S   : P terdefinisi.										*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.			*/

void HitungPersegiPanjang();
/* Prosedur untuk menginput, dan menghitung luas dan keliling persegi panjang.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas dan keliling persegi panjang ditamplkan ke layar.	*/

float LuasPersegi(Persegi P);
/* Mengembalikan hasil perhitungan luas persegi.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan luas P dikembalikan.	*/

float KelilingPersegi(Persegi P);
/* Mengembalikan hasil perhitungan keliling persegi.	*/
/* I.S   : P terdefinisi.								*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/

void HitungPersegi();
/* Prosedur untuk menginput, dan menghitung luas dan keliling persegi.		*/
/* I.S   : Sembarang.														*/
/* F.S   : Hasil perhitungan luas dan keliling persegi ditamplkan ke layar.	*/

float LuasLingkaran(Lingkaran P);
/* Mengembalikan hasil perhitungan luas lingkaran.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan luas P dikembalikan.	*/

float KelilingLingkaran(Lingkaran P);
/* Mengembalikan hasil perhitungan keliling lingkaran.	*/
/* I.S   : P terdefinisi.								*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/

void HitungLingkaran();
/* Prosedur untuk menginput, dan menghitung luas dan keliling lingkaran.		*/
/* I.S   : Sembarang.															*/
/* F.S   : Hasil perhitungan luas dan keliling lingkaran ditamplkan ke layar.	*/

float LuasSegitiga(Segitiga P);
/* Mengembalikan hasil perhitungan luas segitiga.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan luas P dikembalikan.	*/

float KelilingSegitiga(Segitiga P);
/* Mengembalikan hasil perhitungan keliling segitiga.	*/
/* I.S   : P terdefinisi.								*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/

void HitungSegitiga();
/* Prosedur untuk menginput, dan menghitung luas dan keliling segitiga.			*/
/* I.S   : Sembarang.															*/
/* F.S   : Hasil perhitungan luas dan keliling segitiga ditamplkan ke layar.	*/

float LuasJajarGenjang(JajarGenjang P);
/* Mengembalikan hasil perhitungan luas jajar genjang.	*/
/* I.S   : P terdefinisi.								*/
/* F.S   : Hasil perhitungan luas P dikembalikan.		*/

float KelilingJajarGenjang(JajarGenjang P);
/* Mengembalikan hasil perhitungan keliling jajar genjang.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.		*/

void HitungJajarGenjang();
/* Prosedur untuk menginput, dan menghitung luas dan keliling jajar genjang.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas dan keliling jajar genjang ditamplkan ke layar.	*/

float LuasTrapesium(Trapesium P);
/* Mengembalikan hasil perhitungan luas trapesium.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan luas P dikembalikan.	*/

float KelilingTrapesium(Trapesium P);
/* Mengembalikan hasil perhitungan keliling trapesium.	*/
/* I.S   : P terdefinisi.								*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.	*/

void HitungTrapesium();
/* Prosedur untuk menginput, dan menghitung luas dan keliling trapesium.		*/
/* I.S   : Sembarang.															*/
/* F.S   : Hasil perhitungan luas dan keliling trapesium ditamplkan ke layar.	*/

float LuasLayangLayang(LayangLayang P);
/* Mengembalikan hasil perhitungan luas layang-layang.	*/
/* I.S   : P terdefinisi.								*/
/* F.S   : Hasil perhitungan luas P dikembalikan.		*/

float KelilingLayangLayang(LayangLayang P);
/* Mengembalikan hasil perhitungan keliling layang-layang.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.		*/

void HitungLayangLayang();
/* Prosedur untuk menginput, dan menghitung luas dan keliling layang-layang.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas dan keliling layang-layang ditamplkan ke layar.	*/

float LuasBelahKetupat(BelahKetupat P);
/* Mengembalikan hasil perhitungan luas belah ketupat.	*/
/* I.S   : P terdefinisi.								*/
/* F.S   : Hasil perhitungan luas P dikembalikan.		*/

float KelilingBelahKetupat(BelahKetupat P);
/* Mengembalikan hasil perhitungan keliling belah ketupat.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan keliling P dikembalikan.		*/

void HitungBelahKetupat();
/* Prosedur untuk menginput, dan menghitung luas dan keliling belah ketupat.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas dan keliling belah ketupat ditamplkan ke layar.	*/

#endif
