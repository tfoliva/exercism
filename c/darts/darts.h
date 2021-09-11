#ifndef DARTS_H
#define DARTS_H

typedef struct position {
        float x;
        float y;
} coordinate_t;

typedef enum { INNER = 1, MIDDLE = 5, OUTER = 10 } radius;
typedef enum { NO = 0, MINIMUM = 1, AVERAGE = 5, MAXIMUM = 10 } points;

int score(coordinate_t landing_position);
#endif
