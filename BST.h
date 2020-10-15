#include <iostream>
#include <cstdlib>
#include <fstream>



using namespace std;

class BST
{

public:
BST();
~BST();

private:

struct node
{
int value;
node* _right;///this will be a pointer to the node containing a node record structure that has a value greater than its own value
node* _left;///this will be a pointer to the node containing a node record structure that has a value smaller than its own value
}


}
