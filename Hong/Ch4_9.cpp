// 자료형에게 가명 붙여주기 typedef

#include <iostream>
#include <vector>
#include <cstdint>

int main() 
{
    using namespace std;
    
    typedef double distance_t;

    double my_distance; 
    distance_t home2work;
    distance_t home2school;

    vector<pair<string, int> > pairlist1;
    vector<pair<string, int> > pairlist2; // 좋지 않음 ....

    typedef vector<pair<string, int> > pairlist_t;

    pairlist_t pairlist3;
    pairlist_t pairlist4; // ㅇㅈ

    return 0;
}