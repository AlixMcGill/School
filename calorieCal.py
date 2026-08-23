# Calories = ((Age x 0.2757) + (Weight x 0.03295) + (Heart Rate x 1.0781) — 75.4991) x Time / 8.368

# Type your code here.
age = float(input("Enter age in years: "))
weight = float(input("Enter weight in lbs: "))
heart_rate = float(input("Enter heart rate: "))
time = float(input("Time in minutes: "))
calories = (((age * 0.2757) + (weight * 0.03295) + ((heart_rate * 1.0781) - 75.4991)) * time) / 8.368
print(f"Calories: {calories:.2f} calories")
