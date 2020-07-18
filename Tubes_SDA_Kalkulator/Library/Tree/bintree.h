/* File    : bintree.h 	*/
/* Desk    : Deklarasi Binary Tree secara rekursif  	*/
/* Oleh    : ANI RAHMANI / 23501007  			*/
/* Tgl	   : 21 / 11 / 2001	     			*/
/* Mod     : Mohammad Rizky Maulidhan */
/* Tgl Mod : 23 /06 / 2020 */

#ifndef BINTREE_H
#define BINTREE_H

#define Nil NULL
#define Info(P) (P)->info
#define Left(P) (P)->left
#define Right(P) (P)->right
#define Next(P) (P)->next

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../Stack/stackChar.h"
#include "../Boolean/boolean.h"

typedef char String[50];

typedef char infotypeTree[10];
typedef struct tElmtNode *addressTree;
typedef struct tElmtNode {
			infotypeTree info;
			addressTree left;
			addressTree right;
		} ElmtNode;
typedef addressTree BinTree;


/* ****** MANAJEMEN MEMORY ******* */
addressTree AlokasiTree(infotypeTree X);
/* Menghasilkan  addressTree hasil alokasi sebuah  Node 	*/
/* Jika alokasi berhasil, maka  addressTree tidak NIl   	*/
/* Info(P)=X, Left(P)=Nil,Right(P)=Nil, dan Count(P)=0 	*/
/* Jika alokasi gagal mengembalikan Nil  		*/

boolean IsEmptyTree(BinTree P);
/* Mengembalikan true jika pohon kosong */

void CreateEmptyTree(BinTree *P);
/* Membuat  Tree   kosong  */

BinTree GetLeft(BinTree P);
/* Mengirimkan anak kiri pohon biner P  */

BinTree GetRight(BinTree P);
/* Mengirimkan anak kanan pohon biner P  */

/* ******** KONSTRUKTOR ************ */
BinTree Tree(infotypeTree X, BinTree L, BinTree R);
/* Menghasilkan sebuah pohon Biner dari A, L, dan R jika AlokasiTree berhasil */
/* Menghasilkan pohon kosong Nil, jika alokasi gagal 			  */

void MakeTree(infotypeTree Y, BinTree L, BinTree R, BinTree *P);
/* I.S   : Sembarang 	*/
/* F.S   : Menghasilkan sebuah pohon biner P dari A,L,dan R, jika alokasi */
/*         berhasil; Menghasilkan pohon P yang kosong jika alokasi gagal  */

void BuildTree(BinTree *P);
/* Membentuk sebuah pohon biner P dari pita karakter yang dibaca 	*/
/* I.S   : Pita berisi 'kostanta' pohon dalam bentuk prefiks, memory 	*/
/*         pasti cukup, alokasi pasti berhasil 			*/
/* F.S   : P dibentuk dari Ekspresi dalam Pita   			*/

/* ************* TRAVERSAL   ************* */
void Preorder(BinTree P);
/* I.S  : P terdefinisi   					    */
/* F.S  : semua simpul P sudah diproses secara Preorder; akar, kiri */
/*        kanan (dengan Proses (P)) 				    */

void Inorder(BinTree P);
/* I.S  : P terdefinisi   					    */
/* F.S  : semua simpul P sudah diproses secara Inorder; kiri, akar  */
/*        kanan (dengan Proses (P)) 				    */

void Postorder(BinTree P);
/* I.S  : P terdefinisi   					    */
/* F.S  : semua simpul P sudah diproses secara Postorder; kiri,     */    
/* 	  kanan, akar (dengan Proses (P)) 			    */

void PrintTree(BinTree P);
/* I.S  : P terdefinisi, h adalah jarak indentasi	*/
/* F.S  : semua simpul P sudah ditulis 			*/

void PrintInfoTree(BinTree P);
/* Menampilkan info-info dari setiap node pada pohon P */
/* I.S   : Pohon P pasti ada */
/* F.S   : Info-info dari setiap node pada pohon P ditampilkan */  

int Prior(char x);
int Priority(char a, char b);
void Convert(String infix, String postfix);
int toInt(String X);
float evaluate(BinTree P);

#endif
