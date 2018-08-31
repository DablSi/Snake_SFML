#include "Game.h"

Game::Game(const sf::VideoMode& mode, const std::string& title)
{
    m_window = std::make_unique<sf::RenderWindow>(mode, title);
    m_eventsystem = std::make_unique<EventSystem>();
}

Game::~Game()
{
    
}

void Game::run()
{
    m_gameloop = std::make_unique<GameLoop>();

    m_gameloop->load_resources();
    m_gameloop->init();

    while (m_window->isOpen()) {
        sf::Event event;
        m_window->pollEvent(event);
        m_eventsystem->update(event);

        m_gameloop->update();
        m_gameloop->render(m_window.get());

        m_window->display();
    }
}

EventSystem* Game::get_event_system()
{
    return m_eventsystem.get();
}