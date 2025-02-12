Action()
{

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_url("advantageonlineshopping.com", 
		"URL=http://advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=http://52.90.189.176/catalog/api/v1/categories", ENDITEM, 
		"Url=http://52.90.189.176/catalog/api/v1/DemoAppConfig/parameters/Email_address_in_login", ENDITEM, 
		"Url=http://52.90.189.176/catalog/api/v1/deals/search?dealOfTheDay=true", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=http://52.90.189.176/catalog/api/v1/categories/1/products", ENDITEM, 
		"Url=http://52.90.189.176/catalog/api/v1/categories/attributes", ENDITEM, 
		"Url=/css/images/category_banner_1.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1250", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1249", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=http://52.90.189.176/catalog/api/v1/products/5", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1502", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1501", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", "Referer=", ENDITEM, 
		LAST);

	web_url("accountservice.wsdl", 
		"URL=http://52.90.189.176/accountservice/accountservice.wsdl", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("accountservice", 
		"URL=http://52.90.189.176/accountservice", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("accountservice_2", 
		"URL=http://52.90.189.176/accountservice", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"utf-8\"?><soap:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("home-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("Shop for Laptop");

	web_url("category-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A5%2C%22imageUrl%22%3A%221245%22%2C%22productName%22%3A%22HP%20Stream%20-%2011-d020nr%20Laptop%22%2C%22color%22%3A%7B%22code%22%3A%22DD3A5B%22%2C%22name%22%3A%22RED%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A388%22%7D%2C%22quantity%22%3A5%2C%22price%22%3A179.99%7D%5D%7D; DOMAIN=advantageonlineshopping.com");

	lr_think_time(7);

	web_url("user-not-login-page.html", 
		"URL=http://advantageonlineshopping.com/app/order/views/user-not-login-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://advantageonlineshopping.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Shop for Laptop",LR_AUTO);

	return 0;
}