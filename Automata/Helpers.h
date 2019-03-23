//
// Created by sohayla on 20/03/19.
//

#ifndef JAVA_COMPILER_HELPERS_H
#define JAVA_COMPILER_HELPERS_H

#include <string>
#include <map>
#include <list>
#include "Graph.h"

using namespace std;
class Helpers {
private:
    list<string> helpers;
    Helpers();
public :
    static Helpers* getInstance();
    Graph* mergeGraphs(Graph* graph_1, Graph* graph_2h, string helper);
    list<string> getHelpers();

    Graph *mergeOr(Graph *pGraph, Graph *graph_2);

    Graph *mergePlus(Graph *pGraph);

    Graph *mergeAst(Graph *pGraph);

    Graph *mergeCont(Graph *pGraph, Graph *graph_2);
};


#endif //JAVA_COMPILER_HELPERS_H
