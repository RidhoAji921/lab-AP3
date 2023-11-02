#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Masukkan nilai anda: ";
    cin >> num;

    if (num >= 90 && num <= 100){
        cout << "Kamu mendapatkan A+";
    }
    else if (num >= 80 && num < 90)
    {
        cout << "Kamu mendapatkan A";
    }
    else if (num >= 70 && num < 80)
    {
        cout << "Kamu mendapatkan B+";
    }
    else if (num >= 60 && num < 70)
    {
        cout << "Kamu mendapatkan B";
    }
    else if (num >= 50 && num < 60)
    {
        cout << "Kamu mendapatkan C";
    }
    else if (num >= 0 && num < 50)
    {
        cout << "Kamu mendapatkan D";
    }else
    {
        cout << "Kamu salah mendapatkan nilai";
    }
    return 0;
}