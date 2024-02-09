#include "probleme.h"

// 10 problema matrici

// 1) todo: 
// Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi m
// (2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
// (numerotate de la 1 la n) şi m coloane(numerotate de la 1 la m) cu proprietatea că fiecare
// element Aij memorează cea mai mică dintre valorile indicilor i şi j(1≤i≤n, 1≤j≤m).
// Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
// fiecărei linii fiind separate prin câte un spaţiu.

void sol1() {

	int a[10][10];

	int n = 6;
	int m = 6;

	cout << "Matricea construita este: " << endl;
	construireMatrice(a, n, m);
	afisare(a, n, m);

}


// 2) todo: 
// Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
// construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
// după cum urmează :
// -elementele aflate pe diagonala principală a matricei vor primi valoarea 0
// - elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primivaloarea n
// - elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primivaloarea n - 1
// ...
// - elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primivaloarea 1
// Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
//pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii(ca înexemplu).

void sol2() {

	int a[10][10];
	int n;
	cout << "Introduceti elementul n: ";
	cin >> n;

	cout << "Matricea construita este: " << endl;

	construireMatrice(a, n);
	afisare(a, n, n);



}

// 3) todo:
// Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
// construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori după cum urmează :
// -elementele aflate pe diagonala secundară a matricei vor primi valoarea 0
// - elementele de pe prima linie, cu excepţia celui aflat pe diagonala secundară vor primi valoarea n
// - elementele de pe a doua linie, cu excepţia celui aflat pe diagonala secundară vor primi valoarea n - 1
// - elementele de pe ultima linie, cu excepţia celui aflat pe diagonala secundară vor primi valoarea 1

void sol3() {

	int a[10][10];
	int n;
	cout << "Introduceti elementul n: ";
	cin >> n;

	cout << "Matricea construita este: " << endl;

	construireMatrice2(a, n);
	afisare(a, n, n);

}


// 4) todo: 
// Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi m
// (2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
// (numerotate de la 1 la n) şi m coloane(numerotate de la 1 la m) cu proprietatea că fiecare
// element Aij memorează cea mai mare dintre valorile indicilor i şi j(1≤i≤n, 1≤j≤m).
// Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
// fiecărei linii fiind separate prin câte un spaţiu

void sol4() {

	int a[10][10];
	int n, m;
	cout << "Introduceti elementul n: ";
	cin >> n;
	cout << "Introduceti elementul m: ";
	cin >> m;

	cout << "Matricea construita este: " << endl;
	construireMatrice3(a, n, m);
	afisare(a, n, m);

}


// 5) todo: 
// Se consideră tabloul bidimensional cu n linii şi n coloane ce conţine numere naturale cu cel
// mult patru cifre fiecare.Scrieţi programul C / C++ care citeşte de la tastatură numărul natural
// n(2≤n≤23) şi cele n * n elemente ale tabloului şi apoi afişează pe ecran elementele primului
// pătrat concentric, separate prin câte un spaţiu.Pătratul este parcurs în sensul acelor de
// ceasornic începând din colţul său stânga - sus, ca în exemplu.Primul pătrat concentric este
// format din prima şi ultima linie, prima şi ultima coloană a tabloului.

void sol5() {

	int a[10][10] = {
		{1, 2, 3, 4, 5},
		{6, 21, 22, 23, 1},
		{2, 31, 32 , 33, 6},
		{7, 41, 42, 43, 2},
		{3, 4, 5, 6, 7} };

	int l = 5;
	int c = 5;

	parcurgereSpirala(a, l, c);

}


// 10 probleme vectori

// 1) todo:  
// Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
// cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu.Scrieţi un program
// C / C++ care citeşte de la tastatură un număr natural nenul n(n≤999) şi numerele din fişierul
// bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
// care sunt divizibile cu n.Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
// pe ecran mesajul NU EXISTA.

void sol11() {

	int v[100] = { 42, 12, 922, 1224, 9422, 12, 1, 1000, 55, 67, 82 };
	int dim = 11;

	int n = 0;
	cout << "Introduceti numarul n: ";
	cin >> n;

	afisareDivizibil(v, dim, n);

}



// 2) todo:
// a) Scrieţi definiţia completă a subprogramului sub. (4p.)
// b) Să se scrie un program C / C++ care să citească de la tastatură un număr natural nenul n
// (n≤100) şi n numere întregi, fiecare având cel mult 4 cifre, şi care, folosind apeluri utile ale
// subprogramului sub, să afişeze pe ecran mesajul DA dacă oricare două dintre cele n
// numere întregi citite sunt distincte două câte două, sau mesajul NU în caz contrar.
// Exemplu: pentru n = 6 şi cele n numere citite de la tastatură : 47 183 69 8 134 - 56
// se va afişa pe ecran mesajul DA

void sol12() {

	int v[100] = { 47, 183, 69, 8, 134, -56};
	int dim = 6;

	int a;
	cout << "Introduceti elementul a: ";
	cin >> a;

	afisareB(v, dim, a);


}


// 3) todo: 
// Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de
// numere întregi, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte
// numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine
// crescătoare, toate numerele naturale nenule din fişier.Dacă nu există astfel de numere se
// va afişa pe ecran mesajul NU EXISTA.

void sol13() {

	int v[100] = { -3, -10, 0, 7, -5, 7,51, -800, 6, 3798 };
	int dim = 10;

	afisareNrNenule(v, dim);

}


// 4) todo: 
// Fişierului text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel
// mult 100 de numere naturale, fiecare număr având cel mult 4 cifre.Scrieţi un program
// C / C++ care citeşte toate numerele din fişierul NR.TXT şi afişează pe ecran, separate prin
// câte un spaţiu, în ordine crescătoare, toate numerele din fişier care au cel puţin 3 cifre.
// Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA

void sol14() {

	int v[100] = { 24, 82, 100 ,52, 82, 128, 522 };
	int dim = 7;

	cout << "Numerele sunt: ";
	afisareCelPutin3Cif(v, dim);

}


// 5) todo: 
// Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
// (n≤100)şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din
// şir fiind strict mai mari decât 1. Programul va determina şi va afişa pe ecran toate numerele prime din şirul citit.Numerele determinate se
// vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor.

void sol15() {

	int v[100] = { 1125, 2, 314, 101, 37, 225, 12 };
	int dim = 9;

	cout << "Numerele prime din vector sunt: ";
	afisareNrPrime(v, dim);
	cout << endl;

}


// 6) todo: 
// Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi
// cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional
// a.Programul afişează pe o linie a ecranului suma celor n elemente ale tabloului, pe
// următoarea linie a ecranului suma primelor n - 1 elemente şi aşa mai departe, astfel încât
// ultima linie afişată să conţină doar primul element al tabloului.


void sol16() {

	int v[10] = { 1, 7 , 3, 4 };
	int dim = 4;

	cout << "Sumele elementelor sunt: " << endl;
	afisareSuma(v, dim);

}


// 7) todo: 