#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    float A[2];
    float B[2];
    float C[2];

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Программа вычисляет площадь треугольника заданного тремя точками \n" << endl;
    cout << "Введите X координату точки А[x] = ";
    cin >> A[0];
    cout << "Введите Y координату точки А[y] = ";
    cin >> A[1];
    cout << "Введите X координату точки B[x] = ";
    cin >> B[0];
    cout << "Введите Y координату точки B[y] = ";
    cin >> B[1];
    cout << "Введите X координату точки C[x] = ";
    cin >> C[0];
    cout << "Введите Y координату точки C[y] = ";
    cin >> C[1];

    float a = sqrt((A[1]-B[1])*(A[1]-B[1]) +(A[0]-B[0])*(A[0]-B[0]));
    float b = sqrt((B[1]-C[1])*(B[1]-C[1])+(B[0]-C[0])*(B[0]-C[0]));
    float c = sqrt((C[1]-A[1])*(C[1]-A[1])+(C[0]-A[0])*(C[0]-A[0]));

    float hp = (a+b+c)/2;

    float temp = hp*(hp-a)*(hp-b) * (hp-c);

    float s = sqrt(temp);

    cout << "Площадь данного треугольника равна = " << s << endl;

    cout << "Для выхода нажмите <Enter>.. \n";
    fflush(stdin);
    cin.get();
    return 0;

}
