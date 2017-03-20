#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

stack <int> path (const int root,const int val) {
    stack <int> path;
    int node = val;
    while (node != root){
        path.push(node);
        int factor = 1;
        if (node % 2 == 0){
            do factor *= 2;
            while (node % (2*factor) == 0);
        }
        if ( (node/factor) % 4 == 1) node += factor;
        else if ( (node/factor) % 4 == 3) node -= factor;
    }
    path.push(root);
    return path;
}

int minNode(const int K, const int val1, const int val2, const int val3) {
    int min_node, root = (int) pow(2, K-1);
    stack <int> path1 = path (root, val1), path2 = path (root, val2), path3 = path (root, val3);
    while (true) {
        if (!path1.empty() && !path1.empty() && !path1.empty() && path1.top() == path2.top() && path2.top() == path3.top())
            min_node = path1.top(), path1.pop(), path2.pop(), path3.pop();
        else break;
    }
    return min_node;
}

int main (){

    cout << "Enter: 4 10 15 13\n";
    cout << "Output: " << minNode(4,10,15,13);
    return 0;
}
