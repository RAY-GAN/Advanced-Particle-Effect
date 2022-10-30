#include "CircleParticle.h"

using namespace sf;
using namespace gm;

CircleParticle::CircleParticle() 
	: ShapeParticle()
{
	shape = new CircleShape();
	shape->setFillColor(Color::White);
	radius = 1.f;
}

CircleParticle::CircleParticle(const Vector2f& position, const Vector2f& velocity, float lifespan,
	bool isalive, Color color, float radius)
	: ShapeParticle(position, velocity, lifespan, isalive, shape = new CircleShape(radius))
{
	shape->setFillColor(color);
	this->radius = radius;
}

void CircleParticle::Update() {
	
	this->SetShape(shape);
	shape->move(this->GetVelocity());
}

void CircleParticle::render(RenderWindow& window) {
	if (this->IsAlive()) {
		window.draw(*dynamic_cast<CircleShape*>(shape));
		
	}
}

//Setter
void CircleParticle::SetRadius(float radius) {
	this->radius = radius;
	dynamic_cast<CircleShape*>(shape) ->setRadius(radius);
}

// Getter
float CircleParticle::GetRadius() const
{
	return radius;
}


CircleParticle::~CircleParticle() {
	delete shape;
}