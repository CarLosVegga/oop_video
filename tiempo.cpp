#include "tiempo.h"

Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

Tiempo::Tiempo(int _segundos){
    horas = _segundos/3600;
    minutos = (_segundos-horas*3600)/60;
    segundos = _segundos - horas*3600 - minutos*60;
}

string Tiempo::getTiempo(){
    string mensaje = to_string(horas) + " horas " + to_string(minutos) + " minutos " + to_string(segundos) + " segundos";
    return mensaje;
}