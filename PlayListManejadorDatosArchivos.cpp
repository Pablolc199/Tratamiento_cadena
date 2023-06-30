#include <iostream>
#include <List>
#include <fstream>
#include"PlayListManejadorDatos.cpp"
using namespace std;
#include <sstream>
#include <string>
class PlayListManejadorDatosArchivos:public PlayListManejadorDatos{
    public:
    PlayListManejadorDatosArchivos()
        {
            cout<<"Creating subclass type"<<endl;
        }
    list<PlayList>cargar(){
        list<PlayList> listaPlaylist;
        ifstream cin3("playlist.csv");
        string nombre;
        int cantidad, nro;
        string vacio;
        string nada="";
        string aux;
        bool hay;
        string termino;
        //Vivamus tortor. Duis mattis egestas metus. Aenean fermentum.,consequat metus sapien ut nunc vestibulum ante ipsum primis in faucibus,"
        //[{10},{15},{30},{11}]"
        //[]
        while(cin3.peek() != EOF){
            getline(cin3, nombre,'[');
            getline(cin3, aux,']');
            do
            {
                if (aux==nada){
                    cout<<"acabo";
                    hay=false;
                    cantidad=0;
                }else {
                    getline(cin3, vacio,']');
                    cantidad++;
                }

            } while (hay==false);
             getline(cin3, termino);
            nro++;
            //Cancion c(titulo, min, seg,aux, puntu);
            cout<<"Nro "<< nro<< ".-  " <<nombre <<" "<<endl;
            
            nro++;

        }
        
        return listaPlaylist;
    }
    void guardar(Cancion can){
        /*ofstream cout3;
        cout3.open("canciones.txt", std::ios_base::app);
        std::stringstream ss;
        std::int cc;*/



    }

};
/*
list<Cancion>cargar(){
        list<Cancion> listaCanciones;
    
        ifstream cin3("canciones.txt");
        string titulo;
        int min,vis,puntu;
        int seg;
        string a,b,c,d;
        int nro=1;
        while(cin3.peek() != EOF){
            //Call Me Crazy: A Five Film,
            //5 :
            //08 
            //PM,
            //233,
            //4
            getline(cin3, titulo,',');
            cin3>>min;
            getline(cin3, a,':');
            cin3>>seg;
            getline(cin3, b,',');
            cin3>>vis;
            getline(cin3, c,',');
            cin3>>puntu;
            getline(cin3, d);
            cout<<"Nro "<< nro<< ".-  " <<titulo <<" "<< min << ":"<< seg <<" ,"<<vis <<", "<<puntu <<endl;
            nro++;

        }
        
        return listaCanciones;
    }*/