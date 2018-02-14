//
// Created by Vincent on 14/02/2018.
//

#include "e6.h"
#include "e4.h"
#include "e5.h"
#include "e9.h"

E6::E6(string name) : Etat(name){}

E6::~E6() {}

void E6::print() const
{
    Etat::print();
}

bool E6::transition(Automate &automate, Symbole *s)
{
    switch(*s)
    {
        case PLUS:
            automate.decalage(s, new E4("etat4"));
            break;
        case MULT:
            automate.decalage(s, new E5("etat5"));
            break;
        case CLOSEPAR:
            automate.decalage(s, new E9("etat9"));
            break;
    }
    return false;
}
