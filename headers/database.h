#ifndef DATABASE_H
#define DATABASE_H
#include "pokemon.h"

#include <string>
#include <iostream>
using namespace std;
#include <ostream>
#include <vector>

class Database

{
private:

    // name of the pokemon
    string name;

    //Vector that has all the information about the 155 pokemons
    vector<Pokemon *> pokeTeam;
    //Vector that has the information about the user selected pokemons
    vector<Pokemon *> userselected;
    //Vector that has the information about the program generated pokemons
    vector<Pokemon *> opponent;
    
    // stored the pokemontype.csv as an array
    float arrayTypedata[18][18];

    //has the names of pokemon types
    const string arrayType[18] = {"Normal","Fire","Water","Electric","Grass","Ice","Fighting","Poison","Ground","Flying","Psychic","Bug","Rock","Ghost","Dragon","Dark","Steel","Fairy"};

public:

    //Default
    Database();

    //Default
    Database(string name);

    void setPokemontype();
    //opens the pokemone.csv file and pushes it in the pokeTeam vector
    void pokemonstats();
    //opens the pokemontype.csv file and puts it in the arrayTypedata
    void pokemontype();
    //gives the index of the type of the pokemon
    int getindex(string type);

    // void pokemontype();

    //prints all 155 pokemons
    void printallpokemon();
    //compares pokemons in winner vector with the ones in pokeTeam vector and gives a team to beat them
    void comparePokemons();
    //prints user selected pokemons
    // void printwinners();
    //prints program generated pokemons
    // void printopponent();

    //adds the user selected pokemon to the winner vector
    void addpokemon(int indexie);

    ///checks to see if the pokemons in the two vectors are same or not
    //This was done to make sure the same pokemon doesnot exist in both teams
    bool pokemoncheck(vector <Pokemon*>a, vector <Pokemon*>b,int j);

    //print out the comparison and the winner of the battle
    void printwins( vector <Pokemon*>d, vector <Pokemon*>e,int i);
};

#endif
