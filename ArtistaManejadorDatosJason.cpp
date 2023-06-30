#include <iostream>
#include <List>
#include <fstream>
#include "ArtistaManejadorDatos.cpp"
using namespace std;
#include <sstream>
#include <string>

class ArtistaManejadorDatosJason: public ArtistaManejadorDatos 
{


    public:

        ArtistaManejadorDatosJason()
        {
            cout<<"Creating subclass type"<<endl;
        }
        list<Artista> cargar()
        {
            //lista donde se almacenaran los artistas leidos
            list<Artista> listaArtistas;

            ifstream cin4("artistas.json");
            string nombre, procedencia, genero;
            string basura,basura2,basura3;
            //cin>>a;
            int nro =1;
            int n=0;
            //cin4.peek() != EOF
            //la funcion peek() verifica que no estemos al final del archivo
            while(n!=3)// corroboramos que no hayamos llegado a la ultima linea, es decir al final del archivo
            {
                for(int i=0;i<2;i++){
                     getline(cin4,basura);
                }
                //nombre
                getline(cin4,basura2,'"');
                getline(cin4,basura2,':');
                getline(cin4,basura2,'"');
                getline(cin4,nombre,'"');
                getline(cin4,basura3);
                // procedencia
                getline(cin4,basura2,'"');
                getline(cin4,basura2,':');
                getline(cin4,basura2,'"');
                getline(cin4,procedencia,'"');
                getline(cin4,basura3);
                //genero
                getline(cin4,basura2,'"');
                getline(cin4,basura2,':');
                getline(cin4,basura2,'"');
                getline(cin4,genero,'"');
                getline(cin4,basura3);
                cout<<"Nro "<< nro<< ".-  " <<nombre <<" "<< procedencia << " "<< genero <<endl;
                nro++;
                n++;

            }
            return listaArtistas;
        }
        void guardar(Artista artist)
        {
        }
};

