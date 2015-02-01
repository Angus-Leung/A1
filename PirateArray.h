#ifndef PIRATE_ARRAY
#define PIRATE_ARRAY

#define MAX_PIRATES    16

class PirateArray {

// Data members
private:
    Pirate *pirates[MAX_PIRATES];

// Constructor
public:
    PirateArray();

// Member functions
public:
    void add(Pirate*);
<<<<<<< HEAD
    //void remove(int);       // the int is an index
    Pirate* getPirate(int);
    // void set(int);
    //int getIndex(Pirate*);

=======
    void get(int);
    
};
>>>>>>> FETCH_HEAD
#endif 
