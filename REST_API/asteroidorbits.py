import requests

def asteriods(year,keyword):
    r=requests.get("http://jsonmock.hackerrank.com/api/asteroids/search?page="+str(1)).json()

    total_pages = r["total_pages"]
    list=[]

    for i in range(1,total_pages+1):
        req=requests.get(f"http://jsonmock.hackerrank.com/api/asteroids/search?page={i}").json()
        for j in req["data"]:
            if(str(year) == j["discovery_date"][:4] and keyword.lower() in j["orbit_class"].lower()):
                if j.get("period_yr") == None:
                    j["period_yr"] = 1

                j["period_yr"] = float(j["period_yr"])
                list.append(j)

    list.sort(key=lambda x: (x["period_yr"],x["designation"]))

    desg = []

    for j in list:
        desg.append(j['designation'])
        
    return desg


asteriods(2010,'jupiter')