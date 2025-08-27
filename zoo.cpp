#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;

int main() {

  Animal animal4("Dog",2025);
  AnimalsInZoo zooAnimal(animal4);
  
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Cat", 2025);
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();
   zooAnimal.display();
   delete animal1;
}
