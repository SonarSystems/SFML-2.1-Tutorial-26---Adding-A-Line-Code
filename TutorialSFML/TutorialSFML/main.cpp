#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	sf::RectangleShape line;
	line.setSize(sf::Vector2f(200, 3));

	sf::Vertex line2[] = 
	{
		sf::Vertex(sf::Vector2f(25, 10)),
		sf::Vertex(sf::Vector2f(400, 100))
	};

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear( );

		window.draw(line2, 2, sf::Lines);

		window.display( );
	}
}