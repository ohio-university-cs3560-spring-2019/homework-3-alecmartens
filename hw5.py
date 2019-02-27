#Alec Martens
#2/25/2019
filename = "hw5.txt"
numLines = 0
numWords = 0
numCharacters = 0

with open(filename) as file:
    for line in file:
        words = line.split() #splits the line into words and puts them into 'words'
        numLines += 1
        numWords += len(words) #number of words = length of 'words'
        numCharacters += len(line) #number of chars = length of 'line'

print("Number of lines: ")
print(numLines)
print("Number of words: ")
print(numWords)
print("Number of characters: ")
print(numCharacters)

