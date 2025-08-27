#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal an){
        animal=an;
	numAnimals =1;
}
AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
}
void AnimalsInZoo::display(){
  std::cout << numAnimals<<" ";
	if(numAnimals==1){animal.display();}
}
