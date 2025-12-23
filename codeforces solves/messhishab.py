import tkinter as tk
from tkinter import ttk, messagebox
import math

# ----- Calculate Total & Per Person -----
def calculate():
    try:
        service = float(service_var.get())
        water = float(water_var.get())
        electricity = float(electricity_var.get())
        lift = float(lift_var.get())
        garbage = float(garbage_var.get())
        gas = float(gas_var.get())
        wifi = float(wifi_var.get())
        maid = float(maid_var.get())

        total = service + water + electricity + lift + garbage + gas + wifi + maid
        per_person = math.ceil(total / 8.0)

        total_label.config(text=f"Total Cost: {total:.2f} Taka")
        per_person_label.config(text=f"Per Person (8 People): {per_person} Taka")

    except ValueError:
        messagebox.showerror("Input Error", "Please enter valid numbers!")

# ----- Main Window -----
root = tk.Tk()
root.title("Mess Cost Calculator of White house ")
root.geometry("420x480")
root.configure(bg="#f0f4f7")

title = tk.Label(root, text="Mess Cost Calculator", font=("Arial", 18, "bold"), bg="#f0f4f7")
title.pack(pady=15)

# ---------- Input Frame ----------
frame = tk.Frame(root, bg="#f0f4f7")
frame.pack()

# Variables
service_var = tk.StringVar()
water_var = tk.StringVar()
electricity_var = tk.StringVar()
lift_var = tk.StringVar()
garbage_var = tk.StringVar()
gas_var = tk.StringVar()
wifi_var = tk.StringVar()
maid_var = tk.StringVar()

# Input fields (Label + Entry)
fields = [
    ("Service Charge", service_var),
    ("Water Bill", water_var),
    ("Electricity Bill", electricity_var),
    ("Lift Bill", lift_var),
    ("Garbage Bill", garbage_var),
    ("Gas Bill", gas_var),
    ("WiFi Bill", wifi_var),
    ("Maid (Khala) Bill", maid_var),
]

for text, var in fields:
    row = tk.Frame(frame, bg="#f0f4f7")
    row.pack(pady=4)
    
    lbl = tk.Label(row, text=text + ":", font=("Arial", 11), width=20, anchor="w", bg="#f0f4f7")
    lbl.pack(side=tk.LEFT)
    
    entry = tk.Entry(row, textvariable=var, width=12, font=("Arial", 11))
    entry.pack(side=tk.RIGHT)

# ---------- Calculate Button ----------
calc_btn = tk.Button(root, text="Calculate", font=("Arial", 13, "bold"),
                     bg="#4CAF50", fg="white", width=15, command=calculate)
calc_btn.pack(pady=20)

# ---------- Output Labels ----------
total_label = tk.Label(root, text="Total Cost: 0 Taka",
                       font=("Arial", 12, "bold"), bg="#f0f4f7")
total_label.pack()

per_person_label = tk.Label(root, text="Per Person: 0 Taka",
                            font=("Arial", 12, "bold"), bg="#f0f4f7")
per_person_label.pack(pady=5)

root.mainloop()
