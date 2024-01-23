#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

// Функция для вычисления факториала числа
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    double result = 0.0;
    double num1, num2;
    int choice;

    do
    {
        cout << "Функции калькулятора: \n";
        cout << "----------------------\n";
        cout << "1 - Сложение\n";
        cout << "2 - Вычитание\n";
        cout << "3 - Частное\n";
        cout << "4 - Произведение\n";
        cout << "5 - Возведение в степень\n";
        cout << "6 - Нахождение квадратного корня\n";
        cout << "7 - Нахождение 1 процента от числа\n";
        cout << "8 - Найти факториал числа\n";
        cout << "9 - Выйти из программы\n";
        cout << "----------------------\n";
        cout << "Выберите операцию: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Реализация операции сложения
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число : ";
            cin >> num2;
            result = num1 + num2;
            cout << "Ответ: " << result << endl;
            break;
        case 2:
            // Реализация операции вычитания
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число : ";
            cin >> num2;
            result = num1 - num2;
            cout << "Ответ: " << result << endl;
            break;
        case 3:
            // Реализация операции деления
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число : ";
            cin >> num2;
            result = num1 / num2;
            cout << "Ответ: " << result << endl;
            break;
        case 4:
            // Реализация операции умножения
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число : ";
            cin >> num2;
            result = num1 * num2;
            cout << "Ответ: " << result << endl;
            break;
        case 5:
            // Реализация операции возведения в степень
            cout << "Введите число: ";
            cin >> num1;
            cout << "Введите степень: ";
            cin >> num2;
            cout << "Ответ: " << pow(num1, num2) << endl;
            break;
        case 6:
            // Реализация операции нахождения квадратного корня
            cout << "Введите число: ";
            cin >> num1;
            result = sqrt(num1);
            cout << "Ответ: " << result << endl;
            break;
        case 7:
            // Реализация операции нахождения 1 процента от числа
            cout << "Введите число: ";
            cin >> num1;
            result = 0.01 * num1;
            cout << "Ответ: " << result << endl;
            break;
        case 8:
            // Реализация операции нахождения факториала числа
            cout << "Введите число: ";
            cin >> num1;
            result = factorial(static_cast<int>(num1));
            cout << "Факториал числа: " << result << endl;
            break;
        case 9:
            cout << "Калькулятор устал работать. Спасибо, что завершили его работу\n";
            break;
        default:
            cout << "Неправильно. Попробуйте еще раз\n";
            break;
        }
    } while (choice != 9);

    return 0;
}