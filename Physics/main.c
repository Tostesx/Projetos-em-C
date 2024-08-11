#include <stdio.h>
#include <math.h>

#define GRAVITY 9.81

typedef struct {
    double x;
    double y;
    double vx;
    double vy;
} Projectile;

void updateProjectile(Projectile* projectile, double dt) {
    projectile->x += projectile->vx * dt;
    projectile->y += projectile->vy * dt;
    projectile->vy -= GRAVITY * dt;
}

int main() {
    Projectile projectile = {0.0, 0.0, 10.0, 10.0}; // Posição inicial (0, 0), velocidade inicial (10, 10)

    double dt = 0.1; // Intervalo de tempo

    int numSteps = 50; // Número de passos de atualização

    for (int i = 0; i < numSteps; i++) {
        printf("Posicao: (%lf, %lf)\n", projectile.x, projectile.y);
        updateProjectile(&projectile, dt);
    }

    return 0;
}
