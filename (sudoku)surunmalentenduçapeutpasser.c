#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define r 9
#define c 9
#define horiz 0
#define vert 1

/*
Pour l'exercice vous aurez besoin de generer des entiers aléatoire : rand() renvoit un entier aléatoire.
il s'utilise : rand() % NOMBREMAX + 1 
Pour un entier aléatoire entre 0 et 1 il faut donc faire rand() %2
voir dans la methode main.
*/

int generer(int grid[r][c]){
    int tableauJoueur[9][9];
    int i, j;
    int list = 0;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if (grid[i][j] != 0)
            {
                list++;
            }
        }
    }
    printf("le nombre d'elements non nuls est : %d \n", list);
    printf("TABLEAU JOUEUR");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) 
    {
    for(i=0; i<9; ++i)
        if (rand()%4 == 1)
        {
        tableauJoueur[j][i] = grid[j][i];
        }
        else
        tableauJoueur[j][i] = 0;
    }
    for(i=0;i<9; ++i) 
    {
    for(j=0; j<9; ++j)
        printf("%d ", tableauJoueur[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");
    int t, u, v;
    int remplissage = 0;
    int cont = 1;
    while (cont == 1)
    {   
        printf("saisissez la ligne, la colonne et la valeur voulue : ");
        scanf("%d %d %d", &t, &u, &v);
        
        if (tableauJoueur[t][u] == 0)
        {
            remplissage++;
            tableauJoueur[t][u] = v;
            for(i=0;i<9; ++i) 
            {
            for(j=0; j<9; ++j)
                printf("%d ", tableauJoueur[i][j]);
            printf("\n");  
            }
            printf("---------------------------------");  
            printf("\n");
        
        printf("remplissage = %d \n", remplissage);
        }
        else
            printf("L'echec n'est pas tolere !");
            //exit(EXIT_FAILURE);
        printf("%d \n", v);
        printf("%d \n", cont);
    }
    int verifLigneColonne(int tableauJoueur[i][j]){
        int nbi;
        int nbj;
        int nbAll;
        for (j = 0; j<9; j++)
        {
            nbj++;
        }
        
        for (i = 0; i < 9; i++){
            if (tableauJoueur[i][j] != 0){
                nbi++;
            }
            for ( j = 0; j<9; j++){
                if (tableauJoueur[i][j] != 0){
                    nbAll++;
                }
            }
        }
    }
}




/*
int saisir(int grid[r][c]){
    int test = generer(grid);
    test;
    int i, j, v;
    int remplissage = 0;
    printf("saisissez la ligne, la colonne et la valeur voulue : ");
    scanf("%d %d %d", &i, &j, &v);
    
    if (grid[i][j] == 0)
    {
        grid[i][j] = v;
        remplissage++;
    }
    printf("%d \n", v);
    printf("%d", test);
}
*/





/*
int verifierLigneColonne(int num, horiz, vert, grid[r][c]){

}

int verifierRegion(int k){

}
*/
// Ecrire la fonction generer(), elle prend en paramètre la grille et renvoie le nombre d'éléments non nuls

// Ce lien vous sera utile : https://www.geeksforgeeks.org/pass-2d-array-parameter-c/


/*Écrire une fonction saisir() qui demande à l’utilisateur de saisir au clavier les indices i et j et la valeur v à placer à l’emplacement (i,j).
La fonction doit vérifier la validité des indices et de la valeur.
Si la case n’est pas occupée, la valeur doit être placée dans la grille. remplissage est alors incrémentée*/


/*
Écrire la fonction verifierLigneColonne() qui prend en paramètre un numéro et un sens (HORIZ ou VERT)
qui vérifie que la ligne ou la colonne (suivant les cas) numéro est bien remplie.
On pourra utiliser un tableau intermédiaire pour vérifier cela. La fonction retournera 1 si tout s’est bien passé, 0 sinon.
 Les constantes HORIZ de valeur 0 et VERT de valeur 1 sont à définir.
*/

/*
Écrire la fonction verifierRegion() qui prend en paramètre deux indices k et l qui correspondent à la région (k,l)
et qui renvoie 1 si la région est correctement remplie, 0 sinon.
*/

//Écrire la fonction verifierGrille() qui renvoie 1 si la grille est correctement remplie et 0 sinon


//Écrire le programme principal, en supposant que la seule condition d’arrêt est la réussite du sudoku (ce test ne devra être fait que si nécessaire)


int main(){
    // Ne pas toucher le code entre les commentaires
    srand( time( NULL ) );


    int i, j, k;
    int solution[9][9];
    printf("SOLUTION");  
    printf("\n");  
    printf("---------------------------------");  
    printf("\n");  
    for(j=0;j<9; ++j) 
    {
    for(i=0; i<9; ++i)
        solution[j][i] = (i + j*3 +j /3) %9 +1 ; 
    }
    
    for(i=0;i<9; ++i) 
    {
    for(j=0; j<9; ++j)
        printf("%d ", solution[i][j]);
    printf("\n");  
    }
    printf("---------------------------------");  
    printf("\n");  
    //toucher le code entre les commentaires 
    printf("%d \n",rand() % 2);
    generer(solution);


    //Ne pas toucher au code ci dessous
    system("pause");
    return 0;
}
