#include "datatypes.h"
accumulateclass Human{               //abstract class
    private:
        RealF Creator_ID;
        std::string name_creator;
    public:
        std::string Name_character;
        UInt16 age;
        void SetCreator_ID(RealF);
        void SetNameofCreator(std::string);
        std::string GetNameofCreator();
        RealF GetVersion();
        Human(RealF Creator_ID, std::string name_creator, std::string Name_character, UInt16 age);
        ~Human();
};


class Spectator:public Human {
        private:


        public:
        UInt16 SeatNo;
        char BlockLetter;
        std::string JerseyColor;
        std::string FavouritePlayer;
        Spectator(UInt16,char,std::string, std::string);
        ~Spectator();

};


class Player:public Human {
    private:

    public:
        std::string TeamName;
        std::string JerseyColor;
        UInt16 JerseyNumber;
        std::string Position;
        Player(std::string,std::string,UInt16,std::string);
        ~Player();

};


class Refree:public Human {
    private:

    public:
        std::string JerseyColor;
        std::string WatchBrand;

};


class Manager:public Human {
    private:

    public:
        std::string ClothWorn;
        std::string TeamName;
        bool InsideBox;

};



