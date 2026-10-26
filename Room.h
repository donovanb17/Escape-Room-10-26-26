#include "Room.h"

class Room{
    private:
        Player * player; //All of the different rooms referring to same player (reference to player)
        //ToDo: what type should map be: some kind of array of type char

    public:
        Room(int x, int y); // Room constructor, pass in x and y
        ~Room(); // Room destructor
        void draw(); // need some sort of draw function (so room may draw itself)
}