#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
//Simple GPA Calculator compiled by Fermac Pamela
{
    float x,y;
    /* x is the course grade for the student
       y is the credit load for the course*/

       int a;
       //a is the total sum of y

          float first,second,third,fourth,fifth,sixth,seventh,eighth,ninth,tenth;
          //this represents each course
          float Total_point;
          //Total_point is the sum of (x*y) for all course
          float GPA;


       printf("Simple GPA calculator\n\n");
       //Can calculate just 10 courses per semester!
       printf("Enter your grade and credit load for first course:\n");
       //Grade:A=5, B=4, C=3, D=2, E=1, F=0
       scanf("%f %f",&x,&y);

       first=x*y;
       printf("Total point for first course:%f \n",first);

       printf("Enter your grade and credit load for second course:\n");
       scanf("%f %f",&x,&y);

       second=x*y;
       printf("Total point for second course:%f \n",second);

       printf("Enter your grade and credit load for third course:\n");
       scanf("%f %f",&x,&y);

       third=x*y;
       printf("Total point for third course:%f \n",third);

       printf("Enter your grade and credit load for fourth course\n");
       scanf("%f %f",&x,&y);

       fourth=x*y;
       printf("Total point for fourth  course:%f \n",fourth );

       printf("Enter your grade and credit load for fifth course\n");
       scanf("%f %f",&x,&y);

       fifth=x*y;
       printf("Total point for fifth course:%f \n",fifth);

       printf("Enter your grade and credit load for sixth course\n");
       scanf("%f %f",&x,&y);

       sixth=x*y;
       printf("Total point for sixth course:%f \n",sixth);

       printf("Enter your grade and credit load for seventh course\n");
       scanf("%f %f",&x,&y);

       seventh=x*y;
       printf("Total point for seventh course:%f \n",seventh);

       printf("Enter your grade and credit load for eighth course\n");
       scanf("%f %f",&x,&y);

       eighth=x*y;
       printf("Total point for eighth course:%f \n",eighth);

       printf("Enter your grade and credit load for ninth course:\n");
       scanf("%f %f",&x,&y);

       ninth=x*y;
       printf("Total point for ninth course:%f \n",ninth);

       printf("Enter your grade and credit load for last course:\n");
       scanf("%f %f",&x,&y);

       tenth=x*y;
       printf("Total point for tenth course:%f \n",tenth);

       printf("Enter your total credit load for the semester:");
       scanf("%d",&a);
       Total_point=first+second+third+fourth+fifth+sixth+seventh+eighth+ninth+tenth;
        printf("Total point:%f\n",Total_point);

        printf("PRESS ANY KEY THEN PRESS ENTER!!\n");
        scanf("%d",&a);
        GPA=(Total_point/a);
       printf("GPA:%f",GPA);



    return 0;
}
