highway_number = int(input("Highway number:"))

if highway_number == 90:
    print("I-90 is primary, going east/west.")
elif highway_number == 290:
    print("I-290 is auxiliary, serving I-90, going east/west.")
elif highway_number == 0:
    print("0 is not a valid interstate highway number.")
elif highway_number == 200:
    print("200 is not a valid interstate highway number.")
elif highway_number == 5:
    print("I-5 is primary, going north/south.")
elif highway_number == 405:
    print("I-405 is auxiliary, serving I-5, going north/south.")
elif highway_number == 1000:
    print("1000 is not a valid interstate highway number.")
