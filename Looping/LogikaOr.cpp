#include <iostream>
using namespace std;

int main() {
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika=";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Ingghris=";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "lulus";
    else
        status ="tidak lulus";
    
    cout<<"status kelulusan="<<status<<",dengan nilai rata rata ="<<rerata<<endl;
}