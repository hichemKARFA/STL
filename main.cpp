#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

struct Person{
    std::string  name;
    int age;
    bool operator>(const Person &p1)const{
       return this->age > p1.age;
    }
    bool operator<(const Person &p1)const{
        return this->age < p1.age;
    }

};

template <typename T> // ou template <class T> c'est la même chose
T max(T a, T b){
    return (a > b ? a : b );
}




template <typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout << a << "" << b;
}

std::ostream &operator <<(std::ostream &os,const Person &p){
    os << p.name;
    return os;
}

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


    // CODE GENERIQUE

    // V1 on peut utiliser les macro, mais ce n'est pas conseillé (surtout macro avec param)

    // V2 template pour une fonction :

    // Exemple 1  :

    // Creation template (le code n'est pas généré tant que l'utilisateur n'utilise pas une version spécifique de la template)
    // Utilisation spécifique de la template
    int a {10};
    int b {20};
    std::cout << max<int>(a,b); // ou std::cout << max(a,b); il devenira le type
    Person p1 {"hichem",3};
    Person p2 {"nab",5};
    Person p3 = max(p1,p2);
    std::cout << p3.name << " est plus grand " << std::endl;

    // Exemple 2  :

    // Creation de templates avec plusieurs type generique
    // Utilisation d'une template avec plusieur type
    func<int,double>(10,20.3);
    func('A',23.5);

    return 0;
}

//template de classe
template <typename T> // On peut ausi avec plusieurs type différents template <typename T1, typename T2>
class Item {
    private:
        std::string name;
        T value;
    public:
        Item(std::string name,T value):name{name} , value{value}{}
        std::string getName(){
            return this->name;
        };
      T getValue(){
        return this->value;
    };
    };


