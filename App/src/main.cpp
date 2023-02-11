#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

int main(int argc, const char* argv[])
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode(800, 600), "App", sf::Style::Default, settings);


    while (window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                    window.close();
                break;
            }
        }

        window.clear();

        window.display();
    }
    return 0;
}