// Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Створити стек цілих чисел. Знайти середнє арифметичне елементів стеку.

#include <iostream>
#include <stack>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    stack<int> s; // створення стеку цілих чисел
    int n, count = 0;
    double sum = 0;
    cout << "Введіть розмір стеку: ";
    cin >> n;
    cout << "Введіть цілі числа: " << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.push(num); // додавання числа до стеку
    }
    // перевірка кожного елемента стеку
    while (!s.empty()) {
        sum += s.top();//отримання верхнього елемента 
        s.pop();//видалення верхнього елемента
        count++;
    }

    double average = sum / count;
    cout << "Середнє арифметичне елементів стеку: " << average << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
