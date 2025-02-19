class Students:
    def __init__(self, student, subjects, marks):
        self.student = student
        self.subjects = subjects  # Store list of subjects
        self.marks = list(map(int, marks))  # Convert marks to integers

    def print_details(self):
        print(f"Student: {self.student}")
        for sub, mark in zip(self.subjects, self.marks):
            #zip is a built-in function that takes multiple iterables (like lists, tuples, or strings) as input and returns an iterator of tuples 
            print(f"  Subject: {sub}, Mark: {mark}")
        print(f"  Total Marks: {sum(self.marks)}\n")


n = int(input("Enter the number of students: "))  # Get the number of students
student_list = []  # List to store student objects

for _ in range(n):
    student = input("\nEnter the name: ")
    subjects = []
    marks = []
    n=int(input("Enter the number of subject: "))
    for _ in range(n):  # Assuming n subjects per student
        subject = input("Enter the subject: ")
        mark = input("Enter the mark: ")
        subjects.append(subject)
        marks.append(mark)

    s = Students(student, subjects, marks)
    student_list.append(s)  # Add student object to list

print("\nStudent Details:")
for student in student_list:
    student.print_details()
