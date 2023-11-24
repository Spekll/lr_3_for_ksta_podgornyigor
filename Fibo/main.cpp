#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Vvedite kol-vo iteraciy N: ";
    cin >> N;

    int a = 0, b = 1, nextTerm;
    cout << "Ryad chisel Fibonacci do " << N << " iteraciy: ";

    for (int i = 1; i <= N; ++i)
        {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        }
    return 0;
}
