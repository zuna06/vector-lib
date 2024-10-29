#include <iostream>
#include <stdio.h>

struct Manufacturer {
    std::string company;
};

struct Speaker {
    /* member data */
    bool status;
    int decibels;
    Manufacturer manufacturer;

    /* member constructors */
    // default constructor
    Speaker() : status(), decibels(), manufacturer() {}

    // constructor taking arguments
    Speaker(bool stat, int volume, Manufacturer manu) : status(stat), decibels(volume), manufacturer(manu) {}
    
    // deconstructor 
    // these are called when a struct or object goes out of scope
    ~Speaker() {
        std::cout << "Deconstructor";
    }

    /* member functions */
    void getStatus() {
        if (status) {
            std::cout << "This speaker is on";
        } else {
            std::cout << "This speaker is off";
        }
    }
};

int main()  {

    Speaker beats;
    // struct Speaker beats; // another way to create a struct
    beats.status = 0; // zero for off
    beats.decibels = 100;
    beats.manufacturer = {"Beats by Dre"};
    beats.getStatus();

    /* array of structs */
    Speaker speakers[2];
    speakers[0] = {0, 100, {"Beats by Dre"}};
    speakers[1] = {0, 100, {"Apple"}};






    // pointer to a structure
    Speaker *p = &beats;
    (*p).decibels = 90; // hella work jus to access this mf
    p->decibels = 90; // much better on foenem

    /*
    p.length -- incorrect since p is a pointer, it doesnt have any members
    *p.length -- incorrect because the dot has higher precedence so the program will understand this as p.length first
    */

    // initializing struct in heap
    Speaker *bose;
    bose = new Speaker;
    // bose = (Speaker *)malloc(sizeof(Speaker)); // c-style
    
    bose->status = 1; // one for on
    bose->decibels = 20;
    
   

    delete bose;
    // free(bose) // c-style

    return 0;
}