#include <stdio.h>
#include <stdlib.h>

struct Persoonsgegevens
{
    char naam[30];
    char adres[50];
    int huisNummer;
    char woonplaats[50];
    int leeftijd;
};

struct Persoonsgegevens persoon1;
struct Persoonsgegevens persoon2;

FILE *tx;

int main()
{
    tx = fopen("test.txt", "w");
    persoon1Gegevens();
    persoon2Gegevens();
    printPersoon1Gegevens();
    printPersoon2Gegevens();
    return 0;
}

int persoon1Gegevens()
{
    printf("\nvul naam in ");
    scanf("%s",&persoon1.naam);
    printf("vul adres in ");
    scanf("%s",&persoon1.adres);
    printf("vul huis nummer in ");
    scanf("%d",&persoon1.huisNummer);
    printf("vul woonplaats in ");
    scanf("%s",&persoon1.woonplaats);
    printf("vul leeftijd in ");
    scanf("%d",&persoon1.leeftijd);

    if(persoon1.naam == "" || persoon1.adres == "" || persoon1.huisNummer == "" || persoon1.woonplaats == "" || persoon1.leeftijd == "")
    {
        printf("je hebt iets niet of fout in gevoerd doe het opnieuw");
        persoon1Gegevens();

    }
}

int persoon2Gegevens()
{
    printf("\nvul naam in ");
    scanf("%s",&persoon2.naam);
    printf("vul adres in ");
    scanf("%s",&persoon2.adres);
    printf("vul huis nummer in ");
    scanf("%d",&persoon2.huisNummer);
    printf("vul woonplaats in ");
    scanf("%s",&persoon2.woonplaats);
    printf("vul leeftijd in ");
    scanf("%d",&persoon2.leeftijd);

    if(persoon2.naam == "" || persoon2.adres == "" || persoon2.huisNummer == "" || persoon2.woonplaats == "" || persoon2.leeftijd == "")
    {
        printf("je hebt iets niet of fout in gevoerd doe het opnieuw A.U.B");
        persoon2Gegevens();

    }
}

int printPersoon1Gegevens()
{
    fprintf(tx,"\nnaam: %s\n", persoon1.naam);

    fprintf(tx,"adres: %s\n", persoon1.adres);

    fprintf(tx,"huisnummer: %d\n", persoon1.huisNummer);

    fprintf(tx,"woonplaats: %s\n", persoon1.woonplaats);

    fprintf(tx,"leeftijd: %d\n", persoon1.leeftijd);

    return 0;
}

int printPersoon2Gegevens()
{
    fprintf(tx,"\nnaam: %s\n", persoon2.naam);

    fprintf(tx,"adres: %s\n", persoon2.adres);

    fprintf(tx,"huisnummer: %d\n", persoon2.huisNummer);

    fprintf(tx,"woonplaats: %s\n", persoon2.woonplaats);

    fprintf(tx,"leeftijd: %d\n", persoon2.leeftijd);

    return 0;
}
