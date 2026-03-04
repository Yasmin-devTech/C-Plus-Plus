#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
    

    double a, b, c, delta, x1, x2;

    cout << "Digite o valor de a: " << endl;
    cin >> a; 

    cout << "Digite o valor de b: " << endl;
    cin >> b; 

    cout << "Digite o valor de c: " << endl;
    cin >> c; 

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0){
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b + sqrt(delta)) / 2 * a;

        cout << "O valor de x1 é " << x1 << endl;
        cout << "O valor de x2 é " << x2 << endl;

    }
    else if (delta == 0) {
        x1 = -b/(2 * a);
        cout << "O valor de x1 é " << x1 << endl;
    }
    else if (delta < 0) {
        cout << "Não há raízes reais" << endl;
    }



    return 0;
}
