#include <vector>
#include <algorithm>

struct Edge {
    int u, v, weight;
    bool operator<(const Edge& other) const { return weight < other.weight; }
};

// Assuming you use the DSU struct from earlier
int kruskal(int n, std::vector<Edge>& edges) {
    std::sort(edges.begin(), edges.end());
    DSU dsu(n);
    int mstWeight = 0;

    for (auto& edge : edges) {
        if (dsu.find(edge.u) != dsu.find(edge.v)) {
            dsu.unite(edge.u, edge.v);
            mstWeight += edge.weight;
        }
    }
    return mstWeight;
}