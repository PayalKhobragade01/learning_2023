#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box *box) {
    float volume, surfaceArea;

    volume = box->length * box->width * box->height;
    surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box *ptrBox;

    ptrBox = &myBox;

    printf("Enter the length of the box: ");
    scanf("%f", &(ptrBox->length));

    printf("Enter the width of the box: ");
    scanf("%f", &(ptrBox->width));

    printf("Enter the height of the box: ");
    scanf("%f", &(ptrBox->height));

    calculateVolumeAndSurfaceArea(ptrBox);

    return 0;
}


//With the help of ( -> ) Arrow operator using pointer as well as dot representation.

#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box *box) {
    float volume, surfaceArea;

    volume = box->length * box->width * box->height;
    surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;
    struct Box *ptrBox;

    ptrBox = &myBox;

    printf("Enter the length of the box: ");
    scanf("%f", &ptrBox->length);

    printf("Enter the width of the box: ");
    scanf("%f", &ptrBox->width);

    printf("Enter the height of the box: ");
    scanf("%f", &ptrBox->height);

    calculateVolumeAndSurfaceArea(ptrBox);

    return 0;
}
