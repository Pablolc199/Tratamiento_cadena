#include <iostream>
#include <List>
#include "CancionManejadorDatos.cpp"
#include "ArtistaManejadorDatos.cpp"
#include "Artista.cpp"
#include <fstream>
using namespace std;

class CancionManejadorDatosEstaticos: public CancionManejadorDatos 
{
    public:
        CancionManejadorDatosEstaticos()
        {
            cout<<"Creating subclass type"<<endl;
        }
        list<Cancion> cargar(){
            list<Cancion> ListaCa;
            return ListaCa;
            
        }
        void guardar(Cancion cancion)
        {
            
        };
};
