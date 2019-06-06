import random

numbreofguess = 0
numbre = random.randint(1,500)
print('Hello! What is your name?')
Name = raw_input()

print("Well, " + Name + ", I am thinking of a number between 1 and 500.")
print("Take a guess, you have 10.")

while numbreofguess < 9:
    guess = input()
    guess = int(guess)
    numbreofguess = numbreofguess + 1
    guessesleft = 9 - numbreofguess

    if guess < numbre:
        guessesleft=str(guessesleft)
        print("Your guess is too low." + guessesleft + " guesses remaining ")

    if guess > numbre:
        guessesleft=str(guessesleft)
        print("Your guess is too high." + guessesleft + " guesses remaining ")

if guess == numbre:
    numbreofguess=str(numbreofguess)
    print("Good job, " + Name + "! You guessed my number in " + numbreofguess + ' guesses!')

if guess != numbre:
    numbre=str(numbre)
    print("Nope. The number I was thinking of was " + numbre)

