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

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void afisare2(int a[10][10], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
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



void construireMatrice2(int a[10][10], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n - 1) {
				a[i][j] = 0;
			}
			else {
				a[i][j] = n - i;
			}
		}
	}
}

void construireMatrice3(int a[10][10], int n, int m) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i > j) {
				a[i][j] = i;
			}
			else {
				a[i][j] = j;
			}
		}
	}
}

bool isPrim(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i == 0) {
			ct++;
		}
	}
	if (ct == 2) {
		return true;
	}
	return false;
}

void afisareNrPrime(int v[100], int dim) {

	bubbleSort(v, dim);

	for (int i = 0; i < dim; i++) {
		if (isPrim(v[i]) == true) {
			cout << v[i] << " ";
		}
	}

}

void afisareSuma(int v[10], int dim) {

	int s = 0;

	for (int i = 0; i < dim; i++) {
		s = s + v[i];
	}

	for (int i = dim - 1; i >= 0; i--) {
		cout << s << endl;
		s = s - v[i];
	}

}

void parcurgereSpirala(int a[10][10], int l, int c) {

	for (int i1 = 0, j1 = 0, i2 = l - 1, j2 = c - 1; i1 <= i2 && j1 <= j2; i1++, j1++, i2--, j2--) {

		for (int k = j1; k <= j2; k++) {
			cout << a[i1][k] << " ";
		}
		for (int k = i1 + 1; k <= i2; k++) {
			cout << a[k][j2] << " ";
		}
		for (int k = j2 - 1; k >= j1; k--) {
			cout << a[i2][k] << " ";
		}
		for (int k = i2 - 1; k > i1; k--) {
			cout << a[k][j1] << " ";
		}
		break;
	}

}

void schimbareVal(int v[10], int dim) {

	int maxim = -1;

	for (int i = 0; i < dim; i++) {
		cout << maxim << " ";
		if (v[i] > maxim) {
			maxim = v[i];
		}
	}
	cout << maxim << " ";
}

void construireMatrice4(int a[10][10], int n) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = (i * j) % 10;
		}
	}

}

void construireMatrice5(int a[10][10], int n) {

	int copie = n;
	int ct = 0;

	for (int j = 1; n > 0; j++) {
		int copie2 = copie;
		for (int i = 1; copie > 0; i++) {
			a[i][j] = n % 10;
			copie = copie / 10;
		}
		n = n / 10;
		ct++;
		copie = copie2;
	}

	for (int i = 1; i <= ct; i++){
		for (int j = 1; j <= ct; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

int multiplu(int v[10], int dim, int k) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] % k == 0 && v[i] % 10 == k) {
			ct++;
		}
	}
	return ct;

}

void construireMatrice6(int a[10][10], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = i + j + 1;
		}
	}

}

void construireMatrice7(int a[10][10], int n) {

	for (int i = 1; i <= n; i++){

		for (int j = 1; j <= n; j++) {
			if (i % 2 == 0)
				a[i][j] = j;
			else
				a[i][j] = i;
		}
	}

}

void construireMatrice8(int a[10][10], int n) {

	int k = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = k;
			k = k + 2;
			if (k % 3 == 0) {
				k = k + 2;
			}
		}
	}

}

int sumaCifImpPozPar(int v[10], int dim) {

	int s = 0;

	for (int i = 1; i <= dim; i++) {
		if (v[i] % 2 == 1 && i % 2 == 1) {
			s = s + v[i];
		}
	}
	return s;
}

void afisareVector(int v[10], int dim) {
	
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}