#include <iostream>

using namespace std;

float luasSegitiga(int alas, int tinggi){
    return tinggi*alas/2;
}

float kelilingSegitiga(int sisi1, int sisi2, int sisi3){
    return sisi1+sisi2+sisi3;
}

int main()
{
    cout << "Luas segitiga      : " << luasSegitiga(3, 5) << endl;
    cout << "Keliling segitiga  : " <<kelilingSegitiga(3, 3, 4) << endl;
    return 0;
}
