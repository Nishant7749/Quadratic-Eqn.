#include<stdio.h>
#include<math.h>
int main() {
    double a, b, c, D, root1, root2, real, img;
    printf("A QUADRATIC EQN. IS OF FORM ax2 + bx + c = 0.\n");
    printf("ENTER THE VALUE OF COEFF. a, b, c : \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;

    if(D>0) {
        root1 = (-b + sqrt(D))/ (2*a);
        root2 = (-b - sqrt(D))/ (2*a);
        printf("THE ROOTS OF FOLLOWING EQN. ARE REAL : %.2lf and %.2lf.\n",root1, root2);
   }

   else if(D==0) {
             root1 = root2 = -b / (2*a);
             printf("THE ROOTS OF FOLLOWING EQN. ARE BOTH SAME : %.2lf", root1);

         }

    else {
             real = -b / (2*a);
             img = sqrt(-D) / (2*a);
             printf("THE ROOTS OF FOLLOWING EQN. ARE NON-REAL : %.2lf + %.2lf and %.2lf - %.2lf.", real, img, real, img);

              }  
return 0;               
}