//
// Created by sohayla on 20/03/19.
//

#ifndef JAVA_COMPILER_NFA_H
#define JAVA_COMPILER_NFA_H

#include "Graph.h"

using namespace std;
class NFA {
private:
    Graph* automata;
    NFA();
public:
    static NFA* getInstance();
    Graph* getAutomata();
    bool setAutomata(Graph* graph);
    void read_input();


};


#endif //JAVA_COMPILER_NFA_H
