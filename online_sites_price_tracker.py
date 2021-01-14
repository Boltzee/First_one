import requests
from bs4 import BeautifulSoup
import smtplib

URL = 'https://www.flipkart.com/asus-rog-strix-g15-core-i7-10th-gen-16-gb-1-tb-ssd-windows-10-home-6-gb-graphics-nvidia-geforce-gtx-1660-ti-144-hz-g512lu-al011t-gaming-laptop/p/itm8dd41e82bd25f?pid=COMFU3Z6FASJ3JXV&otracker=wishlist&lid=LSTCOMFU3Z6FASJ3JXVKO4WVV&fm=organic&iid=f4d32f40-e456-4c2e-8daa-fa9021df2744.COMFU3Z6FASJ3JXV.PRODUCTSUMMARY&ppt=dynamic&ppn=CART_PAGE&ssid=d5abajdixd37hpts1609269227535'
URL1= 'https://www.amazon.in/UX534FTC-A9338TS-i7-10510U-GTX1650_4G-International-SCREENPAD/dp/B08HKGB5RF/ref=sr_1_1?crid=3O9SN2IY631RV&dchild=1&keywords=asus+zenbook+15&qid=1610289524&sprefix=asus+zenbook+%2Caps%2C923&sr=8-1'

headers= {"user-agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:84.0) Gecko/20100101 Firefox/84.0"}




def check_price():
	page = requests.get(URL, headers= headers)

	soup= BeautifulSoup(page.content, 'html.parser')
	print(soup.prettify())

	title= soup.find(attrs={"class":"B_NuCI"}).get_text()
	price= soup.find(attrs={"class": "_30jeq3 _16Jk6d"}).get_text()
	real_price= [int(x) for x in price[1:] if x!=',']
	price=0
	for i in range(len(real_price)):
		price= price + (10**i)*(real_price[len(real_price)-1-i])

	if(price>=90000):
		send_mail()

	print(title,' ',price)

def send_mail():
	server = smtplib.SMTP('smtp.gmail.com', 587)
	server.ehlo()
	server.starttls()
	server.ehlo()

	server.login('saikirantirunagiri@gmail.com','iqkfbkuzdkbpmtkz')

	subject= 'Bro the price fell down for real this time, please convince daddy as soon as possible'
	body= 'Check the flipkart link https://www.flipkart.com/asus-rog-strix-g15-core-i7-10th-gen-16-gb-1-tb-ssd-windows-10-home-6-gb-graphics-nvidia-geforce-gtx-1660-ti-144-hz-g512lu-al011t-gaming-laptop/p/itm8dd41e82bd25f?pid=COMFU3Z6FASJ3JXV&otracker=wishlist&lid=LSTCOMFU3Z6FASJ3JXVKO4WVV&fm=organic&iid=f4d32f40-e456-4c2e-8daa-fa9021df2744.COMFU3Z6FASJ3JXV.PRODUCTSUMMARY&ppt=dynamic&ppn=CART_PAGE&ssid=d5abajdixd37hpts1609269227535';
	msg=f"Subject:{subject}\n\n{body}";
	server.sendmail(
		'saikirantirunagiri@gmail.com',
		'tsaikiran506@gmail.com',
		msg
	)

	print("HEY BRO THE E-MAIL HAS BEEN SENT TO THE MAIL!")

	server.quit()

check_price()
