//
// Created by anil on 16.04.2021.
//

#include <iostream>
#include <algorithm>
#include <vector>



using namespace std;




int depthFirstSearch(bool **visited, int node,vector<vector<int>> adjacency_list) {
    int count = 0;

    for(int i = 0; i < adjacency_list[node].size(); i++)
    {
        if(!(*visited)[adjacency_list[node][i]]) {
            count++;
            (*visited)[adjacency_list[node][i]] = true;
            count = count + depthFirstSearch(visited, adjacency_list[node][i],adjacency_list);
        }
    }
    return count;
}


int cut(vector<vector<int> > adjList, int result, int nodes) {
    bool iseven = false;
    int node;
    for(int i = 0; i < nodes; i++) {
        if(adjList[i].size() % 2 == 0) {
            iseven = true;
            node = i;
            break;
        }
    }

    if(!iseven)return result;


    for(int i = 0; i < adjList[node].size(); i++) {

        bool *isvisit = new bool[nodes];
        for(int j = 0; j < nodes; j++)isvisit[j] = false;


        isvisit[node] = true;
        int n2 = adjList[node][i];

        int subtree_size = depthFirstSearch( &isvisit, n2,adjList);

        if(subtree_size != 0 && subtree_size % 2 == 0) {

            vector<int>::iterator position = find(adjList[n2].begin(), adjList[n2].end(), node);
            adjList[n2].erase(position);
            adjList[node].erase(adjList[node].begin() + i);
            result++;
            break;
        }
    }
    return cut(adjList, result, nodes);
}






int main() {
    int nodes, vertexes;
    cin >> nodes >> vertexes;
    vector<vector<int> > adjacency_list;
    adjacency_list.resize(nodes);

    for(int i = 0; i < vertexes; i++) {
        int n1;
        int n2;
        cin >> n1 >> n2;
        adjacency_list[n1 - 1].push_back(n2 - 1);
        adjacency_list[n2 - 1].push_back(n1 - 1);
    }
    cout << cut(adjacency_list, 0, nodes) << "\n";
    return 0;
}
