#include "Particle.h"

using namespace sf;
using namespace gm;

Particle::Particle(){
	position = Vector2f(10, 10);
	velocity = Vector2f(1, 1);
	lifespan = 1;
	lifespanRemaining = 1;
	isalive = false;
	clock = Clock();

}

Particle::Particle(const Vector2f& position, const Vector2f& velocity, float lifespan, bool isalive) {
	this->position = position;
	this->velocity = velocity;
	this->lifespan = lifespan;
	this->lifespanRemaining = lifespan;
	this->isalive = isalive;
	clock = Clock();
}


void Particle::Update() {
	Time time1 = clock.getElapsedTime();
	lifespanRemaining = lifespan - time1.asSeconds();
	if (lifespanRemaining <= 0) {
		isalive = false;
	}
	else {
		isalive = true;
	}
}


const Vector2f& Particle::GetPosition() const{
	return position;
}

void Particle::SetPosition(const Vector2f& position) {
	this->position = position;
}


const Vector2f Particle::GetVelocity() const{
	return velocity;
}


void Particle::SetVelocity(const Vector2f& velocity) {
	this->velocity = velocity;
}

float Particle::GetLifespan() const{
	return lifespan;
}

void Particle::SetLifespan(float lifespan) {
	this->lifespan = lifespan;
}

float Particle::GetLifespanRemaining() const{
	return lifespanRemaining;
}

void Particle::SetLifespanRemaining(float lifespanRemaining) {
	this->lifespanRemaining = lifespanRemaining;
}

bool Particle::IsAlive() const{
	return isalive;
}

void Particle::SetAlive(bool isalive) {
	this->isalive = isalive;
}

Particle::~Particle(){}
