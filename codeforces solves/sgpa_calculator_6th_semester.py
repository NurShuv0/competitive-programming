import tkinter as tk
from tkinter import messagebox

def get_grade_point(marks):
    if marks >= 80:
        return 4.00
    elif marks >= 75:
        return 3.75
    elif marks >= 70:
        return 3.50
    elif marks >= 65:
        return 3.25
    elif marks >= 60:
        return 3.00
    elif marks >= 55:
        return 2.75
    elif marks >= 50:
        return 2.50
    elif marks >= 45:
        return 2.25
    elif marks >= 40:
        return 2.00
    else:
        return 0.00  

def calculate_sgpa():
    try:
        total_points = 0
        total_credits = 0

        for i in range(len(entries)):
            marks = float(entries[i].get())
            if marks < 0 or marks > 100:
                raise ValueError

            gp = get_grade_point(marks)
            total_points += gp * credits[i]
            total_credits += credits[i]

        sgpa = total_points / total_credits
        result_label.config(text=f"SGPA: {sgpa:.2f}")

    except ValueError:
        messagebox.showerror("Invalid Input", "Please enter valid marks (0-100)")

subjects = [
    "Software Development III",
    "Computer Networks",
    "Computer Networks Lab",
    "Software Engineering",
    "Software Engineering Lab",
    "AI & Expert System",
    "AI & Expert System Lab",
    "Project Management & Ethics",
    "Distributed DBMS",
    "Distributed DBMS Lab"
]

credits = [0.75, 3, 1.5, 3, 0.75, 3, 1.5, 2, 3, 1.5]

root = tk.Tk()
root.title("6th Semester SGPA Calculator")
root.geometry("500x550")

tk.Label(root, text="Enter Marks (0 - 100)", font=("Arial", 14, "bold")).pack(pady=10)

frame = tk.Frame(root)
frame.pack()

entries = []

for i in range(len(subjects)):
    tk.Label(frame, text=subjects[i], width=30, anchor="w").grid(row=i, column=0, padx=5, pady=5)
    entry = tk.Entry(frame, width=10)
    entry.grid(row=i, column=1)
    entries.append(entry)

tk.Button(root, text="Calculate SGPA", font=("Arial", 12),
          bg="green", fg="white", command=calculate_sgpa).pack(pady=20)

result_label = tk.Label(root, text="SGPA: ", font=("Arial", 16, "bold"))
result_label.pack()

root.mainloop()
