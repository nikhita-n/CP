/*IDEA:
Run dfs from any vertex and maintain a color array such that every vertex you visit should have a diff color from its parent*/

bool bipartite = true;
Graph G;
int color[V]={0};

void dfs(int v, int cur){ //inittially dfs(0,1) is passed.
  marked[v] = true;
  color[v] = cur; // color this vertex as cur
  for (int w:G.adj(v)){
         if (color[w] == cur) { // if color of vertex i is equal to color of v, that is cur
               bipartite = false; // graph is definitely not bipartite, so return
               return;
         }
         if (!marked[w]) dfs(w, cur==1?2:1); // continue dfs
     }
to find the sets, all same values in color form a set.