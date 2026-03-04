#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    double cateto1, cateto2, hipotenusa;

    cout << "Digite o valor do primeiro cateto: " << endl;
    cin >> cateto1;

    cout << "Digite o valor do segundo cateto: " << endl;
    cin >> cateto2;

    hipotenusa = pow(cateto1, 2) + pow(cateto2, 2);

    cout << "O valor da hipotenusa é " << sqrt(hipotenusa) << endl;




 return 0;
}
