#include <iostream>
#include <vector>
using namespace std;

class Video{
    private:
        int ID;
        String nombre;
        Tiempo duracion;
        String genero;
        double calificacion;
    public:
        virtual mostrar(String);
        virtual mostrar(double);
        Video(int, String, Tiempo, String, double);
};