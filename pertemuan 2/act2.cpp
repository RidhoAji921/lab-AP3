#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Masukkan nilai anda: ";
    cin >> num;

    switch (num)
    {
    case 90 ... 100:
        cout << "Kamu mendapatkan A+";
        break;
    case 80 ... 89:
        cout << "Kamu mendapatkan A";
        break;
    case 70 ... 79:
        cout << "Kamu mendapatkan B+";
        break;
    case 60 ... 69:
        cout << "Kamu mendapatkan B";
        break;
    case 50 ... 59:
        cout << "Kamu mendapatkan C";
        break;
    case 0 ... 49:
        cout << "Kamu mendapatkan D";
        break;
    default:
        cout << "Kamu salah memasukkan input";
        break;
    }
    return 0;
}