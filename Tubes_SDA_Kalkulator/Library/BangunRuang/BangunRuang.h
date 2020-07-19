#ifndef BANGUNRUANG_H
#define BANGUNRUANG_H

#define Panjang(P) P.panjang //balok
#define Lebar(P) P.lebar //balok
#define Tinggi(P) P.tinggi //balok, kerucut, tabung, limas, prisma
#define Sisi(P) P.sisi //kubus, limas, prisma
#define Radius(P) P.radius //bola, kerucut, tabung
#define Tinggi1(P) P.tinggi1 //limas, prisma

#include<stdio.h>
#include<math.h>

typedef struct {
	int panjang;
	int lebar;
	int tinggi;
}Balok;

typedef struct {
	int sisi;
}Kubus;

typedef struct {
	int radius;
}Bola;

typedef struct {
	int radius;
	int tinggi;
}Kerucut;

typedef struct {
	int radius;
	int tinggi;
}Tabung;

typedef struct {
	int sisi;
	int tinggi;
	int tinggi1;
}Limas;

typedef struct {
	int sisi;
	int tinggi;
	int tinggi1;
}Prisma;


//BALOK
float LuasBalok(Balok P);
/* Mengembalikan hasil perhitungan luas permukaan balok.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/

float VolumeBalok(Balok P);
/* Mengembalikan hasil perhitungan volume balok.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan volume P dikembalikan.	*/

void HitungBalok();
/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume balok.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas permukaan dan volume balok ditampilkan ke layar.	*/


//KUBUS
float LuasKubus(Kubus P);
/* Mengembalikan hasil perhitungan luas permukaan kubus.	*/
/* I.S   : P terdefinisi.						  			*/
/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/

float VolumeKubus(Kubus P);
/* Mengembalikan hasil perhitungan volume kubus.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan volume P dikembalikan.	*/

void HitungKubus();
/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume kubus.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas permukaan dan volume kubus ditampilkan ke layar.	*/


//BOLA
float LuasBola(Bola P);
/* Mengembalikan hasil perhitungan luas permukaan bola.		*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/

float VolumeBola(Bola P);
/* Mengembalikan hasil perhitungan volume bola.		*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan volume P dikembalikan.	*/

void HitungBola();
/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume bola.			*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas permukaan dan volume bola ditampilkan ke layar.	*/


//KERUCUT
float LuasKerucut(Kerucut P);
/* Mengembalikan hasil perhitungan luas permukaan kerucut.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/

float VolumeKerucut(Kerucut P);
/* Mengembalikan hasil perhitungan volume kerucut.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan volume P dikembalikan.	*/

void HitungKerucut();
/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume kerucut.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas permukaan dan volume kerucut ditampilkan ke layar.*/


//TABUNG
float LuasTabung(Tabung P);
/* Mengembalikan hasil perhitungan luas permukaan tabung.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/

float VolumeTabung(Tabung P);
/* Mengembalikan hasil perhitungan volume tabung.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan volume P dikembalikan.	*/

void HitungTabung();
/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume tabung.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas permukaan dan volume tabung ditampilkan ke layar.	*/


//LIMAS
float LuasLimas(Limas P);
/* Mengembalikan hasil perhitungan luas permukaan limas.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/

float VolumeLimas(Limas P);
/* Mengembalikan hasil perhitungan volume limas.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan volume P dikembalikan.	*/

void HitungLimas();
/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume limas.	*/
/* I.S   : Sembarang.															*/
/* F.S   : Hasil perhitungan luas permukaan dan volume ditampilkan ke layar.	*/


//PRISMA
float LuasPrisma(Prisma P);
/* Mengembalikan hasil perhitungan luas permukaan prisma.	*/
/* I.S   : P terdefinisi.									*/
/* F.S   : Hasil perhitungan luas permukaan P dikembalikan.	*/

float VolumePrisma(Prisma P);
/* Mengembalikan hasil perhitungan volume prisma.	*/
/* I.S   : P terdefinisi.							*/
/* F.S   : Hasil perhitungan volume P dikembalikan.	*/

void HitungPrisma();
/* Prosedur untuk menginput, dan menghitung luas permukaan dan volume prisma.		*/
/* I.S   : Sembarang.																*/
/* F.S   : Hasil perhitungan luas permukaan dan volume prisma ditampilkan ke layar.	*/


#endif
