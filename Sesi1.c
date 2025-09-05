/*
START
INPUT : length = 5, width = 3

PROCESS : AREA = length*width

OUTPUT : print AREA
END
*/


#include <stdio.h>

int main() {
    int length = 5, width = 3, area;

    area = length * width;

    printf("The area of the rectangle is: %d", area);

    return 0;
}


/*
START
INPUT : length, width

PROCESS : AREA = length*width

OUTPUT : print AREA
END
*/
#include <stdio.h>

int main() {
    int length, width, area;

    printf("Enter The Length ");
    scanf("%d", &length);

    printf("Enter The Width ");
    scanf("%d", &width);

    area = length * width;

    printf("The area of the rectangle is: %d", area);

    return 0;
}
