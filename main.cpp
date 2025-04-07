// TowerDefenceEvolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



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

int main() {
    std::cout << "Hello, world!\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
