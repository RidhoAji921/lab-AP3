#include <iostream> //1

using namespace std;

void nilaiAkhir(){
    string nama, kelas, npm; //2
    int uts, uas, total;//3
    cout << "" << endl;

    cout << "Masukkan nama  : ";
    cin >> nama;
    cout << "Masukkan kelas : ";
    cin >> kelas;
    cout << "Masukkan npm   : ";
    cin >> npm;
    cout << "Masukkan UTS   : ";
    cin >> uts;
    cout << "Masukkan UAS   : ";
    cin >> uas;
    total = (uts+uas)/2;//4
    cout << "" << endl;

    cout << "nama  : " << nama << endl;//5
    cout << "kelas : " << kelas << endl;//6
    cout << "npm   : " << npm << endl;//7
    cout << "uts   : " << uts << endl;//8
    cout << "uas   : " << uas << endl;//9
    cout << "total   : " << total << endl;//10
    cout << "" << endl;
}

void penjumlahanMatrix(){
    const int baris = 2;//11
    const int kolom = 2;//12

    int matrix1[baris][kolom];//13
    int matrix2[baris][kolom];//14
    int hasil[baris][kolom];//15

    cout << "Masukkan elemen-elemen matrix pertama: " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen [" << i + 1 << "][" << j+1 << "]" << endl;
            cin >> matrix1[i][j];
        }
    }

    cout << "Masukkan elemen-elemen matrix kedua: " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen [" << i + 1 << "][" << j+1 << "]" << endl;
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Hasil penjumlahan matrix:  " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
}

void menuUtama(){
    int pilihan;
    do{
        cout << "Menu:" << endl;
        cout << "1. Menampilkan nilai akhir" << endl;
        cout << "2. Penjumalahan matrix" << endl;
        cout << "3. Keluar" << endl;

        cout << "Masukkan pilihan anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            nilaiAkhir();//16
            break;
        case 2:
            penjumlahanMatrix();//17
            break;
        case 3:
            cout << "Program berakhir, sampai jumpa!";
            break;
        default://18
            cout << "Pilihan tidak ada, silahkan coba lagi" << endl;
        }
    }while(pilihan != 3);//19
}

int main()
{
    menuUtama();//20
    return 0;
}
