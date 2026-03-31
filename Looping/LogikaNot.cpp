#include <iostream>
using namespace std;

int main() {
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika =";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris =";
    cin>>nilB;

    rerata = (nilB=nilM)/2;

    if (!(rerata < 60))
        status = "lulus";

    cout<<
}