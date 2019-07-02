#include <stdio.h>

double netto = 0.0;
double brutto = 0.0;
double mwst = 0.0;
double skonto = 0.0;
double rechnungsbetrag = 0.0;


void menuausgabe(){
    printf("\n\n");
    printf("Nettopreis\t\tEuro %10.2f\n", netto);
    printf("+ 20%% MwSt\t\tEuro %10.2f\n", mwst);
    printf("=======================================\n");
    printf("Bruttopreis\t\tEuro %10.2f\n", brutto);
    printf("- 2%% Skonto\t\tEuro %10.2f\n", skonto);
    printf("=======================================\n");
    printf("Rechnungsbetrag\t\tEuro %10.2f\n", rechnungsbetrag);
    printf("\n\n");
}

void eingabe(){
    double value = 0.0;
    while(!scanf("%lf", &value)){
        printf("Falsche Eingabe\n");
        printf("Bitte gib einen Netto Preis ein: ");
        getchar();
    }
    netto = value;
}

void preiseBerechnen(){
    mwst = netto * 0.20;
    brutto = netto + mwst;
    skonto = brutto * 0.02;
    rechnungsbetrag = brutto - skonto;
}

int main() {
    printf("Bitte gib einen Netto Preis ein: ");
//    scanf("%lf", &netto);
    eingabe();
    preiseBerechnen();
    menuausgabe();
    return 0;
}