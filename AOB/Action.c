Action()
{

	web_url("advantage", 
		"URL=http://alm-aob:47001/advantage", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/advantage/styles/common.css", "Referer=http://alm-aob:47001/advantage/styles/index.css", ENDITEM, 
		"Url=/advantage/images/bodybg.png", "Referer=http://alm-aob:47001/advantage/styles/common.css", ENDITEM, 
		"Url=/advantage/FlexMenu.swf", "Referer=http://alm-aob:47001/advantage/", ENDITEM, 
		"Url=/advantage/images/header10.png", "Referer=http://alm-aob:47001/advantage/styles/common.css", ENDITEM, 
		"Url=/advantage/images/reversebg.png", "Referer=http://alm-aob:47001/advantage/styles/common.css", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_submit_form("auth", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=j_username", "Value=jojo", ENDITEM, 
		"Name=j_password", "Value=HP$$ALMdem0s", ENDITEM, 
		EXTRARES, 
		"Url=images/hrbg.png", "Referer=http://alm-aob:47001/advantage/styles/common.css", ENDITEM, 
		LAST);

	lr_think_time(9);

	lr_start_transaction("Money Transfer");

	web_link("Money Transfer", 
		"Text=Money Transfer", 
		"Snapshot=t3.inf", 
		EXTRARES, 
		"Url=http://yui.yahooapis.com/2.8.0r4/build/assets/skins/sam/sprite.png", "Referer=http://alm-aob:47001/advantage/styles/yui/build/calendar/assets/skins/sam/calendar.css", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_submit_form("transfermoney.jsp", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=fromAccount", "Value=Checking [543875] $99,099.74", ENDITEM, 
		"Name=toAccount", "Value=Savings [543876] $104,470.76", ENDITEM, 
		LAST);

	web_submit_form("transfermoney.jsp_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=amount", "Value=1000.00", ENDITEM, 
		"Name=transferDate", "Value=07/08/2016", ENDITEM, 
		LAST);

	web_submit_form("transfer", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("Money Transfer",LR_AUTO);

	lr_think_time(9);

	web_link("Accounts", 
		"Text=Accounts", 
		"Snapshot=t7.inf", 
		LAST);

	lr_think_time(4);

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t8.inf", 
		EXTRARES, 
		"Url=FlexMenu.swf", "Referer=http://alm-aob:47001/advantage/index.jsp?logout=true", ENDITEM, 
		LAST);

	return 0;
}