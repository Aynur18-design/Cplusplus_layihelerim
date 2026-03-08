#include <iostream>
using namespace std;

int main() {
    string name, surname, mehsul_adi;
    double mehsul_qiymeti, EDV_faizi;

    cout << "Zehmet olmasa adinizi ve soyadinizi qeyd edin:\n";
    cout << "Ad: ";
    cin >> name;
    cin >> surname; // Soyadi daxil etmek ucun
    cout << "Zehmet olmasa mehsulun adini daxil edin:\n";
    cin >> mehsul_adi;
    cout << "Zehmet olmasa mehsulun qiymetini daxil edin:\n";
    cin >> mehsul_qiymeti;
    cout << "Zehmet olmasa EDV faizini daxil edin:\n";
    cin >> EDV_faizi;

    double umumi_EDV = (mehsul_qiymeti * EDV_faizi) / 100;
    double umumi_mebleg = mehsul_qiymeti + umumi_EDV;

    cout << "\nTesekkurler, " << name << " " << surname << "!" << endl;
    cout << "Mehsul: " << mehsul_adi << endl;
    cout << "Umumi mebleg: " << umumi_mebleg << " AZN-dir." << endl;
    cout << "Sagolun! Ugurlar!" << endl;

    return 0;
}
