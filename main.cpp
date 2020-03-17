#include <bits/stdc++.h>
using namespace std;
///n - number of tops,m - number of edges.Two-dimensional array graph - adjacency matrix of graph.
int n,m;
int **graph;
/*
///List with edges: start, finish and weight
vector < int, pair <int,int> > edgeList;
*/
///READING FROM THE FILE
void make_graph(){
    ///Opening the file
    char filename[255];
    cout<<"Enter name of file to read\n";
    cin.ignore('\n',255);
    ifstream file(filename);
    if(!f){cout<<"Something wrong with the file\n";exit(1);}
    ///Reading number of tops and edges
    file>>n>>m;
    ///Creating matrix of the graph
    graph = new int* [n+1];
    for(int i=1;i<=n;i++){
        graph[i] = new int[n+1];
        for(int j=1;j<=n;j++)
        graph[i][j] = -1;
    }
    int s,f,w;
    for(int i=1;i<=m;i++){
        file>>s>>f>>w;
        graph[s][f] = w;
    }
}

void djikstra(int mode){

}

void floyd(){

}

int main(){
    make_graph();
}
