#include <stdio.h>
void main()
{
    char choice;
    int detectedH, response;
    printf("Choose a situation\n A. Normal heart rate \n B. Elevated heart rate\n C. No heart rate\n ");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'a':
    case 'A':

        detectedH = 80;

        if (detectedH > 100 || detectedH < 60)
        {

            printf("Nearby CFRs, help is required.\nPlease indicate \n1 to respond to distress signal\n2 to ignore\n");
            scanf("%d", &response);
            if (response == 1)
            {
                printf("CFR is on his/her way");
            }
            else if (response == 2)
            {
                printf("SCDF has been alerted");
            }
        }
        else
        {
            printf("vitals are normal no action required");
        }
        break;
    case 'b':
    case 'B':

        detectedH = 130;

        if (detectedH > 100 || detectedH < 60)
        {
            printf("Nearby CFRs, help is required.\nPlease indicate \n1 to respond to distress signal\n2 to ignore\n");
            scanf("%d", &response);
            if (response == 1)
            {
                printf("CFR is on his/her way");
            }
            else if (response == 2)
            {
                printf("SCDF has been alerted");
            }
        }
        else
        {
            printf("vitals are normal no action required");
        }
        break;
    case 'c':
    case 'C':

        detectedH = 0;

        if (detectedH > 100 || detectedH < 60)
        {
            printf("Nearby CFRs, help is required.\nPlease indicate \n1 to respond to distress signal\n2 to ignore\n");
            scanf("%d", &response);
            if (response == 1)
            {
                printf("CFR is on his/her way");
            }
            else if (response == 2)
            {
                printf("SCDF has been alerted");
            }
        }
        else
        {
            printf("vitals are normal no action required");
        }
        break;
    }
}

