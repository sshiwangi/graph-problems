#include<iostream>
#include <vector>
#include <queue>
using namespace std;
class solution{

public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfs;  // vector to store the answer
        vector<int> vis(V+1,0); //visited array initialized to 0
        queue<int> q; 
        q.push(0); // push vertex 0 in queue
        vis[0] = 1; // mark it to be visited
        while(!q.empty()){ 
            int node = q.front(); // take out 0 and store it in variable node
            q.pop();  // pop it from the queue
            bfs.push_back(node);  // push the node in ans bfs
            for(auto it:adj[node]){  // iterate over the adjacent of the node that is 0 here
                if(!vis[it]){  // if the adjacent are not visited
                    q.push(it);  // push it in queue
                    vis[it]=1;
                }
            } // when this for loop ends, we are done traversing all the adjacents of the vertex 0
        } // when this while loop ends, we will be done with storing the traversal in the answer 
        return bfs;
    }
};

int main(){
    /* the graph is
          0
       /  | \
       1  2  3
          \
           4

     */

}
