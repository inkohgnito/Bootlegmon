#pragma once

#include <iostream>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include "pokemon.h"
#include "moves.h"

class PokemonReader
{
    public:
        // Constructor
        PokemonReader(std::string pokemon_file_path, std::string move_file_path);

        // Returns a Pokemon object with the stats of the pokemon with name pokemon_name.
        Pokemon MakePoke(std::string pokemon_name);

       // Returns a Move struct with the stats of the move with index move_index.
        Move MakeMove(int move_index);

        // Prints out the stats of the Pokemon with name pokemon_name. Used for debugging.
        void MakePokemonReport(std::string pokemon_name);

        // Prints out the stats of the move with move index move_index. Used for debugging.
        void MakeMoveReport(int move_index);

        // Blank function used for prototyping.
        void PrototypeGet();

    private:
        boost::property_tree::ptree poke_root;
        boost::property_tree::ptree move_root;
};
