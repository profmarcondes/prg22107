#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
    Circle(float area);
    Circle(float radius, float x, float y);

    //definir o raio do cı́rculo, dado um número real;
    void setRadius(float r);
    //aumentar o raio do cı́rculo, dado um percentual de aumento;
    void scaleRadius(float percent);
    //definir o centro do cı́rculo, dada uma posição (X,Y);
    void setPosition(float x, float y);
    //imprimir o valor do raio;
    void printRadius();
    //imprimir o centro do cı́rculo.
    void printCenter();
    //imprimir a área do cı́rculo.
    void printArea();

    void printPerimeter();
    void printDistanceTo(Circle obj);

private:
    // Private Atributes
    float _x;
    float _y;
    float _radius;

    // Private Methods
    //calcular a área do cı́rculo;
    float area();
    //calcular a distância entre os centros de 2 cı́rculos;
    float distanceTo(Circle obj);
    //calcular a circunferência do cı́rculo.
    float perimeter();
};

#endif // CIRCLE_H
