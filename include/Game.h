#pragma once

#include "GameLoop.h"
#include "EventSystem.h"

#include <memory>
#include <string>

class Game {
public:
    Game(const sf::VideoMode& mode, const std::string& title);
    ~Game();

    void run();

    EventSystem* get_event_system();

private:
    std::unique_ptr<sf::RenderWindow> m_window;
    std::unique_ptr<GameLoop> m_gameloop;
    std::unique_ptr<EventSystem> m_eventsystem;
};