#ifndef EVENT_SYSTEM_H
#define EVENT_SYSTEM_H

#include <SFML/Window.hpp>

#include <functional>
#include <memory>

class EventSystem {
public:
    ~EventSystem();
    static EventSystem* get_instance();

    void update(const sf::Event& event);
    std::weak_ptr<const sf::Event> fetch();

private:
    EventSystem();

    std::shared_ptr<sf::Event> m_event;
    static std::unique_ptr<EventSystem> m_eventsystem;
};

#endif