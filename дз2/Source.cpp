#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    // Задача 1: Проверка на счастливое число
    int sixDigitNumber;
    cout << "Введите шестизначное число: ";
    cin >> sixDigitNumber;

    if (sixDigitNumber < 100000 || sixDigitNumber > 999999) {
        cout << "Ошибка: число не является шестизначным." << endl;
    }
    else {
        int firstHalf = sixDigitNumber / 1000;
        int secondHalf = sixDigitNumber % 1000;
        int sumFirst = (firstHalf / 100) + (firstHalf / 10 % 10) + (firstHalf % 10);
        int sumSecond = (secondHalf / 100) + (secondHalf / 10 % 10) + (secondHalf % 10);
        if (sumFirst == sumSecond) {
            cout << "Число является счастливым." << endl;
        }
        else {
            cout << "Число не является счастливым." << endl;
        }
    }

    // Задача 2: Поменять цифры в четырехзначном числе
    int fourDigitNumber;
    cout << "Введите четырехзначное число: ";
    cin >> fourDigitNumber;

    if (fourDigitNumber < 1000 || fourDigitNumber > 9999) {
        cout << "Ошибка: число не является четырехзначным." << endl;
    }
    else {
        int digit1 = fourDigitNumber / 1000;
        int digit2 = (fourDigitNumber / 100) % 10;
        int digit3 = (fourDigitNumber / 10) % 10;
        int digit4 = fourDigitNumber % 10;

        int swappedNumber = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;
        cout << "Новая последовательность цифр: " << swappedNumber << endl;
    }

    // Задача 3: Определение максимального числа из 7 введенных
    vector<int> numbers(7);
    cout << "Введите 7 целых чисел: ";
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    int maxNumber = numeric_limits<int>::min();
    for (int num : numbers) {
        if (num > maxNumber) {
            maxNumber = num;
        }
    }

    cout << "Максимальное число: " << maxNumber << endl;

    return 0;
}