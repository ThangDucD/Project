#include <math.h>
#include <stdio.h>

typedef struct
{
    int num_roots;
    double root1;
    double root2;
} QuadraticResult;

QuadraticResult solve_quadratic(double a, double b, double c)
{
    QuadraticResult result;
    if (a == 0)
    {

        if (b == 0)
        {
            result.num_roots = 0;
        }
        else
        {
            result.num_roots = 1;
            result.root1 = -c / b;
        }
        return result;
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        result.num_roots = 2;
        result.root1 = (-b + sqrt(discriminant)) / (2 * a);
        result.root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0)
    {
        result.num_roots = 1;
        result.root1 = -b / (2 * a);
    }
    else
    {
        result.num_roots = 0;
    }
    return result;
}
