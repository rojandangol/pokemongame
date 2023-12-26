#ifndef POKEMON_H
#define POKEMON_H
using namespace std;
#include <string>

//enum Element {Fire = 1, Water = 2, Grass = 3};

class Pokemon
{
private:
  //#,Name,Type 1,Type 2,Total,HP,Attack,Defense,Sp. Atk,Sp. Def,Speed,Generation,Legendary
  //
  //Element thisType;

  //attributes:
  //pokemon's index
  int pokeindex;
  //name of the pokemon
  string name;
  //pokemon type
  string firsttype;
  // string secondtype;
  ///total hitpoints
  float hitp;
  ///HP
  float hp;
  ///attack points
  float attack;
  //defense points
  float defense;
  //Specialattack points
  float spattack;
  //Specialdefense points
  float spdefense;
  //speed of the pokemon
  float speed;
  //what generation it belongs to
  float generation;
  //if it is legendary or not
  string legendary;
  //multiplier from the Pokemontype.csv file
  float multiplier; 


 public:
  //default
  Pokemon();

  //default
  Pokemon(string line);
  //to copy constructor
  Pokemon( const Pokemon* &other);

  // void getPokemonstats();

  //parse the line
  ///parsing the words to get each information in this format from the csv file
  //#,Name,Type 1,Type 2,Total,HP,Attack,Defense,Sp. Atk,Sp. Def,Speed,Generation,Legendary
  string parsewords(string &line);
  //print all the details of the selcted pokemon
  void printpokemon();

  //returns pokemon's name
  string getname();


  //gets the totalstats of a pokemon and multiplies it to the multiplier
  float gettotalstats();

  //int multiplystats();

  //sets multiplier as per that from the Pokemontype.csv
 void setmultiplier(float value);

 //gets the type of the pokemon
 string getfirstType();


 //bool operator<(Pokemon other) const;
 // Pokemon p1(Bulbasaur)
 // Pokemon p2(Mew2)
 // if(p1 < p2){
 //   opponent.pushBack(p2)

 //void printStatsForOpponent(int opType);




};

#endif