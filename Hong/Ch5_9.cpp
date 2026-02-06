// random numbers

#include <iostream>
#include <cstdlib> // radn(), srand()
#include <ctime> // time()
#include <random>

using namespace std;

// unsigned int PRNG() // Pseudo Random Number Generator
// { 
//     static unsigned int seed = 5523; // seed number

//     seed = 8253729 * seed + 2396403;

//     return seed % 32768;
// } 

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);

    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main()
{
    // srand(5323); // seed
    srand(static_cast<unsigned int>(time(0)));

    for (int count = 1; count <= 100; ++count)
    {
        cout << getRandomNumber(5, 8) << "\t";

        if (count % 5 == 0) 
        {
            cout << endl;
        }

    }

    return 0;
}

int main2()
{
    random_device rd;
    mt19937 mersenne(rd()); // create mersenne twister (time 연동 시키는 거랑 비슷함)
    uniform_int_distribution<> dice(1, 6);

    for (int count = 1; count <= 20; ++count)
    {
        cout << dice(mersenne) << endl;
    }
}