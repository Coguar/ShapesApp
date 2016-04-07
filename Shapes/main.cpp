// Shapes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Button.h"
#include "ToolBar.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	ui::CButtonPtr button = std::make_shared<ui::CButton>("test");
	ui::CToolBar toolBar(window);
	toolBar.InsertChild(button);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			else
			{
				toolBar.OnEvent(event);
			}
		}

		window.clear();

		{
			window.draw(toolBar);
			//window.draw(button);
		}

		window.display();
	}

	return 0;
}

