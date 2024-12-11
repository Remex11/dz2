#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    // ������ 1: �������� �� ���������� �����
    int sixDigitNumber;
    cout << "������� ������������ �����: ";
    cin >> sixDigitNumber;

    if (sixDigitNumber < 100000 || sixDigitNumber > 999999) {
        cout << "������: ����� �� �������� ������������." << endl;
    }
    else {
        int firstHalf = sixDigitNumber / 1000;
        int secondHalf = sixDigitNumber % 1000;
        int sumFirst = (firstHalf / 100) + (firstHalf / 10 % 10) + (firstHalf % 10);
        int sumSecond = (secondHalf / 100) + (secondHalf / 10 % 10) + (secondHalf % 10);
        if (sumFirst == sumSecond) {
            cout << "����� �������� ����������." << endl;
        }
        else {
            cout << "����� �� �������� ����������." << endl;
        }
    }

    // ������ 2: �������� ����� � �������������� �����
    int fourDigitNumber;
    cout << "������� �������������� �����: ";
    cin >> fourDigitNumber;

    if (fourDigitNumber < 1000 || fourDigitNumber > 9999) {
        cout << "������: ����� �� �������� ��������������." << endl;
    }
    else {
        int digit1 = fourDigitNumber / 1000;
        int digit2 = (fourDigitNumber / 100) % 10;
        int digit3 = (fourDigitNumber / 10) % 10;
        int digit4 = fourDigitNumber % 10;

        int swappedNumber = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;
        cout << "����� ������������������ ����: " << swappedNumber << endl;
    }

    // ������ 3: ����������� ������������� ����� �� 7 ���������
    vector<int> numbers(7);
    cout << "������� 7 ����� �����: ";
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    int maxNumber = numeric_limits<int>::min();
    for (int num : numbers) {
        if (num > maxNumber) {
            maxNumber = num;
        }
    }

    cout << "������������ �����: " << maxNumber << endl;

    return 0;
}