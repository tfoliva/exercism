#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

struct Periods {
        const double mercury = 0.2408467;
        const double venus   = 0.61519726;
        const double earth   = 1.0;
        const double mars    = 1.8808158;
        const double jupiter = 11.862615;
        const double saturn  = 29.447498;
        const double uranus  = 84.016846;
        const double neptune = 164.79132;
};
extern struct Periods planets;

class space_age {
       private:
        const long age_seconds;
        double     age_conversion(double) const;

       public:
        space_age(long);
        long   seconds(void) const;
        double on_mercury(void) const;
        double on_venus(void) const;
        double on_earth(void) const;
        double on_mars(void) const;
        double on_jupiter(void) const;
        double on_saturn(void) const;
        double on_uranus(void) const;
        double on_neptune(void) const;
};

}  // namespace space_age

#endif  // SPACE_AGE_H
