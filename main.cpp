// TowerDefenceEvolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <vector>
#include <iostream>
#include <array>


class Tower
{
private:
    float attacks_per_second;
    float attack_range;
    float damage;
    size_t projectile_number;
    float projectile_speed;
    float projectile_lifespan;
    size_t projectile_pierce;
    size_t projectile_splash_radius;
    size_t footprint_radius;

public:

    Tower()
    {
        attacks_per_second = 1;
        attack_range = 100;
        damage = 1;
        projectile_number = 1;
        projectile_speed = 200;
        projectile_lifespan = 1;
        projectile_pierce = 1;
        projectile_splash_radius = 0;
        footprint_radius = 10;
    }

    void set_attacks_per_second(float aps)
    {
        attacks_per_second = aps;
    }

    void set_attack_range(float ar)
    {
        if (ar < 0) attack_range = 0;
        else attack_range = ar;

    }
    void set_damage(float dmg)
    {
        if (dmg < 0) damage = 0;
        else damage = dmg;

    }
    void set_projectile_number(size_t pn)
    {
        if (pn < 0) projectile_number = 0;
        else projectile_number = pn;
    }

    void set_projectile_speed(float ps)
    {
        if (ps < 0) projectile_speed = 1;
        else projectile_speed = ps;
    }
    void set_projectile_lifespan(float pl)
    {
        if (pl < 0) projectile_lifespan = 0.1;
        else projectile_lifespan = pl;
    }
    void set_projectile_pierce(size_t pp)
    {
        if (pp < 0) projectile_pierce = 1;
        else projectile_pierce = pp;
    }
    void set_projectile_splash_radius(float psr)
    {
        if (psr < 0) projectile_splash_radius = 0;
        else projectile_splash_radius = psr;
    }
    void set_footprint_radius(size_t fr)
    {
        if (fr < 10) footprint_radius = 10;
        else footprint_radius = fr;
    }





};

class Minion
{
    private:
        float  footprint_size;
        float movement_speed;
        size_t hp;
        size_t shield;



};

class Point 
{
    float x = 0;
    float y = 0;

public:
    Point(float xx, float xy)
    {
        x = xx;
        y = xy;
    }

    Point()
    {
        x = 0;
        y = 0;
    }
};

class Path
{
    private:

        std::vector <Point> path_anchors;

public:
    Path(std::vector <Point>& anchors)
    {
        path_anchors.resize(anchors.size());
        for (int i = 0; i < anchors.size(); i++)
        {
            path_anchors[i] = anchors[i];
        }
    }


};

int main() {
    std::cout << "Hello, world!\n";

    return 0;
}

