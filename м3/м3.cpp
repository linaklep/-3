#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    setlocale(LC_ALL, "Ukrainian");

    int n;
    cout << "Введiть номер числа Фiбоначчi: ";
    cin >> n;

    // che
    if (n < 0) {
        cout << "Введiть додатне цiле число." << endl;
    }
    else {
        cout << n << "-е число Фiбоначчi: " << fibonacci(n) << endl;
    }

    return 0;
}
