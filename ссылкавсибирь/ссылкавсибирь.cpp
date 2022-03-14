#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// ��������
template <typename T> void arr(T arr, int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
// ������ 1
void max3(int& refn1, int& refn2, int& refn3) {
	cout << "������� �������: " << refn1 << " " << refn2 << " " << refn3 << endl;
	int max;
	if (refn1 >= refn2 && refn1 > refn3) {
		max = refn1;
		refn2 = max;
		refn3 = max;
		cout << "������� ������: " << refn1 << " " << refn2 << " " << refn3 << endl;
	}
	if (refn2 > refn1 && refn2 >= refn3) {
		max = refn2;
		refn1 = max;
		refn3 = max;
		cout << "������� ������: " << refn1 << " " << refn2 << " " << refn3 << endl;
	}
	if (refn3 > refn2 && refn3 >= refn1) {
		max = refn3;
		refn1 = max;
		refn2 = max;
		cout << "������� ������: " << refn1 << " " << refn2 << " " << refn3 << endl;
	}
}
// ������ 2
int &retarr(int arr[], int length) {
	cout << "����� -> ";
	for (int i = 0; i < length; i++) {
		int& rf (i);
		if (arr[i] < 0)
			return arr[i];
	}
	for (int i = 0; i < length; i++)
		return arr[i];
}
// ������ 3
void destroy(int arr[], int length, int arr2[], int length2) {
	cout << "������ ����� ���������:\n[";
	int* parr = arr;
	int* parr2 = arr2;
	for (int i = 0; i < length; i++)
		for (int j = 0; j < length2; j++) {
		if (*(parr +i) == *(parr2 +j))
			*(parr2 + j) = 0;
	}
	for (int j = 0; j < length2; j++)
		cout << *(parr2 + j) << ", ";
	cout << "\b\b]\n";	
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int a, b, c;

	// ������ 1
	cout << "������� �����\n������: ";
	cin >> a;
	cout << "������: ";
	cin >> b;
	cout << "������: ";
	cin >> c;
	max3(a, b, c);
	cout << endl;

	// ������ 2
	int z2[10];
	for (int i = 0; i < 10; i++)
		z2[i]= rand() % (50 - (-10)) + (-10);
	cout << "������:\n[";
	arr(z2, 10);
	cout << retarr(z2, 10);
	cout << endl << endl;

	// ������ 3
	int z3[10];
	cout << "������ 1:\n[";
	for (int i = 0; i < 10; i++)
		z3[i] = rand() % (10 - (-10)) + (-10);
	arr(z3, 10);

	int z33[10];
	cout << "������ 2:\n[";
	for (int i = 0; i < 10; i++)
		z33[i] = rand() % (10 - (-10)) + (-10);
	arr(z33, 10);
	destroy(z3, 10, z33, 10);
	 

	return 0;
}