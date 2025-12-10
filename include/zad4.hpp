#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& v)
{
	double M = 0.0;

	for (int i = 0; i < v.size(); i++)
	{
            int porcja = i + 1;
            const Tagliatelle& t      = v[v.size() - 1 - i];
            M += t.ileMaki(porcja);
	}
        if (M > 100)
        {
            throw 1; // wyjątek typu int
        }
        else if (M > 50)
        {
            throw 2.0; // wyjątek typu double
        }

        return M; // M ≤ 50
}
