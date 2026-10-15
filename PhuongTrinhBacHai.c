#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float delta, x1, x2, x;
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a==0) {
        if (b==0) {
            if (c==0) {
                printf("Phuong trinh co vo so nghiem");
            } else {
                printf("Phuong trinh vo nghiem");
            }
        } else {
            x = -c/b;
            print_x:
            printf("Phuong trinh co 1 nghiem x = %.2f", x);
        }
    } 
    else {
        delta = b*b - 4*a*c;
        
        if (delta<0) {
            printf("Phuong trinh vo nghiem");
        } 
        else if (delta == 0) {
            x1=-b/(2*a);
            printf("Phuong trinh co nghiem kep x1 = x2 = %.2f", x1);
        } 
        else {
            x1 =(-b+sqrt(delta))/(2*a);
            x2 =(-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f ; x2 = %.2f", x1,x2);
       
        }
    }

    return 0;
}
