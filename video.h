
class Video{
    private:
        int ID;
        string nombre;
        Tiempo duracion;
        string genero;
        double calificacion;
    public:
        virtual mostrar(string);
        virtual mostrar(double);
        Video(int, string, Tiempo, string, double);
};