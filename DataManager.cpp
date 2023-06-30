#include<iostream>
#include"CancionManejadorDatos.cpp"
#include"ArtistaManejadorDatos.cpp"
using namespace std;
#ifndef DataManager_H
#define DataManager_H
class DataManager{
    private:
    static DataManager* instance;
    ArtistaManejadorDatos* artistaDataManager;
    CancionManejadorDatos* cancionDataManager;
    DataManager(ArtistaManejadorDatos &amd, CancionManejadorDatos &cmd){
        artistaDataManager=&amd;
        cancionDataManager=&cmd;
    }
    public:
    static DataManager* getInstance(ArtistaManejadorDatos &amd, CancionManejadorDatos &cmd){
        if (instance=nullptr){
            instance= new DataManager(amd, cmd);
        }
        return instance;
    }
};
DataManager* DataManager::instance=nullptr;
#endif