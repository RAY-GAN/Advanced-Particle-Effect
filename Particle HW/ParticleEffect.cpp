#include "ParticleEffect.h"

using namespace sf;
using namespace gm;

ParticleEffect::ParticleEffect() {

	for (int i = 0; i < p_num; i++) {

		particles[i] = nullptr;
	}

	lifespan = 10.0f;
	radius = 10.0f;
}


ParticleEffect::ParticleEffect(Vector2f& position) {

	lifespan = 10.0f;
	radius = 10.0f;

	for (int i = 0; i < p_num; i++) {

		//CreateParticle(i, position);
	}

}


void ParticleEffect::Update() {

	for (int i = 0; i < p_num; i++) {

		particles[i]->Update();
	}
}

void ParticleEffect::render(RenderWindow& window) {

	for (int i = 0; i < p_num; i++) {
		
			particles[i]->render(window);
		
	}
}

void ParticleEffect::CreateParticles(Vector2f& position) {

	for (int i = 0; i < p_num; i++) {

		//CreateParticle(i, position);
	}
	

}



void ParticleEffect::Emit(Vector2f& position) {
	
	for (int i = 0; i < p_num; i++) {

		//CreateParticle(i, position);
	}

}

ParticleEffect::~ParticleEffect() {
	for (int i = 0; i < p_num; i++) {
		if (!(particles[i]->IsAlive())) {
			delete particles[i];
			particles[i] = nullptr;
		}
	}
}

