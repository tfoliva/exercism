#include "darts.h"

int score(coordinate_t landing_position) {
        // convert cartesian coordinates to polar
        float landing_radius_sq = landing_position.x * landing_position.x
                                  + landing_position.y * landing_position.y;

        int pontuation = NO;

        if (landing_radius_sq <= INNER * INNER) {
                pontuation = MAXIMUM;
        } else if (landing_radius_sq <= MIDDLE * MIDDLE) {
                pontuation = AVERAGE;
        } else if (landing_radius_sq <= OUTER * OUTER) {
                pontuation = MINIMUM;
        }

        return pontuation;
}
