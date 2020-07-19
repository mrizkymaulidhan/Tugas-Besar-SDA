#ifndef KALKULATOR_H
#define KALKULATOR_H

#include "../Tree/bintree.h"
#include "../Stack/stackTree.h"
#include "../BangunDatar/BangunDatar.h"

BinTree BuildExpressionTree(infotypeTree postfix);
/* Membuat sebuah Expression Tree dari ekspresi postfix.	*/
/* I.S   : postfix terdefinisi.								*/
/* F.S   : Expression Tree dikembalikan.					*/

void kalkulatorMenu();

void fiturMenu();

void fiturRuangMenu();

int mainMenu();

#endif
