#ifndef SNOW_PARTICLES_H
#define SNOW_PARTICLES_H

#include "ParticleEffect.h"


namespace gm {

    class SnowParticles :
        public ParticleEffect
    {

    private: 
        float distance;

    public: 

        SnowParticles();

        SnowParticles(sf::Vector2f& position);

        //void CreateParticle(int index, sf::Vector2f& position) override;

        virtual ~SnowParticles();


    };

}
#endif

