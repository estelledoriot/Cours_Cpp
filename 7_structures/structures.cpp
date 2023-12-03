/* Estelle DORIOT            */
/*  Cours sur les structures */

#include <iostream>
using namespace std;

struct MaStructure
{
    int variable1;
    int variable2;
    double truc;
};

struct Point
{
    double x;
    double y;
};

struct element
{
    float x;
    float y;
    struct element *suivant;
};

union Nombre
{
    int i;
    float f;
};

enum Jour
{
    LUNDI = 1,
    MARDI = 2,
    MERCREDI = 3,
    JEUDI = 4,
    VENDREDI = 5,
    SAMEDI = 6,
    DIMANCHE = 7
};

Point initialiser()
{
    double x, y;
    cout << "Coordonnée x: ";
    cin >> x;
    cout << "Coordonnée y: ";
    cin >> y;
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

void affiche(Point p)
{
    cout << "Point(x=" << p.x << ",y=" << p.y << ")" << endl;
}

void origine(Point *p)
{
    p->x = 0.0;
    p->y = 0.0;
}

void activite(Jour jour)
{
    if (jour == LUNDI)
    {
        cout << "Il y a tennis" << endl;
    }
    else if (jour == MARDI)
    {
        cout << "Il y a piscine" << endl;
    }
}

int main()
{
    typedef int entier;
    entier a = 3;
    typedef int vecteur[3];
    vecteur v, w;
    typedef int *ptr_int;
    ptr_int p;

    Point p1;
    p1.x = 10.0;
    p1.y = 20.0;
    Point p2 = {0.0, 0.0};

    Point pt = initialiser();
    affiche(pt);
    origine(&pt);
    affiche(pt);

    Nombre nb;
    nb.i = 10;
    cout << nb.i << endl;
    nb.f = 20.0;
    cout << nb.i << endl;

    Jour courant = MERCREDI;
    Jour debut = LUNDI;
}
