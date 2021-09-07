#include "space_age.h"

#include <map>

namespace space_age {

Periods planets;
space_age::space_age(long age) : age_seconds(age) {}

long space_age::seconds() const { return age_seconds; }

double space_age::age_conversion(double planet_period) const {
        return on_earth() / planet_period;
}

double space_age::on_earth() const { return (double)age_seconds / 31557600; }

double space_age::on_mercury() const { return age_conversion(planets.mercury); }
double space_age::on_venus() const { return age_conversion(planets.venus); }
double space_age::on_mars() const { return age_conversion(planets.mars); }
double space_age::on_jupiter() const { return age_conversion(planets.jupiter); }
double space_age::on_saturn() const { return age_conversion(planets.saturn); }
double space_age::on_uranus() const { return age_conversion(planets.uranus); }
double space_age::on_neptune() const { return age_conversion(planets.neptune); }

}  // namespace space_age
