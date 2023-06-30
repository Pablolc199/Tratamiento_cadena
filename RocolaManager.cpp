#include<iostream>
#include "ArtistaManejadorDatosArchivo.cpp"
#include "ArtistaManejadorDatosJason.cpp"
#include "ArtistaManejadorDatosEstaticos.cpp"
#include "CancionManejadorDatosArchivo.cpp"
#include "CancionManejadorDatosEstaticos.cpp"
#include"DataManager.cpp"
using namespace std;
//
class RocolaManager{
    private:
    static RocolaManager* instanc; //lo mismo que el data manager solo que ya no resive punteros de artista y eso sino resive puntero de data manager
    DataManager* datamanager;
    RocolaManager(DataManager &amd){
        datamanager=&amd;
    }
    public:
    //los mismo que data manager
    static RocolaManager* getInstanc(DataManager &amd){
        if (instanc=nullptr){
            instanc= new RocolaManager(amd);
        }
        return instanc;
    }
    //Aqui es la funcion agregar que se llamara afuera
    //Cambias variables y eso  
    void ejecutar(){
        int op; //variable
        DataManager *dm1;
        //Cambias este menu
        cout<<"Que tipo de dato desea leer?"<<endl;
        cout<<"1.-Estatico"<<endl;
        cout<<"2.-Archivo"<<endl;
        cout<<"3.-json"<<endl;
        cin>>op;
        ArtistaManejadorDatos *l;
        CancionManejadorDatos*p;
        if(op==1){
            l = new ArtistaManejadorDatosEstaticos();
            p =new CancionManejadorDatosEstaticos();
        }else if(op==2){
            l = new ArtistaManejadorDatosJason();
            p = new CancionManejadorDatosArchivo(*l);
        }else if(op==3){
            l =new ArtistaManejadorDatosJason(); //tu nueva clase jason
            p = new CancionManejadorDatosArchivo(*l);
        }
        dm1 = DataManager::getInstance(*l,*p);
    l->cargar();
        p->cargar();
    }
};
RocolaManager* RocolaManager::instanc = nullptr;