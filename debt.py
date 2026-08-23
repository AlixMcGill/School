def read_customer_data(filename):
    """Read and return data from filename as a list of lists (name, state, debt)"""
    names = []
    states = []
    debts = []

    with open(filename) as f:
        rows = f.readlines()
    for row in rows:
        row = row.split(",")
        names.append(row[0])
        states.append(row[1])
        debts.append(float(row[2].strip()))
    return names, states, debts


# Main portion of the program
if __name__ == "__main__":
    # number of rows to consider
    num_customers = int(input())
    debt_limit = int(input())
    search_phrase = input()
    state_abbreviation = input()
    report_customers = 0
    report_debt_name = ""

    names, states, debts = read_customer_data("CustomerData.csv")

    for name in names:
        pass

    for state in states:
        pass

    for debt in debts:
        pass

    print(f"U.S. Report")
    print(f"Customers: {report_customers}")
    print(f"Highest debt: {report_debt_name}")

    # Type your code here.

