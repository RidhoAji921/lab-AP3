#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout << "Masukkan jumlah baris: ";
    cin >> m;
    cout << "Masukkan jumlah kolom: ";
    cin >> n;

    int matrix1[m][n], matrix2[m][n], result[m][n];

    cout << "Masukkan elemen matrix pertama" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Masukkan elemen matrix kedua" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    cout << "Hasil penjumlahan matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
