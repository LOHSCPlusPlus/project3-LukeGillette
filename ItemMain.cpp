#include <iostream>
using namespace std;

void menu(){
  DB Game;
 numGames = readGame(Game);
   string option;
  while(option != "quit"){
  cout << "Car File:" << endl << "List" << endl << "Remove" << endl << "Add" << endl << "search" << endl << "Quit" << endl;
  cin >> option;
  if (option == "List"){
    Game.printArrayToScreen();
    }
  else if (option == "Remove"){
    Game.removeGame();
    numGames--;
  }
  else if (option == "Add"){
    Game.addGame();
    numGames++;
  }
  else if (option == "search"){
    Game.searchGame();
  }
  else if (option == "quit"){
      return;
  }
  else{
    cout << "not a valid option" << endl;
  }
}
  }
int main() {
menu();

  
    return 0;
}
