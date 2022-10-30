#ifndef PARTICLR_H
#define PARTICLE_H

/* SFML Includes             *
 * Add to every SFML project */
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

namespace gm {

	class Particle
	{
	protected:
		sf::Vector2f position;
		sf::Vector2f velocity;
		float lifespan;
		float lifespanRemaining;
		bool isalive;
		sf::Clock clock;

	public:
		Particle();
		Particle(const sf::Vector2f& position, const sf::Vector2f& velocity, float lifespan, bool isalive);
		virtual void Update();
		virtual void render(sf::RenderWindow& window) = 0;
		const sf::Vector2f& GetPosition() const;
		virtual void SetPosition(const sf::Vector2f& position);
		const sf::Vector2f GetVelocity() const;
		void SetVelocity(const sf::Vector2f& velocity);
		float GetLifespan() const;
		void SetLifespan(float lifespan);
		float GetLifespanRemaining() const;
		void SetLifespanRemaining(float lifespanRemaining);
		bool IsAlive() const;
		void SetAlive(bool isalive);
		virtual ~Particle();
	};
}
#endif

