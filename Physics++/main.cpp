#include <iostream>
#include <cmath>

#define GRAVITY 9.81

struct Projectile {
    double x;
    double y;
    double vx;
    double vy;
};

void updateProjectile(Projectile& projectile, double dt) {
    projectile.x += projectile.vx * dt;
    projectile.y += projectile.vy * dt;
    projectile.vy -= GRAVITY * dt;
}

int main() {
    Projectile projectile = {0.0, 0.0, 10.0, 10.0}; // Posi��o inicial (0, 0), velocidade inicial (10, 10)

    double dt = 0.1; // Intervalo de tempo

    int numSteps = 50; // N�mero de passos de atualiza��o

    for (int i = 0; i < numSteps; i++) {
        std::cout << "Posicao: (" << projectile.x << ", " << projectile.y << ")\n";
        updateProjectile(projectile, dt);
    }

    return 0;
}
