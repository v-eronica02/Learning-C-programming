// program to calculate the distance between two points
# include<stdio.h>
# include<math.h>

int main()
{
    int x1, x2, y1, y2;
    float d;
    printf("\n Enter the x and y coordinates of the first point:");
    scanf("%d %d", &x1, &y1);
    printf("\n Enter the x and y coordinates of second point:");
    scanf("%d %d", &x2, &y2);

    d= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("\n Distance between the points are: %f", d);
    return 0;
}
