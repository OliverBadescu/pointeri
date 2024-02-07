#include <iostream>
using namespace std;



void sizeExamples() {


	cout << "int:" << sizeof(int) << endl;
	cout << "float:" << sizeof(float) << endl;
	cout << "bool:" << sizeof(bool) << endl;
	cout << "char:" << sizeof(char) << endl;
	cout << "long int:" << sizeof(long int) << endl;
	cout << "long long:" << sizeof(long long) << endl;
	cout << "string:" << sizeof(string) << endl;
}

void exempluOperatori() {

	int x = 7;

	cout << &x << endl;
	
	cout << *(&x) << endl;
	

}

void exempluPoiner() {

	int x = 21;
	int* p = &x;

	cout <<  &x << endl;
	cout << p << endl;
	cout << *p << endl;

}

void testare() {

	int x = 7, y = 5, z = 2;
	int* t = &y;

	*t = x + 2;
	t = &z;
	*t = z - 1;
	t = &x;
	*t = 9;
	y = 12;

	cout << *t << " " <<  x<< " " << y << " "<< t;

}

void testare2() {

	int x = 14, y = 7, z = 4, a = 20;
	int* t = &x;
	int* f = &y;

	*t = x + y;
	*f = z + a;
	t = &a;
	f = &x;
	*t = a + 2;
	*f = z - 3;
	f = &y;
	x = 0;

	cout << t << " " << f << " " << x << " " << y << " " << z << " " << a << endl;

}

void testare3() {

	int x = 7;
	int& p = x;
	int* f = &p;

	cout << p << f<< endl;

}

void afisare(int a[10][10], int n, int m) {

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void construireMatrice(int a[10][10], int n, int m) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i < j) {
				a[i][j] = i;
			}
			else {
				a[i][j] = j;
			}
		}
	}

}

void afisareDivizibil(int v[100], int dim, int n) {

	bool ok = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] % n == 0) {
			cout << v[i] << " ";
			ok = 1;
		}
	}
	if (ok == 0) {
		cout << "Nu exista" << endl;
	}
}

int sub(int v[100], int dim, int a) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] < a) {
			ct++;
		}
	}
	return ct;
}

void afisareB(int v[100], int dim, int a) {

	int i;

	for (i = 0; i < dim; i++) {
		int maiMici = sub(v, dim, v[i]);
		int maiMiciInclusiv = sub(v, dim, v[i] + 1);

		if (maiMiciInclusiv - maiMici >= 2) {
			break;
		}
	}

	if (i < dim)
		cout << "NU";
	else
		cout << "DA";

}

void bubbleSort(int v[], int dim) {



	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}

		}

	} while (sortat == false);
}

void afisareNrNenule(int v[], int dim) {

	bubbleSort(v, dim);

	int ok = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] > 0) {
			cout << v[i] << " ";
			ok = 1;
		}

	}
	if (ok == 0) {
		cout << "Nu exista";
	}
}

void construireMatrice(int a[10][10], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (i == j) {
				a[i][j] = 0;
			}
			else {
				a[i][j] = n - j;
			}
	}

}

void afisareCelPutin3Cif(int v[100], int dim) {

	bubbleSort(v, dim);
	int ok = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] > 99) {
			cout << v[i] << " ";
			ok = 1;
		}
	}
	if (ok == 0) {
		cout << "Nu exista";
	}
}
