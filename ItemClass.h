#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


class Videogame{
  public:
  Videogame();
  void readGame(ifstream &inFile);
  void readGameUser();
  void printGame(ostream &out);
  double getSales();

  private:
  enum{MAX_CHAR_SIZE = 100};
  char Name[MAX_CHAR_SIZE];
  double Sales;
  char Platform[MAX_CHAR_SIZE];
  char Release[MAX_CHAR_SIZE];
  char Developer[MAX_CHAR_SIZE];
  char Publisher[MAX_CHAR_SIZE];
  };