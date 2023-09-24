#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //typo NELEMENTS =/= N_ELEMENTS
    int *b = new int[N_ELEMENTS];

    // missing ;, sor nincs lezárva, '' =/= ""
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    //for loop syntax errors
    for (int i = 0; i < N_ELEMENTS; I++) 
    {
        //0-99-ig fut a loop. 1-100-ig kell
        b[i] = (i+1) * 2; 
    }
    //hibás ciklus vezérlő
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //az értékváltozó nem kerül kiirásra, hiányzik a ;, a sor nem kerül lezárásra
        std::cout << "Ertek:" << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    //nincs kezdőértéke a változónak
    int atlag = 0;

    //missing ;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //missing ;
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout <<"Feladatot megcsinálta az öcskös"<< std::endl;
    return 0;
}
