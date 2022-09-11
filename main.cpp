#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    // nem jo a valtozo neve
    std::cout << '1-100 ertekek duplazasa'  // nem karaktert irunk ki hanem sztringet, sor vegen nincs pontosvesszo
    for (int i = 0;)    // nem jol van megadva a for ciklus
    {
        b[i] = i * 2;   // ezzel 0-tol kezdodne a szamozas nem 1-tol
    }
    for (int i = 0; i; i++) // for ciklus rosszul van megirva
    {
        std::cout << "Ertek:"   // nincs a sor vegen ; , valamint celszeru megjeleniteni magat az erteket is
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // nincs megadva kezdoertek
    for (int i = 0; i < N_ELEMENTS, i++)    // for ciklusban , van ; helyett
    {
        atlag += b[i]   // nincs a sor vegen ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
