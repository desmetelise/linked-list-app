#include <iostream>
#include "bull.h"
#include "node.h"

using namespace std;

void print(Node *node){
    while(node != nullptr){
        cout << node->get_data() << endl;
        node = node->get_next();
    }
}

int main() {
    Bull bull1(2, 50, "bull1");
    Bull bull2(3, 80, "bull2");

    cout << bull1.to_string() << endl;
    cout << bull2.to_string() << endl;

    Node start(0);
    Node second(1);
    Node last(2);

    second.set_next(&last);
    start.set_next(&second);

    print(&start);

    return 0;
}