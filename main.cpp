#include <iostream>
//#include "GraphType.h"
#include "GraphType.cpp"

using namespace std;

int main()
{
    GraphType<char> grap;
    char c;
    c='A';
    while(c<='H')
    {
        grap.AddVertex(c++);
    }
    grap.AddEdge('A','C',1);
    grap.AddEdge('A','B',1);
    grap.AddEdge('B','A',1);
    grap.AddEdge('A','D',1);
    grap.AddEdge('D','A',1);
    grap.AddEdge('D','G',1);
    grap.AddEdge('G','F',1);
    grap.AddEdge('F','H',1);
    grap.AddEdge('H','E',1);
    grap.AddEdge('D','E',1);


    cout<<grap.OutDegree('D')<<endl;

    if(grap.FoundEdge('A','D'))
        cout<<"There is an edge"<<endl;
    else
        cout<<"There is not any edge"<<endl;
    if(grap.FoundEdge('B','D'))
        cout<<"There is an edge"<<endl;
    else
        cout<<"There is not any edge"<<endl;

        grap.DepthFirstSearch('B','E');
        grap.DepthFirstSearch('E','B');

        grap.BreadthFirstSearch('B','E');
        grap.BreadthFirstSearch('E','B');
    return 0;
}
