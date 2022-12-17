# prompt the user for input
print("Hello, how are you today?")
# get the user's response
response = input()

# prompt the user to begin
print("Shall we begin?")
# get the user's response
begin = input()

# prompt the user for the first number
print("What's the first number?")
# get the first number from the user
num1 = int(input())

# prompt the user for the second number
print("What's the second number?")
# get the second number from the user
num2 = int(input())

# compare the two numbers
if num1 == num2:
  # print that the numbers are equal
  print("The numbers are equal.")
elif num1 > num2:
  # print that the first number is larger
  print(f"{num1} is larger than {num2}.")
else:
  # print that the second number is larger
  print(f"{num2} is larger than {num1}.")

# print the final message
print("Wow!!! We make an awesome team!!! High five dude!!!")
