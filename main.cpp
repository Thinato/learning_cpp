#include <iostream>

using namespace std;

class Vertex {
	float x, y, z;

	public:
	Vertex() {
		cout << "you have created a class Vertex" << endl;

	}

	public:
	void setX(float newX){
		x = newX;
	}

	float getX() {
		return x;
	}
};


struct VertexStruct {
	// all members of a struct
	// are public by default
	float x, y, z;

	void create(float newX, float newY, float newZ) {
		x = newX;
		y = newY;
		z = newZ;
	}
};



int main() {
	Vertex v;
	VertexStruct vs;

	vs.create(1.2f, 3.4f, 5.9f);

	cout << "struct x: " << vs.x << endl;
	cout << "struct y: " << vs.y << endl;
	cout << "struct z: " << vs.z << endl;

	v.setX(9.8f);

	cout << "X of vertex: " << v.getX() << endl;

	return 0;
}
