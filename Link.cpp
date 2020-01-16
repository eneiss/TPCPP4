/*************************************************************************
                           Link  -  description
                             -------------------
    d�but                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- R�alisation de la classe <Link> (fichier Link.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Link.h"
#include "File.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type Link::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
Link& Link::operator = (const Link& unLink)
// Algorithme :
//
{
    return *this;
} //----- Fin de operator =

bool Link::operator==(const Link& unLink) const
{
    return origin->myName()==unLink.origin->myName();
}

bool Link::operator<(const Link& unLink) const
{
    return origin->myName() < unLink.origin->myName();
}

//-------------------------------------------- Constructeurs - destructeur
Link::Link(const Link& unLink)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Link>" << endl;
#endif
} //----- Fin de Link (constructeur de copie)


Link::Link(File* lOrigin, File* lTarget)
// Algorithme :
//
{
    numOFRequests = 0;
    origin = lOrigin;
    target = lTarget;
    
#ifdef MAP
    cout << "Appel au constructeur de <Link>" << endl;
#endif
} //----- Fin de Link


Link::~Link()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Link>" << endl;
#endif
} //----- Fin de ~Link


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es




