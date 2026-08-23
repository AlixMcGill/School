phone_number = 8005551212
left = phone_number // 10000000
right = phone_number % 1000
mid = (phone_number // 10000) % 1000

print(f"({left}) {mid}-{right}")
