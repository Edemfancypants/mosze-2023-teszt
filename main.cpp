#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //typo NELEMENTS =/= N_ELEMENTS
    int *b = new int[NELEMENTS];

    // missing ;
    std::cout << '1-100 ertekek duplazasa'

    //for loop syntax errors
    for (int i = 0;) 
    {
        //1-100 * 2
        b[i] = i * 2; 
    }
    //hibás ciklus vezérlő
    for (int i = 0; i; i++)
    {
        //az értékváltozó nem kerül kiirásra, hiányzik a ;
        std::cout << "Ertek:"
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    //nincs kezdőértéke a változónak
    int atlag;

    //missing ;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //missing ;
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
