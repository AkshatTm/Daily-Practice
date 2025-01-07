# Function to count unique words in a file
def count_unique_words(filename):
    try:
        # Opening the file to read its content
        with open(filename, 'r') as file:
            # Reading the whole file into a variable
            content = file.read()

        # Breaking the file content into a list of words
        words = content.split()

        # Converting the list into a set to filter unique words
        unique_words = set(words)

        # Counting the number of unique words
        return len(unique_words)

    except FileNotFoundError:
        # This runs if the file you gave doesn't exist
        print("Bruh, the file isn't there. Check the filename or path.")
        return None


# Asking the user for the file name they want to use
filename = input("Enter the filename (with extension): ")

# Calling the function and showing the result
unique_word_count = count_unique_words(filename)
if unique_word_count is not None:
    print(f"The number of unique words in the file is: {unique_word_count}")
