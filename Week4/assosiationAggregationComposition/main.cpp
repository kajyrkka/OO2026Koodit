#include <iostream>
#include <vector>
using namespace std;

#include <string>

// Assosiation, missä olio KÄYTTÄÄ toista erillistä olioa
class Opettaja {
public:
    std::string nimi;
};

class Kurssi {
public:
    void asetaOpettaja(Opettaja* o) {
        opettaja = o;
    }

private:
    Opettaja* opettaja = nullptr; // EI omista
};



// Aggregation, missä olio MUODOSTUU toisista oliosta, mutta ei omista näitä
class Pelaaja {
public:
    std::string nimi;
};

class Joukkue {
public:
    void lisaaPelaaja(Pelaaja* p) {
        pelaajat.push_back(p);
    }

private:
    std::vector<Pelaaja*> pelaajat; // EI omista
};

//Composition
class Moottori {
public:
    Moottori() {
        std::cout << "Moottori luotu\n";
    }
    ~Moottori() {
        std::cout << "Moottori tuhottu\n";
    }
};

class Auto {
public:
    Auto() = default;

private:
    Moottori moottori; // OMISTAA
};




int main() {
    Opettaja o;
    o.nimi = "Maija";

    Kurssi k;
    k.asetaOpettaja(&o);

    Pelaaja p1{"Matti"};
    Pelaaja p2{"Teemu"};

    Joukkue j;
    j.lisaaPelaaja(&p1);
    j.lisaaPelaaja(&p2);

    Auto a;

    // Opettaja ja Kurssi elävät erikseen
}
