#include "MathHelper.h"

double MathHelper::calculateTriangleArea(const std::array<std::array<double, 2>, 3>& triangle_vertices)
{
    double S = 0.5 * (
        (
            triangle_vertices[0][0] * triangle_vertices[1][1]
            + triangle_vertices[1][0] * triangle_vertices[2][1]
            + triangle_vertices[2][0] * triangle_vertices[0][1]
            )
        - (
            triangle_vertices[0][1] * triangle_vertices[1][0]
            + triangle_vertices[1][1] * triangle_vertices[2][0]
            + triangle_vertices[2][1] * triangle_vertices[0][0]
            )
        );
    return 2 * S;
}