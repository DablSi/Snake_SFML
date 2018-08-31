#ifndef GAME_H
#define GAME_H

#include "EventSystem.h"

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

#include <memory>
#include <string>

#include "GameLoop.h"

class GameLoop1;

class Game {
public:
    ~Game();

    void init(const sf::VideoMode& mode, const std::string& title);
    void run();

    static Game* get_instance();

    sf::RenderWindow* get_window();

private:
    Game();

    std::unique_ptr<sf::RenderWindow> m_window;
    std::unique_ptr<GameLoop1> m_gameloop;
    EventSystem* m_eventsystem;

    static std::unique_ptr<Game> m_game;
};

#endif