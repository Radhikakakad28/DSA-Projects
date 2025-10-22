#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Task structure
struct Task {
    int id;         // Task ID
    int priority;   // Higher number = higher priority

    // Comparator for priority queue
    bool operator<(const Task &other) const {
        return priority < other.priority; // max-heap
    }
};

int main() {
    priority_queue<Task> pq;

    int n;
    cout << "Enter number of tasks: ";
    cin >> n;

    // Input tasks
    for (int i = 0; i < n; i++) {
        Task t;
        cout << "Enter task ID and priority: ";
        cin >> t.id >> t.priority;
        pq.push(t);
    }

    // Execute tasks based on priority
    cout << "\nExecuting tasks based on priority:\n";
    while (!pq.empty()) {
        Task t = pq.top();
        pq.pop();
        cout << "Executing Task ID: " << t.id << " | Priority: " << t.priority << endl;
    }

    return 0;
}
