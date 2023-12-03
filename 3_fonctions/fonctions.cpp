/* Estelle DORIOT           */
/*  Cours sur les fonctions */

#include <iostream>
using namespace std;

int v = 8; // variable globale
int nb_secondes(int heures, int minutes = 0, int secondes = 0);

void hello2()
{
    cout << "Hello world !" << endl;
}

void hello(string name)
{
    cout << "Hello " << name << "!" << endl;
}

int max1(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void max2(int a, int b)
{
    if (a > b)
        cout << a << endl;
    else
        cout << b << endl;
}

int puissance(int a, int n)
{
    int resultat = 1;
    for (int i = 1; i <= n; i++)
        resultat *= a;
    return resultat;
    cout << "C'est inutile d'écrire ici" << endl;
}

int nb_secondes(int heures, int minutes, int secondes)
{
    return (heures * 60 + minutes) * 60 + secondes;
}

int addition(int x, int y)
{
    return x + y;
}

int addition(int x, int y, int z)
{
    return x + y + z;
}

int factorielle(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
        a = a * i;
    return a;
}

int truc(int n)
{
    return n * v;
}

void incremente1()
{
    v++;
}

int incremente(int b)
{
    b++;
    return b;
}

int main()
{
    hello2();
    hello("Alice");
    hello("Bob");

    string prenom;
    cout << "Veuillez donner votre prenom: ";
    cin >> prenom;
    hello(prenom);

    cout << max1(3, 7) << endl;
    cout << max1(9, 4) << endl;
    cout << max1(max1(4, 9), 6) << endl;
    /* génère une erreur
    cout << max2(max2(4, 9), 6) << endl;
    */

    cout << puissance(2, 3) << endl;

    cout << "Dans 2 heures, 30 minutes et 45 secondes, il y a : " << nb_secondes(2, 30, 45) << " secondes." << endl;
    cout << "Dans 3 heures, il y a : " << nb_secondes(3) << " secondes." << endl;

    cout << addition(10, 20) << endl;
    cout << addition(10, 20, 30) << endl;

    cout << "Factorielle 4: " << factorielle(4) << endl;
    /* génère une erreur
    cout << "a = " << a << endl;
    */

    for (int i = 1; i <= 3; i++)
        cout << "Hello !" << endl;
    /* génère une erreur
    cout << "i = " << i;
    */

    int b = truc(3); // utilise la variable a
    cout << "b = " << b << endl;

    incremente1(); // modification de a
    cout << "v = " << v << endl;

    int a = 8;
    a = incremente(a);
    cout << "a = " << a << endl;

    return 0;
}