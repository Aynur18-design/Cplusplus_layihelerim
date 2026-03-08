#include <iostream>
using namespace std;

int main() {
    string name, surname;
    int hours;
    double hourly_salary, total_salary, addition_salary;

    cout << "Zehmet olmasa adinizi ve soyadinizi qeyd edin:\n";
    cout << "Ad: "; 
    cin >> name;
    cout << "Soyad: ";
    cin >> surname;
    cout << "Nece saat isleyirsiniz?" << endl;
    cin >> hours;
    cout << "Saatliq maasiniz ne qederdir?" << endl;
    cin >> hourly_salary;

    if (hours <= 40) {
        total_salary = hours * hourly_salary;
        cout << "Sizin toplam maasiniz: " << total_salary << " AZN-dir." << endl;
    } 
    else {
        addition_salary = (hours - 40) * (hourly_salary * 1.5);
        total_salary = (40 * hourly_salary) + addition_salary;
        cout << name << " " << surname << " iscinin toplam maasi: " << total_salary << " AZN-dir." << endl;
    }
    return 0;
}
