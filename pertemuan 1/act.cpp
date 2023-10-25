#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string nama, kelas, npm;
    int uts, uas;

    cout << "Masukkan nama: ";
    scanf("%s", &nama);
    cout << "Masukkan kelas: ";
    scanf("%s", &kelas);
    cout << "Masukkan npm: ";
    scanf("%s", &npm);
    cout << "Masukkan uts: ";
    scanf("%d", &uts);
    cout << "Masukkan uas: ";
    scanf("%d", &uas);

    printf("\nnama : %s\n", &nama);
    printf("\nkelas : %s\n", &kelas);
    printf("\nNPM : %s\n", &npm);
    printf("\nUTS : %d\n", uts);
    printf("\nUAS : %d\n", uas);
    printf("\nTotal : %d\n", ((uts+uas)/2));
    return 0;
}