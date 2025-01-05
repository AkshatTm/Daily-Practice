import os

class DirectorySizeCalculator:
    def __init__(self, root_directory):
        self.root_directory = root_directory

    def calculate_size(self, directory=None):
        if directory is None:
            directory = self.root_directory

        total_size = 0

        # Get a list of all items in the directory
        try:
            items = os.listdir(directory)
        except PermissionError:
            print(f"Permission denied for: {directory}")
            return 0

        for item in items:
            item_path = os.path.join(directory, item)

            # If it's a file, add its size
            if os.path.isfile(item_path):
                total_size += os.path.getsize(item_path)

            # If it's a directory, recurse into it
            elif os.path.isdir(item_path):
                total_size += self.calculate_size(item_path)

        return total_size

    def print_total_size(self):
        size_in_bytes = self.calculate_size()
        size_in_mb = size_in_bytes / (1024 * 1024)
        print(f"Total size of '{self.root_directory}': {size_in_mb:.2f} MB")

# Get user input for the directory
if __name__ == "__main__":
    directory = input("Enter the directory path to calculate size: ")
    calculator = DirectorySizeCalculator(directory)
    calculator.print_total_size()
