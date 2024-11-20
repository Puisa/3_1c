#include "std_lib_inc.h"

// Funktion zur Berechnung der Summe der Einträge
double summeBerechnen(vector<double> eingabe)
{
    double summe = 0.0;
    for (double wert : eingabe)
    {
        summe += wert;
    }
    return summe;
}

// Funktion zur Berechnung des Durchschnitts
double durchschnittBerechnen(vector<double> eingabe)
{
    // if (eingabe.empty())
    //  {
    //  return 0.0;
    //  }

    double summe = summeBerechnen(eingabe); // Verwende die Summe-Funktion
    return summe / eingabe.size();
}

int main()
{
    vector <double> abstaende = {};
    double abstand = 0.0;
    cin >> abstand;

    while(cin)
    {
        abstaende.push_back(abstand);
        cin >> abstand;
    }

    // Berechnungen
    double summeAbstaende = summeBerechnen(abstaende); // Summe berechnen
    double durchschnittsabstand = durchschnittBerechnen(abstaende);     // durchschnittliche Entfernung berechnen

// Ausgabe
    cout << "Die Summe der Abstände ist " << summeAbstaende << '\n';
    cout << "Der Durchschnittsabstand ist " << durchschnittsabstand << '\n';
    return 0;
}