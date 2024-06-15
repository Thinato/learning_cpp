#include <iostream>
#include "vertex.h"

using namespace std;


int main() {
	Vertex v;

	v.setX(9.8f);

	cout << "X of vertex: " << v.getX() << endl;

	return 0;
}
