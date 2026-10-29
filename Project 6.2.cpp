#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функція для формування масиву
void Create(int* a, const int n, const int Low, const int High) {
    for (int i = 0; i < n; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

// Функція для виведення масиву в рядок з форматним виведенням
void Print(const int* a, const int n) {
    for (int i = 0; i < n; i++) {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

// Функція, яка обчислює середнє арифметичне елементів з парними індексами
double AverageEvenIndices(const int* a, const int n) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i += 2) { // крок 2: 0, 2, 4, 6...
        sum += a[i];
        count++;
    }
    return (count > 0) ? (static_cast<double>(sum) / count) : 0.0;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));

    const int n = 10;
    int a[n];

    Create(a, n, -10, 10);

    cout << "Array a:" << endl;
    Print(a, n);

    double avg = AverageEvenIndices(a, n);
    cout << "Average of elements with even indices = " << fixed << setprecision(2) << avg << endl;

    return 0;
}