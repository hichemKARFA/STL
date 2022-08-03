#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> monVector {1 ,5 ,3 };

    //Trier un vecteur,  sort prends des objet en param et monVector.begin/end lui fournit
    std::sort(monVector.begin(), monVector.end());
    for (auto elem : monVector){ //le for est aussi un itérateur
        std::cout << elem << std::endl;
    }

    //inverser un vecteur
    std::reverse(monVector.begin(), monVector.end());
    for (auto elem : monVector){
        std::cout << elem << std::endl;
    }

    //Accumulateur
    int sum{};
    sum = std::accumulate(monVector.begin(), monVector.end(),0); // le type du 3eme élement est important
    std::cout << sum << std::endl;

    /* 3 types de conteneur
     * sequence  containers : array, vector, list, forward_list, deque
     * Conserve l'ordre d'insertion des élements
     *
     * assiociative containers : set, multi set, map, multi map
     * insertion des elements dans un ordre prédéfini ou pas d'ordre
     * (par exemple set est un collection d'élément ou il n'y a pas de doublon, mais il peut y avoir un ordre associé ou pas on a l'option de choisir) il a des et qui autorise les doublons en option
     * (map est commme un dictionaire association mot a sa definition) (map peut autorisé les doublons en option)
     *
     * container adapters: stack, queue, priority queue
     * ne prend pa en cahrge les itérateur, donc ils ne peuvent pas etre utilisé avec les algorithme stl, mais sont si couramement utilisé que la stl les supporte
     */



    /* Type d'iterateur  (iterateur => genere une séquence d'element a partir d'ubn conteners)  (contenaires => une collection d'objet ou de type primivives)  (algorithms fonctions pour le traitement d'une séquence d'éléments provenant de conteneurs)
     *
     * input iterators (from the contenair to the program) (cela rend les élements du conteneur disponible pour le programme)
     * output iterators (from the program to the container) (peuvent parcourir une séquence et écrire un element dans un conteneur)
     * foward iterators (navigate one item at a time in one direction) (peut itéré a l'avant et peut lire ou écire n'importe quel élément
     * bi-directional iterators (navigate one item at a time both directions) (meme chose mais dans les deux sens
     * random acces iterators (directly acces a ccontainer item) (ils peuvent utiliser le subscript opetator pour acceder directment aux elements (comme avec le vecteur)
     */


    /* type d'algorithms
     * Non-modifying
     * modifying
     */

    // containers - algorithms - iteator  - foncteurs(pas dans ce cours) - allocateurs (pas dans ce cours)


    return 0;
}
