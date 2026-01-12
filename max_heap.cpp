#include <iostream>
#include <queue>
#include <vector>

int main() {
    // Default: Max-Heap
    std::priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    std::cout << "Priority Queue (Max-Heap) elements: " << std::endl;
    while (!pq.empty()) {
        std::cout << pq.top() << " "; // Access the highest priority element
        pq.pop(); // Remove it
    }
    // Output: 30 20 10 5
    return 0;
}