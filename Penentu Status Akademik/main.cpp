#include <iostream>
using namespace std;

int main()
{
    int nilai;
    string nim, nama, grade, status;

    cout << "NIM : "; cin >> nim;
    cout << "Nama : "; cin >> nama;
    cout << "Nilai : "; cin >> nilai;

    if (nilai >= 80){
        grade = "A";
        status = "Lulus";
    } else if (nilai >= 70 && nilai < 80){
        grade = "B";
        status = "Lulus";
    } else if (nilai >= 60 && nilai < 70){
        grade = "C";
        status = "Lulus";
    } else if (nilai >= 50 && nilai < 60){
        grade = "D";
        status = "Mengulang";
    } else {
        grade = "E";
        status = "Tidak Lulus";
    }
    cout << endl;
    cout << "NIM Nama Nilai Grade Status" << endl;
    cout << "----------------------------" << endl;
    cout << nim << " " << nama << " " << nilai << " " << grade << " " << status;
}
