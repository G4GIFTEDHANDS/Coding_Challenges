char response[100];
char begin[100];
int num1;
int num2;

// prompt the user for input
printf("Hello, how are you today?\n");
// get the user's response
scanf("%s", response);

// prompt the user to begin
printf("Shall we begin?\n");
// get the user's response
scanf("%s", begin);

// prompt the user for the first number
printf("What's the first number?\n");
// get the first number from the user
scanf("%d", &num1);

// prompt the user for the second number
printf("What's the second number?\n");
// get the second number from the user
scanf("%d", &num2);

// compare the two numbers
if (num1 == num2)
{
// print that the numbers are equal
printf("The numbers are equal.\n");
}
else if (num1 > num2)
{
// print that the first number is larger
printf("%d is larger than %d.\n", num1, num2);
}
else
{
// print that the second number is larger
printf("%d is larger than %d.\n", num2, num1);
}

// print the final message
printf("Wow!!! We make an awesome team!!! High five dude!!!\n");

return 0;
}
