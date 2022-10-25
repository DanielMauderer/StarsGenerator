#ifndef A_GAUS_PARAMS
#define A_GAUS_PARAMS

typedef struct gaus_params
{
    double sigma;
    double mu;
} gaus_param;

double get_propability(gaus_param param, int x);

#endif