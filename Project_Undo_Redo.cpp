#include <iostream>
#include"clsMyString.h"
using namespace std;

int main()
{
    clsMyString S1;

    cout << "\nS1 =" << S1.value << "\n";

    S1.value = "Abdalluh";
    cout << "\nS1 =" << S1.value << "\n";

    S1.value = "Abdalluh2";
    cout << "\nS1 =" << S1.value << "\n";

    S1.value = "Abdalluh3";
    cout << "\nS1 =" << S1.value << "\n";
    

    cout << "\nUndo:";
    S1.Undo();
    cout << "\nS1 After Undo = " << S1.value << "\n";

    S1.Undo();
    cout << "\nS1 After Undo = " << S1.value << "\n";

    S1.Undo();
    cout << "\nS1 After Undo = " << S1.value << "\n";

    cout << "\nRndo:";
    S1.Redo();
    cout << "\nS1 After Redo = " << S1.value << "\n";

    S1.Redo();
    cout << "\nS1 After Redo = " << S1.value << "\n";

    S1.Redo();
    cout << "\nS1 After Redo = " << S1.value << "\n";

}
