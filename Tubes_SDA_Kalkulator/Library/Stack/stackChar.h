#ifndef STACK_CHAR_H
#define STACK_CHAR_H

#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Top(S)  ((S).top)

#include<stdio.h>
#include<stdlib.h>
#include "../Boolean/boolean.h"

typedef char infotypeC;
typedef struct tElmC *addressC;
typedef struct tElmC{
    infotypeC info;
    addressC next;
}elmStackC;
typedef struct{
    addressC top;
}stackChar;

boolean isEmptyC(stackChar S);
/* Mengembalikan nilai boolean true jika stack kosong */
/* I.S   : S terdefinisi */
/* F.S   : S diketahui kosong atau tidaknya */

void createStackC(stackChar *S);
/* Membuat sebuah stack kosong */
/* I.S   : S tidak ada sebelumnya */
/* F.S   : Menghasilkan stack kosong jika alokasi berhasil */

addressC alokasiC(infotypeC X);
/* Menghasilkan address hasil alokasi */
/* I.S   : X belum dialokasi */
/* F.S   : Menghasilkan address X yang sudah dialokasi */

void dealokasiC(addressC P);
/* Membebaskan address P */
/* I.S   : P pasti ada */
/* F.S   : P berhasil didealokasi */

boolean findElmAddrsC(stackChar S, addressC P);
/* Mengembalikan address dari elemen yang dicari */
/* I.S   : S pasti ada */
/* F.S   : Menghasilkan address P */

void pushStackC(stackChar *S, infotypeC X);
/* Memasukkan elemen ke dalam stack */
/* I.S   : S terdefinisi */
/* F.S   : Elemen X ditambahkan ke dalam stack S */ 

void popsStackC(stackChar *S, infotypeC *X);
/* Menghapus elemen dari dalam stack */
/* I.S   : X merupakan elemen S */
/* F.S   : Elemen X dihapuskan dari stack S */ 

void deleteAllC(stackChar *S);
/* Menghapus semua elemen dari dalam stack */
/* I.S   : S pasti ada */
/* F.S   : Semua elemen dihapuskan dari stack S */ 

void printAllInfoC(stackChar S);
/* Menempilkan semua elemen stack */
/* I.S   : S pasti ada */
/* F.S   : Semua elemen stack S ditampilkan */

#endif
