/* Estelle DORIOT                       */
/* Cours sur les structures de controle */

#include <iostream>
using namespace std;

int main()
{
    // if ...
    int age;
    cout << "Quel est votre age: ";
    cin >> age;
    if (age >= 16)
        cout << "OK, vous pouvez voir ce film" << endl;
    if (age < 16)
        cout << "Désolé, vous êtes trop jeune pour voir ce film" << endl;

    // if ... else ...
    int age2;
    cout << "Quel est votre age: ";
    cin >> age2;
    if (age2 >= 16)
        cout << "OK, vous pouvez voir ce film" << endl;
    else
        cout << "Désolé, vous êtes trop jeune pour voir ce film" << endl;

    // opérateurs booléens
    double c1, c2, c3;
    cout << "Donnez les longueurs des trois côtés: ";
    cin >> c1 >> c2 >> c3;
    if ((c1 <= c2 + c3) && (c2 <= c1 + c3) && (c3 <= c1 + c2))
        cout << "C'est un triangle !" << endl;
    else
        cout << "Ce n'est pas un triangle." << endl;

    // structures conditionnelles imbriquées
    double temperature;
    cout << "Quelle est la température (degrés): ";
    cin >> temperature;
    if (temperature <= 0)
    {
        cout << "Température négative ou nulle: risque de gel." << endl;
        if (temperature < -10)
            cout << "Oh là là, c'est le pôle nord ici !" << endl;
    }
    else
    {
        cout << "Température positive" << endl;
        if (temperature >= 25)
            cout << "Sortez les t-shirts !" << endl;
        else if (temperature > 18)
            cout << "Il fait encore un peu frisquet." << endl;
        else
            cout << "Mais garde ton manteau..." << endl;
    }

    // switch
    int dessert;
    cout << "Veuillez choisir votre plat. Tapez: \n1 pour le gateau au chocolat \n2 pour la glace \n3 pour la tarte tatin \nVotre choix: ";
    cin >> dessert;
    switch (dessert)
    {
    case 1:
        cout << "Vous avez choisi le gateau au chocolat" << endl;
        break;
    case 2:
        cout << "Vous avez choisi la glace" << endl;
        break;
    case 3:
        cout << "Vous avez choisi la tarte tatin" << endl;
        break;
    default:
        cout << "Ce choix n'est pas disponible" << endl;
        break;
    }

    // boucle while
    int j = 1;
    while (j <= 10)
    {
        cout << "Bonjour" << endl;
        j = j + 1;
    }

    // boucle infinie
    /*
    int n = 1;
    cout << "début" << endl;

    while (n > 0)
    {
        if (n % 2 == 1)
            cout << "tic" << endl;
        else
            cout << "tac" << endl;
        n = n + 1;
    }
    cout << "fin" << endl;
    */

    int mdp = 123456;
    int essai = 0;
    do
    {
        cout << "Veuillez entrer le mot de passe: ";
        cin >> essai;
    } while (essai != mdp);

    // boucle for simple
    for (int i = 1; i <= 5; i++)
        cout << i << endl;

    // for et while
    int somme = 0;
    for (int i = 100; i <= 200; i++)
        somme = somme + i;
    cout << "La somme est " << somme << endl;

    int somme2 = 0;
    int i = 100;
    while (i <= 200)
    {
        somme2 = somme2 + i;
        i = i + 1;
    }
    cout << "La somme est " << somme2 << endl;

    // compteur
    int c = 0;
    for (int j = 1; j <= 50; j++)
    {
        if (j % 3 == 0)
            c = c + 1;
    }
    cout << "Il y a " << c << " nombres divisibles par 3 inférieurs à 50." << endl;

    // accumulateur
    int s = 0;
    for (int k = 1; k <= 50; k++)
        s = s + k;
    cout << "Somme des nombres inférieurs à 7: " << s << endl;

    // boucle + if
    int n;
    cout << "Veuillez donner un entier: ";
    cin >> n;
    cout << "Voici les nombres pairs inférieurs à " << n << ": " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            cout << i << endl;
    }

    // boucles imbriquées
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 2; j++)
            cout << i << " " << j << endl;

    // break
    int nombre;
    cout << "Donner un entier: ";
    cin >> nombre;
    bool premier = true;
    for (int i = 2; i < nombre; i++)
    {
        if (nombre % i == 0)
        {
            premier = false;
            break;
        }
    }
    if (nombre == 1)
        cout << "1 n'est pas premier" << endl;
    else if (premier)
        cout << nombre << " est premier" << endl;
    else
        cout << nombre << " n'est pas premier" << endl;

    return 0;
}