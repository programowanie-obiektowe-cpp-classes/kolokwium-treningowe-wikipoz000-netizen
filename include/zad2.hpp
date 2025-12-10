#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

class Penne : public Makaron
{
    double ileMaki(unsigned P) const override { return static_cast< double >(P); }
};

Makaron* Makaron::gotujMakaron(const std::string& s)
{
    if (s.front() == s.back())
    {
        // Jeśli pierwszy i ostatni znak są takie same → Tagliatelle
        return new Tagliatelle(3.14, 0.42, 0.1);
    }
    else
    {
        // W przeciwnym razie → Penne
        return new Penne();
    }
};
// tutaj definicja metody gotujMakaron