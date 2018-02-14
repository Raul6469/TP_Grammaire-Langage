#pragma once

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, EXPR, FIN, ERREUR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "EXPR", "FIN", "ERREUR" };

class Symbole {
public:
    Symbole(int i) : ident(i) {  }
    virtual ~Symbole() { }
    operator int() const { return ident; }
    virtual void Affiche();
    void setIdent(int ident);

   protected:
      int ident;
};

class Entier : public Symbole {
public:
    Entier(int v) : Symbole(INT), valeur(v) {}

    ~Entier() {}

    int getVal(){ return valeur; };
    void setVal(int valeur);

    virtual void Affiche();

protected:
    int valeur;
};

