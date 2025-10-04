#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
 
using namespace std;
 
// int main() {

//     float f;
//     double d;
//     long double ld;

//     cout << sizeof(f) << endl;
//     cout << sizeof(d) << endl;
//     cout << sizeof(ld) << endl;

//     cout << numeric_limits<float>::max() << endl;
//     cout << numeric_limits<double>::max() << endl;
//     cout << numeric_limits<long double>::max() << endl;

//     return 0;
// }

// int main() {

//     float f(123456789.0f); // 10 significant digits

//     cout << std::setprecision(6);
//     cout << f << endl;
//     // cout << 1.0 / 3.0 << endl;

//     return 0;
// }

int main() {

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero; 
    double nan = zero / zero;

    cout << posinf << " " << std::isinf(posinf) << endl;
    cout << neginf << " " << std::isinf(neginf) << endl;
    cout << nan << " " << std::isinf(nan) << endl;
    cout << 1.0 << " " << std::isinf(1.0) << endl;

    return 0;

}