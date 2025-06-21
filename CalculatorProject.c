# include <stdio.h>
# include <math.h>
# include <stdlib.h>

void mainmenu();
void performAddition();
void performSimpleAddition();
void performAdvancedAddition();
void performMatrixAddition();

void performMultiplication();
void performSimpleMultiply();
void performModuloMultiply();
void performMatrixMultiplication();
void performExponentiation();

void subtract();
void simpleSubtraction();
void absoluteDifference();

void divide();
void simpleDivision();
void advancedDivision();

void equation();
void simpleEquation();
void complexEquation();

void miscellaneous();
void area();
void triangle();
void rectangle();
void trapezium();
void circle();

void age();

void statistics();
void min(int ar[],int);
void max(int ar[],int);
float average(int ar[],int);
void mostfreq(int ar[],int);
void unique(int ar[],int);
void median(int ar[],int);
void variance(int ar[],int);
void sort(int ar[],int);
int  main ()
{

    mainmenu();
    return 0;
}
void mainmenu()
{
    int option;
    printf("                 Main Menu\n\n");
    printf(" Which operation you would like to perform?\n\n");
    printf(" Press 1 for Add\n");
    printf(" Press 2 for Subtract\n");
    printf(" Press 3 for Divide\n");
    printf(" Press 4 for Multiply\n");
    printf(" Press 5 for Solving equation\n");
    printf(" Press 6 for Miscellaneous\n");
    printf(" Press 7 for Exit\n");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
        performAddition();
        break;
    case 2:
        subtract();
        break;
    case 3:
        divide();
        break;
    case 4:
        performMultiplication();
        break;
    case 5:
        equation();
        break;
    case 6:
        miscellaneous();
        break;
    case 7:
        printf("Thank You for using our application\n");
        exit(0); //exiting from the application
        break;
    default:
        printf("Invalid input\n");
        mainmenu();
        break;

    }
}

