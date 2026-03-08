#include <iostream>
using namespace std;

int main() {
    string name, surname;
    int yash;
    int it; // Is tecrubesi
    double maas;

    cout << "Zehmet olmasa adinizi ve soyadinizi qeyd edin:\n";
    cout << "Ad: ";
    cin >> name;
    cout << "Soyad: ";
    cin >> surname;
    cout << "Yashinizi qeyd edin:\n";
    cout << "Yash: ";
    cin >> yash;

    if (yash < 18) {
        cout << "Ise qebul olunmadi!" << endl;
        cout << "Yash 18 den boyuk olmalidir!" << endl;
    }
    else {
        cout << "Is tecrubeniz ne qederdir?" << endl;
        cin >> it;
        cout << "Ne qeder maas gozleyirsiniz?" << endl;
        cin >> maas;

        if (it > 2 && maas <= 1500) {
            cout << "Tebrikler, ise qebul olundunuz!!" << endl;
        }
        else if (it > 2 && maas > 1500) {
            cout << "Gozlediyiniz maas cox yuksekdir!!" << endl;
        }
        else if (it < 2) {
            cout << "Hazirda tecrubeniz kifayet deyil!!" << endl;
        }
        else {
            cout << "Sagolun, ugurlar!!" << endl;
        }
    }

    return 0;
}
