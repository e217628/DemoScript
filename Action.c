Action()
{

	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	/* Enter the URL*/
	
	lr_start_transaction("Demo_1_Homepage");
	
	web_reg_find("Text=STORE", 
		LAST);
	
	web_url("www.demoblaze.com", 
		"URL={URL}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://chromestore.aternity.com/update/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=97.0.4692.99&lang=en-US&acceptformat=crx3&x=id%3Ddcjplbbbfjpafkmpiaobikmlmfbceafm%26v%3D12.1.4.17%26installsource%3Dnotfromwebstore%26installedby%3Dpolicy%26uc", "Referer=", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer={URL}css/latofonts.css", ENDITEM, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=https://hls.demoblaze.com/index.m3u8", ENDITEM, 
		"Url=https://hls.demoblaze.com/about_demo_hls_600k.m3u8", ENDITEM, 
		"Url=/imgs/galaxy_s6.jpg", ENDITEM, 
		"Url=/imgs/Nexus_6.jpg", ENDITEM, 
		"Url=/imgs/xperia_z5.jpg", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/Lumia_1520.jpg", ENDITEM, 
		"Url=/imgs/HTC_M9.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		LAST);

	web_url("config.json", 
		"URL={URL}config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_url("entries", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Demo_1_Homepage",LR_AUTO);
	
	
	/* Click on Sign up & create account */

	lr_start_transaction("Demo_2_SignUp");

	
	web_custom_request("signup", 
		"URL=https://api.demoblaze.com/signup", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

		web_custom_request("signup_2", 
		"URL=https://api.demoblaze.com/signup", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"username\":\"{UserName}\",\"password\":\"{Password}\"}", 
		LAST);

	lr_end_transaction("Demo_2_SignUp",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("Demo_3_login");

	/* Click on Login & provide credentials */


	web_custom_request("login", 
		"URL=https://api.demoblaze.com/login", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	
	web_custom_request("login_2", 
		"URL=https://api.demoblaze.com/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"username\":\"{UserName}\",\"password\":\"{Password}\"}", 
		LAST);

	
	web_url("www.demoblaze.com_2", 
		"URL={URL}", 
		"Resource=0", 
		"Referer={URL}", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/node_modules/bootstrap/dist/css/bootstrap.min.css", ENDITEM, 
		"Url=/node_modules/video.js/dist/video-js.min.css", ENDITEM, 
		"Url=/css/latofonts.css", ENDITEM, 
		"Url=/css/latostyle.css", ENDITEM, 
		"Url=/node_modules/video.js/dist/video.min.js", ENDITEM, 
		"Url=/node_modules/jquery/dist/jquery.min.js", ENDITEM, 
		"Url=/node_modules/videojs-contrib-hls/dist/videojs-contrib-hls.min.js", ENDITEM, 
		"Url=/js/index.js", ENDITEM, 
		"Url=/bm.png", ENDITEM, 
		"Url=/node_modules/tether/dist/js/tether.min.js", ENDITEM, 
		"Url=/Samsung1.jpg", ENDITEM, 
		"Url=/node_modules/bootstrap/dist/js/bootstrap.min.js", ENDITEM, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/nexus1.jpg", ENDITEM, 
		"Url=/iphone1.jpg", ENDITEM, 
		"Url=/config.json", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=/imgs/galaxy_s6.jpg", ENDITEM, 
		"Url=/imgs/Lumia_1520.jpg", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/Nexus_6.jpg", ENDITEM, 
		"Url=/imgs/xperia_z5.jpg", ENDITEM, 
		"Url=/imgs/HTC_M9.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		LAST);

	

	web_custom_request("check", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

		web_url("entries_2", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_2", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	lr_end_transaction("Demo_3_login",LR_AUTO);
	
	lr_think_time(4);

	lr_start_transaction("Demo_4_addproducts");

	/* add multiple products to cart */

	web_custom_request("bycat", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

		web_custom_request("bycat_2", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cat\":\"phone\"}", 
		LAST);


	web_url("prod.html", 
		"URL={URL}prod.html?idp_=5", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/imgs/front.jpg", "Referer={URL}prod.html?idp_=5", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer={URL}css/latofonts.css", ENDITEM, 
		"Url=/config.json", "Referer={URL}prod.html?idp_=5", ENDITEM, 
		LAST);

	web_custom_request("check_3", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	

	web_custom_request("check_4", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_custom_request("view_2", 
		"URL=https://api.demoblaze.com/view", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"5\"}", 
		EXTRARES, 
		"Url={URL}imgs/iphone_6.jpg", "Referer={URL}prod.html?idp_=5", ENDITEM, 
		LAST);

	
	web_custom_request("addtocart", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);

	
	web_custom_request("addtocart_2", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"70948e20-89bf-431c-28f1-f8012951c10f\",\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"prod_id\":5,\"flag\":true}", 
		LAST);

	web_url("index.html", 
		"URL={URL}index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}prod.html?idp_=5", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer={URL}css/latofonts.css", ENDITEM, 
		"Url=/config.json", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/galaxy_s6.jpg", ENDITEM, 
		"Url=/imgs/Lumia_1520.jpg", ENDITEM, 
		"Url=/imgs/Nexus_6.jpg", ENDITEM, 
		"Url=/imgs/HTC_M9.jpg", ENDITEM, 
		"Url=/imgs/xperia_z5.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		"Url=/imgs/macbook_air.jpg", ENDITEM, 
		"Url=/imgs/dell.jpg", ENDITEM, 
		LAST);

	web_custom_request("check_5", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	
	web_url("entries_3", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_6", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_custom_request("bycat_3", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("bycat_4", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cat\":\"notebook\"}", 
		LAST);

	

	web_reg_find("Text=STORE", 
		LAST);

	web_url("prod.html_2", 
		"URL={URL}prod.html?idp_=9", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}index.html", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view_3", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_7", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_custom_request("view_4", 
		"URL=https://api.demoblaze.com/view", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"9\"}", 
		LAST);

	web_custom_request("addtocart_3", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("addtocart_4", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"fe9a07da-b821-ab0d-a2dd-92b2844ba920\",\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"prod_id\":9,\"flag\":true}", 
		LAST);

	web_url("index.html_2", 
		"URL={URL}index.html", 
		"Resource=0", 
		"Referer={URL}prod.html?idp_=9", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/node_modules/bootstrap/dist/css/bootstrap.min.css", ENDITEM, 
		"Url=/node_modules/video.js/dist/video-js.min.css", ENDITEM, 
		"Url=/css/latofonts.css", ENDITEM, 
		"Url=/css/latostyle.css", ENDITEM, 
		"Url=/node_modules/video.js/dist/video.min.js", ENDITEM, 
		"Url=/node_modules/jquery/dist/jquery.min.js", ENDITEM, 
		"Url=/node_modules/videojs-contrib-hls/dist/videojs-contrib-hls.min.js", ENDITEM, 
		"Url=/node_modules/tether/dist/js/tether.min.js", ENDITEM, 
		"Url=/node_modules/bootstrap/dist/js/bootstrap.min.js", ENDITEM, 
		"Url=/js/index.js", ENDITEM, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/bm.png", ENDITEM, 
		"Url=/Samsung1.jpg", ENDITEM, 
		"Url=/nexus1.jpg", ENDITEM, 
		"Url=/iphone1.jpg", ENDITEM, 
		"Url=/config.json", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/Lumia_1520.jpg", ENDITEM, 
		"Url=/imgs/Nexus_6.jpg", ENDITEM, 
		"Url=/imgs/galaxy_s6.jpg", ENDITEM, 
		"Url=/imgs/xperia_z5.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		"Url=/imgs/HTC_M9.jpg", ENDITEM, 
		"Url=/imgs/apple_cinema.jpg", ENDITEM, 
		"Url=/imgs/asusm.jpg", ENDITEM, 
		LAST);

	web_custom_request("check_8", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);


	web_url("entries_4", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_9", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_custom_request("bycat_5", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);


	web_custom_request("bycat_6", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cat\":\"monitor\"}", 
		LAST);


	web_url("prod.html_3", 
		"URL={URL}prod.html?idp_=10", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}index.html", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view_5", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_10", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_custom_request("view_6", 
		"URL=https://api.demoblaze.com/view", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"10\"}", 
		LAST);

	web_custom_request("addtocart_5", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("addtocart_6", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"0da4bc38-49d4-fbe6-52a1-055898dad3d5\",\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"prod_id\":10,\"flag\":true}", 
		LAST);

	lr_end_transaction("Demo_4_addproducts",LR_AUTO);
	
	lr_think_time(51);
	
	lr_start_transaction("Demo_5_CheckCrat");

	/* Click on cart & check your products */

	
	web_reg_find("Text=STORE", 
		LAST);

	web_url("cart.html", 
		"URL={URL}cart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}prod.html?idp_=10", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
//		"ChwKDGdvb2dsZWNocm9tZRIMOTcuMC40NjkyLjk5GikIBRABGhsKDQgFEAYYASIDMDAxMAEQv7ANGgIYBi2A0QciBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABEIGfChoCGAZU3poAIgQgASACKAEaKQgHEAEaGwoNCAcQBhgBIgMwMDEwARCW0woaAhgGDuNJFCIEIAEgAigBGicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAb7ks9FIgQgASACKAMaKAgBEAgaGgoNCAEQCBgBIgMwMDEwBBCeJhoCGAYdVn0-IgQgASACKAQaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARD0cBoCGAaQ3NNIIgQgASACKAEaJwgKEAgaGQoNCAoQCBgBIgMwMDEwARAHGgIYBvdxNsIiBCABIAIoARonCAkQARoZCg0ICRAGGAEiAzAwMTABECAaAhgGnzCSwSIEIAEgAigBGigICBABGhoKDQ"
//		"gIEAYYASIDMDAxMAEQvg4aAhgGv59xaCIEIAEgAigBGikIDRABGhsKDQgNEAYYASIDMDAxMAEQl68BGgIYBt9k9hwiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABENzdCRoCGAapP3P9IgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCjoAYaAhgGzma0yCIEIAEgAigBGigIEBABGhoKDQgQEAYYASIDMDAxMAEQgRAaAhgGe8-XryIEIAEgAigBIgIIAQ==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer={URL}css/latofonts.css", ENDITEM, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/config.json", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/apple_cinema.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		LAST);

	web_custom_request("check_11", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("viewcart", 
		"URL=https://api.demoblaze.com/viewcart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);


	web_custom_request("check_12", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_custom_request("viewcart_2", 
		"URL=https://api.demoblaze.com/viewcart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"flag\":true}", 
		LAST);

	web_custom_request("view_7", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view_8", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view_9", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view_10", 
		"URL=https://api.demoblaze.com/view", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":5}", 
		LAST);

	web_custom_request("view_11", 
		"URL=https://api.demoblaze.com/view", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":10}", 
		LAST);

	web_custom_request("view_12", 
		"URL=https://api.demoblaze.com/view", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":9}", 
		LAST);

	lr_end_transaction("Demo_5_CheckCrat",LR_AUTO);
	
	lr_think_time(8);

	lr_start_transaction("Demo_6_PlaceOrder");

	/* Click on place order &  */

	/* click on place order & complete the order */

	web_custom_request("deletecart", 
		"URL=https://api.demoblaze.com/deletecart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("deletecart_2", 
		"URL=https://api.demoblaze.com/deletecart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cookie\":\"{UserName}\"}", 
		LAST);

	web_url("index.html_3", 
		"URL={URL}index.html", 
		"Resource=0", 
		"Referer={URL}cart.html", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/node_modules/bootstrap/dist/css/bootstrap.min.css", ENDITEM, 
		"Url=/css/latofonts.css", ENDITEM, 
		"Url=/node_modules/video.js/dist/video-js.min.css", ENDITEM, 
		"Url=/css/latostyle.css", ENDITEM, 
		"Url=/node_modules/video.js/dist/video.min.js", ENDITEM, 
		"Url=/node_modules/jquery/dist/jquery.min.js", ENDITEM, 
		"Url=/node_modules/videojs-contrib-hls/dist/videojs-contrib-hls.min.js", ENDITEM, 
		"Url=/node_modules/tether/dist/js/tether.min.js", ENDITEM, 
		"Url=/node_modules/bootstrap/dist/js/bootstrap.min.js", ENDITEM, 
		"Url=/js/index.js", ENDITEM, 
		"Url=/Samsung1.jpg", ENDITEM, 
		"Url=/bm.png", ENDITEM, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/nexus1.jpg", ENDITEM, 
		"Url=/iphone1.jpg", ENDITEM, 
		"Url=/config.json", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=/imgs/galaxy_s6.jpg", ENDITEM, 
		"Url=/imgs/Lumia_1520.jpg", ENDITEM, 
		"Url=/imgs/Nexus_6.jpg", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/xperia_z5.jpg", ENDITEM, 
		"Url=/imgs/HTC_M9.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		LAST);


	web_custom_request("check_13", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("entries_5", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_14", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	lr_end_transaction("Demo_6_PlaceOrder",LR_AUTO);
	
	/* clik on logout */
	
	lr_think_time(3);


	lr_start_transaction("Demo_7_logout");

	
	web_url("index.html_4", 
		"URL={URL}index.html", 
		"Resource=0", 
		"Referer={URL}index.html", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/node_modules/video.js/dist/video-js.min.css", ENDITEM, 
		"Url=/node_modules/bootstrap/dist/css/bootstrap.min.css", ENDITEM, 
		"Url=/css/latostyle.css", ENDITEM, 
		"Url=/css/latofonts.css", ENDITEM, 
		"Url=/node_modules/jquery/dist/jquery.min.js", ENDITEM, 
		"Url=/node_modules/video.js/dist/video.min.js", ENDITEM, 
		"Url=/node_modules/videojs-contrib-hls/dist/videojs-contrib-hls.min.js", ENDITEM, 
		"Url=/node_modules/tether/dist/js/tether.min.js", ENDITEM, 
		"Url=/node_modules/bootstrap/dist/js/bootstrap.min.js", ENDITEM, 
		"Url=/js/index.js", ENDITEM, 
		"Url=/bm.png", ENDITEM, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/Samsung1.jpg", ENDITEM, 
		"Url=/nexus1.jpg", ENDITEM, 
		"Url=/iphone1.jpg", ENDITEM, 
		"Url=/config.json", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=/imgs/galaxy_s6.jpg", ENDITEM, 
		"Url=/imgs/Lumia_1520.jpg", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/xperia_z5.jpg", ENDITEM, 
		"Url=/imgs/Nexus_6.jpg", ENDITEM, 
		"Url=/imgs/HTC_M9.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		LAST);
	
	web_url("entries_6", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Demo_7_logout",LR_AUTO);

	return 0;
}