import csv
from collections import Counter

with open("favourite.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = Counter()
    

    # for row in reader:
    #     favourite = row["language"]
    #     if favourite == "python":
    #         python += 1
    #     elif favourite == "c":
    #         c += 1
    #     else:
    #         javascript +=1

# print(f"python: {python}. c: {c}. javascript: {javascript}")
    # python, c, javascript = 0, 0, 0
    # counts = {}
    # for row in reader:
    #     favourite = row["language"]
    #     if favourite in counts:
    #         counts[favourite] += 1
    #     else:
    #         counts[favourite] = 1

    # counter object from module collections will initialize the counting value
    for row in reader:
        favourite = row["uses"]
        counts[favourite] += 1


# for favourite in sorted(counts, key=counts.get, reverse=True):
        
# for favourite, count in counts.most_common():
#     print(f"{favourite}: {count}")
        
user_input = input("favourite: ")
print(f"{user_input}: {counts[favourite]}")