void performAddition()
{

    int choice;
    printf("                Addition Menu\n\n");
    printf(" Which type of addition would you like to perform?\n");
    printf(" Press 1 for Simple addition\n");
    printf(" Press 2 for Advanced addition\n");
    printf(" Press 3 for Matrix addition\n");
    printf(" Press 4 to return to the Main Menu\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        performSimpleAddition();
        break;
    case 2:
        performAdvancedAddition();
        break;
    case 3:
        performMatrixAddition();
        break;
    case 4:
        mainmenu();
        break;

    default:
        printf("Invalid input\n");
        performAddition();
        break;
    }
}
// Adds two numbers
void performSimpleAddition()
{

    double a, b;
    printf("Enter two numbers for addition:\n");
    scanf("%lf %lf", &a, &b);
    printf("The result of addition is %lf\n", a + b);
    performAddition();
}
//Adds a set of number
void performAdvancedAddition()
{

    int N;
    printf("How many numbers do you want to add?\n");
    scanf("%d", &N);
    if(N<=0)
    {
        printf("Invalid input!\nTry again\n\n");
        performAdvancedAddition();
    }
    double n, sum = 0;
    printf("Enter the %d numbers for summation:\n",N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%lf", &n);
        sum += n;
    }
    printf("The summation of the numbers is %lf\n", sum);
    performAddition();
}
//takes two matrices,checks them and adds them if they are conformable
void performMatrixAddition()
{

    int r1, c1;
    printf("Enter the number of rows of the first matrix(integer):\n");
    scanf("%d", &r1);
    printf("Enter the number of columns of the first matrix(integer):\n");
    scanf("%d", &c1);
    int r2, c2;
    printf("Enter the number of rows of the second matrix(integer):\n");
    scanf("%d", &r2);
    printf("Enter the number of columns of the second matrix(integer):\n");
    scanf("%d", &c2);

    if (r1 != r2 || c1 != c2)
    {
        printf("Matrix addition is not possible. Dimensions do not match.\n");
        performAddition();
    }
    int a[r1][c1], b[r2][c2], res[r1][c1];
    printf("Enter the elements of the first matrix(integers):\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix(integers):\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            res[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The result of matrix addition is:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    performAddition();
}

void subtract()
{

    int option;
    printf("                 Subtraction Menu\n\n");
    printf(" Which type of Subtraction you would like to perform?\n");
    printf(" Press 1 for simple subtraction\n");
    printf(" Press 2 for absolute difference\n");
    printf(" Press 3 for returning to the main menu\n");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
        simpleSubtraction();
        break;
    case 2:
        absoluteDifference();
        break;
    case 3:
        mainmenu();
        break;
    default:
        printf("Invalid input\n");
        subtract();
        break;
    }

}
void simpleSubtraction()
{
    double a,b,ans;
    printf("Enter two numbers for subtraction :\n");
    scanf("%lf%lf",&a,&b);
    ans=a-b;    //subtract the second value from the first one.
    printf("The differece of two numbers is %lf\n\n",ans);
    subtract();
}
void absoluteDifference()
{
    double a,b,ans;
    printf("Enter two numbers for finding absolute difference:\n");
    scanf("%lf%lf",&a,&b);
    ans=a-b; //subtract the second value from the first one.
    if(ans>=0)
    {
        printf("The absolute difference of two numbers is %lf\n\n",ans);
    }
    else
    {
        printf("The absolute difference of two numbers is %lf\n\n",(-1*ans)); //When the result is negative takes it's positive value.
    }
    subtract();
}
void divide()
{
    int option;
    printf("                Division Menu\n\n");
    printf(" Which type of Division you would like to perform?\n");
    printf(" Press 1 for simple division\n");
    printf(" Press 2 for advanced division\n");
    printf(" Press 3 for returning to the main menu\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        simpleDivision();
        break;
    case 2:
        advancedDivision();
        break;
    case 3:
        mainmenu();
        break;
    default:
        printf("Invalid input\n");
        divide();
        break;
    }
}
void simpleDivision()
{
    double a,b,ans;
    printf("Enter two numbers for division:\n");
    scanf("%lf%lf",&a,&b);
    ans=a/b; //devide the first value by the second one.
    printf("a/b= %lf\n\n",ans);
    divide();
}
void advancedDivision()
{
    int a,b,ans;
    int rem;
    printf("Enter two numbers for division(integers):\n");
    scanf("%d%d",&a,&b);
    ans=a/b;    //devide the first value by the second one.
    rem=a%b;    //Finding the remainder.
    printf("a/b= %d, %d\n\n",ans,rem);
    divide();
}
void performMultiplication()
{
    int choice;
    printf("                 Multiplication Menu\n\n");
    printf(" Which type of multiplication you would like to perform?\n");
    printf(" Press 1 for Simple Multiply\n");
    printf(" Press 2 for Modulo Multiply\n");
    printf(" Press 3 for Matrix Multiplication\n");
    printf(" Press 4 for Exponentiation\n");
    printf(" Press 5 to return to the Main Menu\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        performSimpleMultiply();
        break;
    case 2:
        performModuloMultiply();
        break;
    case 3:
        performMatrixMultiplication();
        break;
    case 4:
        performExponentiation();
    case 5:
        mainmenu();
        break;
    default:
        printf("Invalid input\n");
        mainmenu();
        break;
    }
}
//Multiplies two numbers
void performSimpleMultiply()
{
    double a, b;
    printf("Enter two numbers for multiplication:\n");
    scanf("%lf %lf", &a, &b);
    printf("The result after multiplication is %lf\n\n", a*b);
    performMultiplication();
}

