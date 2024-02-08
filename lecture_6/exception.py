# error checking
# enter a string on purpose so it will got cought by traceback value error

def get_int(prompt):
    while True:
        try:
            return(int(input(prompt)))
        except ValueError:
            # pass 
            print("Not an integer value")

user_input = get_int("the value is: ")

print(user_input)

