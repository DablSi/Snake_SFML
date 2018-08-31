#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

int main(int argc, char const *argv[])
{
    sf::RenderWindow* win = new sf::RenderWindow(sf::VideoMode(800, 600), "Test Win");

    while (win->isOpen())
    {
        sf::Event e;
        win->pollEvent(e);

        if (e.type == sf::Event::EventType::Closed)
        {
            win->close();
        }

        win->clear(sf::Color(255,0,0));
        win->display();
    }

    return 0;
}
