#include <iostream>
using namespace std;

int main() {
	int people = 0, sum = 0;
	int* score;
	double ave = 0;

	cout << "何名入力しますか？ > ";
	cin >> people;

	score = new int[people];

    for (int i = 0; i < people; i++) {
        cout << i + 1 << "人目のテストの点数を入力してください: ";
        cin >> score[i];
        sum += score[i];
    }

    ave = static_cast<double>(sum) / people;

    cout << "平均点は" << ave << " 点です。" << endl;

    delete[] score;
}