#include <iostream>

using namespace std;

float luasSegitiga(float alas, float tinggi){
    return tinggi*alas/2;
}

float kelilingSegitiga(float sisi1, float sisi2, float sisi3){
    return sisi1+sisi2+sisi3;
}

int main()
{
    cout << "Luas segitiga      : " << luasSegitiga(3, 5) << endl;
    cout << "Keliling segitiga  : " << kelilingSegitiga(3, 3, 4) << endl;
    return 0;
}
