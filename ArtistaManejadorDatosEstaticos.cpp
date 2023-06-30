#include <iostream>
#include <List>
#include <fstream>
// #include "Artista.cpp"
#include "ArtistaManejadorDatos.cpp"
using namespace std;
#include <sstream>
#include <string>
using namespace std;

class ArtistaManejadorDatosEstaticos: public ArtistaManejadorDatos 
{
    public:
        ArtistaManejadorDatosEstaticos()
        {
            cout<<"Creating subclass type"<<endl;
        }
        list<Artista> cargar()
        {
            list<Artista> listaArtistas;
            Artista a1;
            Artista a2;
            Artista a3;
            Artista a4;
            Artista a5;
            Artista a6;

            listaArtistas.push_back(a1);
            listaArtistas.push_back(a2);
            listaArtistas.push_back(a3);
            listaArtistas.push_back(a4);
            listaArtistas.push_back(a5);
            listaArtistas.push_back(a6);
            return listaArtistas;
        }
        void guardar(Artista artist)
        {

        }
};
