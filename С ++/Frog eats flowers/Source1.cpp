#include <iostream>
#include <fstream>
#include<windows.h>
enum class Direction // перечисление направлений
{
    right,
    bottom,
    left,
    top
};
using namespace std;
bool vivod(bool** B, int n, int m, const pair<int, int> Cord) // функци€ проверки клеток вокруг л€гушки
{
    if ((Cord.first + 1 >= n || B[Cord.first + 1][Cord.second] != true) &&//”мный указ.
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

    cout << "¬ведите количество строк в массиве : ";
    cin >> n;
    cout << "¬ведите количество столбцов в массиве : ";
    cin >> m;

    SetConsoleTextAttribute(SRS, 15);

    int** A = new int* [n];// создает массив пути л€гушки
    bool** B = new bool* [n];// создает массив c бабочками
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        B[i] = new bool[m];
    }

    ifstream file("field_of_flowers.txt ");//ищем файл
    string Mas("field_of_flowers.txt");// ћетод записи и считывани€ строки 
    ofstream fout; //ќбъект необходим, чтобы можно было выполн€ть запись в файл.
    fout.open(Mas); // ќткрывает документ в текущей дериктории 
    for (int i = 0; i < n; i++)// обнуление матрицы с бабочками
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j] = rand() % 2;
            file >> B[i][j];
            fout << B[i][j] << "\t";
        }
    }
    fout.close(); // закрываем файл
    for (int i = 0; i < n; i++)// обнуление матрицы движени€ л€гушки 
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = 0;
        }
    }
    for (int i = 0; i <= n; i++)//–аставление бабочек
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
    cout << "–астановка бабочек" << endl;
    SetConsoleTextAttribute(SRS, 15);

    for (int i = 0; i < n; i++)//вывод матрицы с бабочками
    {
        for (int j = 0; j < m; j++)
        {
            cout.width(6);
            cout << B[i][j];
        }
        cout << endl;
    }
    pair<int, int> Cord = { 0,0 };// пара преставл€юща€ кординаты л€гушки 
    A[Cord.first][Cord.second] = 1;
    Direction direction = Direction::right;// направление л€гушки
    int way = 2;
    while (vivod(B, n, m, Cord) == false)//если бабочек нет вокрук то прекращаем движение
    {
        switch (direction) //действи€ при разных направлени€х л€гушки
        {
        case Direction::right: {
            if (Cord.second + 1 >= m || B[Cord.first][Cord.second + 1] != true)//есди впереди ничего нет то мен€ем направление
            {
                direction = Direction::bottom;
            }
            else
            {
                Cord.second += 1;// движение вперед если впереди есть бабочка
                B[Cord.first][Cord.second] = false; //бабочку съели
                A[Cord.first][Cord.second] = way;// отметка в маршруте
                way++;// следующий номер маршрута 
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
    cout << "ƒвижение л€гушки" << endl;
    SetConsoleTextAttribute(SRS, 15);

    for (int i = 0; i < n; i++)//вывод матрицы движени€ л€гушки 
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
        delete[] B[i];//очистка из пам€ти массива B
    }
    delete[] B;
    for (int i = 0; i < n; i++)
    {
        delete[] A[i];//очистка из пам€ти массива A
    }
    delete[] A;


    return 0;
}
