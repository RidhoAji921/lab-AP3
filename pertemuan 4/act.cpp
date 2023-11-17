#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("contoh.txt");

    if (file.is_open())
    {
        file << "Nama  : Nakamura Silitonga \n";
        file << "NPM   : 2IA23\n";
        file << "Kelas : 51422203\n";
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