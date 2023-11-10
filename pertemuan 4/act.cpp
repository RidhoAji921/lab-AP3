#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("contoh.txt");

    if (file.is_open())
    {
        file << "Halo, ini adalah penulisan ke file menggunaklan ofstream.\n";
        file << "Ini adalah baris kedua dalam file\n";
        file.close();
        cout << "Penulisan ke dalam file berhasil" << endl;
    }else{
        cout << "Gagal membuka file" << endl;
    }
    
    ifstream fileInput("contoh.txt");
    if (!fileInput.is_open())
    {
        cout << "Gagal membuka file untuk membaca";
        return 1;
    }
    cout << "Isi file : " << endl;
    string line;

    while(getline(fileInput, line)){
        cout << line << endl;
    }

    fileInput.close();

    return 0;
}