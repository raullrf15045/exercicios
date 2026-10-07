#include <iostream>

using namespace std;

/*
a. <0: Numero negativo
b. =0: numero neutro
c. >0 e <100: numero positivo pequeno
d. tudo o resto: numero enorme
*/

int main () {

    int numero1;

    cout << "Qual numero vais escolher?\n";
    cin >> numero1;

    if (numero1 < 0){
    cout << "Numero negativo" << endl;

    } else if (numero1 ==0) {
    cout << "Numero neutro" << endl;

    } else if (numero1 >0 && numero1 <100 ) {
    cout << "Nemuro positivo pequeno" << endl;

    } else if (numero1 >=100) {
    cout << "Numero enorme" << endl;

    }



}
