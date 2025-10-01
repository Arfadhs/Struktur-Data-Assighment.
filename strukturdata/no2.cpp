#include <iostream>
using namespace std;

string angka[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
string huruf(int x) {
    if (x < 12) {
        return angka[x];
    } else if (x < 20) {
        return angka[x-10] + " belas";
    } else if (x < 100 && x%10 == 0) {
        return angka[x/10] + " puluh";
    } else if (x < 100) {
        return angka[x/10] + " puluh " + angka[x%10];
    } else if (x == 100) {
        return "seratus";
    }
    return "";
}
int main() {
    int x;
    cin >> x;
    cout << x << " : " << huruf(x) << endl;
}

