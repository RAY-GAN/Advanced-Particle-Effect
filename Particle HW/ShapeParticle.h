#ifndef SHAPE_PARTICLE_H
#define SHAPE_PARTICLE_H
#include "Particle.h"




namespace gm {

    class ShapeParticle :
        public Particle
    {
    protected: 
        sf::Shape* shape;

    public:

        ShapeParticle();
        ShapeParticle(const sf::Vector2f& position, const sf::Vector2f& velocity, float lifespan,
            bool isalive, sf::Shape* shape);
        virtual void Update();
        virtual void render(sf::RenderWindow& window) = 0;
        void SetShape(sf::Shape* shape);
        virtual ~ShapeParticle();

    };

}

#endif

