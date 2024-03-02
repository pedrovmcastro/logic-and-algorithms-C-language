/*
Exercise 2:
Implement a struct to represent a rectangle. The struct should have fields for width and height.
Write functions to calculate the area and perimeter of the rectangle.


(PT-BR)
Exercício 2:
Implemente uma struct para representar um retângulo. A struct deve ter campos para largura e altura.
Escreva funções para calcular a área e o perâmetro do retângulo.
*/

#include <stdio.h>

typedef struct Rectangle {
    float height;
    float width;
} Rectangle;

float calculateArea(float height, float width);
float calculatePerimeter(float height, float width);

int main(){

    Rectangle rectangle;

    printf("Height of the rectangle: ");
    scanf("%f", &rectangle.height);
    printf("Width of the rectangle: ");
    scanf("%f", &rectangle.width);

    printf("AREA = %.2f\n", calculateArea(rectangle.height, rectangle.width));
    printf("PERIMETER = %.2f\n", calculatePerimeter(rectangle.height, rectangle.width));

    return 0;
}

float calculateArea(float height, float width){
    return height * width;
}

float calculatePerimeter(float height, float width){
    return 2 * height + 2 * width;
}