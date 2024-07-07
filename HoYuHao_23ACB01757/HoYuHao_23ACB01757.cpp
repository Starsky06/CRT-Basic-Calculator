#include<iostream>

using namespace std;

int main() {

	int a1, a2, a3, n1, n2, n3, i, j, k, hcf1, hcf2, hcf3, N, Y;
	// request user enter three remainders
	cout << "Kindly enter three remainders: " << endl;
	cin >> a1;
	cin >> a2;
	cin >> a3;

	// request user enter three modulos
	cout << "Kindly enter three modulos: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;

	//to check the enter value of modulo whether equal to zero or not 
	if (n1 == 0 || n2 == 0 || n3 == 0) {
		cout << "Invalid input of modulo." << endl;
		system("pause");
		return 0;
	}


	//check between n1 and n2 of the highest common factor 
	for (i = 1; i < n1 || i < n2; i++) {
		
		if (n1 % i == 0 && n2 % i == 0) {
			hcf1 = i;
		}

	}

	//check between n1 and n3 of the highest common factor
	for (j = 1; j < n1 || j < n3; j++) {

		if (n1 % j == 0 && n3 % j == 0) {
			hcf2 = j;
		}

	}

	//check between n2 and n3 of the highest common factor
	for (k = 1; k < n2 || k < n3; k++) {

		if (n2 % k == 0 && n3 % k == 0) {
			hcf3 = k;
		}

	}

	//cout the remainder and modulos of user enter 
	cout << "Enter list of remainders: " << endl;
	cout << a1 << " " << a2 << " " << a3 << endl;

	cout << "Enter list of modulos: " << endl;
	cout << n1 << " " << n2 << " " << n3 << endl;

	//check the hcf whether is pairwise or not

	if (hcf1 != 1 || hcf2 != 1 || hcf3 != 1) {
		cout << n1 << " " << n2 << " " << n3 << " are not pairwise co-prime." << endl;
		system("pause");
		return 0;
	}

	
	cout << "The system of congruences to be solved is:" << endl;
	cout << "x % " << n1 << " = " << a1 << endl;
	cout << "x % " << n2 << " = " << a2 << endl;
	cout << "x % " << n3 << " = " << a3 << endl;

	//find N according the formula below
	N = n1 * n2 * n3;

	//find m1 ,m2 ,m3 according the formula below
	int m1 = N / n1;
	int m2 = N / n2;
	int m3 = N / n3;

	//find mi1 ,mi2 ,mi3
	int mi1 = m1 % n1;
	int mi2 = m2 % n2;
	int mi3 = m3 % n3;

	//find Y according the formula below
	Y = (a1 * m1 * mi1) + (a2 * m2 * mi2) + (a3 * m3 * mi3);

	//find the solution of Y
	Y = Y % N;

	cout << endl;
	cout << "The system of congruences has the solution " << Y << " modulo " << N << endl;


	system("pause");

	return 0;



}