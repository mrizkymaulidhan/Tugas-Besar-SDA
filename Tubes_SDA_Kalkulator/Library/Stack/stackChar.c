#include "stackChar.h"

boolean isEmptyStackChar(stackChar S) {
	/* Mengembalikan true jika Stack Char kosong. */
	/* I.S   : S terdefinisi.					  */
	/* F.S   : S diketahui kosong atau tidaknya.  */
	
    return (Top(S)==Nil);
}

void createStackChar(stackChar *S) {
	/* Membuat sebuah Stack Char kosong.							 */
	/* I.S   : S belum terdefinisi.									 */
	/* F.S   : Menghasilkan Stack Char kosong jika alokasi berhasil. */
	
    Top(*S)=Nil;
}

addressStackChar alokasiStackChar(infotypeStackChar X) {
	/* Menghasilkan address hasil alokasi Stack Char.		*/
	/* I.S   : X belum dialokasi.							*/
	/* F.S   : Menghasilkan address X yang sudah dialokasi.	*/
	
    addressStackChar P;
    
    P=(addressStackChar)malloc(sizeof(elmStackChar));
    if(P!=Nil) {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

void dealokasiStackChar(addressStackChar P) {
	/* Membebaskan address P.			*/
	/* I.S   : P sudah dialokasi.		*/
	/* F.S   : P berhasil didealokasi.	*/
	
    free(P);
}

void pushStackChar(stackChar *S, infotypeStackChar X) {
	/* Melakukan push elemen ke bagian Top Stack Char.	*/
	/* I.S   : S terdefinisi.							*/
	/* F.S   : Elemen X ditambahkan ke bagian Top S.	*/ 
	
    addressStackChar P;
    
    P=alokasiStackChar(X);
    Next(P)=Top(*S);
    Top(*S)=P;
}

void popStackChar(stackChar *S, infotypeStackChar *X) {
	/* Menghapus elemen dari bagian Top Stack Char.  */
	/* I.S   : Top S tidak kosong dan X elemen S.	 */
	/* F.S   : Elemen X dihapuskan dari Top S.		 */ 
	
    addressStackChar P;
    
    if(!isEmptyStackChar(*S)) {
        P=Top(*S);
        Top(*S)=Next(P);
        *X=Info(P);
        dealokasiStackChar(P);
    }
	else {
        printf("\nStackChar kosong!\n");
    }
}
