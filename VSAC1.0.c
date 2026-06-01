#include<stdio.h>
#include<math.h>
int main()
{
    printf("WELCOME TO SHAPE AREA CALCULATOR:\nAvailable Shapes are:\n1.Square\n2.Rectangle\n3.Circle\n4.Triangle\nPlease select the shape by entering the number corresponding to it:");
    int shapeCode;
    scanf("%d",&shapeCode);
    if(shapeCode>4 || shapeCode<1){
        printf("INVALID SHAPE CODE!!");
        return 1;
    }
    else if(shapeCode==1){
        float sideLength;
        printf("Please enter side length:");
        scanf("%f",&sideLength);
        if(sideLength<=0){
            printf("Invalide Side Length! Must be positive.");
            return 1;
        }
        printf("Area of Square is : %.2f",sideLength*sideLength);
        
    }
    else if(shapeCode==2){
        float sideLength1, sideLength2;
        printf("Enter 1st Side Length:");
        scanf("%f",&sideLength1);
        printf("Enter 2nd Side Length:");
        scanf("%f",&sideLength2);
        if(sideLength1<=0 || sideLength2<=0){
            printf("Invalid Side Length! Must be positive");
            return 1;
        }
        printf("Area of Rectangle is:%.2f",sideLength1*sideLength2);
    }
    else if(shapeCode==3){
        float radius, pi;
        pi=3.141;
        printf("Enter radius:");
        scanf("%f",&radius);
        if(radius<=0){
            printf("Invalid Radius value! Must be positive");
            return 1;
        }
        printf("Area of circle is: %.2f",pi*radius*radius);
    }
    else if(shapeCode==4){
        printf("Two Methods are available:\n1.Heron's formula\n2.Altitude and Base\nPlease choose your method by entering the corresponding number:");
        int methodNumber;
        scanf("%d",&methodNumber);
        if(methodNumber>2 || methodNumber<1){
            printf("Invalid Method Number, must be 1 or 2");
            return 1;
        }
        else if(methodNumber==1){
            float side1, side2, side3, s;
            printf("Enter Side 1 Length:");
            scanf("%f",&side1);
            printf("Enter Side 2 Length:");
            scanf("%f",&side2);
            printf("Enter Side 3 Length:");
            scanf("%f",&side3);
            if(side1<=0|| side2<=0 || side3<=0){
                printf("Invalid Side Lengths, Must be positive.");
                return 1;
            }
            else if(side1+side2<=side3 || side2+side3<=side1 || side3+side1<=side2){
                printf("Invalid Side Lengths, must be from a valid triangle.");
                return 1;
            }
            s=(side1+side2+side3)/2;
            double areaTriangle=sqrt(s*(s-side1)*(s-side2)*(s-side3));
            printf("Area of triangle is:%.2f",areaTriangle);          
        }
        else if(methodNumber==2){
            float height, base;
            printf("Enter altitude length:");
            scanf("%f", &height);
            printf("Enter base length:");
            scanf("%f", &base);
            if(base<=0 || height<=0){
                printf("Invalid Values, must be positive");
                return 1;
            }
            float areaTriangleHBM=0.5*base*height;
            printf("Area of triangle is:%.2f",areaTriangleHBM);
        }
        
    }
return 0;
}