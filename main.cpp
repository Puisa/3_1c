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

// Funktion zur Berechnung des kleinsten Wertes
double kleinsterWert(vector<double> eingabe)
{
    double kleinster = eingabe[0];
    for (double wert : eingabe)
    {
        if (wert < kleinster)
        {
            kleinster = wert;
        }
    }
    return kleinster;
}

// Funktion zur Berechnung des größten Wertes
double groessterWert(vector<double> eingabe)
{
    double groesster = eingabe[0];
    for (double wert : eingabe)
    {
        if (wert > groesster)
        {
            groesster = wert;
        }
    }
    return groesster;
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
    double summeAbstaende = summeBerechnen(abstaende);
    double durchschnittsabstand = durchschnittBerechnen(abstaende);
    double kleinsterAbstand = kleinsterWert(abstaende);
    double groessterAbstand = groessterWert(abstaende);

    // Ausgabe
    cout << "Die Summe der Abstände ist " << summeAbstaende << '\n';
    cout << "Der Durchschnittsabstand ist " << durchschnittsabstand << '\n';
    cout << "Der kleinste Abstand ist " << kleinsterAbstand << '\n';
    cout << "Der größte Abstand ist " << groessterAbstand << '\n';
    return 0;
}