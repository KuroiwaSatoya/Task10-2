#include <iostream>
using namespace std;

int main() {
	int people = 0, sum = 0;
	int* score;
	double ave = 0;

	cout << "�������͂��܂����H > ";
	cin >> people;

	score = new int[people];

    for (int i = 0; i < people; i++) {
        cout << i + 1 << "�l�ڂ̃e�X�g�̓_������͂��Ă�������: ";
        cin >> score[i];
        sum += score[i];
    }

    ave = static_cast<double>(sum) / people;

    cout << "���ϓ_��" << ave << " �_�ł��B" << endl;

    delete[] score;
}