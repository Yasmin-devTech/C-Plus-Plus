#include <iostream>

using namespace std;

int main()
{
    float moeda, real;
 

    cout << "Digite o número da moeda que deseja converter: " << endl;

    cout << "1 - Baht Tailandês" << endl;
    cout << "2 - Boliviano" << endl;
    cout << "3 - Dolar Americano" << endl;
    cout << "4 - Dolar Canadense" << endl;
    cout << "5 - Euro" << endl;
    cout << "6 - Franco suíço" << endl;
    cout << "7 - Libra Egípcia" << endl;
    cout << "8 - Libra Esterlina" << endl;
    cout << "9 - Peso Chileno" << endl;
    cout << "10 - Peso Colombiano" << endl;
    cout << "11 - Peso Cubano" << endl;
    cout << "12 - Peso Mexicano" << endl;
    cout << "13 - Won Sul-coreano" << endl;
    cout << "14 - Yen" << endl;  
    cin >> moeda;

    cout << "Digite a quantidade de reais que deseja converter: " << endl;
    cin >> real;


    if (moeda == 1){
        moeda = real/0.17;
        cout << "O valor convertido é TBH$ " << moeda << endl;
    }
    else if (moeda == 2){
             moeda = real/0.87 ;
             cout << "O valor convertido é de BOB$ " << moeda << endl;
    }                                
    else if (moeda == 3){
             moeda = real/6.15;
             cout << "O valor em convertido é de US$ " << moeda << endl;
    }                    
    else if (moeda == 4){
             moeda = real/4.26;
             cout << "O valor convertido é CAD$ " << moeda << endl;
    }             
    else if (moeda == 5){
             moeda/6.33;
             cout << "O valor convertido é €$ " << moeda << endl;
    }                                      
    else if (moeda == 6){
             moeda = real/6.75;
             cout << "O valor convertido é CHF$ " << moeda << endl;
    }                                               
    else if (moeda == 7){
             moeda = real/0.12;
             cout << "O valor convertido é EGP$ " << moeda << endl;                                  
    }
    else if (moeda == 8) {
             moeda = real/7.63;
             cout << "O valor convertido é GBP$ " << moeda << endl;                       
    }
    else if (moeda == 9){
             moeda = real/0.006;
             cout << "O valor convertido é CLP$ " << moeda << endl;
    }
    else if (moeda == 10){
             moeda = real/0.0014;
             cout << "O valor convertido é COP$ " << moeda <<endl;
    }
    else if (moeda == 11){
             moeda = real/0.25;
             cout << "O valor convertido é CUP$ " << moeda << endl;
    }
    else if (moeda == 12){
             moeda = real/0.29;
             cout << "O valor convertido é MXN$ " << moeda << endl;
    }
    else if (moeda == 13){
             moeda = real/0.0042;
             cout << "O valor convertido é KWR$ " << moeda << endl;
    }
    else if (moeda == 14){
             moeda = real/0.039;
             cout << "O valor convertido é JPY$ " << moeda << endl;
    }
   
    return 0;
}

