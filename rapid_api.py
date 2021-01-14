import requests

url = "https://amazon-price1.p.rapidapi.com/priceReport"

querystring = {"asin":"<REQUIRED>","marketplace":"ES"}

headers = {
    'x-rapidapi-key': "27bd08a49amsh9215bb571bbf96cp1faa9bjsn858eda3b71f0",
    'x-rapidapi-host': "amazon-price1.p.rapidapi.com"
    }

response = requests.request("GET", url, headers=headers, params=querystring)

print(response.text)