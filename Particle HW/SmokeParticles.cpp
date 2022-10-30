#include "SmokeParticles.h"
#include "Random.h"

using namespace sf;
using namespace gm;

SmokeParticles::SmokeParticles()
	:ParticleEffect()
{
	color = Color::Yellow;
}

SmokeParticles::SmokeParticles(Vector2f& position)
//:ParticleEffect(position)
{
	color = Color::Yellow;

	for (int i = 0; i < p_num; i++)
	{
		velocity.x = Random::Range(-0.05f, 0.05f);
		velocity.y = Random::Range(-0.2f, -0.25f);

		particles[i] = new CircleParticle(position, velocity, lifespan, true, color, radius);
	}


}


/*void SmokeParticles::CreateParticle(int index, Vector2f& position) {

	velocity.x = Random::Range(-0.05f, 0.05f);
	velocity.y = Random::Range(-0.2f, -0.25f);

	particles[index] = new CircleParticle(position, velocity, lifespan, true, color, radius);

}*/

SmokeParticles::~SmokeParticles() {
	for (int i = 0; i < p_num; i++) {
		if (!(particles[i]->IsAlive())) {
			delete particles[i];
			particles[i] = nullptr;
		}
	}
}