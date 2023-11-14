/* Estelle DORIOT                       */
/*  Cours sur les chaines de caractères */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string chaine;
    string chaine_2("abcd");
    string chaine_3 = "abcd";
    string chaine_4(5, 'a'); // contient "aaaaa"

    size_t taille = chaine_2.size();
    cout << taille << endl;
    cout << chaine_2[2] << endl;
    chaine[2] = 'r';
    cout << chaine_2[2] << endl;
    cout << chaine_2 << endl;

    string ch1 = "Bonjour ";
    string ch2 = "John";
    cout << ch1 + ch2 << endl;

    int age = 20;
    string message = "Vous avez " + to_string(age) + " ans.";
    cout << message << endl;

    cout << (chaine_2 == chaine_3) << endl;
    cout << (chaine_2 == ch2) << endl;
    cout << chaine_2.compare(ch2) << endl;

    string bonjour = "bonjour";
    string salut = "salut";
    cout << bonjour.compare(salut) << endl;

    for (size_t i = 0; i < bonjour.size(); i++)
    {
        cout << bonjour[i] << endl;
    }

    for (char c : bonjour)
    {
        cout << c << endl;
    }

    for (char &c : bonjour)
    {
        if (c == 'o')
            c = 'g';
    }

    cout << bonjour << endl;

    string chaine1 = "Les sanglots longs des violons de l'automne";
    string chaine2 = "";

    for (char c : chaine1)
    {
        if (c != 'o')
            chaine2 += c;
    }

    cout << chaine2 << endl;
}