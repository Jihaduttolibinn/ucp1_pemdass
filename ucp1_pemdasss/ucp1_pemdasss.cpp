//1.contoh deklarasi intejer
// Variabel Integer:umur 
// Variabel String: nama
// Variabel Float : tinggi_badan

//2.Prosedur (Procedure):
//def greet_user(name):

//3, p = Point(10, 20) membuat objek point


//4. prosedur 
// def greet_user(name):
// fungsi
// def calculate_square(number):

//5. contoh looping untuk mencetak angka dari 1 hingga 5
// for i in range(1, 6):
// print(i)


#include <iostream>
using namespace std;
int main(){
    float nMat, nInggris, rerata;
    string status;
    cout << " Masukan nilai matematika ";
    cin >> nMat;
    cout << " Masukan nilai inggri";
    cin >> nInggris;
    rerata = (nInggris + nMat) / 2;

    if (rerata >= 70) {
        status = "Lulus jalur inggris";
    }
    else if (nMat >= 70) {
        status = " lulus jalur matematika";
    }
    else
    {
        status = "tidak lulus";
    }

cout << "Statusnya adalah " << status << endl;
};