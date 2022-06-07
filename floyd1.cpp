#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999
void print(int dist[][V]);
void floyd(int graph[][V])
{
    	int dist[V][V], i, j, k;
       for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];
        for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF
						&& dist[i][k] != INF))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	print(dist);
}
void print(int dist[][V])
{
	cout << "shortest distance\n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "INF"
					<< "	 ";
			else
				cout << dist[i][j] << "	 ";
		}
		cout << endl;
	}
}
int main()
{
	int graph[V][V] = { { 1, 4, INF, 9 },
						{ INF, 1, 3, INF },
						{ INF, INF, 1, 2 },
						{ INF, INF, INF, 1 } };

	floyd(graph);
	return 0;
}



