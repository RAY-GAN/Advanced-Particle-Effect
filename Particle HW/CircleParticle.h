#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

/* SFML Includes             *
 * Add to every SFML project */
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

#include "ShapeParticle.h"

namespace gm {
	class CircleParticle : public ShapeParticle{
	private:
		float radius;
		
	public:

		CircleParticle();
		CircleParticle(const sf::Vector2f& position, const sf::Vector2f& velocity, float lifespan,
			bool isalive, sf::Color color, float radius);

		virtual void Update();

		virtual void render(sf::RenderWindow& window);

		// Setters
		void SetRadius(float radius);

		// Getter
		float GetRadius() const;


		virtual ~CircleParticle();
	};
}

#endif
