#include <iostream>
#include <fstream>
#include<windows.h>
enum class Direction // ������������ �����������
{
    right,
    bottom,
    left,
    top
};
using namespace std;
bool vivod(bool** B, int n, int m, const pair<int, int> Cord) // ������� �������� ������ ������ �������
{
    if ((Cord.first + 1 >= n || B[Cord.first + 1][Cord.second] != true) &&//����� ����.
        (Cord.second + 1 >= m || B[Cord.first][Cord.second + 1] != true) &&
        (Cord.second - 1 < 0 || B[Cord.first][Cord.second - 1] != true) &&
        (Cord.first - 1 < 0 || B[Cord.first - 1][Cord.second] != true))
    {
        return true;
    }
    return false;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    HANDLE SRS = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(SRS, FOREGROUND_GREEN);

    srand(time(0));

    int n, m;

    cout << "������� ���������� ����� � ������� : ";
    cin >> n;
    cout << "������� ���������� �������� � ������� : ";
    cin >> m;

    SetConsoleTextAttribute(SRS, 15);

    int** A = new int* [n];// ������� ������ ���� �������
    bool** B = new bool* [n];// ������� ������ c ���������
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        B[i] = new bool[m];
    }

    ifstream file("field_of_flowers.txt ");//���� ����
    string Mas("field_of_flowers.txt");// ����� ������ � ���������� ������ 
    ofstream fout; //������ ���������, ����� ����� ���� ��������� ������ � ����.
    fout.open(Mas); // ��������� �������� � ������� ���������� 
    for (int i = 0; i < n; i++)// ��������� ������� � ���������
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j] = rand() % 2;
            file >> B[i][j];
            fout << B[i][j] << "\t";
        }
    }
    fout.close(); // ��������� ����
    for (int i = 0; i < n; i++)// ��������� ������� �������� ������� 
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = 0;
        }
    }
    for (int i = 0; i <= n; i++)//����������� �������
    {
        int tmpi = (rand() % n + 1) - 1;
        int tmpj = (rand() % n + 1) - 1;
        if (B[tmpi][tmpj] == true && (tmpi == 0 && tmpj == 0))
        {
            i--;
        }
        else
        {
            B[tmpi][tmpj] = true;
        }
    }

    SetConsoleTextAttribute(SRS, FOREGROUND_GREEN);
    cout << endl;
    cout << "���������� �������" << endl;
    SetConsoleTextAttribute(SRS, 15);

    for (int i = 0; i < n; i++)//����� ������� � ���������
    {
        for (int j = 0; j < m; j++)
        {
            cout.width(6);
            cout << B[i][j];
        }
        cout << endl;
    }
    pair<int, int> Cord = { 0,0 };// ���� ������������� ��������� ������� 
    A[Cord.first][Cord.second] = 1;
    Direction direction = Direction::right;// ����������� �������
    int way = 2;
    while (vivod(B, n, m, Cord) == false)//���� ������� ��� ������ �� ���������� ��������
    {
        switch (direction) //�������� ��� ������ ������������ �������
        {
        case Direction::right: {
            if (Cord.second + 1 >= m || B[Cord.first][Cord.second + 1] != true)//���� ������� ������ ��� �� ������ �����������
            {
                direction = Direction::bottom;
            }
            else
            {
                Cord.second += 1;// �������� ������ ���� ������� ���� �������
                B[Cord.first][Cord.second] = false; //������� �����
                A[Cord.first][Cord.second] = way;// ������� � ��������
                way++;// ��������� ����� �������� 
            }
            break;
        }
        case Direction::bottom: {
            if (Cord.first + 1 >= n || B[Cord.first + 1][Cord.second] != true)
            {
                direction = Direction::left;
            }
            else
            {
                Cord.first += 1;
                B[Cord.first][Cord.second] = false;
                A[Cord.first][Cord.second] = way;
                way++;
            }
            break;
        }
        case Direction::left: {
            if (Cord.second - 1 < 0 || B[Cord.first][Cord.second - 1] != true)
            {
                direction = Direction::top;
            }
            else
            {
                Cord.second -= 1;
                B[Cord.first][Cord.second] = false;
                A[Cord.first][Cord.second] = way;
                way++;
            }
            break;
        }

        case Direction::top: {
            if (Cord.first - 1 < 0 || B[Cord.first - 1][Cord.second] != true)
            {
                direction = Direction::right;
            }
            else
            {
                Cord.first -= 1;
                B[Cord.first][Cord.second] = false;
                A[Cord.first][Cord.second] = way;
                way++;
            }
            break;
        }

        }

    }

    SetConsoleTextAttribute(SRS, FOREGROUND_GREEN);
    cout << endl;
    cout << "�������� �������" << endl;
    SetConsoleTextAttribute(SRS, 15);

    for (int i = 0; i < n; i++)//����� ������� �������� ������� 
    {
        for (int j = 0; j < m; j++)
        {
            cout.width(6);
            cout << A[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] B[i];//������� �� ������ ������� B
    }
    delete[] B;
    for (int i = 0; i < n; i++)
    {
        delete[] A[i];//������� �� ������ ������� A
    }
    delete[] A;


    return 0;
}
