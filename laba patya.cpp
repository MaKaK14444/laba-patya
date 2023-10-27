#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "[+] Програма лабораторних" << endl;
    cout << "\n[*] Введіть номер завдання" << endl;
    cout << "\n[1] - сума та добуток цифр числа." << endl;
    cout << "\n[2] - кількість цифр у заданому числі." << endl;
    cout << "\n[3] - сума всіх елементів масиву." << endl;
    cout << "\n[4] - середнє арифметичне всіх елементів масиву." << endl;
    cout << "\n[5] - коріння квадратного рівняння." << endl;
    int variant;
    cin >> variant;
    int number;
    int sum = 0;
    int product = 1;
    int digit;
    int i, s = 0;
    int a = 3;
    int b = 4;
    int c = 5;
    int x, x1;

    int summa = 0;
    switch (variant)
    {
    case 1:

        cout << "Введіть число:";
        cin >> number;
        while (number != 0) {
            digit = number % 10;
            sum += digit;
            product *= digit;
            number /= 10;

            cout << "Сума цифр: " << sum << endl;
            cout << "Твір цифр:" << product << endl;

            return 0;
            break;

    case 2:
        cout << "Введіть число:";
        cin >> number;

        int count = 0;
        while (number != 0)
        {
            number /= 10;
            count++;
        }

        cout << "кількість цифр: " << count << endl;
        return 0;
        }
    case 3:
        int arr[10];
        for (int& x : arr) {
            cin >> x;
            s += x;
        }
        cout << "\nСумма масивов = " << s << endl;
        return 0;
    case 4:
        const int SIZE = 10;
        int array[SIZE] = { 12, 45, 6, 7, 11, 56, 90, 45, 23, 6 };

        int summa = 0;

        for (int i = 0; i < 10; i++)
            summa += array[i];
        cout << "Среднее арифмитическое равна = " << summa / 10 << endl;
        return 0;
        break;

    case 5:
        x = -b - 4 * a * c;
        x1 = x * (-1);
        cout << x;
        cout << "  ";
        cout << x1;

        return 0;



    }

}
