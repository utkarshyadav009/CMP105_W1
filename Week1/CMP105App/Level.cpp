#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(1150, 625);
	rect.setFillColor(sf::Color::Red);
	

	circle.setRadius(15);
	circle.setPosition(200, 200);
	circle.setFillColor(sf::Color::Green);
	circle.setOutlineColor(sf::Color::Magenta);
	circle.setOutlineThickness(2.f);

	//triangle.setSize(sf::Vector2f(50, 50));
	//triangle.setPosition(100, 100);
	//triangle.setFillColor(sf::Color::Red);

	if (!font.loadFromFile("font/Sherlyn.ttf"))
	{
		std::cout << "Error loading font\n";
	}
	text.setFont(font);
	text.setString("Dear Jack\n   How are you ?");
	text.setCharacterSize(34);
	text.setFillColor(sf::Color::Red);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	rect.setPosition(window->getSize().x - 50, window->getSize().y - 50);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	//window->draw(circle);
	window->draw(text);
	endDraw();

}

void Level::beginDraw()
{
	window->clear(sf::Color(255, 255,255));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}