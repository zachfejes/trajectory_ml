#include <stdio.h>
#include <math.h>

struct Vector3 {
    double x;
    double y;
    double z;
};

double dotProduct(struct Vector3 A, struct Vector3 B) {
    return A.x*B.x + A.y*B.y + A.z*B.z;
}

double distanceScalar(struct Vector3 A, struct Vector3 B) {
    return sqrt(pow(B.x - A.x,2) + pow(B.y - A.y,2) + pow(B.z - A.z,2));
}

struct Vector3 differenceVectorAtoB(struct Vector3 A, struct Vector3 B) {
    struct Vector3 difference;
    difference.x = B.x - A.x;
    difference.y = B.y - A.y;
    difference.z = B.z - A.z;
    return difference;
}

struct Body {
    struct Vector3 position;
    struct Vector3 velocity;
    double mass;
};

int main() {

    return 0;
}

