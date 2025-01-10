# Declaring functions
def get_grade_point(percentage):
    if percentage >= 90:
        return 10
    elif percentage >= 80:
        return 9
    elif percentage >= 70:
        return 8
    elif percentage >= 60:
        return 7
    elif percentage >= 50:
        return 6
    elif percentage >= 40:
        return 5
    else:
        return 0  # Oops, not the best grade

def calculate_cgpa(percentages, credits, num_courses):
    total_weighted_grade_points = 0  # Total weighted points
    total_credits = 0  # Total credits

    for i in range(num_courses):
        percentage = percentages[i]
        grade_point = get_grade_point(percentage)  # Get grade point
        total_weighted_grade_points += grade_point * credits[i]  # Weighted points
        total_credits += credits[i]  # Sum of credits

    return (total_credits == 0) and 0.0 or total_weighted_grade_points / total_credits  # CGPA formula


def main():
    max_courses = 50  # Who needs more than 50 courses?
    percentages = []  # Store marks for each course
    credits = []  # Store credits for each course
    num_courses = 0  # Counter for courses

    print("Ready to calculate your CGPA? Type 'end' to stop.\n")

    while True:
        input_value = input("\nEnter total marks for the course (0-100): ")

        if input_value.lower() == "end":
            break  # End if user types 'end'

        percentage = float(input_value)  # Convert input to float
        credit = int(input("Enter credits for the course: "))

        percentages.append(percentage)  # Store data
        credits.append(credit)
        num_courses += 1

    cgpa = calculate_cgpa(percentages, credits, num_courses)  # Calculate CGPA

    print("\nYour CGPA is: {:.2f}".format(cgpa))  # Display result


if __name__ == "__main__":
    main()
