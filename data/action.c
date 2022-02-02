Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=97", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("getAllDomainName.jxp", 
		"URL=https://rewardno.saasm2m.com/getAllDomainName.jxp?partnerUniqueId=5", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=STORE", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("user=e0635aa5-defb-1388-766c-94c9040f9633; DOMAIN=www.demoblaze.com");

	web_url("www.demoblaze.com", 
		"URL=https://www.demoblaze.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://chromestore.aternity.com/update/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=97.0.4692.99&lang=en-US&acceptformat=crx3&x=id%3Ddcjplbbbfjpafkmpiaobikmlmfbceafm%26v%3D12.1.4.17%26installsource%3Dnotfromwebstore%26installedby%3Dpolicy%26uc", "Referer=", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer=https://www.demoblaze.com/css/latofonts.css", ENDITEM, 
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

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("config.json", 
		"URL=https://www.demoblaze.com/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTcuMC40NjkyLjk5Eh4JHPnZyVDpnmQSBQ1ZSoMiEgUNHHpOqRIFDeanSuQSFwmLOdRo7KyeOxIFDTZHxXISBQ0zEFmmEhcJxvlVs6rftUkSBQ2IsVWPEgUNxNLJPA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Origin", 
		"https://www.demoblaze.com");

	web_url("entries", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Demo_2_SignUp");

	/* Click on Sign up & create account */

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,cmahhnpholdijhjokonmfdjbfmklppij,obedbbhbpmojnkanicioggnmelmoomoc,kiabhabjdbkjdpjbpigfodbdjmbglcoo,lmelglejhemejginpboagddgdfbepgmp,gonpemdgkjcecdgbnaabipppbmgfggbe,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,giekcmmlnklenlaomppkphknjmnnpneh,llkgjffcdpffmhiakmfcdcblohccpfmo,gkmgaooipdjhmangpemjhigmamcehddo,laoigpblnllgcgjnjnllmfolckpjlhki,"
		"efniojlnjndmcbiieegkicadnoecjjef,ggkkehgbnfjpeggfpleeakpidbkibbmn,dhlpobdgcjafebgbbhjdnapejmpkgiie,jflookgnkcckhobaglndicnbbgbonegd,jamhcnnkihinmdlkakkaopbjbbcngflc,pdafiollngonhoadbmdoemagnfpdphbe,imefjhfbkmcmebodilednhmaccmincoa,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,ehgidpndbllacpjalkiimkbadgjfnnmc");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-97.0.4692.99");

	lr_think_time(52);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:nRo8C-MZrR2etfL5O4OWHVfFpeataPuQRT-IGQ8v_LE&cup2hreq=f9d4147c75bc09ddcd073fe8098ec357317f48b544825f1df7f434b47c5e42ef", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{a6ed2fcf-e93a-4931-b52d-f5ccd5272b73}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{e481d1d1-7ab5-41e7-ad58-a33a9f52ff00}\","
		"\"rd\":5510},\"updatecheck\":{},\"version\":\"4.10.2391.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{aa237978-c46f-4274-b27c-cbacb2a8529a}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEA\",\"cohort\":\"1:bm1"
		":11vf@0.01\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.dbbba5869c1d8946e5e23215c0404619fe82793d60eb89489b345ef55023e077\"}]},\"ping\":{\"ping_freshness\":\"{6c08b4bd-2f50-4278-9200-2e1278223365}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"9.32.0\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GCEA\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\""
		":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\"{200e810b-ce0a-4ad8-afb4-f361742a12bb}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"1.0.6\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GCEA\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.09bcae4d8761ec4a7e8aa090f2f81bd40a3551922a62e2d695bb3faa18477646"
		"\"}]},\"ping\":{\"ping_freshness\":\"{5c87ef6d-8490-45cf-8687-2d9315ef9b9d}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"20220112.419803486\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GCEA\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7de0c5b45b564f8089dbeba4a1b4bf821aaa9d946edfc5e98a1baaaef89932f7\"}]},\"ping\":{\"ping_freshness\":\"{adbf7b05-7198-4eb3-9ab1-55d01d689904}\",\"rd\":5510},\""
		"updatecheck\":{},\"version\":\"2022.1.31.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GCEA\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.505f86d2b495a009fe715fcddf55d6af35f5189b4a8b093c7933de0e18595e78\"}]},\"ping\":{\"ping_freshness\":\"{ac449301-1b2c-4a08-8bce-f7e2c082c91e}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"316\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\""
		"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GCEA\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9f3dda168dccf79be5e9593992108a31d2f83c8fe5f63bfc0a1b725f2a3ca47a\"}]},\"ping\":{\"ping_freshness\":\"{a3b4afd3-5bec-43e6-9ec4-dd2a9af03974}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2021.6.24.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEA\",\"cohort\":\"1:cux:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d237485db9493e87035e3295dbaa1e24b727c7fb91b24401814fd88f2ab81c3c\"}]},\"ping\":{\"ping_freshness\":\"{765cbfe8-7607-48ad-bca3-2fa62047097d}\",\"rd\":5510},\"tag\":\"46\",\"updatecheck\":{},\"version\":\"47\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEA\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.85c39ee10cd7b50ae0834a27bed81cf747eaf0d1658009a43b2feb73a6bf56f5\"}]},\"ping\":{\"ping_freshness\":\"{812c2424-c5cd-47bb-8548-295f2933a3b1}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"7133\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEA\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\""
		"{69c0b1be-1208-4ea5-98ed-f34b648a9104}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEA\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.689abdc0dc8e916dc8466bf42bfde5635dbe40e64e8d0a86b48008f317cf848b\"}]},\"ping\":{\"ping_freshness\":\"{c414cf31-4cf3-49c5-ba4c-0a279cc4fb10}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"1.0.0.10\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEA\","
		"\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9a4393fa2f5a5a43e21ab7365ea12c87ae7be963d6fbcf49abd499ebd7d50b65\"}]},\"ping\":{\"ping_freshness\":\"{b81580ed-3006-4d65-bf7b-45a051c5d8f6}\",\"rd\":5510},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"96.276.200\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GCEA\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\""
		"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.db60fc5d4ab81e28fe58d82f3ad26622c4ca4cade28e2b636068ac91ca62224d\"}]},\"ping\":{\"ping_freshness\":\"{cfb08b37-7161-49f2-bd48-ec77e8b519b1}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"1.0.7.1642025427\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GCEA\",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.4fd359c9d2c0f81e54caa538477b63cf8c5f86e267f7218ff5c57440bfe876bf\"}]},\"ping\":{\"ping_freshness\":\"{429cadba-c30c-4f9c-ac3e-cfb4593633f4}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"157\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEA\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.f01d0cf1209718138dc6596dff43a8c55e847414baac537edc5f9f23f8fa62b6\"}]},\"ping\":{\"ping_freshness\":\""
		"{894ac63d-e981-488a-98b5-3248cec2eccb}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2022.1.24.1201\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"GCEA\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8b9dc2cd32d1b5f147a17377cef75ec160103d6c02faf4947978fb6d9a25983b\"}]},\"ping\":{\"ping_freshness\":\"{111a0a8e-1a35-4ff6-b978-bd1893c7b8c1}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"20211020.1\"},{"
		"\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEA\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffcda540f242b9ba326823a75de28cd80343fe31a38285db4264081547265fc0\"}]},\"ping\":{\"ping_freshness\":\"{dec3e5ad-bf47-49b2-9ce2-bd8ad49a897a}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2770\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GCEA\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\","
		"\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.31365eb4f3fbb1593ddc7f89ae65d4abcbc6c8f10e0d4b6f02d0136d5fd9a2ca\"}]},\"ping\":{\"ping_freshness\":\"{90c16ba5-1a6a-428b-bdc4-a0bdae3f1e5c}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"100.0.4863.0\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"GCEA\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{3dac7cc9-6f2a-43c4-8ee2-fe195c9cc38a}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2021.8.17.1300\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"GCEA\",\"cohort\":\"1:zor:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.90d6e329a99396aced52c13595b29a8af1e2711cdd6f73008ae51d0be83356be\"}]},\"ping\":{\"ping_freshness\":\""
		"{0b9795bb-b8d9-4ee0-ad4a-2a1dbe100cd1}\",\"rd\":5510},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"27.5\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GCEA\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{d57c845c-3207-41fc-840a-4847e28f098c}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"1\"},"
		"{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GCEA\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{432c5c39-bd9b-426d-abc2-3ec42b6b233d}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEA\",\"cohort\":\"1:ofl:\",\""
		"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{15320a1a-e409-4f00-b59f-e9844c109de6}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2018.8.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":32},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":"
		"\"Windows\",\"version\":\"10.0.19044.1466\"},\"prodversion\":\"97.0.4692.99\",\"protocol\":\"3.1\",\"requestid\":\"{6942b4f9-07ef-472e-91d2-cdd41596a8fa}\",\"sessionid\":\"{8ab492c3-2f5b-47ef-8901-dfe0a2767127}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.122\"},\"updaterversion\":\"97.0.4692.99\"}}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	lr_think_time(25);

	web_custom_request("signup", 
		"URL=https://api.demoblaze.com/signup", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("signup_2", 
		"URL=https://api.demoblaze.com/signup", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"username\":\"itera789\",\"password\":\"aXRlcmE3ODk=\"}", 
		LAST);

	lr_end_transaction("Demo_2_SignUp",LR_AUTO);

	lr_start_transaction("Demo_3_login");

	/* Click on Login & provide credentials */

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	lr_think_time(68);

	web_custom_request("login", 
		"URL=https://api.demoblaze.com/login", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("login_2", 
		"URL=https://api.demoblaze.com/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"username\":\"itera789\",\"password\":\"aXRlcmE3ODk=\"}", 
		LAST);

	web_add_cookie("tokenp_=aXRlcmE3ODkxNjQ0MzE0; DOMAIN=www.demoblaze.com");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.demoblaze.com_2", 
		"URL=https://www.demoblaze.com/", 
		"Resource=0", 
		"Referer=https://www.demoblaze.com/", 
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

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("check", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("entries_2", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_2", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	lr_end_transaction("Demo_3_login",LR_AUTO);

	lr_start_transaction("Demo_4_addproducts");

	/* add multiple products to cart */

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_revert_auto_header("Origin");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	lr_think_time(41);

	web_custom_request("bycat", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("bycat_2", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cat\":\"phone\"}", 
		LAST);

	web_reg_find("Text=STORE", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_url("prod.html", 
		"URL=https://www.demoblaze.com/prod.html?idp_=5", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/imgs/front.jpg", "Referer=https://www.demoblaze.com/prod.html?idp_=5", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer=https://www.demoblaze.com/css/latofonts.css", ENDITEM, 
		"Url=/config.json", "Referer=https://www.demoblaze.com/prod.html?idp_=5", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("check_3", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("check_4", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
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
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"5\"}", 
		EXTRARES, 
		"Url=https://www.demoblaze.com/imgs/iphone_6.jpg", "Referer=https://www.demoblaze.com/prod.html?idp_=5", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("addtocart", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("addtocart_2", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"70948e20-89bf-431c-28f1-f8012951c10f\",\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"prod_id\":5,\"flag\":true}", 
		LAST);

	web_revert_auto_header("Origin");

	web_reg_find("Text=STORE", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(8);

	web_url("index.html", 
		"URL=https://www.demoblaze.com/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/prod.html?idp_=5", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer=https://www.demoblaze.com/css/latofonts.css", ENDITEM, 
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

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("check_5", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("entries_3", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_6", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("bycat_3", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("bycat_4", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cat\":\"notebook\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_reg_find("Text=STORE", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("prod.html_2", 
		"URL=https://www.demoblaze.com/prod.html?idp_=9", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/index.html", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("view_3", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("check_7", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
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
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"9\"}", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("addtocart_3", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("addtocart_4", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"fe9a07da-b821-ab0d-a2dd-92b2844ba920\",\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"prod_id\":9,\"flag\":true}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.html_2", 
		"URL=https://www.demoblaze.com/index.html", 
		"Resource=0", 
		"Referer=https://www.demoblaze.com/prod.html?idp_=9", 
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

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("check_8", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("entries_4", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_9", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("bycat_5", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("bycat_6", 
		"URL=https://api.demoblaze.com/bycat", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cat\":\"monitor\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_reg_find("Text=STORE", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("prod.html_3", 
		"URL=https://www.demoblaze.com/prod.html?idp_=10", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/index.html", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("view_5", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("check_10", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
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
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"10\"}", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("addtocart_5", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("addtocart_6", 
		"URL=https://api.demoblaze.com/addtocart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"0da4bc38-49d4-fbe6-52a1-055898dad3d5\",\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"prod_id\":10,\"flag\":true}", 
		LAST);

	lr_end_transaction("Demo_4_addproducts",LR_AUTO);

	lr_start_transaction("Demo_5_CheckCrat");

	/* Click on cart & check your products */

	web_revert_auto_header("Origin");

	web_reg_find("Text=STORE", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(51);

	web_url("cart.html", 
		"URL=https://www.demoblaze.com/cart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/prod.html?idp_=10", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMOTcuMC40NjkyLjk5GikIBRABGhsKDQgFEAYYASIDMDAxMAEQv7ANGgIYBi2A0QciBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABEIGfChoCGAZU3poAIgQgASACKAEaKQgHEAEaGwoNCAcQBhgBIgMwMDEwARCW0woaAhgGDuNJFCIEIAEgAigBGicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAb7ks9FIgQgASACKAMaKAgBEAgaGgoNCAEQCBgBIgMwMDEwBBCeJhoCGAYdVn0-IgQgASACKAQaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARD0cBoCGAaQ3NNIIgQgASACKAEaJwgKEAgaGQoNCAoQCBgBIgMwMDEwARAHGgIYBvdxNsIiBCABIAIoARonCAkQARoZCg0ICRAGGAEiAzAwMTABECAaAhgGnzCSwSIEIAEgAigBGigICBABGhoKDQ"
		"gIEAYYASIDMDAxMAEQvg4aAhgGv59xaCIEIAEgAigBGikIDRABGhsKDQgNEAYYASIDMDAxMAEQl68BGgIYBt9k9hwiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABENzdCRoCGAapP3P9IgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCjoAYaAhgGzma0yCIEIAEgAigBGigIEBABGhoKDQgQEAYYASIDMDAxMAEQgRAaAhgGe8-XryIEIAEgAigBIgIIAQ==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=/css/fonts/Lato-Regular.woff2", "Referer=https://www.demoblaze.com/css/latofonts.css", ENDITEM, 
		"Url=/imgs/front.jpg", ENDITEM, 
		"Url=/config.json", ENDITEM, 
		"Url=/imgs/iphone_6.jpg", ENDITEM, 
		"Url=/imgs/apple_cinema.jpg", ENDITEM, 
		"Url=/imgs/sony_vaio_5.jpg", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("check_11", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("viewcart", 
		"URL=https://api.demoblaze.com/viewcart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("check_12", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
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
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cookie\":\"aXRlcmE3ODkxNjQ0MzE0\",\"flag\":true}", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_auto_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("view_7", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view_8", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("view_9", 
		"URL=https://api.demoblaze.com/view", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("view_10", 
		"URL=https://api.demoblaze.com/view", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
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
		"Referer=https://www.demoblaze.com/", 
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
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":9}", 
		LAST);

	lr_end_transaction("Demo_5_CheckCrat",LR_AUTO);

	lr_start_transaction("Demo_6_PlaceOrder");

	/* Click on place order &  */

	/* click on place order & complete the order */

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	lr_think_time(89);

	web_custom_request("deletecart", 
		"URL=https://api.demoblaze.com/deletecart", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("deletecart_2", 
		"URL=https://api.demoblaze.com/deletecart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"cookie\":\"itera789\"}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.html_3", 
		"URL=https://www.demoblaze.com/index.html", 
		"Resource=0", 
		"Referer=https://www.demoblaze.com/cart.html", 
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

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("check_13", 
		"URL=https://api.demoblaze.com/check", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("entries_5", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("check_14", 
		"URL=https://api.demoblaze.com/check", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"token\":\"aXRlcmE3ODkxNjQ0MzE0\"}", 
		LAST);

	lr_end_transaction("Demo_6_PlaceOrder",LR_AUTO);

	lr_start_transaction("Demo_7_logout");

	/* clik on logout */

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(23);

	web_url("index.html_4", 
		"URL=https://www.demoblaze.com/index.html", 
		"Resource=0", 
		"Referer=https://www.demoblaze.com/index.html", 
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

	web_add_header("Origin", 
		"https://www.demoblaze.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("entries_6", 
		"URL=https://api.demoblaze.com/entries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.demoblaze.com/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Demo_7_logout",LR_AUTO);

	return 0;
}