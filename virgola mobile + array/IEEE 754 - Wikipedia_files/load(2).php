var isCompatible=function(){if(navigator.appVersion.indexOf('MSIE')!==-1&&parseFloat(navigator.appVersion.split('MSIE')[1])<6){return false;}return true;};var startUp=function(){mw.config=new mw.Map(true);mw.loader.register([["site","1327048304",[],"site"],["noscript","1311020640",[],"noscript"],["startup","1327372817",[],"startup"],["user","1311020640",[],"user"],["user.groups","1311020640",[],"user"],["user.options","1311020640",[],"private"],["user.tokens","1311020640",[],"private"],["filepage","1311020640",[]],["skins.vector","1325628544",[]],["skins.monobook","1320879997",[]],["skins.simple","1325631572",[]],["skins.chick","1316448689",[]],["skins.modern","1325628544",[]],["skins.cologneblue","1325631573",[]],["skins.nostalgia","1316448690",[]],["skins.standard","1316448601",[]],["jquery","1318023333",[]],["jquery.async","1316448906",[]],["jquery.appear","1316448906",[]],["jquery.autoEllipsis","1316448906",["jquery.highlightText"]],["jquery.byteLength","1316448915",[]],[
"jquery.byteLimit","1316448916",["jquery.byteLength"]],["jquery.checkboxShiftClick","1316448906",[]],["jquery.client","1316448906",[]],["jquery.collapsibleTabs","1325631568",[]],["jquery.colorUtil","1316448905",[]],["jquery.color","1316448915",["jquery.colorUtil"]],["jquery.cookie","1316448916",[]],["jquery.delayedBind","1325631568",[]],["jquery.expandableField","1316448906",["jquery.delayedBind"]],["jquery.form","1316448915",[]],["jquery.getAttrs","1316448916",[]],["jquery.highlightText","1316448905",[]],["jquery.hoverIntent","1316448906",[]],["jquery.messageBox","1316448906",[]],["jquery.placeholder","1316448904",[]],["jquery.json","1316448905",[]],["jquery.localize","1322079009",[]],["jquery.makeCollapsible","1327370859",[]],["jquery.mwPrototypes","1316448916",[]],["jquery.qunit","1316448905",[]],["jquery.suggestions","1316448916",["jquery.autoEllipsis"]],["jquery.tabIndex","1316448915",[]],["jquery.tablesorter","1327370953",[]],["jquery.textSelection","1321375549",[]],[
"jquery.tipsy","1316448820",[]],["jquery.ui.core","1316448832",["jquery"],"jquery.ui"],["jquery.ui.widget","1316448865",[],"jquery.ui"],["jquery.ui.mouse","1316448874",["jquery.ui.widget"],"jquery.ui"],["jquery.ui.position","1316448865",[],"jquery.ui"],["jquery.ui.draggable","1316448821",["jquery.ui.core","jquery.ui.mouse","jquery.ui.widget"],"jquery.ui"],["jquery.ui.droppable","1316448874",["jquery.ui.core","jquery.ui.mouse","jquery.ui.widget","jquery.ui.draggable"],"jquery.ui"],["jquery.ui.resizable","1316448874",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.selectable","1316448865",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.sortable","1316448865",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.accordion","1316448821",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.ui.autocomplete","1316448865",["jquery.ui.core","jquery.ui.widget","jquery.ui.position"],"jquery.ui"],[
"jquery.ui.button","1319422262",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.ui.datepicker","1316448874",["jquery.ui.core"],"jquery.ui"],["jquery.ui.dialog","1316448865",["jquery.ui.core","jquery.ui.widget","jquery.ui.button","jquery.ui.draggable","jquery.ui.mouse","jquery.ui.position","jquery.ui.resizable"],"jquery.ui"],["jquery.ui.progressbar","1316448866",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.ui.slider","1316448866",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.tabs","1316448822",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.effects.core","1316448887",["jquery"],"jquery.ui"],["jquery.effects.blind","1316448892",["jquery.effects.core"],"jquery.ui"],["jquery.effects.bounce","1316448887",["jquery.effects.core"],"jquery.ui"],["jquery.effects.clip","1316448887",["jquery.effects.core"],"jquery.ui"],["jquery.effects.drop","1316448887",["jquery.effects.core"],"jquery.ui"],["jquery.effects.explode",
"1316448892",["jquery.effects.core"],"jquery.ui"],["jquery.effects.fold","1316448893",["jquery.effects.core"],"jquery.ui"],["jquery.effects.highlight","1316448887",["jquery.effects.core"],"jquery.ui"],["jquery.effects.pulsate","1316448892",["jquery.effects.core"],"jquery.ui"],["jquery.effects.scale","1316448892",["jquery.effects.core"],"jquery.ui"],["jquery.effects.shake","1316448893",["jquery.effects.core"],"jquery.ui"],["jquery.effects.slide","1316448893",["jquery.effects.core"],"jquery.ui"],["jquery.effects.transfer","1316448893",["jquery.effects.core"],"jquery.ui"],["mediawiki","1323802402",[]],["mediawiki.api","1323802401",[]],["mediawiki.api.category","1323802401",["mediawiki.api","mediawiki.Title"]],["mediawiki.api.edit","1323802402",["mediawiki.api","mediawiki.Title"]],["mediawiki.api.parse","1323802400",["mediawiki.api"]],["mediawiki.api.titleblacklist","1323802400",["mediawiki.api","mediawiki.Title"]],["mediawiki.debug","1324433371",[]],["mediawiki.feedback","1324587172",[
"mediawiki.api.edit","mediawiki.Title","mediawiki.jqueryMsg","jquery.ui.dialog"]],["mediawiki.htmlform","1316448878",[]],["mediawiki.user","1325701904",["jquery.cookie"]],["mediawiki.Title","1317774200",["mediawiki.util"]],["mediawiki.Uri","1323901355",[]],["mediawiki.page.startup","1320881909",["jquery.client"]],["mediawiki.page.ready","1316448903",["jquery.checkboxShiftClick","jquery.makeCollapsible","jquery.placeholder"]],["mediawiki.util","1325631568",["jquery.client","jquery.cookie","jquery.messageBox","jquery.mwPrototypes"]],["mediawiki.libs.jpegmeta","1316448942",[]],["mediawiki.action.history","1316448893",["jquery.ui.button"],"mediawiki.action.history"],["mediawiki.action.history.diff","1316448894",[],"mediawiki.action.history"],["mediawiki.action.edit","1326295092",["jquery.textSelection","jquery.byteLimit"]],["mediawiki.action.view.rightClickEdit","1316448894",[]],["mediawiki.action.view.metadata","1327370946",[]],["mediawiki.action.watch.ajax","1327370936",[]],[
"mediawiki.special","1317328664",[]],["mediawiki.special.preferences","1327371903",[]],["mediawiki.special.changeslist","1316448884",["jquery.makeCollapsible"]],["mediawiki.special.search","1316448884",[]],["mediawiki.special.block","1317449866",[]],["mediawiki.special.undelete","1316448885",[]],["mediawiki.special.movePage","1316448884",["jquery.byteLimit"]],["mediawiki.special.recentchanges","1316448880",["mediawiki.special"]],["mediawiki.special.upload","1327372817",["mediawiki.libs.jpegmeta"]],["mediawiki.language","1316448940",[]],["mediawiki.jqueryMsg","1323802401",["mediawiki.language","mediawiki.util"]],["mediawiki.legacy.ajax","1316448600",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.commonPrint","1317328679",[]],["mediawiki.legacy.config","1316448609",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.IEFixes","1316448601",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.mwsuggest","1327370744",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.preview","1316448608",[
"mediawiki.legacy.wikibits"]],["mediawiki.legacy.protect","1316448600",["mediawiki.legacy.wikibits","jquery.byteLimit"]],["mediawiki.legacy.shared","1326739400",[]],["mediawiki.legacy.oldshared","1316448656",[]],["mediawiki.legacy.upload","1316448600",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.wikibits","1327370744",["mediawiki.language"]],["mediawiki.legacy.wikiprintable","1316448656",[]],["ext.gadget.Base","1311020640",[]],["ext.gadget.BordiArrotondati","1311020640",[]],["ext.gadget.HideCentralNotice","1311020640",[]],["ext.gadget.Popup","1311020640",[]],["ext.wikihiero","1316448951",[]],["ext.checkUser","1316450498",["mediawiki.util"]],["ext.centralNotice.interface","1324511966",[]],["ext.centralNotice.bannerStats","1324511961",[]],["ext.collection.jquery.jstorage","1316450454",["jquery.json"]],["ext.collection.suggest","1316450455",["ext.collection.bookcreator"]],["ext.collection","1319584158",["ext.collection.bookcreator","jquery.ui.sortable"]],["ext.collection.bookcreator"
,"1325636050",["ext.collection.jquery.jstorage"]],["ext.collection.checkLoadFromLocalStorage","1316450459",["ext.collection.jquery.jstorage"]],["ext.vector.collapsibleNav","1327370853",["jquery.client","jquery.cookie","jquery.tabIndex"],"ext.vector"],["ext.vector.collapsibleTabs","1321267002",["jquery.collapsibleTabs","jquery.delayedBind"],"ext.vector"],["ext.vector.editWarning","1327370853",[],"ext.vector"],["ext.vector.expandableSearch","1316450334",["jquery.client","jquery.expandableField","jquery.delayedBind"],"ext.vector"],["ext.vector.footerCleanup","1316450334",[],"ext.vector"],["ext.vector.sectionEditLinks","1316450334",["jquery.cookie","jquery.clickTracking"],"ext.vector"],["ext.vector.simpleSearch","1327370853",["jquery.client","jquery.suggestions","jquery.autoEllipsis","jquery.placeholder"],"ext.vector"],["contentCollector","1316450092",[],"ext.wikiEditor"],["jquery.wikiEditor","1327370947",["jquery.client","jquery.textSelection","jquery.delayedBind"],"ext.wikiEditor"],[
"jquery.wikiEditor.iframe","1316450093",["jquery.wikiEditor","contentCollector"],"ext.wikiEditor"],["jquery.wikiEditor.dialogs","1316450094",["jquery.wikiEditor","jquery.wikiEditor.toolbar","jquery.ui.dialog","jquery.ui.button","jquery.ui.draggable","jquery.ui.resizable","jquery.tabIndex"],"ext.wikiEditor"],["jquery.wikiEditor.dialogs.config","1320881743",["jquery.wikiEditor","jquery.wikiEditor.dialogs","jquery.wikiEditor.toolbar.i18n","jquery.suggestions"],"ext.wikiEditor"],["jquery.wikiEditor.highlight","1316450102",["jquery.wikiEditor","jquery.wikiEditor.iframe"],"ext.wikiEditor"],["jquery.wikiEditor.preview","1316450101",["jquery.wikiEditor"],"ext.wikiEditor"],["jquery.wikiEditor.previewDialog","1316450101",["jquery.wikiEditor","jquery.wikiEditor.dialogs"],"ext.wikiEditor"],["jquery.wikiEditor.publish","1316450092",["jquery.wikiEditor","jquery.wikiEditor.dialogs"],"ext.wikiEditor"],["jquery.wikiEditor.templateEditor","1316450101",["jquery.wikiEditor","jquery.wikiEditor.iframe",
"jquery.wikiEditor.dialogs"],"ext.wikiEditor"],["jquery.wikiEditor.templates","1316450101",["jquery.wikiEditor","jquery.wikiEditor.iframe"],"ext.wikiEditor"],["jquery.wikiEditor.toc","1316450094",["jquery.wikiEditor","jquery.wikiEditor.iframe","jquery.ui.draggable","jquery.ui.resizable","jquery.autoEllipsis","jquery.color"],"ext.wikiEditor"],["jquery.wikiEditor.toolbar","1316450144",["jquery.wikiEditor","jquery.wikiEditor.toolbar.i18n"],"ext.wikiEditor"],["jquery.wikiEditor.toolbar.config","1321279096",["jquery.wikiEditor","jquery.wikiEditor.toolbar.i18n","jquery.wikiEditor.toolbar","jquery.cookie","jquery.async"],"ext.wikiEditor"],["jquery.wikiEditor.toolbar.i18n","1311020640",[],"ext.wikiEditor"],["ext.wikiEditor","1316450101",["jquery.wikiEditor"],"ext.wikiEditor"],["ext.wikiEditor.dialogs","1316450092",["ext.wikiEditor","ext.wikiEditor.toolbar","jquery.wikiEditor.dialogs","jquery.wikiEditor.dialogs.config"],"ext.wikiEditor"],["ext.wikiEditor.highlight","1316450101",[
"ext.wikiEditor","jquery.wikiEditor.highlight"],"ext.wikiEditor"],["ext.wikiEditor.preview","1316450094",["ext.wikiEditor","jquery.wikiEditor.preview"],"ext.wikiEditor"],["ext.wikiEditor.previewDialog","1316450101",["ext.wikiEditor","jquery.wikiEditor.previewDialog"],"ext.wikiEditor"],["ext.wikiEditor.publish","1316450093",["ext.wikiEditor","jquery.wikiEditor.publish"],"ext.wikiEditor"],["ext.wikiEditor.templateEditor","1316450092",["ext.wikiEditor","ext.wikiEditor.highlight","jquery.wikiEditor.templateEditor"],"ext.wikiEditor"],["ext.wikiEditor.templates","1316450092",["ext.wikiEditor","ext.wikiEditor.highlight","jquery.wikiEditor.templates"],"ext.wikiEditor"],["ext.wikiEditor.toc","1316450092",["ext.wikiEditor","ext.wikiEditor.highlight","jquery.wikiEditor.toc"],"ext.wikiEditor"],["ext.wikiEditor.tests.toolbar","1316450094",["ext.wikiEditor.toolbar"],"ext.wikiEditor"],["ext.wikiEditor.toolbar","1316450092",["ext.wikiEditor","jquery.wikiEditor.toolbar",
"jquery.wikiEditor.toolbar.config"],"ext.wikiEditor"],["ext.wikiEditor.toolbar.hideSig","1317646778",[],"ext.wikiEditor"],["ext.prefSwitch","1316450643",["jquery.client"]],["ext.babel","1316607365",[]],["ext.apiSandbox","1327017529",["mediawiki.util"]]]);mw.config.set({"wgLoadScript":"//bits.wikimedia.org/it.wikipedia.org/load.php","debug":false,"skin":"vector","stylepath":"//bits.wikimedia.org/skins-1.18","wgUrlProtocols":"http\\:\\/\\/|https\\:\\/\\/|ftp\\:\\/\\/|irc\\:\\/\\/|ircs\\:\\/\\/|gopher\\:\\/\\/|telnet\\:\\/\\/|nntp\\:\\/\\/|worldwind\\:\\/\\/|mailto\\:|news\\:|svn\\:\\/\\/|git\\:\\/\\/|mms\\:\\/\\/|\\/\\/","wgArticlePath":"/wiki/$1","wgScriptPath":"/w","wgScriptExtension":".php","wgScript":"/w/index.php","wgVariantArticlePath":false,"wgActionPaths":[],"wgServer":"//it.wikipedia.org","wgUserLanguage":"it","wgContentLanguage":"it","wgVersion":"1.18wmf1","wgEnableAPI":true,"wgEnableWriteAPI":true,"wgDefaultDateFormat":"dmy","wgMonthNames":["","gennaio","febbraio","marzo",
"aprile","maggio","giugno","luglio","agosto","settembre","ottobre","novembre","dicembre"],"wgMonthNamesShort":["","gen","feb","mar","apr","mag","giu","lug","ago","set","ott","nov","dic"],"wgSeparatorTransformTable":[",	."," 	,"],"wgDigitTransformTable":["",""],"wgMainPageTitle":"Pagina principale","wgFormattedNamespaces":{"-2":"Media","-1":"Speciale","0":"","1":"Discussione","2":"Utente","3":"Discussioni utente","4":"Wikipedia","5":"Discussioni Wikipedia","6":"File","7":"Discussioni file","8":"MediaWiki","9":"Discussioni MediaWiki","10":"Template","11":"Discussioni template","12":"Aiuto","13":"Discussioni aiuto","14":"Categoria","15":"Discussioni categoria","100":"Portale","101":"Discussioni portale","102":"Progetto","103":"Discussioni progetto"},"wgNamespaceIds":{"media":-2,"speciale":-1,"":0,"discussione":1,"utente":2,"discussioni_utente":3,"wikipedia":4,"discussioni_wikipedia":5,"file":6,"discussioni_file":7,"mediawiki":8,"discussioni_mediawiki":9,"template":10,
"discussioni_template":11,"aiuto":12,"discussioni_aiuto":13,"categoria":14,"discussioni_categoria":15,"portale":100,"discussioni_portale":101,"progetto":102,"discussioni_progetto":103,"immagine":6,"discussioni_immagine":7,"wp":4,"image":6,"image_talk":7,"special":-1,"talk":1,"user":2,"user_talk":3,"project":4,"project_talk":5,"file_talk":7,"mediawiki_talk":9,"template_talk":11,"help":12,"help_talk":13,"category":14,"category_talk":15},"wgSiteName":"Wikipedia","wgFileExtensions":["png","gif","jpg","jpeg","xcf","pdf","mid","ogg","ogv","svg","djvu","tiff","tif","oga"],"wgDBname":"itwiki","wgFileCanRotate":true,"wgAvailableSkins":{"monobook":"MonoBook","nostalgia":"Nostalgia","standard":"Standard","chick":"Chick","cologneblue":"CologneBlue","modern":"Modern","vector":"Vector","myskin":"MySkin","simple":"Simple"},"wgExtensionAssetsPath":"//bits.wikimedia.org/w/extensions-1.18","wgCookiePrefix":"itwiki","wgResourceLoaderMaxQueryLength":-1,"wgLegacyJavaScriptGlobals":true,
"wgCaseSensitiveNamespaces":[],"wgMWSuggestTemplate":"//it.wikipedia.org/w/api.php?action=opensearch\x26search={searchTerms}\x26namespace={namespaces}\x26suggest","wgCollectionVersion":"1.5","wgCollapsibleNavBucketTest":false,"wgCollapsibleNavForceNewVersion":false});};if(isCompatible()){document.write("\x3cscript src=\"//bits.wikimedia.org/it.wikipedia.org/load.php?debug=false\x26amp;lang=it\x26amp;modules=jquery%2Cmediawiki\x26amp;only=scripts\x26amp;skin=vector\x26amp;version=20111213T185322Z\" type=\"text/javascript\"\x3e\x3c/script\x3e");}delete isCompatible;;

/* cache key: itwiki:resourceloader:filter:minify-js:4:8f0dc54281c0d5ac85264af82fd4ec7c */