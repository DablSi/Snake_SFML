#include "Game.h"

int main(int argc, char const *argv[])
{
    Game game(sf::VideoMode(800, 600), "Test Title!");

    game.run();

    return 0;
}
