#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    const int a = 3;
    const int b = 5;

    float array[a][b];
    
    cout << "Введите данные для элемента массива жи есть:\n";
    for (int i = 0; i < a; ++i) {
        cout << "Строчка " << i + 1 << ":\n";
        for (int j = 0; j < b; ++j) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> array[i][j];
        }
        cout << endl;
    }

    cout << "\nСредние ариф-кое элементов строк:\n";
    for (int i = 0; i < a; ++i) {
        float sum = 0.0;
        for (int j = 0; j < b; ++j) {
            sum += array[i][j];
        }
        float avg = sum / b;
        cout << "Строчка " << i + 1 << ": " << avg << endl;
    }

}
