Action()
{
	lr_start_transaction("Homepage");
	
	web_url("www.advantageonlineshopping.com",
		"URL=http://www.advantageonlineshopping.com/",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t2.inf",
		"Mode=HTML",
		EXTRARES,
		"Url=http://detectportal.firefox.com/success.txt?ipv4","Referer=",ENDITEM,
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff","Referer=http://www.advantageonlineshopping.com/css/main.min.css",ENDITEM,
		"Url=/main.min.js",ENDITEM,
		"Url=/css/images/logo.png",ENDITEM,
		"Url=/css/images/closeDark.png",ENDITEM,
		"Url=/services.properties",ENDITEM,
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff","Referer=http://www.advantageonlineshopping.com/css/main.min.css",ENDITEM,
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff","Referer=http://www.advantageonlineshopping.com/css/main.min.css",ENDITEM,
		"Url=/css/images/Special-offer.jpg",ENDITEM,
		"Url=/css/images/GoUp.png",ENDITEM,
		"Url=/css/images/facebook.png",ENDITEM,
		"Url=/css/images/twitter.png",ENDITEM,
		"Url=/css/images/linkedin.png",ENDITEM,
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff","Referer=http://www.advantageonlineshopping.com/css/main.min.css",ENDITEM,
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff","Referer=http://www.advantageonlineshopping.com/css/main.min.css",ENDITEM,
		"Url=/catalog/fetchImage?image_id=speakers",ENDITEM,
		"Url=/css/images/arrow_right.png","Referer=http://www.advantageonlineshopping.com/css/main.min.css",ENDITEM,
		"Url=/catalog/fetchImage?image_id=tablets",ENDITEM,
		"Url=/catalog/fetchImage?image_id=laptops",ENDITEM,
		"Url=/catalog/fetchImage?image_id=mice",ENDITEM,
		"Url=/catalog/fetchImage?image_id=headphones",ENDITEM,
		"Url=/css/images/Banner1.jpg",ENDITEM,
		"Url=/css/images/Banner2.jpg",ENDITEM,
		"Url=/css/images/Banner3.jpg",ENDITEM,
		"Url=/css/images/Popular-item3.jpg",ENDITEM,
		"Url=/css/images/Popular-item2.jpg",ENDITEM,
		"Url=/css/images/Popular-item1.jpg",ENDITEM,
		"Url=/css/images/Filter.png",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5400",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5300",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5200",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5505",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5700",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5800",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5100",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5600",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5900",ENDITEM,
		"Url=/css/images/category_banner_5.png",ENDITEM,
		"Url=/catalog/fetchImage?image_id=5201",ENDITEM,
		LAST);
	
	

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("ALL", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://www.advantageonlineshopping.com//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);
	
	lr_end_transaction("Homepage", LR_AUTO);

	lr_think_time(9);
	
	lr_start_transaction("Search for Item");
	
	web_url("products",
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/5/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	
	web_url("category-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM,
		LAST);		
	


	lr_think_time(7);

	web_url("27", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/products/27", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories/5/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Search for Item",LR_AUTO);

	lr_start_transaction("Select Item");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A27%2C%22imageUrl%22%3A%225200%22%2C%22productName%22%3A%22HP%20Z3600%20Wireless%20Mouse%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A287%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A15.99%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("user-not-login-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/order/views/user-not-login-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Select Item",LR_AUTO);

	return 0;
}