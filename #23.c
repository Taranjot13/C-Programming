//Given the coordinates (x, y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle, on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions).

#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, radius;
    float pc;
    printf("Enter the center co-ordinates of the circle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x2, &y2);
    pc = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));
    if(pc>radius){
        printf("Point (%d,%d) lies outside the circle.", x2, y2);
    }
    else if(pc<radius){
        printf("Point (%d,%d) lies inside the circle.", x2, y2);
    }
    else if(pc==radius){
        printf("Point (%d,%d) lies on the boundary of circle.", x2, y2);
    }
    else{
        printf("Wrong Entry");
    }
    return 0;
}
