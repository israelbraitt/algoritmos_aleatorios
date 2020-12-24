/*
A partir de um valor inteiro fornecido, calcula o menor número de notas (cédulas) no qual 
o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostra o valor lido e a relação de notas necessárias.
*/

#include <iostream>
 
using namespace std;
 
int main() {
    int n, n_copia, x100, x50, x20, x10, x5, x2, x1;
    
    cin >> n;
    n_copia = n;
    
    x100 = n/100;
    n -= (x100*100);
    
    if (n >= 50){
        x50 = 1;
        n -= 50;
    }else{
        x50 = 0;
    }
    
    if (n >= 20){
        x20 = 1;
        n -= 20;
    }else{
        x20 = 0;
    }
    
    if (n >= 10){
        x10 = 1;
        n -= 10;
    }else{
        x10 = 0;
    }
    
    if (n >= 5){
        x5 = 1;
        n -= 5;
    }else{
        x5 = 0;
    }
    
    if (n >= 2){
        x2 = 1;
        n -= 2;
    }else{
        x2 = 0;
    }
    
    if (n >= 1){
        x1 = 1;
        n -= 1;
    }else{
        x1 = 0;
    }
    
    cout << n_copia << endl;
    cout << x100 << " nota(s) de R$ 100,00" << endl;
    cout << x50 << " nota(s) de R$ 50,00" << endl;
    cout << x20 << " nota(s) de R$ 20,00" << endl;
    cout << x10 << " nota(s) de R$ 10,00" << endl;
    cout << x5 << " nota(s) de R$ 5,00" << endl;
    cout << x2 << " nota(s) de R$ 2,00" << endl;
    cout << x1 << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}
