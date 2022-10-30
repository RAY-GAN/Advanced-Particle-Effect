#ifndef SMOKE_PARTICLES_H
#define SMOKE_PARTICLES_H

#include "ParticleEffect.h"


namespace gm {

    class SmokeParticles :
        public ParticleEffect
    {

    public: 
        SmokeParticles();

        SmokeParticles(sf::Vector2f& position);

        //void CreateParticle(int index, sf::Vector2f& position) override;

        virtual ~SmokeParticles();


    };

}

#endif

