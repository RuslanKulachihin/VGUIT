#include <iostream>
#include <fstream>
#include<windows.h>
using namespace std;
const int n = 9;
void vvod(int(&F)[n][n])
{
    fstream file("Mass.txt");//ищем файл
    if (!file)// проверяем существует ли он
    {
        cout << "Ошибка,файл не открыт." << endl;
        return;
    }
    for (int i = 0; i < n; i++)// заполняем из файла массив F
    {
        for (int j = 0; j < n; j++)
        {
            file >> F[i][j];
        }
    }
}
void vivod(const int(&F)[9][9])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout.width(6);
            cout << F[i][j];
        }
        cout << endl;
    }
}
void transposition(const int(&F)[9][9])
{
    int Ftmp[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Ftmp[j][i] = F[i][j];
        }
    }
    vivod(Ftmp);

}
int main()
{
    setlocale(LC_ALL, "Rus");
    HANDLE SRS = GetStdHandle(STD_OUTPUT_HANDLE);
    int F[n][n] = {};
    vvod(F);
    SetConsoleTextAttribute(SRS, FOREGROUND_GREEN);
    vivod(F);
    cout << endl;
    SetConsoleTextAttribute(SRS, FOREGROUND_BLUE);
    transposition(F);
    SetConsoleTextAttribute(SRS, 15);
    return 0;
}
