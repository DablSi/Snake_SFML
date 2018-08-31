#ifndef GAMELOOP_H
#define GAMELOOP_H

#include "EventSystem.h"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Game.h"

class GameLoop1 {
public:
    GameLoop1();
    ~GameLoop1();
    
    void load_resources();
    void init();
    void update();
    void render(sf::RenderTarget* renderer);
};

#endif