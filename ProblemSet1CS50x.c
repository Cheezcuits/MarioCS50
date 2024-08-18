#include <stdio.h>
int height, pyramidType, line, hash, space;

void heightInput (){
    printf("Input the height.\nDo note it should be less than or equal than 8.\n");
    scanf("%d", &height);
}
void typePyramid (){
    printf("Choose a type of pyramid you want: \n (1)Half Pyramid \n (2)Full Pyramid\n (3) Gapped Pyramid\n");
    scanf("%d", &pyramidType);
}
int main() {
    heightInput ();
    if (height > 8 || height <0){
        printf("Dude, that's an invalid height.");
    }
    else if(height <=8){
        typePyramid();
        if (pyramidType >3){
        printf("Invalid.");
        }
        else if (pyramidType <=3){
            if (pyramidType ==1){ // Half Pyramid (to flip the pyramid, just switch the space and hash)
            printf("This is now your pyramid lolz.\n");
                for (line = 0; line < height; line++)
                    {
                    for(space = 0; space < height - line - 1; space ++){
                    }
                    for(hash = 0; hash <= line; hash++){
                    printf("#");
                    }
                printf("\n");
                }
            }
            if (pyramidType ==2){ // Full Pyramid
            printf("This is now your pyramid lolz.\n");
                for (line = 0; line < height; line++)
                    {
                    for(space = 0; space < height - line - 1; space ++){
                    printf(" ");
                    }
                    for(hash = 0; hash <= line; hash++){
                    printf("#");
                    }
                    for(hash = 1; hash <= line; hash++){
                    printf("#");
                    }
                    for(space = 1; space < height - line - 1; space ++){
                    printf(" ");
                    }
                printf("\n");
                }
            }
            else if (pyramidType ==3){ //Gapped Pyramid
            printf("This is now your pyramid lolz.\n");
                for (line = 0; line < height; line++)
                    {
                    for(space = 0; space < height - line - 1; space ++){
                    printf(" ");
                    }
                    for(hash = 0; hash <= line; hash++){
                    printf("#");
                    }
                    printf(" ");
                    for(hash = 0; hash <= line; hash++){
                    printf("#");
                    }
                printf("\n");
                }
            }
        }
    }
return 0;
}


          