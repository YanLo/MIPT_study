#ifndef ANIM
#define ANIM
#include <stdio.h>

struct Vector
{
  double x;
  double y;
  double z;
};

void makeOscillation(FILE* data_t, FILE* data_x);

void makeEulerCase(FILE* data_t, FILE* data_w, FILE* data_a, FILE* data_n);

struct Vector* rotateVector(double tetta, double phi, double ksi,
    const struct Vector vec);

#endif //ANIM
