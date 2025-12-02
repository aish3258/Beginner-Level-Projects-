import time
import random

attemps=0
secret= random.randint(1,100)
start= time.time()
while(1):
    guess= int(input("\nEnter your guess: "))

    if(guess == secret):
        print("You guessed the number right and it's ",secret)
        break
    else:
        attemps += 1
        if guess < secret:
            print("\n\tToo Low..!!")
        else:
            print("\n\tToo High..!!")
end=time.time()
time_taken= end - start
print(f"Time taken: {time_taken:.2f} seconds")