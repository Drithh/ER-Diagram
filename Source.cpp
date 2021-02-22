#include <iostream>
#include <chrono>
#include <string.h>
#include <string>
#include <Lmcons.h>
#include <Windows.h>
#include <unordered_map>



class ABCd {
private:
public:
    std::unordered_map< int, std::pair<int, const int>> CHEM
    {
        { 1 , { 10, 10 }},
        { 4 , { 12, 12 }},
        { 5 , { 5, 5 }},
    };
public:
    void a(int num_chem) {
        srand(time(NULL));
        std::cout << num_chem;
        if (CHEM[(int)num_chem].first > rand() % CHEM[(int)num_chem].second) {
            std::cout << "asdas" << std::endl;
        }
    }
};

int main()
{
    std::string found = "145";
    ABCd ab;
    for (int hub : found) {
        hub -= '0';
        ab.a(hub);
    }

}