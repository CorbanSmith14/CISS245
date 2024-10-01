#include <iostream>


struct vec2i
{
    int x , y;
};

void operator+=(vec2i & v0, vec2i & v1)
{
    v0.x += v1.x;
    v0.y += v1.y;
}

struct Alien
{
    vec2i p;
    vec2i v;
    int energy;
    int points;
};

void init(Alien & alien, int px,int py,int vx,int vy,int energy,int points)
{
    alien.p.x = px;
    alien.p.y = py;
    alien.v.x = vx;
    alien.v.y = vy;
    alien.energy = energy;
    alien.points = points;
}
void run(Alien & alien)
{
    alien.p += alien.v;
}

void println( const Alien & alien)
{
    std::cout << "<Alien " << &alien << ' '
              << "p.x: " << alien.p.x << ' '
              << "p.y: " << alien.p.y << ' '
              << "v.x: " << alien.v.x << ' '
              << "v.y: " << alien.v.y << ' '
              << "energy: " << alien.energy << ' '
              << "points: " << alien.points << ">\n";
}

int main()
{
    Alien alien0;
    init(alien0, 10, 5, 1, 2, 50, 100);
    run(alien0);
    println(alien0);
    
    return 0;
}
