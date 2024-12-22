# Movie Organizer and Search Tool

# Dictionary to store the movie collection
movies = []


# Function to add a movie to the collection
def add_movie(title, genre, year, rating):
    movie = {
        "title": title,
        "genre": genre,
        "year": year,
        "rating": rating
    }
    movies.append(movie)
    print(f"Movie '{title}' added successfully!")


# Function to search for movies by title
def search_movie(title):
    results = [movie for movie in movies if title.lower() in movie["title"].lower()]
    if results:
        print("\nSearch Results:")
        for movie in results:
            print_movie_details(movie)
    else:
        print("No movies found with that title.")


# Function to view stats of the collection
def view_stats():
    if not movies:
        print("No movies in the collection to analyze.")
        return

    # Count occurrences of each genre
    genre_count = {}
    for movie in movies:
        genre = movie["genre"]
        genre_count[genre] = genre_count.get(genre, 0) + 1

    # Find the most-watched genre
    most_watched_genre = max(genre_count, key=genre_count.get)
    print(f"\nMost-Watched Genre: {most_watched_genre} ({genre_count[most_watched_genre]} movies)")

    # Calculate the average rating of the collection
    avg_rating = sum(movie["rating"] for movie in movies) / len(movies)
    print(f"Average Rating of Collection: {avg_rating:.1f}")


# Helper function to display movie details
def print_movie_details(movie):
    print(f"Title: {movie['title']}, Genre: {movie['genre']}, Year: {movie['year']}, Rating: {movie['rating']}")


# Main menu
def main_menu():
    while True:
        print("\n--- Movie Organizer ---")
        print("1. Add Movie")
        print("2. Search Movie")
        print("3. View Stats")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            title = input("Enter movie title: ")
            genre = input("Enter genre: ")
            year = int(input("Enter release year: "))
            rating = float(input("Enter rating (0-10): "))
            add_movie(title, genre, year, rating)
        elif choice == "2":
            title = input("Enter the title to search: ")
            search_movie(title)
        elif choice == "3":
            view_stats()
        elif choice == "4":
            print("Exiting... Have a great day!")
            break
        else:
            print("Invalid choice. Please try again.")


# Start the program
main_menu()
