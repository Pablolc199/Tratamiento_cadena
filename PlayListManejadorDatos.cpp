#include<iostream>
#include<List>
#include"PlayList.cpp"
using namespace std;
class PlayListManejadorDatos{
    public:
        virtual list<PlayList> cargar() = 0;
        virtual void guardar(PlayList can) = 0;
};