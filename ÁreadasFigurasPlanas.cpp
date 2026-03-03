#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int area, figura, lado, altura, base, raio, bM, bm;

	cout << "Escolha qual figura deseja calcular a área" << endl;
	cout << "1 - Área do quadrado" << endl;
	cout << "2 - Área do retângulo" << endl;
	cout << "3 - Área do triângulo" << endl;
	cout << "4 - Área do circulo" << endl;
	cout << "5 - Área do trapézio" << endl;
	cin >> figura;

	switch (figura) {

	case 1:
		   cout << "Digite o tamanho do lado do quadrado: " << endl;
		   cin >> lado;

		   area = pow(lado, 2);

		   cout << "A área do quadrado é: " << figura << endl;
		   break;

	case 2:
		   cout << "Digite o tamanho do altura: " << endl;
		   cin >> altura;

		   cout << "Digite o tamanho da base: " << endl;
		   cin >> base;

		   area = base * altura;

		   cout << "A área do retângulo é " << area << endl;
		   break;

	case 3:
		   cout << "Digite o tamanho da base: " << endl;
		   cin >> base;

		   cout << "Digite o tamnho da altura: " << endl;
		   cin >> altura;

		   area = (base * altura) / 2;

		   cout << "A área do triângulo é " << area << endl;
		   break;

	 case 4:
		    cout << "Digite o tamanho do raio: " << endl;
		    cin >> raio;

		    area = 3.14 * pow(raio, 2);

		    cout << "A área do circulo é " << area << endl;
			break;

	 case 5: 
		    cout << "Digite o tamanho da base maior" << endl;
			cin >> bM;

			cout << "Digite o tamanho da base menor: " << endl;
			cin >> bm;

			cout << "Digite o tamanho da altura: " << endl;
			cin >> altura;

			area = ((bM + bm) * altura) / 2;

			cout << "A área do trapézio é " << area << endl;
			break;

	 default:
		    cout << "Só existem 5 opções" << endl;
	}

	return 0;
}
