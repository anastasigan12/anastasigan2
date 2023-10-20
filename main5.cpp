#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ukrainian");
    int N; // кiлькiсть секунд, що минули з початку дня
    cout << "Введiть кiлькiсть секунд, що минули з початку дня: ";
    cin >> N;

    int secondsInLastMinute = N % 60; // кiлькiсть секунд в останній хвилині
    cout << "Кiлькiсть секунд, що минули з початку останньої хвилини: " << secondsInLastMinute << endl;






   
        int number;
        cout << "Введiть тризначне число: ";
        cin >> number;

        int digit1 = number / 100;  // Отримуємо першу цифру числа
        int digit2 = (number / 10) % 10;  // Отримуємо другу цифру числа
        int digit3 = number % 10;  // Отримуємо третю цифру числа

        bool areDigitsDifferent = (digit1 != digit2) && (digit1 != digit3) && (digit2 != digit3);

        if (areDigitsDifferent) {
            cout << "Усi цифри цього числа рiзнi." << endl;
        }
        else {
            cout << "Є однаковi цифри в числi." << endl;
        }




      
            double x;
            std::cout << "Введiть значення x: ";
            std::cin >> x;

            double y = (exp(-x) * pow(sin(x + 39), 2)) / cbrt(fabs(1 - sqrt(x) - 2 * sin(x))) + 0.5 * tan(x) * log(fabs(x)) / log(3.0);

            std::cout << "Значення виразу при x = " << x << " дорiвнює " << y << std::endl;

            return 0;
        }

        