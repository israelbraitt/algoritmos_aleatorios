/*
Converte um tempo em segundo e informa-o no formato horas:minutos:segundos.
*/

#include <iostream>
 
using namespace std;
 
int main() {
    int duracao, horas, minutos, segundos;
    
    cin >> duracao;
    
    if (duracao >= 60){
        minutos = duracao/60;
        duracao -= 60*minutos;
        
        segundos = duracao%60;
        
        if (minutos >= 60){
            horas = minutos/60;
            minutos -= 60*horas;
        }else{
            horas = 0;
        }
    }else{
        horas = 0;
        minutos = 0;
        segundos = duracao;
    }
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
 
    return 0;
}
