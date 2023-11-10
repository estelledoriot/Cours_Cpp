/* Estelle DORIOT          */
/*  Cours sur les tableaux */

#include <iostream>
using namespace std;

int maximum(int tab[], int taille);
int somme(int tab[], int taille);
void print_matrix1(int *m, int n, int p);
void print_matrix2(int n, int m[][4]);

int main()
{
    int tab[7] = {15, 7, 20, 3, 10, 11, 16};
    tab[3] = 19;

    int truc[10] = {0};
    for (int i = 0; i < 10; i++)
        cout << truc[i] << " ";
    cout << endl;

    // parcours de tableau
    for (int i = 0; i < 7; i++)
        cout << tab[i] << " ";
    cout << endl;

    int maxi = maximum(tab, 7);
    cout << "Le maximum de tab est: " << maxi << endl;

    // tailles de tableau
    int donnees[50];
    cout << "Veuillez donner une taille de tableau (entre 1 et 50): ";
    int taille = 0;
    cin >> taille;
    cout << "Veuillez donner les valeurs à stocker:" << endl;
    for (int i = 0; i < taille; i++)
    {
        cin >> donnees[i];
    }

    // utilisation de fonctions
    cout << "Tableau: " << donnees << endl;
    cout << "Adresse du premier élément: " << &donnees[0] << endl;

    int s = somme(donnees, taille);
    cout << "La somme des éléments de donnees est: " << s << endl;

    // matrices
    int M[3][4] = {{8, 5, 2, 6}, {3, 4, 7, 9}, {1, 3, 0, 4}};
    cout << "La case (1,2) de M est " << M[1][2] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    print_matrix1(&M[0][0], 3, 4);
    print_matrix2(3, M);

    return 0;
}

int maximum(int tab[], int taille)
{
    int maxi = tab[0];
    for (int i = 0; i < taille; i++)
        if (tab[i] > maxi)
            maxi = tab[i];
    return maxi;
}

int somme(int tab[], int taille)
{
    int s = 0;
    for (int i = 0; i < taille; i++)
        s += tab[i];
    return s;
}

void print_matrix1(int *m, int n, int p)
{
    // affiche une matrice m de taille n*p (linéarisée)
    for (int i = 0; i < n; i++) // i parcourt les lignes
    {
        for (int j = 0; j < p; j++) // j parcourt les colonnes
            cout << m[i * p + j] << " ";
        cout << endl;
    }
}

void print_matrix2(int n, int m[][4])
{
    // affiche une matrice m de taille n*4
    for (int i = 0; i < n; i++) // i parcourt les lignes
    {
        for (int j = 0; j < 4; j++) // j parcourt les colonnes
            cout << m[i][j] << " ";
        cout << endl;
    }
}