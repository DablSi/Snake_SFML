#pragma once

#include <SFML/Window.hpp>

#include <functional>
#include <memory>

class EventSystem {
public:
    EventSystem();
    ~EventSystem();

    void update(const sf::Event& event);
    std::weak_ptr<const sf::Event> fetch();

private:
    std::shared_ptr<sf::Event> m_event;
};