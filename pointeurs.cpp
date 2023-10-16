/* Estelle DORIOT           */
/*  Cours sur les pointeurs */

#include <iostream>
using namespace std;

int ajoute_deux(int a);
void ajoute_deux_bis(int &a);
void ajoute_deux_ter(int *p);
void decoupe_minutes(int *pointeurHeures, int *pointeurMinutes);

int main()
{

    // variables
    int x = 5;
    cout << "La valeur de la variable x est " << x << endl;
    cout << "L'adresse de la variable x est " << &x << endl;

    // références
    int score = 10;
    int &ref_score = score;
    cout << "ref_score = " << ref_score << endl;

    score = 15;
    cout << "score = " << score << endl;
    cout << "ref_score = " << ref_score << endl;

    ref_score = 20;
    cout << "score = " << score << endl;
    cout << "ref_score = " << ref_score << endl;

    // pointeurs
    int age = 10;
    int *pointeurAge;
    pointeurAge = &age;

    cout << "Contenu de pointeurAge: " << *pointeurAge << endl;

    int *p = nullptr;

    // passage d'arguments à une fonction
    int ma_variable = 10;
    int variable_incrementee = ajoute_deux(ma_variable);
    cout << "ma_variable = " << ma_variable << endl;
    cout << "variable_incrementee = " << variable_incrementee << endl;

    ma_variable = 10;
    ajoute_deux_bis(ma_variable);
    cout << "ma_variable = " << ma_variable << endl;

    ma_variable = 10;
    ajoute_deux_ter(&ma_variable);
    cout << "ma_variable = " << ma_variable << endl;

    // allocation dynamique
    int *pointeur;
    pointeur = new int;
    *pointeur = 2;
    cout << "Contenu du pointeur: " << *pointeur << endl;

    // utilisation des pointeurs
    int heures = 0, minutes = 90;
    decoupe_minutes(&heures, &minutes);
    printf("%d heures et %d minutes\n", heures, minutes);

    return 0;
}

int ajoute_deux(int a)
{
    a += 2;
    return a;
}

void ajoute_deux_bis(int &a)
{
    a += 2;
}

void ajoute_deux_ter(int *p)
{
    *p += 2;
}

void decoupe_minutes(int *pointeurHeures, int *pointeurMinutes)
{
    *pointeurHeures += *pointeurMinutes / 60;
    *pointeurMinutes %= 60;
}