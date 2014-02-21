#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_stagier
{
    int num;
    char nom[25];
    char section[20];
    char groupe;
    float note[3];
    float moyenne;
} s_stagier;

s_stagier liste[1000];
int pos=0;
char tmp[25];

void ajouter(); //fait
void afficher(); //fait
void recherche(); //fait
void modifier(); //fait
void supprimer(); //fait
void filtrer(); //a faire

int stagier(int i); //fait (à refaire: faire servir remplir(?))
void imprimer(int i); //fait
void eliminer(int i); //fait

s_stagier remplir(); //fait
int cherche_s(char s[]); //fait
int cherche_i(int i); //fait
void convertoupper(char s[]); //fait
int cas(); //fait

int main(int argc, char *argv[])
{
    char m;


    while (m!='0')
    {
        system("cls");
        printf("_________________________________________________");
        printf("\n1. Ajouter un stagiaire");
        printf("\n2. Affichage des stagiaires");
        printf("\n3. Recherche d'un stagiaire");
        printf("\n4. Modifier un stagiaire");
        printf("\n5. Supprimer un stagiaire");
        printf("\n6. Filtrer");
        printf("\n0. Sortir\n");
        printf("_________________________________________________");
        printf("\nEntrez votre option: ");
        m=getch();

        switch(m)
        {
        case '1':
            system("cls");
            ajouter();
            break;
        case '2':
            system("cls");
            afficher();
            break;
        case '3':
            system("cls");
            recherche();
            break;
        case '4':
            system("cls");
            modifier();
            break;
        case '5':
            system("cls");
            supprimer();
            break;
        case '6':
            system("cls");
            filtrer();
            break;
        case '0':
            break;
        }
    }

    return 0;
}

s_stagier remplir()
{

    int j;
    char c;
    s_stagier stg;

    fflush(stdin);
    printf("Entrez le nom du stagier: ");
    gets(stg.nom);

    printf("Entrez le numero de registre du stagier: ");
    scanf("%d",&stg.num);


    fflush(stdin);
    printf("Entrez la section du stagier: " );
    gets(tmp);
    convertoupper(tmp);
    strcpy(stg.section,tmp);

    printf("Entrez le groupe du stagier: ");
    scanf("%c",&c);
    stg.groupe=toupper(c);

    stg.moyenne=0.0;

    for (j=0; j<3; j++)
    {
        printf("Entrez la note %d du stagier",j+1);
        scanf("%f",&stg.note[j]);
        stg.moyenne+=stg.note[j];
    }

    stg.moyenne=stg.moyenne/3.0;
    return stg;
}

void convertoupper(char s[])
{
    int i;

    for (i=0; i<strlen(s); i++)
    {
        s[i]=toupper(s[i]);
    }
}

int cherche_s(char s[])
{
    int i;

    for (i=0; i<pos; i++)
    {
        if (strcmp(s,liste[i].nom)==0)
        {
            return i;
        }
    }

    return -1;
}

int cherche_i(int i)
{
    int j;

    for (j=0; j<pos; j++)
    {
        if (i==liste[j].num)
        {
            return j;
        }
    }

    return -1;
}

int stagier(int i)
{
    int j,m;
    char c;

    fflush(stdin);
    printf("Entrez le nom du stagier %i: ", i+1);
    gets(tmp);
    if (cherche_s(tmp)!=-1)
    {
        printf("Le nom existe deja\n");
        system("pause");
        return 1;
    }

    if (strcmp(tmp,".")==0)
    {
        return -1;
    }

    printf("Entrez le numero de registre du stagier %i: ", i+1);
    scanf("%d",&m);

    if (cherche_i(m)!=-1)
    {
        printf("Le numero de registre existe deja\n");
        system("pause");
        return 1;
    }


    liste[i].num = m;
    strcpy(liste[i].nom,tmp);

    fflush(stdin);
    printf("Entrez la section du stagier %i: ", i+1);
    gets(tmp);
    convertoupper(tmp);
    strcpy(liste[i].section,tmp);


    printf("Entrez le groupe du stagier %i: ", i+1);
    scanf("%c",&c);
    liste[i].groupe=toupper(c);

    liste[i].moyenne=0.0;

    for (j=0; j<3; j++)
    {
        printf("Entrez la note %d du stagier %i: ",j+1, i+1);
        scanf("%f",&liste[i].note[j]);
        liste[i].moyenne+=liste[i].note[j];
    }

    liste[i].moyenne=liste[i].moyenne/3.0;
    return 0;
}

void imprimer(int i)
{
    int j;
    printf("%d. %-20s \t Registre: %5d  Section: %-5s  Groupe: %c\n",i+1,liste[i].nom,liste[i].num,liste[i].section,liste[i].groupe);
    for (j=0; j<3; j++)
    {
        printf("Note %d: %2.02f\t\n",j+1, liste[i].note[j]);
    }
    printf("\t\t\t\t\t\tMoyenne: %2.02f\n\n",liste[i].moyenne);

}

void eliminer(int i)
{
    int j;

    for (j=i; j<pos; j++)
    {
        liste[j]=liste[j+1];
    }

    pos--;
}


int cas()
{
    char m;
    int i,r;

    while (m!='0')
    {

        printf("_________________________________________________");
        printf("\n1. Par nom");
        printf("\n2. Par numero de registre");
        printf("\n0. Sortir\n");
        printf("_________________________________________________");
        printf("\nEntrez votre option: ");
        m=getch();

        switch(m)
        {

        case '1':
            system("cls");
            fflush(stdin);
            printf("Entrez le nom du stagier: ");
            gets(tmp);
            i=cherche_s(tmp);
            if (i == -1)
            {
                printf("Le nom n'existe pas\n");
            }
            return i;

        case '2':
            system("cls");
            printf("Entrez le numero de registre du stagier: ");
            scanf("%d",&r);
            i=cherche_i(r);
            if (i == -1)
            {
                printf("Le numero n'existe pas\n");
            }
            return i;

        case '0':
            break;
        }
    }
}

void ajouter()
{
    int i,s;
    fflush(stdin);

    for (i=pos; i<1000; i++)
    {
        system("cls");
        printf("-Entrez les donnees du stagier %i\n", i+1);
        s=stagier(i);
        if (s==-1)
        {
            pos = i;
            break;
        }

        if (s==0)
        {
            pos++;
        }

        if (s==1)
        {
            i--;
        }
    }
}

void afficher()
{
    int i, j;

    for (i=0; i<pos; i++)
    {
        imprimer(i);
    }
    system("pause");
}

void recherche()
{
    int i;

    printf("Recherche\n");
    i=cas();
    if (i!=-1)
        imprimer(i);
}

void modifier()
{
    int i;

    printf("Modifier\n");
    i=cas();
    if (i!=-1)
        liste[i]=remplir();
}


void supprimer()
{
    int i;

    printf("Supprimer\n");
    i=cas();
    if (i!=-1)
        eliminer(i);
}

void filtrer()
{
    char m;

    while (m!='0')
    {
        system("cls");
        printf("Filtrer\n");
        printf("_________________________________________________");
        printf("\n1. Par ");
        printf("\n2. Par ");
        printf("\n0. Sortir\n");
        printf("_________________________________________________");
        printf("\nEntrez votre option: ");
        m=getch();

        switch(m)
        {
        case '1':
            break;
        case '2':
            break;
        case '0':
            break;
        }
    }
}

