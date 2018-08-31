#include "Game.h"

int main(int argc, char const *argv[])
{
    Game* game = Game::get_instance();

    game->init(sf::VideoMode(200, 200), "Test title!");

    game->run();

    return 0;
}
