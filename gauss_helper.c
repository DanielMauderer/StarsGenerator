#define _USE_MATH_DEFINES
#include <math.h>
#include "gauss_helper.h"

double get_count_prop(gaus_param param, double start, double step_size, double proportion)
{
    double k = 1 / (param.sigma * sqrt(2 * M_PI));
    double s = -1.0 / (2 * param.sigma * param.sigma);
    double sum = 0;
    for (size_t i = start; i < 1000000; i += step_size)
    {
        sum += k * exp(s * (i - param.mu) * (i - param.mu));
        if (sum >= proportion)
            return i;
    }
}

// def make_gauss(N, sigma, mu):
//     k = N / (sigma * math.sqrt(2*math.pi))
//     s = -1.0 / (2 * sigma * sigma)
//     def f(x):
//         return k * math.exp(s * (x - mu)*(x - mu))
//     return f