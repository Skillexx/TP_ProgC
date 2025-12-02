#include <stdio.h>

int main(){
  int compteur = 5; // On inité la vaible compteur a 5

if(compteur > 9){
  printf("le compteur doit etre infiéreur à 10");
  return 1; // Permet de mettre un code erreur pour savoir d'où provient l'erreur
}

for (int i=1, i<compteur, i++){
  for(int j = 1, j < i, j++){
    if (i == 1) {
      printf("* "); // Pour la premiere ligne, ça commence forcément par une *

    else if (i==compteur){
      printf("* "); // derniere ligne en étoiles
    }

    }
    else {
        // lignes intermédiaires
        if (j % 2 == 1)
            printf("* ");   // positions impaires → *
        else
            printf("# ");   // positions paires → #
        }
    }
    printf("\n");
  }
  return 0;
}
