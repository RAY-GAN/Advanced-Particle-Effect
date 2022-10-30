#ifndef PARTICLEEFFECT_H
#define PARTICLEEFFECT_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include <iostream>

#include "CircleParticle.h"

const int p_num = 20;

namespace gm {
	class ParticleEffect

	{

	protected:
		Particle* particles[p_num];
		sf::Vector2f velocity;
		sf::Color color;
		float lifespan;
		float radius;

	public:

		ParticleEffect();
		ParticleEffect(sf::Vector2f& position);
		virtual void Update();
		virtual void render(sf::RenderWindow& window);
	    void CreateParticles(sf::Vector2f& position);
		virtual void CreateParticle(int index, sf::Vector2f& position){};
		void Emit(sf::Vector2f& position);
		~ParticleEffect();
	};

}
#endif
