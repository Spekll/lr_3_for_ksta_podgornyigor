#include <iostream>

using namespace std;

int fibbonachi(int N)
{
    int ticker = 0;
    int a = 0, b = 1, nextTerm;
    cout <<"Ryad chisel Fobonacci do " << N << "iteraciy: ";

    for (int i = 1; i <= N; i++) {
        if (ticker == 3)
        {

=======
        if (counter == 3)
            {

            cout << a << " ";
            ticker = 0;
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        ticker++;
    }
    return 0;
}

int main () {
    int iteration = 0;
    cout << "Vvedite kolichestvo iteraciy N: ";
    cin >> iteration;
    fibbonachi(iteration);
}
