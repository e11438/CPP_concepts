Const key word

Const is a promise, which can be bypassed

const with variables

const int MAX = 1000; // const variable

const with variable pointers

    const int * a = new int; // content is constatnt, we can't do (*a = 2)
    int * const b = new int; // pointer is constant, we cant change pointer 

const with functions

string getName() const{} // only inside class. A read only method, which can't modify class variables
const int * const getAge ()const //this seems not to have much use, because output will be assigned to a variable and after that variable pointer 
                                 //will be used to modify values



