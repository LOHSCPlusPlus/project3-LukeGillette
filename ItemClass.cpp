#include "ItemClass.h"
#include "ReadUtils.h"

Videogame::Videogame(){
  for(int index = 0; index < MAX_CHAR_SIZE; index++){
    Name[index] = 0;
    Platform[index] = 0;
    Release[index] = 0;
    Developer[index] = 0;
    Publisher[index] = 0;
  }
  Sales = 0;
}

void Videogame::readGame(ifstream &inFile){
  inFile.get(Name, Videogame::MAX_CHAR_SIZE,';');
  inFile.ignore(100,';');
  inFile >> Sales;
  inFile.ignore(100,';');
inFile.get(Platform,Videogame::MAX_CHAR_SIZE,';');
  inFile.ignore(100,';'); 
inFile.get(Release,Videogame::MAX_CHAR_SIZE,';');
  inFile.ignore(100,';');
  inFile.get(Developer, Videogame::MAX_CHAR_SIZE,';');
  inFile.ignore(100,';');
  inFile.get(Publisher, Videogame::MAX_CHAR_SIZE,'\n');
  inFile.ignore(100,'\n');
}

void Videogame::readGameUser(){
  cout << "enter the name";
  cin.get(Name, Videogame::MAX_CHAR_SIZE,'\n');
  cin.ignore(100,'\n');
  Sales = readDouble("enter the sales");
  cin.ignore(100,'\n');
  cout << "enter the platform";
  cin.get(Platform, Videogame::MAX_CHAR_SIZE,'\n');
  cin.ignore(100,'\n');
  cout << "enter the release date";
  cin.get(Release, Videogame::MAX_CHAR_SIZE,'\n');
  cin.ignore(100,'\n');
  cout << "enter the developer";
  cin.get(Developer, Videogame::MAX_CHAR_SIZE,'\n');
  cin.ignore(100,'\n');
  cout << "enter the publisher";
  cin.get(Publisher, Videogame::MAX_CHAR_SIZE,'\n');
  cin.ignore(100,'\n');
}

void Videogame::printGame(ostream &out){
    out << Name << ";";
    out << Sales << ";";
    out << Platform << ";";
    out << Release << ";";
    out << Developer << ";";
    out << Publisher << endl;
  }

double Videogame::getSales(){
  return Sales;
}