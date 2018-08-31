#include "EventSystem.h"

std::unique_ptr<EventSystem> EventSystem::m_eventsystem;

EventSystem::EventSystem()
{
}

EventSystem::~EventSystem()
{

}

EventSystem* EventSystem::get_instance()
{

    if (!EventSystem::m_eventsystem)
    {
        EventSystem* es = new EventSystem();

        EventSystem::m_eventsystem = std::unique_ptr<EventSystem>(es);
    }

    return EventSystem::m_eventsystem.get();
}

void EventSystem::update(const sf::Event& event)
{
    m_event = std::make_shared<sf::Event>(event);
}

std::weak_ptr<const sf::Event> EventSystem::fetch()
{
    return m_event;
}
