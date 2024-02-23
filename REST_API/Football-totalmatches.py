import json
import requests


def getTotalGoals(team, year):
    # Write your code here
    url1 = 'https://jsonmock.hackerrank.com/api/football_matches?year={0}&team1={1}'.format(
        year, team)
    url2 = 'https://jsonmock.hackerrank.com/api/football_matches?year={0}&team2={1}'.format(
        year, team)
    response1 = requests.get(url1)
    response2 = requests.get(url2)

    data1 = response1.json()
    # print(data1['total_pages'])
    goals1 = 0
    for i in range(1, data1['total_pages']+1):
        url1 = 'https://jsonmock.hackerrank.com/api/football_matches?year={0}&team1={1}&page={2}'.format(
            year, team, i)
        response1 = requests.get(url1)
        data1 = response1.json()
        print(data1['data'])
        for item in data1['data']:
            if item['team1'].upper() == team.upper():
                goals1 += int(item['team1goals'])

    data2 = response2.json()
    # print(data1['total_pages'])
    for i in range(1, data2['total_pages']+1):
        url2 = 'https://jsonmock.hackerrank.com/api/football_matches?year={0}&team2={1}&page={2}'.format(
            year, team, i)
        response2 = requests.get(url2)
        data2 = response2.json()
        print(data2['data'])
        for item in data2['data']:
            if item['team2'].upper() == team.upper():
                goals1 += int(item['team2goals'])

    return goals1

print(getTotalGoals('Manchester United',2011))