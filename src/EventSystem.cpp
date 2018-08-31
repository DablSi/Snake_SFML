#include "EventSystem.h"

EventSystem::EventSystem()
{

}

EventSystem::~EventSystem()
{

}

void EventSystem::update(const sf::Event& event)
{
    m_event = std::make_shared<sf::Event>(event);
}

std::weak_ptr<const sf::Event> EventSystem::fetch()
{
    return m_event;
}
