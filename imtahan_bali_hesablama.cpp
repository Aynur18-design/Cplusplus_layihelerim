#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, surname;
    
    cout << "Zehmet olmasa adinizi ve soyadinizi qeyd edin:\n";
    cout << "Ad: ";
    cin >> name;
    cout << "Soyad: ";
    cin >> surname;

    int score1, score2, score3;
    cout << "Zehmet olmasa imtahandan yigdiginiz ballari yazin!" << endl;
    cout << "Birinci imtahan baliniz: ";
    cin >> score1;
    cout << "Ikinci imtahan baliniz: ";
    cin >> score2;
    cout << "Ucuncu imtahan baliniz: ";
    cin >> score3;

    double avg = (score1 + score2 + score3) / 3.0; // Ortalama hesablanir

    cout << "\nTelebe: " << name << " " << surname << endl;
    cout << "Orta bal: " << avg << endl;

    if (avg > 90 && avg <= 100) {
        cout << "Telebenin herfi qiymeti: A" << endl;
        cout << "Imtahandan kecmisiniz!" << endl;
    }
    else if (avg > 80 && avg <= 90) {
        cout << "Telebenin herfi qiymeti: B" << endl;
        cout << "Imtahandan kecmisiniz!" << endl;
    }
    else if (avg > 70 && avg <= 80) {
        cout << "Telebenin herfi qiymeti: C" << endl;
        cout << "Imtahandan kecmisiniz!" << endl;
    }
    else if (avg > 60 && avg <= 70) {
        cout << "Telebenin herfi qiymeti: D" << endl;
        cout << "Imtahandan kecmisiniz!" << endl;
    }
    else if (avg > 50 && avg <= 60) {
        cout << "Telebenin herfi qiymeti: E" << endl;
        cout << "Imtahandan kecmisiniz!" << endl;
    }
    else if (avg >= 0 && avg <= 50) {
        cout << "Telebenin herfi qiymeti: F" << endl;
        cout << "Imtahandan kesilmisiniz!" << endl;
    }
    else {
        cout << "Daxil etdiyiniz ballarda problem var!" << endl;
    }

    cout << "Ugurlar!!" << endl;

    return 0;
}