void performModuloMultiply()
{
    long long int  a,b,m,result;
    printf("Enter three numbers for modulo multiplication  [(a*b)%%m]:\n");
    scanf("%lld %lld %lld",&a,&b,&m);
    result=((a%m)*(b%m))%m;//(a*b)%m=((a%m)*(b%m))%m
    printf("The result after modulo multiplication is %lld\n\n",result);
    performMultiplication();
}
//takes two matrices,checks them and multiplies them if they are conformable
void performMatrixMultiplication()
{
    int r1, c1;
    printf("Enter the number of rows of the first matrix:\n");
    scanf("%d", &r1);
    printf("Enter the number of columns of the first matrix:\n");
    scanf("%d", &c1);
    int r2, c2;
    printf("Enter the number of rows of the second matrix:\n");
    scanf("%d", &r2);
    printf("Enter the number of columns of the second matrix:\n");
    scanf("%d", &c2);
    if (r2!=c1)
    {
        printf("Matrix multiplication is undefined.\nBecause the number of columns of the first matrix isn't equal to the number of rows of the second matrix.\n\n");
        performMultiplication();
    }
    int a[r1][c1], b[r2][c2], res[r1][c2],sum=0;
    printf("Enter the elements of the first matrix(integers):\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix(integers):\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                sum = sum+a[i][k]*b[k][j];
            }
            res[i][j]=sum;
            sum=0;
        }
    }
    printf("The result of matrix multiplicationtion is:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    performMultiplication();
}

void performExponentiation()
{
    long long a,b,m,res=1;
    printf("Enter three numbers for exponentiation [(a^b)%%m]:\n");
    scanf("%lld %lld %lld",&a,&b,&m);
    a=a%m;
    if(a==0) res=0;
    else
    {

        for(int i=1; i<=b; i++)
        {
            res=(res*a)%m;// (a^b)%m= ((a%m)^b)%m)

        }
    }
    printf("The result after exponentiation is %lld\n\n",res);
    performMultiplication();
}

