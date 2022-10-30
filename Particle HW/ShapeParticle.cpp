#include "ShapeParticle.h"

using namespace sf;
using namespace gm;

ShapeParticle::ShapeParticle()
	:Particle()
{
	shape = nullptr;
}

ShapeParticle::ShapeParticle(const Vector2f& position, const Vector2f& velocity, float lifespan,
	bool isalive, Shape* shape)
	:Particle(position,velocity,lifespan,isalive)
{
	this->shape = shape;
	shape->setPosition(this->GetPosition());
}

void ShapeParticle::Update() {
	
	
	shape->move(this->GetVelocity());

}



void ShapeParticle::SetShape(Shape* shape) {
	this->shape = shape;
}

ShapeParticle::~ShapeParticle() {

 }