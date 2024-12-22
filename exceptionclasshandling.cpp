#include <iostream>
#include <stdexcept>

using namespace std;

class Factorial {
private:
    int num;

public:
    Factorial(int n) : num(n) {}

    long long fact() {
        if (num < 0) throw runtime_error("Factorial is not defined for negative numbers.");
        if (num == 0) throw runtime_error("Factorial of zero is not defined.");

        long long result = 1;
        for (int i = 1; i <= num; i++) result *= i;
        return result;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        Factorial factorial(num);
        cout << "Factorial of " << num << " is: " << factorial.fact() << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
