/*
A partir de um valor de ponto flutuante com duas casas decimais, calcula o menor número 
de notas e moedas no qual o valor pode ser decomposto. As notas consideradas são de 100, 
50, 20, 10, 5, 2 e 1. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.
A seguir mostra o valor lido e a relação de notas e moedas necessárias.
*/

#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    float n, n_copia;
    int n_decimal, x100, x50, x20, x10, x5, x2;
    int x1, x0_50, x0_25, x0_10, x0_05, x0_01;
    
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
        x20 = n/20;
        n -= x20*20;
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
        x2 = n/2;
        n -= x2*2;
    }else{
        x2 = 0;
    }
    
    if (n >= 1){
        x1 = 1;
        n -= 1;
    }else{
        x1 = 0;
    }
    
    if (n > 0){  // confere a existência de partes decimais
        // arendonda a parte decimal para o mais próximo, restringindo à duas casas decimais
        n = roundf(n*100)/100;
        // separa o valor da parte decimal para trabalhar como se fosse inteira
        n_decimal = n * 100;
    
        if (n_decimal >= 50){
            x0_50 = 1;
            n_decimal -= 50;
        }else{
            x0_50 = 0;
        }
        
        if (n_decimal >= 25){
            x0_25 = 1;
            n_decimal -= 25;
        }else{
            x0_25 = 0;
        }
        
        if (n_decimal >= 10){
            x0_10 = n_decimal/10;
            n_decimal -= x0_10*10;
        }else{
            x0_10 = 0;
        }
        
        if (n_decimal >= 5){
            x0_05 = 1;
            n_decimal -= 5;
        }else{
            x0_05 = 0;
        }
        
        if (n_decimal >= 1){
            x0_01 = n_decimal/1;
            n_decimal -= x0_01*1;
        }else{
            x0_01 = 0;
        }
    }else{
        x0_50 = 0;
        x0_25 = 0;
        x0_10 = 0;
        x0_05 = 0;
        x0_01 = 0;
    }
    
    cout << "VALOR:" << n_copia << endl;
    cout << "NOTAS:" << endl;
    cout << x100 << " nota(s) de R$ 100.00" << endl;
    cout << x50 << " nota(s) de R$ 50.00" << endl;
    cout << x20 << " nota(s) de R$ 20.00" << endl;
    cout << x10 << " nota(s) de R$ 10.00" << endl;
    cout << x5 << " nota(s) de R$ 5.00" << endl;
    cout << x2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << x1 << " moeda(s) de R$ 1.00" << endl;
    cout << x0_50 << " moeda(s) de R$ 0.50" << endl;
    cout << x0_25 << " moeda(s) de R$ 0.25" << endl;
    cout << x0_10 << " moeda(s) de R$ 0.10" << endl;
    cout << x0_05 << " moeda(s) de R$ 0.05" << endl;
    cout << x0_01 << " moeda(s) de R$ 0.01" << endl;
    
    return 0;
}