void equation()
{
    int option;
    printf("                Equation Solving Menu\n\n");
    printf(" Which type of equation you would like to solve?\n");
    printf(" Press 1 for simple equation\n");
    printf(" Press 2 for complex equation\n");
    printf(" Press 3 for returning to the main menu\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        simpleEquation();
        break;
    case 2:
        complexEquation();
        break;
    case 3:
        mainmenu();
        break;
    default:
        printf("Invalid input\n");
        equation();
        break;
    }
}
void simpleEquation()
{
    float a,b,c,d,e,f,x,y;
    printf("Enter the coefficients of the first equation in the form (ax+by=c) :\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("Enter the coefficients of the second equation in the form (dx+ey=f) :\n");
    scanf("%f%f%f",&d,&e,&f);
    if ((a*e!=b*d))     //Check dependency between the equation.
    {
        printf("The solution to the equations is unique\n");
        x = (c*e-b*f)/(a*e-b*d)+0;   //Finding the values of x and y from the cross multiplication process.
        y = (a*f-c*d)/(a*e-b*d)+0;    //if x or y becomes -0; then make them 0.
        printf("The value of x=%.02f\n", x);
        printf("The value of y=%.02f\n\n", y);
    }
    else if ((a*e == b*d) && (c*e == b*f) && (a*f == c*d))      //If the equations are dependent, there can be many solutions.
    {
        printf("Infinite solutions are possible\n");
        printf("One of the solutions is x=%f, y=%f\n",c/(a+b),c/(a+b));
    }
    else if (a*e == b*d)
        printf("No Possible solution\n\n");
    equation();
}
void complexEquation()
{
    float a,b,c;
    float d,root1,root2;
    printf("Enter a, b and c of quadratic equation ax^2+bx+c=0 :\n");
    scanf("%f%f%f",&a,&b,&c);
    /* Use the formula x1=(-b+sqrt(b*b - 4*a*c;))/(2*a)
                 and  x2=(-b-sqrt(b*b - 4*a*c;))/(2*a)  */

    d = b * b - 4 * a * c;   //Find the determinant.
    if(d < 0)
    {
        printf("Roots are complex number.\n");
        printf("Roots of quadratic equation are: \n");
        printf("%.02f%+.02fi",-b/(2*a),sqrt(-d)/(2*a));
        printf(", %.02f%+.02fi\n\n",-b/(2*a),-sqrt(-d)/(2*a));
    }
    else if(d==0)
    {
        printf("Both roots are equal.\n");
        root1 = -b /(2* a);
        printf("Root of quadratic equation is: %.02f \n\n",root1);
    }
    else
    {
        printf("Roots are real numbers.\n");

        root1 = ( -b + sqrt(d)) / (2* a);
        root2 = ( -b - sqrt(d)) / (2* a);

        printf("Roots of quadratic equation are: %.02f , %.02f\n\n",root1,root2);
    }
    equation();
}
void miscellaneous()
{
    printf("                Miscellaneous Menu\n\n");
    printf(" Which type of calculation you would like to perform?\n");
    printf(" Press 1 for Area Calculator\n");
    printf(" Press 2 for Age Calculator\n");
    printf(" Press 3 for Statistics\n");
    printf(" Press 4 for Returning to the Main Menu\n");
    int option;
    scanf("%d",&option);
     switch(option)
    {
    case 1:
        area();
        break;
    case 2:
        age();
        break;
    case 3:
        statistics();
        break;
    case 4:
        mainmenu();
        break;
   default:
        printf("Invalid input\n");
        miscellaneous();
        break;
    }

}
void area()
{
    printf("               Area Calculation Menu\n\n");
    printf(" Which type of area calculation you would like to perform?\n");
    printf(" Press 1 for Triangle\nPress 2 for Rectangle\n");
    printf(" Press 3 for Trapezium\n");
    printf(" Press 4 for Circle\n");
    printf(" Press 5 for Returning to the Miscellaneous Menu\n");
    int option;
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        triangle();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        trapezium();
        break;
    case 4:
        circle();
        break;
   case 5:
        miscellaneous();
        break;
    default:
        printf("Invalid input\n");
        area();
        break;
    }
}
void triangle()
{
    int a,b,c;
    float s,ar;
    printf("Enter three side of the triangle(integers):\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        ar=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of triangle is %f\n\n",ar);
    }
    else
    {
        printf("The triangle is not valid\n\n");
    }
    area();
}
void rectangle()
{
    int a,b;
    printf("Enter two sides of the rectangle(integers):\n");
    scanf("%d%d",&a,&b);
    printf("Area of rectangle is %d\n\n",a*b);
    area();
}
void trapezium()
{
    int a,b,c,d,e;
    float t,sr,h,ar,s;
    printf("Enter the longer and shorter parallel sides of the trapezium(integers):\n");
    scanf("%d%d",&a,&c);
    printf("Enter the non-parallel sides of the trapezium(integers):\n");
    scanf("%d%d",&b,&d);
    e=a-c; // forming a triangle with b,d,e sides to find height of the trapezium
    s=(e+b+d)/2;
    t=(s*(s-d)*(s-b)*(s-e));
    sr=sqrt(t); // area of triangle
    h=(2*sr)/e;// height of the trapezium
    if(t<=0)
        printf("The trapezium is not valid\n\n"); // triangle not valid, trapezium not valid
    else
    {

        ar=((a+c)*h)/2;
        printf("Area of trapezium is %f\n\n",ar);
    }
    area();
}
void circle()
{
    int R;
    printf("Enter radius of the circle(integers):\n");
    scanf("%d",&R);
    printf("Area of circle is %f\n",2*3.14*R);
    area();
}
void age()
{
    int d1,m1,y1,d2,m2,y2,a,m,d,l=0;
    printf("Enter your birth date(DD/MM/YYYY):\n");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    printf("Enter the  present date(DD/MM/YYYY):\n");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    if((y1%4==0 && y1%100!=0)||(y1%400==0)) // testing for leap year
    {
        l=1;
    }
    if(d1<d2)
    {
        m2=m2+1;
    }
    if(d1<d2) // calculating days
    {
        if(m1==1 ||m1==5 ||m1==7 ||m1==10 ||m1==12)
            d=30-d2+d1; //  previous month has 30 days
        else if(m1==3 && l==0)
            d=28-d2+d1; //  previous month is February and not leap year
        else if(m1==3 && l==1)
            d=29-d2+d1; // leap year and previous month is February
        else
            d=31-d2+d1; //  previous month has 31 days
    }
    else
        d=d1-d2;
    if(m1<m2)
    {
        y2=y2+1;
        m=12+m1-m2;
    }
    else
        m=m1-m2;
    a=y1-y2;
    printf("Age is %d years, %d months, %d days\n\n", a,m,d);
    miscellaneous();
}

