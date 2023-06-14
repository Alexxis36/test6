#include <iostream>
#include <Windows.h>
using namespace std;

void vvod_mas(int** pmas, int size_line, int size_column) {
    for (int i = 0; i < size_line; i++)
    {
        for (int j = 0; j < size_column; j++)
        {
            pmas[i][j] = rand() % 10;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int size_line, size_column;
    cout << "Введите кол-во строк = ";
    cin >> size_line;
    cout << "Введите кол-во столбцов = ";
    cin >> size_column;

    //распределяем столбцы
    int** pmas = new int* [size_line];
    for (int i = 0; i < size_line; i++)
    {
        pmas[i] = new int[size_column];
    }

    vvod_mas(pmas, size_line, size_column);

    for (int i = 0; i < size_line; i++)
    {
        for (int j = 0; j < size_column; j++)
        {
            cout << pmas[i][j] << " ";
        }
        cout << "\n";
    }
}