#include <iostream>

using namespace std;

int main()
{
    int N;
    int counter = 1;
    cout << "Vvedite kol-vo iteraciy N:";
    cin >> N;
    int a = 0, b = 1, nextTerm;
    cout <<"Ryad chisel Fobonacci do " << N << "iteraciy: ";


    for (int i = 1; i <= N; i++) {

        if (counter == 3)
            {

            cout << a << " ";
            counter = 0;
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        counter++;
    }
    return 0;
}
