#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {

    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");
    int choice;
    double num, result;

    do {
        cout << "Выберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите два числа для сложения: ";
            cin >> num >> result;
            result = num + result;
            cout << "Результат: " << result << endl;
            break;
        case 2:
            cout << "Введите два числа для вычитания: ";
            cin >> num >> result;
            result = num - result;
            cout << "Результат: " << result << endl;
            break;
        case 3:
            cout << "Введите два числа для деления: ";
            cin >> num >> result;
            if (result != 0) {
                result = num / result;
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Ошибка: деление на ноль.\n";
            }
            break;
        case 4:
            cout << "Введите два числа для умножения: ";
            cin >> num >> result;
            result = num * result;
            cout << "Результат: " << result << endl;
            break;
        case 5:
            cout << "Введите число и степень: ";
            cin >> num >> result;
            result = pow(num, result);
            cout << "Результат: " << result << endl;
            break;
        case 6:
            cout << "Введите число для вычисления квадратного корня: ";
            cin >> num;
            if (num >= 0) {
                result = sqrt(num);
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Ошибка: нельзя извлечь корень из отрицательного числа.\n";
            }
            break;
        case 7:
            cout << "Введите число для нахождения 1 процента: ";
            cin >> num;
            result = 0.01 * num;
            cout << "1% от числа: " << result << endl;
            break;
        case 8:
            cout << "Введите число для вычисления факториала: ";
            cin >> num;
            if (num >= 0) {
                result = factorial(num);
                cout << "Факториал числа: " << result << endl;
            }
            else {
                cout << "Ошибка: нельзя вычислить факториал отрицательного числа.\n";
            }
            break;
        case 9:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Ошибка: введена некорректная операция.\n";
        }

    } while (choice != 9);

    return 0;
}