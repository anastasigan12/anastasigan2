#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ukrainian");
    int N; // �i���i��� ������, �� ������ � ������� ���
    cout << "����i�� �i���i��� ������, �� ������ � ������� ���: ";
    cin >> N;

    int secondsInLastMinute = N % 60; // �i���i��� ������ � ������� ������
    cout << "�i���i��� ������, �� ������ � ������� �������� �������: " << secondsInLastMinute << endl;






   
        int number;
        cout << "����i�� ��������� �����: ";
        cin >> number;

        int digit1 = number / 100;  // �������� ����� ����� �����
        int digit2 = (number / 10) % 10;  // �������� ����� ����� �����
        int digit3 = number % 10;  // �������� ����� ����� �����

        bool areDigitsDifferent = (digit1 != digit2) && (digit1 != digit3) && (digit2 != digit3);

        if (areDigitsDifferent) {
            cout << "��i ����� ����� ����� �i��i." << endl;
        }
        else {
            cout << "� �������i ����� � ����i." << endl;
        }




      
            double x;
            std::cout << "����i�� �������� x: ";
            std::cin >> x;

            double y = (exp(-x) * pow(sin(x + 39), 2)) / cbrt(fabs(1 - sqrt(x) - 2 * sin(x))) + 0.5 * tan(x) * log(fabs(x)) / log(3.0);

            std::cout << "�������� ������ ��� x = " << x << " ���i���� " << y << std::endl;

            return 0;
        }

        