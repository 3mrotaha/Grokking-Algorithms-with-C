


# hash tables are used for lookups
phone_book = {}

phone_book["amr"] = 1000200021
phone_book["ziad"] = 2900012311

print(phone_book["amr"])

# hash tables prevents duplicate entries

voted = {}
voted["amr"] = True
voted["Taha"] = True
voted["Ziad"] = True
voted["Mariam"] = True

def check_voter(name):
    if voted.get(name):
        print("Kick " + name + " off")
    else:
        voted[name] = True
        print("let " + name + " vote")

check_voter("amr")
check_voter("Gharam")
