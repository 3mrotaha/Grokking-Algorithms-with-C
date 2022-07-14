from collections import deque




def search(person):
    search_deq = deque()
    search_deq += graph[person]
    searched = []
    while search_deq:
        name = search_deq.popleft()
        if not name in searched:
            if is_mango_seller(jobs[name]):
               print(name + " is a mango seller\n")
               return True
            else:            
                search_deq += graph[name]
                searched.append(name)
                
           
    return False    
    


def is_mango_seller(job):
    return "Mango Seller" in job;



jobs = {"you":"Bakloodez", "Aseel":"Office Manager", "Amr":"Sw Engineer", "Ziad":"Works at Orasqom", "Maria":"Mango Seller",
        "Mariam":"Developer", "Daniel":"Taxi Driver", "Mahmoud":"Data Scientist", "Ahmed":"Farmer", "Gharam":"Civil Engineer",
        "Baraa":"Pharma", "Fadi":"Mango Seller", "Taha":"Builder", "Fahd":"Mango Seller"}

graph = {}

graph["you"] = ["Aseel", "Amr", "Ziad"]
graph["Fahd"] = ["Mariam", "Baraa"]
graph["Amr"] = ["Mahmoud", "Ahmed"]
graph["Ahmed"] = ["Fadi", "Ziad"]
graph["Ziad"] = ["Amr", "Maria"]
graph["Maria"] = ["Aseel"]
graph["Aseel"] = ["Daniel", "Mariam", "Amr"]
graph["Daniel"] = []
graph["Mariam"] = []
graph["Mahmoud"] = []
graph["Gharam"] = ["Taha"]
graph["Taha"] = ["Fahd"]
graph["Baraa"] = ["Gharam"]
graph["Fadi"] = ["Baraa"]

search("you")