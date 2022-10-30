// We need to include our header file to implement the function prototypes of our Game class
#include "Game.h"

// Since we are in our private .cpp file, it's fine to use a namespace here
using namespace gm;
using namespace sf;

// Implement constructor, this will effectively be a setup function as the game gets more complex
Game::Game() {
	
	particle = 0;
}

// Implements the handle input portion of our Game Loop Programming Pattern
void Game::handleInput(sf::RenderWindow& window) {
	// Check for events from the window
	// E.g., is the window being closed?
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();

		if (event.type == sf::Event::MouseButtonPressed) {
			
			Vector2f position;
			
			position.x = Mouse::getPosition(window).x;
			position.y = Mouse::getPosition(window).y;

			if (!particle) {
				particleeffect = new SnowParticles(position);
			}
			else {
				particleeffect = new SmokeParticles(position);
			}

		}

		else if (event.key.code == Keyboard::Num1) {
			
			particle = 0;
		}

		else if (event.key.code == Keyboard::Num2) {

			particle = 1;
		}
	}
}

// Implements the update portion of our Game Loop Programming Pattern
void Game::update(sf::RenderWindow& window) {

	if (particleeffect != nullptr) {
		particleeffect->Update();
	}
	// We aren't doing anything here currently
}

// Implements the render portion of our Game Loop Programming Pattern
void Game::render(sf::RenderWindow& window) {
	// This clears the window at the beginning of every frame
	window.clear();

	if (particleeffect != nullptr) {
		particleeffect->render(window);
	}

	// Display the window buffer for this frame
	window.display();
}

// Implement destructor, make sure we free up any memory that we allocated here!
Game::~Game() {

}