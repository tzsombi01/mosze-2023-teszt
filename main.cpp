#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Typo: The NELEMENTS should be N_ELEMENTS
    int *b = new int[NELEMENTS];

    // End of line missing character: ';'
    // Bad character(s): ''' instead of '"'
    std::cout << '1-100 ertekek duplazasa'

    // Loop is missing 2 arguments
    for (int i = 0;)
    {
        b[i] = i * 2;
    }

    // Endless loop, exit parameter is faulty
    for (int i = 0; i; i++)
    {

        // End of line missing character: ';'
        // The value is not getting logged onto console
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;

    // Variable "atlag" is not getting initialised
    int atlag;

    // Bad character(s): ',' instead of ';'
    for (int i = 0; i < N_ELEMENTS, i++)
    {

        // End of line missing character: ';'
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
