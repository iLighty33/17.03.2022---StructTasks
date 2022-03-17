// ������������ ������ ������� C++
#include <iostream>

using namespace std;

struct person {
	string name;
	int age;
	int coins[5];
};

void showPerson(person &P);
int yearOfBirth(person& P, int year);
int cash(person &P);

int main() {
	setlocale(LC_ALL, "Russian");

	// ������ 1
	person A = { "Tom", 25, {5, 1, 1, 2, 5} };
	showPerson(A);
	cout << "��� �������� - " << yearOfBirth(A, 2022) << endl;
	cout << "����� ����� = " << cash(A) << "\n\n";

	return 0;
}

// ������ 1

int cash(person& P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}

int yearOfBirth(person& P, int year) {
	return year - P.age;
}

void showPerson(person &P) {
	cout << P.name << ", " << P.age << " ���.\n";
	cout << "������: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ", ";
	cout << "\b\b.\n";
}