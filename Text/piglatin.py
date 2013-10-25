import string, sys

""" 
    Pig Latin is a game of alterations played 
    on the English language game. To create the Pig Latin 
    form of an English word the initial consonant sound 
    is transposed to the end of the word and an ay is affixed 
    (Ex.: "banana" would yield anana-bay).
    Read Wikipedia for more information on rules.
"""

word = raw_input()

vowles = [
   'a', 'e', 'i', 'o', 'u'           
]

# Find first constanent
# remove it from the beginning and append it to the end

first = ''
for c in word:
    if c not in vowles:
        first = c
        break
    
print word.replace(c, '') + "-" + c + "ay"
    