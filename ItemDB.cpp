#include "ItemDB.h"
#include "ReadUtils.h"

DB::DB(){
  numGames = 0;
}

int DB::readGame(){
  ifstream GameFile("videogames.txt");
  numGames = 0;
  while(GameFile.peek() != EOF){
    games[numGames].readGame(GameFile);
    numGames++;
  }
  return numGames;
}

void DB::printArrayToScreen(){
    for (int index = 0; index < numGames; index++) {
        cout << "Index " << index << ": ";
         games[index].printGame(cout);
    }
}
void DB::printArrayToFile(const char fileName[]) {
    ofstream outFile(fileName);
    for (int index = 0; index < numGames; index++) {
        games[index].printGame(outFile);
    }
}
void DB::addGame(){
  games[numGames].readGameUser();
  numGames++;
}

void DB::removeGame(){
  int index = readInt("which index would you like to remove?");
  if (index >= 0){
    for(int delIndex = index; delIndex < numGames - 1; delIndex++){
      games[delIndex] = games[delIndex + 1];
    }
  }
  
}

void DB::searchGame() {
  int numSales = readInt("enter the number of sales");
    for (int index = 0; index < numGames; index++) {
      if(games[index].getSales() > numSales){
        cout << "Index " << index << ": ";
       games[index].printGame(cout);
        }
    }
}



