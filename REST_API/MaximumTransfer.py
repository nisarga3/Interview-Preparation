#REST API: Maximum Transfer

# Use the HTTP GET method to retrieve information from a database of patient medical records. Query https://jsonmock.hackerrank.com/apitransactions to find all the records.
# The query result is paginated and can be further accessed by appending to the query string ?page=num where num is the page number

# The query response from the API is a JSON with the following five fields:

# page: the current page

# per page: the maximum number of results per page total the total number of records in the search result

# total pages: the total number of pages to query to get all results data, an array of JSON objects that contain transaction records

# The data field in the response contains a list of transaction records with the following schema:

# id: the unique ID of the transaction

# userid: the id of the patient 

# userName, the name of the patient.

# timestamps

# txtType:either 'credit or debit

import requests

def get_medical_records(page):
    # Define the base URL for the API
    base_url = "https://jsonmock.hackerrank.com/apitransactions"

    # Define the query parameters to specify the page number
    params = {"page": page}

    # Make a GET request to the API
    response = requests.get(base_url, params=params)

    # Check if the request was successful (status code 200)
    if response.status_code == 200:
        data = response.json()

        # Extract the relevant information from the API response
        total_records = data.get("total")
        total_pages = data.get("total_pages")
        transaction_data = data.get("data")

        # Process and print the transaction records
        for record in transaction_data:
            record_id = record.get("id")
            user_id = record.get("userid")
            user_name = record.get("userName")
            timestamp = record.get("timestamps")
            transaction_type = record.get("txtType")

            print(f"Record ID: {record_id}")
            print(f"User ID: {user_id}")
            print(f"User Name: {user_name}")
            print(f"Timestamp: {timestamp}")
            print(f"Transaction Type: {transaction_type}")
            print("-----------------------------")

        # Return the total number of records and total number of pages
        return total_records, total_pages

    else:
        print(f"Failed to retrieve data. Status Code: {response.status_code}")
        return None, None

# Example: Retrieve and process data from page 1 of the API
page_number = 1
total_records, total_pages = get_medical_records(page_number)

print(f"Total Records: {total_records}")
print(f"Total Pages: {total_pages}")
