#include<stdio.h>
#include<math.h>
int main (){
    float pixels_in_row;
    float pixels_in_column;
    float bits_per_pixel;
    float number_of_images;
    float data_transfer_rate;

    float bits_in_one_frame;
    float transfer_time;
    printf("Enter the number of pixels in a row: ");
    scanf("%f",&pixels_in_row);
    printf("Enter the number of pixels in a column: ");
    scanf("%f",&pixels_in_column);
    printf("Enter the number of bits per pixel: ");
    scanf("%f",&bits_per_pixel);
    printf("Enter the number of images: ");
    scanf("%f",&number_of_images);
    printf("Enter the data transfer rate in Kb/second: ");
    scanf("%f",&data_transfer_rate);
    bits_in_one_frame = (pixels_in_row * pixels_in_column * bits_per_pixel)/1048576;
    transfer_time = (bits_in_one_frame * number_of_images*1024)/data_transfer_rate;
    printf("The number of bits in one frame is: %f Mb\n", bits_in_one_frame);
    printf("The time taken to transfer the images is: %f seconds\n", transfer_time);
    return 0;
}
