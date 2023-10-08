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

    cout << "��������� ��������� ������� ������������ ��������� ����� ������� \n" << endl;
    cout << "������� X ���������� ����� �[x] = ";
    cin >> A[0];
    cout << "������� Y ���������� ����� �[y] = ";
    cin >> A[1];
    cout << "������� X ���������� ����� B[x] = ";
    cin >> B[0];
    cout << "������� Y ���������� ����� B[y] = ";
    cin >> B[1];
    cout << "������� X ���������� ����� C[x] = ";
    cin >> C[0];
    cout << "������� Y ���������� ����� C[y] = ";
    cin >> C[1];

    float a = sqrt((A[1]-B[1])*(A[1]-B[1]) +(A[0]-B[0])*(A[0]-B[0]));
    float b = sqrt((B[1]-C[1])*(B[1]-C[1])+(B[0]-C[0])*(B[0]-C[0]));
    float c = sqrt((C[1]-A[1])*(C[1]-A[1])+(C[0]-A[0])*(C[0]-A[0]));

    float hp = (a+b+c)/2;

    float temp = hp*(hp-a)*(hp-b) * (hp-c);

    float s = sqrt(temp);

    cout << "������� ������� ������������ ����� = " << s << endl;

    cout << "��� ������ ������� <Enter>.. \n";
    fflush(stdin);
    cin.get();
    return 0;

}
