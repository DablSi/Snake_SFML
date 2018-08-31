#include "GameLoop.h"

GameLoop::GameLoop()
{

}

GameLoop::~GameLoop()
{

}

void GameLoop::load_resources()
{

}

void GameLoop::init()
{

}

void GameLoop::update()
{
    EventSystem* system = EventSystem::get_instance();

    if (system->fetch().lock()->type == sf::Event::EventType::Closed) {
        Game::get_instance()->get_window()->close();
    }
}

void GameLoop::render(sf::RenderTarget* renderer)
{
    renderer->clear(sf::Color(255,0,0));
}