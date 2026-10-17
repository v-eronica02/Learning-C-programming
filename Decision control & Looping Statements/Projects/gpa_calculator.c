//project to calculate your GPA
#include <stdio.h>

int main(void) {
    int numCourses = 0;
    int choice = 0;

    do {
        printf("=== Student GPA Tracker ===\n");
        
        printf("Enter number of courses: ");
        scanf("%d", &numCourses);

        int totalCredits = 0;
        float totalGradePoints = 0.0f;

        for (int i = 1; i <= numCourses; i++) {
            int mark = 0;
            int credits = 0;
            float gp = 0.0f;

            printf("\n--- Course %d ---\n", i);
            
            printf("Enter marks (0-100): ");
            scanf("%d", &mark);

            printf("Enter credit hours (1-6): ");
            scanf("%d", &credits);

            if (mark >= 90) 
            {
                gp = 4.0f;
            } 
            else if (mark >= 80) 
            {
                gp = 3.7f;
            } 
            else if (mark >= 70) 
            {
                gp = 3.3f;
            } 
            else if (mark >= 60) 
            {
                gp = 3.0f;
            } 
            else if (mark >= 50) 
            {
                gp = 2.0f;
            } 
            else 
            {
                gp = 0.0f;
            }

            float coursePoints = gp * credits;
            
            totalCredits = totalCredits + credits;
            totalGradePoints = totalGradePoints + coursePoints;
        }

        float finalGpa = totalGradePoints / totalCredits;
        printf("\nYOUR SEMESTER GPA: %.2f\n", finalGpa);

        printf("\nCalculate another semester? (1=Yes, 0=No): ");
        scanf("%d", &choice);
        printf("\n");

    } while (choice == 1);

    printf("Goodbye!\n");
    return 0;
}
