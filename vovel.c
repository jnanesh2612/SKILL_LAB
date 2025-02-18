def is_easy_to_pronounce(s):
    vowels = {'a', 'e', 'i', 'o', 'u'}
    consecutive_consonants = 0
    
    for char in s:
        if char in vowels:
            consecutive_consonants = 0  # Reset count on vowel
        else:
            consecutive_consonants += 1  # Increment count on consonant
            if consecutive_consonants >= 4:
                return "NO"  # Hard to pronounce
    
    return "YES"  # Easy to pronounce

# Read number of test cases
T = int(input())
results = []

for _ in range(T):
    N = int(input())  # Read length of string (not used)
    S = input().strip()  # Read the string
    results.append(is_easy_to_pronounce(S))

# Print all results
for result in results:
    print(result)
