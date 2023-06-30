#include <iostream>
#include <vector>
#include "PlayList.cpp"
#include"DataManager.cpp"
#include"RocolaManager.cpp"
using namespace std;
int main()
{  
DataManager *dm1;
RocolaManager* rm1;
rm1=RocolaManager::getInstanc(*dm1);
rm1->ejecutar();
};

