#include <stdio.h>
#include <math.h>

#define RECEBE(co,p)     \
    ({ printf("Entre com coord x do ponto %s: ",co); \
        scanf("%f", &p.x);                          \
        printf("Entre com coord y do ponto %s: ",co); \
        scanf("%f", &p.y);                              \
        printf("Entre com coord z do ponto %s: ",co); \
        scanf("%f", &p.z); })

#define MOSTRA(p)     \
    ({ printf("( %g; %g; %g )\n", p.x, p.y, p.z);})

#define SOMA(a,b,s)        \
    ({  s.x = a.x + b.x ;    \
        s.y = a.y + b.y ;    \
        s.z = a.z + b.z ;}) // resultado da soma em x e resultado da soma em y

#define DISTANCIA(a,b)        \
    sqrt(pow(a.x - b.x, 2.0) + pow(a.y - b.y, 2.0) + pow(a.z - b.z, 2.0))


struct Ponto {
    float x;
    float y;
    float z;
};

int main ()
{
    struct Ponto A, B, S;
    float dist;
    RECEBE("A", A);
    RECEBE("B", B);
    SOMA(A,B,S);
    MOSTRA(S);
    dist = DISTANCIA(A,B);
    printf("A distancia entre os pontos e: %g\n", dist);
    return 0;
}
