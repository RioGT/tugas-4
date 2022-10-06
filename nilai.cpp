#include <iostream>

using namespace std;

int main (){

    string nama;
    int  nilai1, nilai2 , nilai3, rata2;

    cout << "masukan nama siswa :";
    cin >> nama;

    cout << "masukan nilai pertandingan 1 :";
    cin >> nilai1;

    cout << "masukan nilai pertandingan 2 :";
    cin >> nilai2;

    cout << "masukan nilai pertandingan 3 :";
    cin >> nilai3;

    cout << "Nama Siswa :" << nama;
    cout << "\nhasil pertandingan 1:" << nilai1 << endl;
    cout << "hasil pertandingan 2:" << nilai2 << endl;
    cout << "hasil pertandingan 3:" << nilai3 << endl;



    rata2 = (nilai1 + nilai2 + nilai3)/3;

    cout << "siswa yang bernama:" << nama;
    cout << "\nMemperoleh nilai rata - rata:" << rata2;

    if (rata2 >= 85)
    {
        cout << "\nhadiah yang didapat adalah komputer core i5";
    }
    if else(rata2 >= 70){
        cout << "\nhadiah yang didapat adalah uang sebesar Rp.2.500.000";
    }
    else{
        cout << "\nhadiah yang didapat adalah hadiah hiburan";
    }

    return 0;
}