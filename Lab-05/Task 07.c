#include <stdio.h>
#include <string.h>

int main()
{
    char username[20], password[20];
    int otp;

    printf("Enter Username: ");
    scanf("%s", username);

    if (strcmp(username, "admin") == 0)
    {
        printf("Enter Password: ");
        scanf("%s", password);

        if (strcmp(password, "4321") == 0)
        {
            printf("Enter OTP: ");
            scanf("%d", &otp);

            if (otp == 1111)
            {
                printf("Login Successful\n");
            }
            else
            {
                printf("Invalid OTP\n");
            }
        }
        else
        {
            printf("Incorrect Password\n");
        }
    }
    else
    {
        printf("Invalid Username\n");
    }

    return 0;
}