void statistics()
{
    int n;
    printf("Enter the size of the set(integer):\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input!\nTry again\n\n");
        statistics();
    }

    int a[n+5];
    printf("Enter the %d number(s) of the set(integers):\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min(a,n);
    max(a,n);
    average(a,n);
    mostfreq(a,n);
    unique(a,n);
    median(a,n);
    variance(a,n);
    miscellaneous();

}
void min(int ar[],int n)
{
    int m=ar[0];
    for(int i=1; i<n; i++)
    {

        if(m>ar[i])
        {

            m=ar[i];//  the element is smaller than m, assigning it as minimum value


        }
    }
    printf("Minimum number of the set is:\n%d\n\n",m);
}
void max(int ar[],int n)
{
    int m=ar[0];
    for(int i=1; i<n; i++)
    {

        if(m<ar[i])
        {
            m=ar[i]; //  the element is greater than m, assigning it as maximum value

        }
    }
    printf("Maximum number of the set is:\n%d\n\n",m);
}
float average(int ar[],int n)
{
    float sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+ar[i]; // sum of the numbers

    }
    printf("Average of the set of numbers is:\n%f\n\n",sum/n); // diving with set size to find average
    return (sum/n);
}
void mostfreq(int ar[],int n)
{
    int c,mc=0,f=0;
    if(n==1)
    {
        f=2;
        printf("The only element of the set is:\n%d\n",ar[0]);
    }
    for(int i=0; i<n; i++)
    {
        c=1;
        for(int j=i+1; j<n; j++)
        {
            if(ar[j]==ar[i])
            {
                f=1;
                c++; // incrementing if any duplicate number found
                if(c>mc)
                {

                    mc=c; // making c the maximum count if it is greater than mc
                }
            }
        }
    }

    if(f==0)
    {
        printf("No number is repeated in the set\n");
    }
    else if(f==1) printf("Most frequent element(s) of the set is/are:\n");
    for(int i=0; i<n; i++)
    {
        c=1;
        for(int j=i+1; j<n; j++)
        {
            if(ar[j]==ar[i])
            {
                c++; //incrementing count if duplicate element found
                if(c==mc)
                {
                    printf("%d\n",ar[j]); //  the count of the element is equal to maximum count, printing it

                }

            }
        }
    }


}
void unique(int ar[],int n)
{
    int count=n;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[j]==ar[i])
            {
                count--; // decrementing count if any duplicate number found
                break; // getting out of the inner loop
            }

        }
    }
    printf("Total number of unique elements in the set is:\n%d\n\n",count);
}
void sort(int ar[],int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {

        for(int j=i+1; j<n; j++)
        {
            if(ar[j]<ar[i]) // swapping if the smaller number is after bigger number
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;


            }
        }
    }


}
void median(int ar[],int n)
{
    sort(ar,n); // sorting the set in ascending order
    float m;
    int k=n/2;
    if(n%2==0)
        m=(float)(ar[k-1]+ar[k])/2; //  set size is odd,median is average of two middle numbers
    else
        m=ar[k]; // set size is even,median is the element in the middle
    printf("The median value is:\n%f\n",m);
}
void variance(int ar[],int n)
{
    if(n==1){
        printf("Variance cannot be calculated\n\n"); //only one element
    }
    else{
    float avg,sum=0,var=0;
    avg=average(ar,n);
    for(int i=0; i<n; i++) // variance= (ar[i]-avg)^2/n-1
        var=var+pow((ar[i]-avg),2);
    printf("The variance of the set is:\n%f\n\n",var/(n-1));
    }

}
