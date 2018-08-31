#include "Game.h"
#include <iostream>

std::unique_ptr<Game> Game::m_game;

Game::Game()
{
}

Game::~Game()
{
    
}

Game* Game::get_instance()
{
    if (!m_game)
    {
        Game* game = new Game();

        m_game = std::unique_ptr<Game>(game);
    }

    return m_game.get();
}

sf::RenderWindow* Game::get_window()
{
    return m_window.get();
}

void Game::init(const sf::VideoMode& mode, const std::string& title)
{
    m_window = std::make_unique<sf::RenderWindow>(mode, title);
    m_eventsystem = EventSystem::get_instance();
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