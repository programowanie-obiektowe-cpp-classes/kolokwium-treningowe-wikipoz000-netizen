#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template < typename Iter >
void sortujTagliatelle(Iter begin, Iter end)
{
    std::sort(begin, end, [](const Tagliatelle& a, const Tagliatelle& b) {
        // sortujemy malejąco: większe ileMaki → wcześniej
        return a.ileMaki(1) > b.ileMaki(1);
    });
}