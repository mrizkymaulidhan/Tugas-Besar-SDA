#ifndef STACK_H
#define STACK_H
#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Top(S)  ((S).top)
#include<stdio.h>
#include<stdlib.h>

typedef int infotype;
typedef struct tElm *address;
typedef struct tElm{
    infotype info;
    address next;
} elmStack;

typedef struct{
    address top;
} Stack;

int isEmpty(Stack S);
/* Mengembalikan nilai boolean true jika stack kosong */
/* I.S   : S terdefinisi */
/* F.S   : S diketahui kosong atau tidaknya */

void createStack(Stack *S);
/* Membuat sebuah stack kosong */
/* I.S   : S tidak ada sebelumnya */
/* F.S   : Menghasilkan stack kosong jika alokasi berhasil */

address alokasi(infotype X);
/* Menghasilkan address hasil alokasi */
/* I.S   : X belum dialokasi */
/* F.S   : Menghasilkan address X yang sudah dialokasi */

void dealokasi(address P);
/* Membebaskan address P */
/* I.S   : P pasti ada */
/* F.S   : P berhasil didealokasi */

int findElmAddrs(Stack S, address P);
/* Mengembalikan address dari elemen yang dicari */
/* I.S   : S pasti ada */
/* F.S   : Menghasilkan address P */

void pushStack(Stack *S, infotype X);
/* Memasukkan elemen ke dalam stack */
/* I.S   : S terdefinisi */
/* F.S   : Elemen X ditambahkan ke dalam stack S */ 

void popStack(Stack *S, infotype *X);
/* Menghapus elemen dari dalam stack */
/* I.S   : X merupakan elemen S */
/* F.S   : Elemen X dihapuskan dari stack S */ 

void deleteAll(Stack *S);
/* Menghapus semua elemen dari dalam stack */
/* I.S   : S pasti ada */
/* F.S   : Semua elemen dihapuskan dari stack S */ 

void printAllInfo(Stack S);
/* Menempilkan semua elemen stack */
/* I.S   : S pasti ada */
/* F.S   : Semua elemen stack S ditampilkan */

#endif
