#include "stackTree.h"

boolean isEmptyStackTree(stackTree S) {
	/* Mengembalikan true jika Stack Tree kosong. */
	/* I.S   : S terdefinisi.					  */
	/* F.S   : S diketahui kosong atau tidaknya.  */
	
    return (Top(S)==Nil);
}

void createStackTree(stackTree *S) {
	/* Membuat sebuah Stack Tree kosong.								*/
	/* I.S   : S belum terdefinisi.										*/
	/* F.S   : Menghasilkan Stack Tree kosong jika alokasi berhasil.	*/
	
    Top(*S)=Nil;
}

addressStackTree alokasiStackTree(infotypeStackTree X) {
	/* Menghasilkan address hasil alokasi Stack Tree.		*/
	/* I.S   : X belum dialokasi.							*/
	/* F.S   : Menghasilkan address X yang sudah dialokasi.	*/
	
    addressStackTree P;
    
    P=(addressStackTree)malloc(sizeof(elmStackTree));
    if(P!=Nil) {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

void dealokasiStackTree(addressStackTree P) {
	/* Membebaskan address P.			*/
	/* I.S   : P sudah dialokasi.		*/
	/* F.S   : P berhasil didealokasi.	*/
	
    free(P);
}

void pushStackTree(stackTree *S, infotypeStackTree X) {
	/* Melakukan push elemen ke bagian Top Stack Tree.		*/
	/* I.S   : S terdefinisi.								*/
	/* F.S   : Elemen X ditambahkan ke bagian Top S.		*/ 
	
    addressStackTree P;
    
    P=alokasiStackTree(X);
    Next(P)=Top(*S);
    Top(*S)=P;
}

void popStackTree(stackTree *S, infotypeStackTree *X) {
	/* Menghapus elemen dari bagian Top Stack Tree.	 */
	/* I.S   : Top S tidak kosong dan X elemen S.	 */
	/* F.S   : Elemen X dihapuskan dari Top S.		 */ 
	
    addressStackTree P;
    
    if(!isEmptyStackTree(*S)) {
        P=Top(*S);
        Top(*S)=Next(P);
        *X=Info(P);
        dealokasiStackTree(P);
    }
	else {
        printf("\nStackChar kosong!\n");
    }
}
