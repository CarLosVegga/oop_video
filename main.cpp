/* INSTITUTO TECNOLÓGICO Y DE ESTUDIOS SUPERIORES DE MONTERREY
                Campus Puebla
Carlos Alberto Vega Pérez A01731416
Angel Rubén Vázquez Rivera A01735407*/

#include <iostream>
#include <vector>
using namespace std;

#include "tiempo.cpp"
#include "video.cpp"
#include "episodio.cpp"
#include "serie.cpp"

int main(){
    Tiempo t1(2,15,20);
    cout << t1.getTiempo() << endl;

    Tiempo t2(8120);
    cout << t2.getTiempo() << endl;
}