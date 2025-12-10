#include "catch.hpp"


        // Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
public:
    virtual double ileMaki(unsigned) const = 0;
    static Makaron* gotujMakaron(const std::string& s);
    virtual ~Makaron() {};
        };
        // Zad1
// tutaj definicja klasy Tagliatelle
        class Tagliatelle : public Makaron
        {
        private:
            double              L;
            double              W;
            double              R;
            static const double C; // tylko deklaracja!

        public:
            // konstruktor parametryczny — lista inicjalizacyjna
            Tagliatelle(double a, double b, double c) : L(a), W(b), R(c) {}

            // konstruktor domyślny — lista inicjalizacyjna
            Tagliatelle() : L(0.5), W(0.5), R(0.5) {}

            double ileMaki(unsigned P) const override { return P * L * W * (1. - R) * C; }
        };
