import requests

def topArticles(limit):
    base_url = "https://jsonmock.hackerrank.com/api/articles"
    
    # Create a dictionary to store article titles and comment counts
    articles_dict = {}
    
    # Initialize the page number to 1
    page_number = 1
    
    while True:
        # Make a GET request to the API
        response = requests.get(f"{base_url}?page={page_number}")
        data = response.json()
        
        # Extract the articles from the current page
        articles = data.get("data", [])
        
        # Break the loop if there are no more pages
        if not articles:
            break
        
        # Iterate through the articles and update the dictionary
        for article in articles:
            # Check if title is available, otherwise use story_title
            title = article.get("title") or article.get("story_title")
            if title:
                # Add the article to the dictionary or update its comment count
                articles_dict[title] = articles_dict.get(title, 0) + (article["num_comments"] or 0)
        
        # Move to the next page
        page_number += 1
    
    # Sort the dictionary by comment count (descending) and title (ascending)
    sorted_articles = sorted(articles_dict.items(), key=lambda x: (-x[1], x[0]))
    
    # Extract the top 'limit' articles
    top_articles = [title for title, _ in sorted_articles[:limit]]
    
    return top_articles

# Example: Get the top 2 articles
limit = 2
result = topArticles(limit)
for article in result:
    print(article)
