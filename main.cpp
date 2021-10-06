#include <iostream>
#include <vector>

struct Vec3D {float x, y, z, c;};

Vec3D vec3D (float x, float y, float z, float c){
    Vec3D self;
    self.x = x;
    self.y = y;
    self.z = z;
    self.c = c;
    return self ;
}

void show( Vec3D const &self ){
    std::cout << self.x << "x" << std::showpos << self.y  << "y" << self.z << "z"<< std::noshowpos << " = " << self.c <<  std::endl ;
}
void show(){
    std::cout << std::endl;
}

void printMatrix(Vec3D const &self){
    std::cout << self.x << " " << self.y << " " << self.z << "|" << self.c << std::endl;
}


int main() {
    std::vector<Vec3D> matrix;
    matrix.push_back(vec3D(6,3,-2, 6));
    matrix.push_back(vec3D(4,5,-4, 2));
    matrix.push_back(vec3D(2,-3,5, 11));

    for(auto matrix:matrix){
        show(matrix);
    }

    show();

    for(auto matrix:matrix){
        printMatrix(matrix);
    }

    float x1 = (matrix[0].c + (-1 * matrix[0].y) + (-1 * matrix[0].z))/matrix[0].x;
    float x2 = (matrix[1].c + (-1 * matrix[1].x) + (-1 * matrix[1].z))/matrix[1].y;
    float x3 = (matrix[2].c + (-1 * matrix[2].x) + (-1 * matrix[2].y))/matrix[2].z;
    std::cout << x1 << std::endl << x2 << std::endl << x3;




    return 0;
}
