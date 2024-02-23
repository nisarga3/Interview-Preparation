import json
import requests


def getdrawGoals(year):
    # Write your code here
    url = 'https://jsonmock.hackerrank.com/api/football_matches?year=' + \
        str(year)

    response = requests.get(url)

    data = response.json()
    # print(data1['total_pages'])
    total = 0
    for i in range(11):
        url1 = 'https://jsonmock.hackerrank.com/api/football_matches?year={0}&team1goals={1}&team2goals={2}'.format(
            year, i, i)
        response1 = requests.get(url1)
        data1 = response1.json()
        print(data1['data'])
        total += data1['total']

    return total


print(getdrawGoals(2011))
