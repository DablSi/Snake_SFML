#include "GameLoop.h"

GameLoop1::GameLoop1()
{

}

GameLoop1::~GameLoop1()
{

}

void GameLoop1::load_resources()
{

}

void GameLoop1::init()
{

}

void GameLoop1::update()
{
    EventSystem* system = EventSystem::get_instance();

    if (system->fetch().lock()->type == sf::Event::EventType::Closed) {
        Game::get_instance()->get_window()->close();
    }
}

void GameLoop1::render(sf::RenderTarget* renderer)
{
    renderer->clear(sf::Color(255,0,0));
}