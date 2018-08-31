#pragma once

#include "EventSystem.h"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Game.h"

class GameLoop {
public:
    GameLoop();
    ~GameLoop();
    
    void load_resources();
    void init();
    void update();
    void render(sf::RenderTarget* renderer);
};