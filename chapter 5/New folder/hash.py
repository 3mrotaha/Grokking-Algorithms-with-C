


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

check_voter("amr") # kick amr off
check_voter("Gharam") # let gharam vote


# hash tables are used as a cache (remembering the data instead of recalculating it)
# it has 2 advantages :
# 1 --> you get the web page a lot faster
# 2 -> servers have to do less work

server = {"facebook.com":"Data for fb home page", "facebook.com/about":"data for the about page", "youtube.com":"youtube home page",
           "goodreads.com":"good reads home page"}
           
cached = {}
cached["facebook.com"] = "Data for fb home page" # cached before

def get_data_from_servers(url):
    return server[url]
   

def cache(url):
    if cached.get(url):
        print(url + " is in cache")
        return cached[url]
    else:
        print("get " + url + " from servers")
        data = get_data_from_servers(url)
        cached[url] = data
        return data
       
       
print(cache("facebook.com") + "\n")
print(cache("facebook.com/about") + "\n")
print(cache("goodreads.com") + "\n")





