#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 5;

void inputArray(float arr[][COLS]) {
    setlocale(LC_ALL, "RUS");
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

float averageOfRow(float row[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += row[i];
    }
    return sum / size;
}

int main() {
    float array[ROWS][COLS];
    inputArray(array);

    cout << "Средние арифметические элементов строк:\n";
    for (int i = 0; i < ROWS; ++i) {
        float avg = averageOfRow(array[i], COLS);
        cout << "Строка " << i + 1 << ": " << avg << endl;
    }

    return 0;
}
