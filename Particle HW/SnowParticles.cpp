#include "SnowParticles.h"
#include "Random.h"

using namespace sf;
using namespace gm;

SnowParticles::SnowParticles() 
	:ParticleEffect()
{
	color = Color::White;
	velocity = Vector2f(0, -1);
	distance = 30.f;
}

SnowParticles::SnowParticles(Vector2f& position)
	:ParticleEffect(position)
{
	color = Color::White;
	velocity = Vector2f(0, 0.1);
	distance = 100.f;

	for (int i = 0; i < p_num; i++)
	{
		position.x = Random::Range(position.x - distance, position.x + distance);
		particles[i] = new CircleParticle(position, velocity, lifespan, true, color, radius);
	}
	

}



/*void SnowParticles::CreateParticle(int index, Vector2f& position) {
	
	position.x = Random::Range(position.x - distance, position.x + distance);
	particles[index] = new CircleParticle(position, velocity, lifespan, true, color, radius);

}*/


SnowParticles::~SnowParticles() {
	for (int i = 0; i < p_num; i++) {
		if (!(particles[i]->IsAlive())) {
			delete particles[i];
			particles[i] = nullptr;
		}
	}
}