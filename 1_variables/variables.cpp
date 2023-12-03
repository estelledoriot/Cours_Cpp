/* Estelle DORIOT           */
/*  Cours sur les variables */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // tailles des types entiers
    cout << "Taille du type short: " << sizeof(short) << " octets" << endl;
    cout << "Taille du type int: " << sizeof(int) << " octets" << endl;
    cout << "Taille du type long: " << sizeof(long) << " octets" << endl;

    // taille des types flottants
    cout << "Taille du type float: " << sizeof(float) << " octets" << endl;
    cout << "Taille du type double: " << sizeof(double) << " octets" << endl;
    cout << "Taille du type long double: " << sizeof(long double) << " octets" << endl;
    
    // booléens
    bool y = true;
    bool z = false;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    // operateurs arithmetiques
    cout << "5 + 3 = " << 5 + 3 << " -> resultat entier" << endl; // addition de deux entiers
    cout << "5.0 + 3 = " << 5.0 + 3 << " -> resultat flottant" << endl; // addition d'un entier et d'un flottant
    cout << "5 / 3 = " << 5 / 3 << " -> resultat entier" << endl; // division de deux entiers (! division euclidienne)
    cout << "5.0 / 3.0 = " << 5.0 / 3.0 << " -> resultat flottant" << endl; // division de deux flottants
    cout << "5 % 3 = " << 5 % 3 << " -> resultat entier" << endl; // operateur modulo

    // operateurs de comparaison
    cout << (3 < 9.5) << endl; // on peut comparer un entier et un flottant
    cout << ('b' < 'f') << endl; // les caractères sont comparés avec l'ordre alphabétique

    // operateurs booleens
    cout << ((3 == 3) || (9 > 24)) << endl;
    cout << ((9 > 24) && (3 == 3)) << endl;

    // cast
    int n = 5;
    double m = ((double) n);
    cout << "Conversion de n: " << m << endl;

    // cout
    cout << "Bonjour" << endl;
    string nom = "John";
    int age = 30;
    cout << nom << " a " << age << " ans" << endl;

    // cin
    string nom2;
    int age2;
    cout << "Entrez votre nom : ";
    cin >> nom2;
    cout << "Bonjour " << nom2 << endl;
    cout << "Entrez votre age : ";
    cin >> age2;
    cout << "Vous avez " << 77 - age2 << " ans de différence avec le Pere Noel" << endl;

    int a;
    int b;
    string s;
    cout << "Donnez deux nombres puis votre prenom: ";
    cin >> a >> b >> s;
    cout << "a = " << a << ", b = " << b << ", votre nom est: " << s << endl;

    return 0;
}
