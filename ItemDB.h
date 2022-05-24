#include "ItemClass.h"

class DB{
public:
DB();
int readGame();
void printArrayToScreen();
void printArrayToFile(const char fileName[]);
void addGame();
void removeGame();
void searchGame();

private:
enum {MAX_GAMES = 300};
Videogame games[MAX_GAMES];
int numGames;
};