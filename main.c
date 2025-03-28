

@Slip–1


Q.1)WriteaPHPscripttokeeptrackofnumberoftimesthewebpagehasbeenaccessed(Use
Session
Tracking).
Ans:
<?php
Session_start();
If(isset($_SESSION[‘pcount])){
$_SESSION[‘pcount]+=1;
}else{
$_SESSION[‘pcount]=1;
}
Echo“Youhavevisitedthispage“.$_SESSION[‘pcount].”Time(s).”;
?>
Q.2)Create‘Position_Salaries’Dataset.Buildalinearregressionmodelbyidentifying
independentand
Targetvariable.Splitthevariablesintotrainingandtestingsets.Thendividethetrainingand
testingsets
Intoa7:3ratio,respectivelyandprintthem.Buildasimplelinearregressionmodel.
Ans:
Importnumpyasnp
Importpandasaspd
From sklearn.model_selectionimporttrain_test_split
From sklearn.linear_modelimportLinearRegression
#CreatethePosition_Salariesdataset
Data={‘Position’:[‘CEO’,‘charman’,‘director’,‘SeniorManager’,‘JuniorManager’,‘Intern’],
‘Level’:[1,2,3,4,5,6],
‘Salary’:[50000,80000,110000,150000,200000,250000]}
Df=pd.DataFrame(data)
#Identifytheindependentandtargetvariables
X=df.iloc[:,1:2].values
Y=df.iloc[:,2].values
#Splitthevariablesintotrainingandtestingsetswitha7:3ratio
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.3,random_state=0)
#Printthetrainingandtestingsets
Print(“X_train:\n”,X_train)
Print(“y_train:\n”,y_train)
Print(“X_test:\n”,X_test)
Print(“y_test:\n”,y_test)
#Buildasimplelinearregressionmodel
Regressor=LinearRegression()
Regressor.fit(X_train,y_train)
#Printthecoefficientsandintercept
Print(“Coefficients:”,regressor.coef_)
Print(“Intercept:”,regressor.intercept_)


@Slip-2

Q.1WriteaPHPscripttochangethepreferencesofyourwebpagelikefontstyle,fontsize,font
color,
Backgroundcolorusingcookie.Displayselectedsettingonnextwebpageandactual
implementation
(withnewsettings)onthirdpage(UseCookies).
Ans:
Fristpage.html
<!DOCTYPEhtml>
<html>
<head>
<title>Changepreferences</title>
</head>
<body>
<h1>Changepreferences</h1>
<form action=”secondpage.php”method=”post”>
<labelfor=”fontstyle”>FontStyle:</label>
<selectname=”fontstyle”id=”fontstyle”>
<optionvalue=”Arial”>Arial</option>
<optionvalue=”TimesNewRoman”>TimesNewRoman</option>
<optionvalue=”Verdana”>Verdana</option>
</select><br><br>
<labelfor=”fontsize”>FontSize:</label>
<selectname=”fontsize”id=”fontsize”>
<optionvalue=”12”>12</option>
<optionvalue=”14”>14</option>
<optionvalue=”16”>16</option>
</select><br><br>
<labelfor=”fontcolor”>FontColor:</label>
<inputtype=”color”name=”fontcolor”id=”fontcolor”><br><br>
<labelfor=”bgcolor”>BackgroundColor:</label>
<inputtype=”color”name=”bgcolor”id=”bgcolor”><br><br>
<inputtype=”submit”name=”submit”value=”Save”>
</form>
</body>
</html>
Secondpage.php
<?php
If(isset($_POST[‘submit’])){
$fontstyle=$_POST[‘fontstyle’];
$fontsize=$_POST[‘fontsize’];
$fontcolor=$_POST[‘fontcolor’];
$bgcolor=$_POST[‘bgcolor’];
//Setthecookievalues
Setcookie(‘fontstyle’,$fontstyle,time()+86400);
Setcookie(‘fontsize’,$fontsize,time()+86400);
Setcookie(‘fontcolor’,$fontcolor,time()+86400);
Setcookie(‘bgcolor’,$bgcolor,time()+86400);
//Redirecttothenextpage
Header(‘Location:thirdpage.php’);
Exit();
}
?>
Thirdpage.php
<?php
//Retrievethecookievalues
$fontstyle=isset($_COOKIE[‘fontstyle’])?$_COOKIE[‘fontstyle’]:‘Arial’;
$fontsize=isset($_COOKIE[‘fontsize’])?$_COOKIE[‘fontsize’]:‘12’;
$fontcolor=isset($_COOKIE[‘fontcolor’])?$_COOKIE[‘fontcolor’]:‘#000000’;
$bgcolor=isset($_COOKIE[‘bgcolor’])?$_COOKIE[‘bgcolor’]:‘#FFFFFF’;
?>
<!DOCTYPEhtml>
<html>
<head>
<title>Pagewithnewsettings</title>
<styletype=”text/css”>
Body{
Font-family:<?phpecho$fontstyle?>;
Font-size:<?phpecho$fontsize?>px;
Color:<?phpecho$fontcolor?>;
Background-color:<?phpecho$bgcolor?>;
}
</style>
</head>
<body>
<h1>Pagewithnewsettings</h1>
<p>Thisisthepagewiththenewsettings.Thefontstyleis<?phpecho$fontstyle?>,the
fontsizeis<?phpecho$fontsize?>px,thefontcoloris<?phpecho$fontcolor?>,andthe
backgroundcoloris<?phpecho$bgcolor?>.</p>
</body>
</html>
Q.2)Create‘Salary’Dataset.Buildalinearregressionmodelbyidentifyingindependentand
target
Ariable.Splitthevariablesintotrainingandtestingsetsandprintthem.Buildasimplelinear
regression
Delforpredictingpurchases.
Ans:
Importnumpyasnp
Importpandasaspd
From sklearn.model_selectionimporttrain_test_split
From sklearn.linear_modelimportLinearRegression
#CreatetheSalarydataset
Data={‘YearsExperience’:[1,2,3,4,5,6,7,8,9,10],
‘Salary’:[50000,60000,70000,80000,90000,100000,110000,120000,130000,140000]}
Df=pd.DataFrame(data)
#Identifytheindependentandtargetvariables
X=df.iloc[:,0:1].values
Y=df.iloc[:,1].values
#Splitthevariablesintotrainingandtestingsets
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.3,random_state=0)
#Printthetrainingandtestingsets
Print(“X_train:\n”,X_train)
Print(“y_train:\n”,y_train)
Print(“X_test:\n”,X_test)
Print(“y_test:\n”,y_test)
#Buildasimplelinearregressionmodel
Regressor=LinearRegression()
Regressor.fit(X_train,y_train)
#Printthecoefficientsandintercept
Print(“Coefficients:”,regressor.coef_)
Print(“Intercept:”,regressor.intercept_)


@Slip-3

Q.1)WriteaPHPscripttoacceptusernameandpassword.Ifinthefirstthreechances,
usernameand
Passwordenterediscorrectthendisplaysecondform with“Welcomemessage”otherwise
displayerror
Message.[UseSession]
.
Ans:
<?php
//Startsession
Session_start();
//Checkifloginform hasbeensubmitted
If(isset($_POST[‘submit’])){
//Getusernameandpasswordinputfrom user
$username=$_POST[‘username’];
$password=$_POST[‘password’];
//Setcorrectusernameandpassword
$correct_username=‘myusername’;
$correct_password=‘mypassword’;
//Checkifenteredusernameandpasswordarecorrect
If($username==$correct_username&&$password==$correct_password){
//Setsessionvariabletomarkuserasloggedin
$_SESSION[‘loggedin’]=true;
//Redirectusertowelcomepage
Header(‘Location:welcome.php’);
Exit;
}else{
//Decrementloginattempts
If(isset($_SESSION[‘attempts’])){
$_SESSION[‘attempts’]--;
}else{
$_SESSION[‘attempts’]=3;
}
//Displayerrormessageifmaximum loginattemptsexceeded
If($_SESSION[‘attempts’]<=0){
Echo“Maximum loginattemptsexceeded.Pleasetryagainlater.”;
}else{
//Displayerrormessage
Echo“Invalidusernameorpassword.Youhave“.$_SESSION[‘attempts’].”Attempt(s)left.”;
}
}
}
?>
<!—HTMLform foruserinput
<form method=”post”>
<labelfor=”username”>Username:</label>
<inputtype=”text”id=”username”name=”username”required><br><br>
<labelfor=”password”>Password:</label>
<inputtype=”password”id=”password”name=”password”required><br><br>
<inputtype=”submit”name=”submit”value=”LogIn”>
</form>
Q.2)Create‘User’Datasethaving5columnsnamely:UserID,Gender,Age,EstimatedSalaryand
urchased.Buildalogisticregressionmodelthatcanpredictwhetheronthegivenparametera
personwillbuyacarornot.
Ans:
Importpandasaspd
Data={‘UserID’:[1,2,3,4,5,6,7,8,9,10],
‘Gender’:[‘Male’,‘Male’,‘Female’,‘Female’,‘Male’,‘Male’,‘Female’,‘Female’,‘Male’,‘Female’],
‘Age’:[19,35,26,27,19,27,32,25,33,45],
‘EstimatedSalary’:[19000,20000,43000,57000,76000,58000,82000,32000,69000,
65000],
‘Purchased’:[0,0,0,1,1,0,1,0,1,1]}
Df=pd.DataFrame(data)
From sklearn.model_selectionimporttrain_test_split
X=df.iloc[:,1:4].values
Y=df.iloc[:,4].values
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.3,random_state=0)
From sklearn.linear_modelimportLogisticRegression
Lr=LogisticRegression(random_state=0)
Lr.fit(X_train,y_train)
#Predictasingleobservation
Observation=[[0,30,87000]]
Prediction=Lr.predict(observation)
Print(prediction)
#Predictmultipleobservations
Observations=[[0,30,87000],[1,50,45000],[1,22,30000]]
Predictions=Lr.predict(observations)
Print(predictions)


@Slip-4

Q.1)WriteaPHPscripttoacceptEmployeedetails(Eno,Ename,Address)onfirstpage.On
second
Pageacceptearning(Basic,DA,HRA).OnthirdpageprintEmployeeinformation(Eno,Ename,
Address,
Basic,DA,HRA,Total)[UseSession]
.
Ans:
Firstpage.php
<?php
Session_start();
?>
<!DOCTYPEhtml>
<html>
<head>
<title>EmployeeDetails</title>
</head>
<body>
<h1>EmployeeDetails</h1>
<form method=”POST”action=”Secondpage.php”>
<labelfor=”eno”>EmployeeNo:</label>
<inputtype=”text”id=”eno”name=”eno”><br><br>
<labelfor=”ename”>EmployeeName:</label>
<inputtype=”text”id=”ename”name=”ename”><br><br>
<labelfor=”address”>Address:</label>
<textareaid=”address”name=”address”></textarea><br><br>
<inputtype=”submit”value=”Next”>
</form>
</body>
</html>
<?php
//Storeemployeedetailsinsession
If(isset($_POST[‘eno’])&&isset($_POST[‘ename’])&&isset($_POST[‘address’])){
$_SESSION[‘eno’]=$_POST[‘eno’];
$_SESSION[‘ename’]=$_POST[‘ename’];
$_SESSION[‘address’]=$_POST[‘address’];
}
?>
Secondpage.php
<?php
Session_start();
?>
<!DOCTYPEhtml>
<html>
<head>
<title>Earnings</title>
</head>
<body>
<h1>Earnings</h1>
<form method=”POST”action=”thirdpage.php”>
<labelfor=”basic”>Basic:</label>
<inputtype=”text”id=”basic”name=”basic”><br><br>
<labelfor=”da”>DA:</label>
<inputtype=”text”id=”da”name=”da”><br><br>
<labelfor=”hra”>HRA:</label>
<inputtype=”text”id=”hra”name=”hra”><br><br>
<inputtype=”submit”value=”Next”>
</form>
</body>
</html>
<?php
//Storeearningsinsession
If(isset($_POST[‘basic’])&&isset($_POST[‘da’])&&isset($_POST[‘hra’])){
$_SESSION[‘basic’]=$_POST[‘basic’];
$_SESSION[‘da’]=$_POST[‘da’];
$_SESSION[‘hra’]=$_POST[‘hra’];
}
?>
Thirdpage.php
<?php
Session_start();
//Calculatetotalearnings
$total=$_SESSION[‘basic’]+$_SESSION[‘da’]+$_SESSION[‘hra’];
?>
<!DOCTYPEhtml>
<html>
<head>
<title>EmployeeInformation</title>
</head>
<body>
<h1>EmployeeInformation</h1>
<p><strong>EmployeeNo:</strong><?phpecho$_SESSION[‘eno’];?></p>
<p><strong>EmployeeName:</strong><?phpecho$_SESSION[‘ename’];?></p>
<p><strong>Address:</strong><?phpecho$_SESSION[‘address’];?></p>
<p><strong>Basic:</strong><?phpecho$_SESSION[‘basic’];?></p>
<p><strong>DA:</strong><?phpecho$_SESSION[‘da’];?></p>
<p><strong>HRA:</strong><?phpecho$_SESSION[‘hra’];?></p>
<p><strong>TotalEarnings:</strong><?phpecho$total;?></p>
</body>
</html>
Q.2)BuildasimplelinearregressionmodelforFishSpeciesWeightPrediction.
Ans:
Importpandasaspd
Importrandom
From sklearn.linear_modelimportLinearRegression
#createthedataset
Fish_species=[‘Tuna’,‘Salmon’,‘Trout’,‘Bass’,‘Sardine’,‘Cod’,‘Mackerel’]
Weights=[]
Foriinrange(50):
Fish_weight=[]
Forjinrange(7):
Weight=random.randint(1,20)
Fish_weight.append(weight)
Weights.append(fish_weight)
Df=pd.DataFrame(weights,columns=fish_species)
#createthelinearregressionmodel
X=df.iloc[:,:-1]#independentvariables
Y=df.iloc[:,-1]#targetvariable
Model=LinearRegression()
Model.fit(X,y)
#predicttheweightofanewfishspecies
New_fish=[[10,12,15,7,4,8]]#exampleinput
Predicted_weight=model.predict(new_fish)
Print(“Predictedweight:”,predicted_weight)


@Slip-5

Q.1)CreateXMLfilenamed“Item.xml”withitem-name,item-rate,item quantityStorethedetails
of5
ItemsofdifferentTypes.
Ans:
Item.xml
<items>
<item type=”Electronics”>
<name>Television</name>
<rate>500</rate>
<quantity>10</quantity>
</item>
<item type=”Clothing”>
<name>Shirt</name>
<rate>50</rate>
<quantity>20</quantity>
</item>
<item type=”Grocery”>
<name>Rice</name>
<rate>40</rate>
<quantity>30</quantity>
</item>
<item type=”Books”>
<name>HarryPotterandthePhilosopher’sStone</name>
<rate>20</rate>
<quantity>50</quantity>
</item>
<item type=”Sports”>
<name>Football</name>
<rate>100</rate>
<quantity>5</quantity>
</item>
</items>
Q.2)Usetheirisdataset.WriteaPythonprogram toviewsomebasicstatisticaldetailslike
percentile,
Mean,stdetc.Ofthespeciesof‘Iris-setosa’,‘Iris-versicolor’and‘Iris-virginica’.Applylogistic
regression
Onthedatasettoidentifydifferentspecies(setosa,versicolor,verginica)ofIrisflowersgiven
just4
Features:sepalandpetallengthsandwidths..Findtheaccuracyofthemodel.
Ans:
Importpandasaspd
From sklearn.datasetsimportload_iris
From sklearn.linear_modelimportLogisticRegression
From sklearn.model_selectionimporttrain_test_split
From sklearn.metricsimportaccuracy_score
#loadtheirisdataset
Iris=load_iris()
#createadataframefrom thedataset
Df=pd.DataFrame(iris.data,columns=iris.feature_names)
Df[‘target’]=iris.target
#viewbasicstatisticaldetailsofthedifferentspecies
Print(“StatisticaldetailsofIris-setosa:”)
Print(df[df[‘target’]==0].describe())
Print(“StatisticaldetailsofIris-versicolor:”)
Print(df[df[‘target’]==1].describe())
Print(“StatisticaldetailsofIris-virginica:”)
Print(df[df[‘target’]==2].describe())
#splitthedataintotrainingandtestingsets
X=df.iloc[:,:-1]
Y=df.iloc[:,-1]
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)
#fitalogisticregressionmodel
Logreg=LogisticRegression()
Logreg.fit(X_train,y_train)
#makepredictionsonthetestset
Y_pred=logreg.predict(X_test)
#calculatetheaccuracyofthemodel
Accuracy=accuracy_score(y_test,y_pred)
Print(“Accuracyofthelogisticregressionmodel:”,accuracy)


@Slip-6

Q.1)WritePHPscripttoread“book.xml”fileintosimpleXMLobject.Displayattributesand
elements.
(simple_xml_load_file()function)
.
Ans:
<?php
//LoadtheXMLfileintoaSimpleXMLobject
$xml=simplexml_load_file(“book.xml”);
//DisplaytheattributesandelementsoftheSimpleXMLobject
Echo“Bookattributes:<br>”;
Echo“ISBN:“.$xml[‘isbn’].“<br>”;
Echo“Publisher:“.$xml[‘publisher’].“<br>”;
Echo“<br>”;
Echo“Bookelements:<br>”;
Echo“Title:“.$xml->title.“<br>”;
Echo“Author:“.$xml->author.“<br>”;
Echo“Description:“.$xml->description.“<br>”;
?>
Book.xmlfile
<?xmlversion=”1.0”?>
<bookisbn=”978-3-16-148410-0”publisher=”ExamplePublisher”>
<title>ExampleBook</title>
<author>JohnDoe</author>
<description>Thisisanexamplebook.</description>
</book>
Q.2)Createthefollowingdatasetinpython&Convertthecategoricalvaluesintonumeric
format.Apply
Theapriorialgorithm ontheabovedatasettogeneratethefrequentitemsetsandassociation
rules.Repeat
Teprocesswithdifferentmin_supvalues.
TID={1:[“bread”,”milk”],2=[“bread”,”diaper”,”beer”,”eggs”],3=[“milk”,”diaper”,”beer”,”coke”],4=[“brea
d”,”milk”,”diaper”,”beer”],5=[“bread”,”milk”,”diaper”,”coke”]}
Ans:
Importpandasaspd
From mlxtend.preprocessingimportTransactionEncoder
From mlxtend.frequent_patternsimportapriori,association_rules
#createthedataset
TID=
{1:[“bread”,”milk”],2:[“bread”,”diaper”,”beer”,”eggs”],3:[“milk”,”diaper”,”beer”,”coke”],4:[“bread”,”mil
k”,”diaper”,”beer”],5:[“bread”,”milk”,”diaper”,”coke”]}
Transactions=[]
Forkey,valueinTID.items():
Transactions.append(value)
#convertthecategoricalvaluesintonumericformat
Te=TransactionEncoder()
Te_ary=te.fit_transform(transactions)
Df=pd.DataFrame(te_ary,columns=te.columns_)
#applytheapriorialgorithm withdifferentmin_supvalues
Min_sup_values=[0.2,0.4,0.6]
Formin_supinmin_sup_values:
Frequent_itemsets=apriori(df,min_support=min_sup,use_colnames=True)
Rules=association_rules(frequent_itemsets,metric=”confidence”,min_threshold=0.7)
Print(“Min_sup:”,min_sup)
Print(“FrequentItemsets:”)
Print(frequent_itemsets)
Print(“AssociationRules:”)
Print(rules)


@Slip-7

Q.1)WriteaPHPscripttoread“Movie.xml”fileandprintallMovieTitleandActorNameoffile
using
OMDocumentParser.“Movie.xml”fileshouldcontainfollowinginformationwithatleast5
records
Wthvalues.MvieInfoMovieNo,MovieTitle,ActorName,ReReleaseYear.
Ans:
Phpfile
<?php
//LoadtheXMLfile
$xml=newDOMDocument();
$xml->load(‘Movie.xml’);
//Getallthemovienodes
$movies=$xml->getElementsByTagName(‘MovieInfo’);
//Loopthrougheachmovienodeandprintthemovietitleandactorname
Foreach($moviesas$movie){
Echo“MovieTitle:“.$movie->getElementsByTagName(‘MovieTitle’)[0]->textContent.“,“;
Echo“ActorName:“.$movie->getElementsByTagName(‘ActorName’)[0]->textContent.“<br>”;
}
?>
XMLfile
<?xmlversion=”1.0”?>
<MovieList>
<MovieInfo>
<MovieNo>1</MovieNo>
<MovieTitle>TheShawshankRedemption</MovieTitle>
<ActorName>Tim Robbins</ActorName>
<ReleaseYear>1994</ReleaseYear>
</MovieInfo>
<MovieInfo>
<MovieNo>2</MovieNo>
<MovieTitle>TheGodfather</MovieTitle>
<ActorName>MarlonBrando</ActorName>
<ReleaseYear>1972</ReleaseYear>
</MovieInfo>
<MovieInfo>
<MovieNo>3</MovieNo>
<MovieTitle>TheDarkKnight</MovieTitle>
<ActorName>ChristianBale</ActorName>
<ReleaseYear>2008</ReleaseYear>
</MovieInfo>
<MovieInfo>
<MovieNo>4</MovieNo>
<MovieTitle>TheGodfather:PartII</MovieTitle>
<ActorName>AlPacino</ActorName>
<ReleaseYear>1974</ReleaseYear>
</MovieInfo>
<MovieInfo>
<MovieNo>5</MovieNo>
<MovieTitle>12AngryMen</MovieTitle>
<ActorName>HenryFonda</ActorName>
<ReleaseYear>1957</ReleaseYear>
</MovieInfo>
</MovieList>
Q.2)DownloadtheMarketbasketdataset.Writeapythonprogram toreadthedatasetand
displayits
Information.Preprocessthedata(dropnullvaluesetc.)Convertthecategoricalvaluesinto
numeric
Format.Applytheapriorialgorithm ontheabovedatasettogeneratethefrequentitemsetsand
association
Rules..
Ans:
Importpandasaspd
From mlxtend.preprocessingimportTransactionEncoder
From mlxtend.frequent_patternsimportapriori,association_rules
#readthedataset
Df=pd.read_csv(‘Market_Basket_Optimisation.csv’,header=None)
#dropnullvalues
Df.dropna(inplace=True)
#convertcategoricalvaluestonumericusingone-hotencoding
Te=TransactionEncoder()
Te_ary=te.fit(df.values).transform(df.values)
Df=pd.DataFrame(te_ary,columns=te.columns_)
#generatefrequentitemsetsusingapriorialgorithm
Frequent_itemsets=apriori(df,min_support=0.01,use_colnames=True)
#generateassociationrulesfrom frequentitemsets
Rules=association_rules(frequent_itemsets,metric=”lift”,min_threshold=1)
#displayinformation
Print(“OriginalDataset:\n”)
Print(df.head())
Print(“\nFrequentItemsets:\n”)
Print(frequent_itemsets)
Print(“\nAssociationRules:\n”)
Print(rules)


@Slip-8


Q.1)WriteaJavaScripttodisplaymessage‘Examsarenear,haveyoustartedpreparingfor?’
(usealert
Box)andAcceptanytwonumbersfrom useranddisplayadditionoftwonumber.(UsePrompt
and
Confirm box)
AAAns:
//Displaymessageusingalertbox
Alert(‘Examsarenear,haveyoustartedpreparingfor?’);
//Accepttwonumbersfrom userusingpromptandconfirm boxes
Letnum1=prompt(‘Enterfirstnumber:’);
Letnum2=prompt(‘Entersecondnumber:’);
LetconfirmMsg=`Areyousureyouwanttoadd${num1}and${num2}?`;
//Showconfirmationmessagetouserusingconfirm box
LetconfirmResult=confirm(confirmMsg);
//Ifuserconfirms,thenperform additionanddisplaytheresult
If(confirmResult){
Num1=parseInt(num1);
Num2=parseInt(num2);
Letsum =num1+num2;
Alert(`Thesum of${num1}and${num2}is${sum}.`);
}
Q.2)Downloadthegroceriesdataset.Writeapythonprogram toreadthedatasetanddisplayits
Information.Preprocessthedata(dropnullvaluesetc.)Convertthecategoricalvaluesinto
numeric
Format.Applytheapriorialgorithm ontheabovedatasettogeneratethefrequentitemsetsand
association
Rules.
Ans:
Importpandasaspd
From mlxtend.preprocessingimportTransactionEncoder
From mlxtend.frequent_patternsimportapriori,association_rules
#Loadthedataset
Df=pd.read_csv(‘market_basket.csv’)
#Dropanyrowswithnullvalues
Df.dropna(inplace=True)
#Convertcategoricalvaluestonumericformat
Te=TransactionEncoder()
Te_ary=te.fit(df.values).transform(df.values)
Df=pd.DataFrame(te_ary,columns=te.columns_)
#Generatefrequentitemsets
Frequent_itemsets=apriori(df,min_support=0.01,use_colnames=True)
#Generateassociationrules
Rules=association_rules(frequent_itemsets,metric=”lift”,min_threshold=1)
#Displayinformationaboutthedataset
Print(“Datasetinformation:”)
Print(df.info())
#Displaythefrequentitemsets
Print(“\nFrequentitemsets:”)
Print(frequent_itemsets)
#Displaytheassociationrules
Print(“\nAssociationrules:”)
Print(rules)


@Slip-9


Q.1)WriteaJavaScriptfunctiontovalidateusernameandpasswordforamembershipform.
Ans:
FunctionvalidateForm(){
//Gettheusernameandpasswordinputvalues
Varusername=document.forms[“membershipForm”][“username”].value;
Varpassword=document.forms[“membershipForm”][“password”].value;
//Validateusername
If(username==“”){
Alert(“Usernamemustbefilledout”);
Returnfalse;
}
//Validatepassword
If(password==“”){
Alert(“Passwordmustbefilledout”);
Returnfalse;
}
//Returntrueifbothusernameandpasswordarevalid
Returntrue;
}
Q.2)Createyourowntransactionsdatasetandapplytheaboveprocessonyourdataset.
Ans:
Items=[‘item1’,’item2’,’item3’,’item4’]
Transactions=[ [‘item1’,‘item2’,‘item3’],
[‘item2’,‘item3’],
[‘item1’,‘item2’,‘item4’],
[‘item1’,‘item4’],
[‘item2’,‘item3’,‘item4’],
[‘item1’,‘item3’,‘item4’],
[‘item1’,‘item2’],
[‘item1’,‘item3’],
[‘item3’,‘item4’],
[‘item2’,‘item4’]
]
From mlxtend.preprocessingimportTransactionEncoder
From mlxtend.frequent_patternsimportapriori,association_rules
#Convertthetransactionsintoabinarymatrix
Te=TransactionEncoder()
Te_ary=te.fit_transform(transactions)
#ConvertthebinarymatrixintoapandasDataFrame
Df=pd.DataFrame(te_ary,columns=te.columns_)
#Generatefrequentitemsetswithaminimum supportof0.3
Frequent_itemsets=apriori(df,min_support=0.3,use_colnames=True)
#Generateassociationruleswithaminimum confidenceof0.7
Association_rules=association_rules(frequent_itemsets,metric=”confidence”,
min_threshold=0.7)
#Printthefrequentitemsetsandassociationrules
Print(frequent_itemsets)
Print(association_rules)

@Slip-10


Q.1)CreateaHTMLfiletoinserttextbeforeandafteraParagraphusingjQuery.[Hint:Use
before()
Andafter()].
Ans:
<!DOCTYPEhtml>
<html>
<head>
<title>InserttextbeforeandafterparagraphusingjQuery</title>
<scriptsrc=https://code.jquery.com/jquery-3.6.0.min.js></script>
</head>
<body>
<h1>InserttextbeforeandafterparagraphusingjQuery</h1>
<p>Thisisaparagraph.</p>
<script>
$(document).ready(function(){
$(“p”).before(“Textinsertedbeforetheparagraph.“);
$(“p”).after(“Textinsertedaftertheparagraph.”);
});
</script>
</body>
</html>
Q2).Createthefollowingdatasetinpython&Convertthecategoricalvaluesintonumeric
format.Apply
Theapriorialgorithm ontheabovedatasettogeneratethefrequentitemsetsandassociation
rules.Repeat
Theprocesswithdifferentmin_supvalues.
TID={1:[“eggs”,”milk”,”bread”],2=[“eggs”,”apple”],3=[“milk”,”bread”],4=[“apple”,”milk”],5=[“milk”,”ap
ple”,”bread”]}
Ans:
Importpandasaspd
From mlxtend.preprocessingimportTransactionEncoder
From mlxtend.frequent_patternsimportapriori,association_rules
#Createthedataset
Dataset={
1:[“eggs”,”milk”,”bread”],
2:[“eggs”,”apple”],
3:[“milk”,”bread”],
4:[“apple”,”milk”],
5:[“milk”,”apple”,”bread”]
}
#Convertcategoricalvaluesintonumericformat
Te=TransactionEncoder()
Te_ary=te.fit(dataset.values()).transform(dataset.values())
Df=pd.DataFrame(te_ary,columns=te.columns_)
#ApplyApriorialgorithm togeneratefrequentitemsetsandassociationrules
Min_sup=0.4
Frequent_itemsets=apriori(df,min_support=min_sup,use_colnames=True)
Association_rules=association_rules(frequent_itemsets,metric=”confidence”,
min_threshold=0.6)
#Printthefrequentitemsetsandassociationrules
Print(“FrequentItemsets:\n”,frequent_itemsets)
Print(“\nAssociationRules:\n”,association_rules)


@Slip-11

Q.1)WriteaJavascriptprogram toacceptnameofstudent,changefontcolortored,fontsize
to18if
Studentnameispresentotherwiseonclickingonemptytextboxdisplayimagewhichchanges
itssize
(Useonblur,onload,onmousehover,onmouseclick,onmouseup)
Ans:
<!DOCTYPEhtml>
<html>
<head>
<title>JavaScriptExample</title>
<style>
#name{
Font-size:14px;
Color:black;
}
</style>
</head>
<body>
<inputtype=”text”id=”name”onblur=”changeStyle()”onmouseover=”changeSize()”
onmouseout=”resetSize()”onmousedown=”changeColor()”onmouseup=”resetColor()”>
<imgid=”img”src=https://via.placeholder.com/150onload=”changeImageSize()”>
<script>
FunctionchangeStyle(){
Letname=document.getElementById(“name”).value;
If(name){
Document.getElementById(“name”).style.fontSize=“18px”;
Document.getElementById(“name”).style.color=“red”;
}else{
Document.getElementById(“img”).style.display=“block”;
}
}
FunctionchangeSize(){
Document.getElementById(“name”).style.fontSize=“16px”;
}
FunctionresetSize(){
Document.getElementById(“name”).style.fontSize=“14px”;
}
FunctionchangeColor(){
Document.getElementById(“name”).style.color=“blue”;
}
FunctionresetColor(){
Document.getElementById(“name”).style.color=“red”;
}
FunctionchangeImageSize(){
Document.getElementById(“img”).style.width=“200px”;
Document.getElementById(“img”).style.height=“200px”;
}
</script>
</body>
</html>
Q2).Createtheabovedatasetinpython&Convertthecategoricalvaluesintonumeric
format.Apply
Theapriorialgorithm ontheabovedatasettogeneratethefrequentitemsetsand
associationrules.Repeat
Theprocesswithdifferentmin_supvalues.
TID={1:[“butter”,”bread”,”milk],2=[“butter”,”flour”,”milk”,”suger”],3=[“butter”,”eggs”,”milk”,”salt”],4=
[“eggs”],5=[“butter”,”flour”,”milk”,”salt”]}
Ans:
Importpandasaspd
From mlxtend.preprocessingimportTransactionEncoder
From mlxtend.frequent_patternsimportapriori,association_rules
#Creatingthedataset
Dataset=[[‘butter’,‘bread’,‘milk’],[‘butter’,‘flour’,‘milk’,‘sugar’],[‘butter’,‘eggs’,‘milk’,‘salt’],
[‘eggs’],[‘butter’,‘flour’,‘milk’,‘salt’]]
Df=pd.DataFrame(dataset)
#Convertingthecategoricalvaluesintonumericformat
Te=TransactionEncoder()
Te_ary=te.fit(dataset).transform(dataset)
Df=pd.DataFrame(te_ary,columns=te.columns_)
#GeneratingfrequentitemsetsusingApriorialgorithm withdifferentmin_supvalues
Min_sup_values=[0.4,0.3,0.2]
Formin_supinmin_sup_values:
Frequent_itemsets=apriori(df,min_support=min_sup,use_colnames=True)
Print(“FrequentItemsetswithminimum supportof”,min_sup)
Print(frequent_itemsets)
#Generatingassociationrules
Rules=association_rules(frequent_itemsets,metric=”confidence”,min_threshold=0.7)
Print(“AssociationRuleswithminimum supportof”,min_sup)
Print(rules)


@Slip-12

Q.1)WriteAJAXprogram toreadcontact.datfileandprintthecontentsofthefileinatabular
format
Whentheuserclicksonprintbutton.Contact.datfileshouldcontainsrno,name,residence
number,
Mobilenumber,Address.[Enteratleast3recordincontact.datfile]
.
Ans:
Htmlfile
<<!DOCTYPEhtml>
<html>
<head>
<title>ContactList</title>
<scriptsrc=https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js></script>
<scriptsrc=”script.js”></script>
</head>
<body>
<buttonid=”printBtn”>PrintContacts</button>
<br><br>
<tableid=”contactTable”>
<thead>
<tr>
<th>Sr.No.</th>
<th>Name</th>
<th>ResidenceNumber</th>
<th>MobileNumber</th>
<th>Address</th>
</tr>
</thead>
<tbody>
<!—Contactlistwillbedisplayedhere
</tbody>
</table>
</body>
</html>
Ajaxfile
$(document).ready(function(){
//Eventlistenerforprintbutton
$(“#printBtn”).click(function(){
//AJAXrequesttoreadcontact.datfile
$.ajax({
url:“contact.dat”,
dataType:“text”,
success:function(data){
//Splitthefilecontentsintolines
Varlines=data.split(“\n”);
//Iterateovereachlineandcreateatablerow
VartableRows=“”;
For(vari=0;i<lines.length;i++){
Varcolumns=lines[i].split(“,”);
If(columns.length==5){//Onlyprocessvalidrows
tableRows+=“<tr>”;
for(varj=0;j<columns.length;j++){
tableRows+=“<td>”+columns[j]+“</td>”;
}
tableRows+=“</tr>”;
}
}
//Addthetablerowstothetablebody
$(“#contactTabletbody”).html(tableRows);
},
Error:function(jqXHR,textStatus,errorThrown){
Alert(“Error:“+errorThrown);
}
});
});
});
Q.2)Create‘heights-and-weights’Dataset.Buildalinearregressionmodelbyidentifying
independent
Andtargetvariable.Splitthevariablesintotrainingandtestingsetsandprintthem.Builda
simplelinear
Regressionmodelforpredictingpurchases.
Ans:
Importnumpyasnp
Importpandasaspd
From sklearn.linear_modelimportLinearRegression
From sklearn.model_selectionimporttrain_test_split
#Createarandom datasetwith10samples
Heights=np.random.normal(170,10,10)
Weights=np.random.normal(70,5,10)
#Combinethetwoarraysintoasingledataset
Dataset=pd.DataFrame({‘Height’:heights,‘Weight’:weights})
#Splitthedatasetintotrainingandtestingsets
X_train,X_test,y_train,y_test=train_test_split(dataset[‘Height’],dataset[‘Weight’],test_size=0.2,
random_state=42)
#CreateaLinearRegressionmodelandfitittothetrainingdata
Lr_model=LinearRegression()
Lr_model.fit(X_train.values.reshape(-1,1),y_train)
#Printthemodelcoefficients
Print(‘ModelCoefficients:’,lr_model.coef_)
#Predicttheweightsforthetestdataandprintthepredictions
Y_pred=lr_model.predict(X_test.values.reshape(-1,1))
Print(‘Predictions:’,y_pred)


@Slip-13

Q.1)WriteAJAXprogram wheretheuserisrequestedtowritehisorhernameinatextbox,and
the
Serverkeepssendingbackresponseswhiletheuseristyping.Iftheusernameisnotentered
thenthe
Messagedisplayedwillbe,“Stranger,pleasetellmeyourname!”.IfthenameisRohit,Virat,
Dhoni,
AshwinorHarbhajan,theserverrespondswith“Hello,master!”.Ifthenameisanythingelse,
the
Messagewillbe“,Idon’tknowyou!”.
Ans:
Htmlfile
<!DOCTYPEhtml>
<html>
<head>
<title>AJAXProgram</title>
<scriptsrc=https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js></script>
</head>
<body>
<labelfor=”name”>Enteryourname:</label>
<inputtype=”text”id=”name”name=”name”>
<divid=”response”></div>
<scriptsrc=”ajax.js”></script>
</body>
</html>
Ajaxfile
$(document).ready(function(){
//Attachaneventlistenertothenameinputfield
$(‘#name’).on(‘input’,function(){
//Getthenameenteredbytheuser
Varname=$(this).val();
//SendanAJAXrequesttotheserver
$.ajax({
url:‘server.php’,
type:‘POST’,
data:{name:name},
success:function(response){
//Updatetheresponsedivwiththeserver’sresponse
$(‘#response’).html(response);
}
});
});
});
Filename:Server.php
<?php
//Getthenameenteredbytheuser
$name=$_POST[‘name’];
//Checkifthenameisempty
If(empty($name)){
Echo‘Stranger,pleasetellmeyourname!’;
}
//Checkifthenameisoneofthemasternames
Elseif($name==‘Rohit’||$name==‘Virat’||$name==‘Dhoni’||$name==‘Ashwin’||$name==
‘Harbhajan’){
Echo‘Hello,master!’;
}
//Otherwise,theserverdoesn’tknowtheuser
Else{
Echo$name.‘,Idon\’tknowyou!’;
}
Q.2)Downloadnurserydatasetfrom UCI.Buildalinearregressionmodelbyidentifying
independent
Andtargetvariable.Splitthevariablesintotrainingandtestingsetsandprintthem.Builda
simplelinear
Regressionmodelforpredictingpurchases.
Ans:
Importpandasaspd
Importnumpyasnp
From sklearn.model_selectionimporttrain_test_split
From sklearn.linear_modelimportLinearRegression
#Loadthedataset
url=https://archive.ics.uci.edu/ml/machine-learning-databases/nursery/nursery.data
names=[‘parents’,‘has_nurs’,‘form’,‘children’,‘housing’,‘finance’,‘social’,‘health’,‘class’]
dataset=pd.read_csv(url,names=names)
#Identifyindependentandtargetvariables
X=dataset.drop(‘class’,axis=1)
Y=dataset[‘class’]
#Convertcategoricalvariablesintonumericalvariablesusingone-hotencoding
X=pd.get_dummies(X)
#Splitintotrainingandtestingsets
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)
#Buildalinearregressionmodel
Model=LinearRegression()
Model.fit(X_train,y_train)
#Printthecoefficientsofthemodel
Print(“Intercept:“,model.intercept_)
Print(“Coefficients:“,model.coef_)
#Predictthetargetvariableforthetestingset
Y_pred=model.predict(X_test)
#EvaluatethemodelusingMeanSquaredError(MSE)
Mse=np.mean((y_test–y_pred)**2)
Print(“MSE:“,mse)


@Slip-14

Q.1)CreateTEACHERtableasfollowsTEACHER(tno,tname,qualification,salary).WriteAjax
Program toselectateachersnameandprinttheselectedteachersdetails.
AAns:
Jsfile
<!DOCTYPEhtml>
<html>
<head>
<title>TeacherDetails</title>
<scriptsrc=https://code.jquery.com/jquery-3.6.0.min.js></script>
</head>
<body>
<selectid=”teacher-list”>
<optionvalue=””>--SelectTeacher--</option>
<optionvalue=”1”>JohnDoe</option>
<optionvalue=”2”>JaneSmith</option>
<optionvalue=”3”>BobJohnson</option>
</select>
<buttonid=”submit-btn”>GetDetails</button>
<divid=”details”></div>
<script>
$(document).ready(function(){
$(‘#submit-btn’).click(function(){
Vartno=$(‘#teacher-list’).val();
If(tno==‘’){
Alert(‘Pleaseselectateacher.’);
Return;
}
$.ajax({
url:‘teacherdetails.php’,
method:‘POST’,
data:{tno:tno},
success:function(response){
$(‘#details’).html(response);
},
Error:function(xhr,status,error){
Console.log(xhr.responseText);
}
});
});
});
</script>
</body>
</html>
Phpfileteacherdetails.php
<?php
//Connecttodatabase
$servername=“localhost”;
$username=“username”;
$password=“password”;
$dbname=“database_name”;
$conn=mysqli_connect($servername,$username,$password,$dbname);
//Checkconnection
If(!$conn){
Die(“Connectionfailed:“.mysqli_connect_error());
}
//Retrieveselectedteacherdetails
If(isset($_POST[‘tno’])){
$tno=$_POST[‘tno’];
$sql=“SELECT*FROMTEACHERWHEREtno=‘$tno’”;
$result=mysqli_query($conn,$sql);
If(mysqli_num_rows($result)>0){
$row=mysqli_fetch_assoc($result);
Echo“TeacherName:“.$row[‘tname’].“<br>”;
Echo“Qualification:“.$row[‘qualification’].“<br>”;
Echo“Salary:“.$row[‘salary’].“<br>”;
}else{
Echo“Nodatafound.”;
}
}
//Closedatabaseconnection
Mysqli_close($conn);
?>
Q.2)Createthefollowingdatasetinpython&Convertthecategoricalvaluesintonumeric
format.Apply
Theapriorialgorithm ontheabovedatasettogeneratethefrequentitemsetsandassociation
rules.Repeat
Theprocesswithdifferentmin_sup_values.
TID={1:[“apple”,”mango”,”banana”],2=[“mango”,”banana”,
“cabbage”,”carrots”],3=[“mango”,”banana”,carrots”],4=[“mango”,”carrots”]}AAAns:
From mlxtend.preprocessingimportTransactionEncoder
From mlxtend.frequent_patternsimportapriori
#Createthedataset
TID={1:[“apple”,”mango”,”banana”],
2:[“mango”,”banana”,”cabbage”,”carrots”],
3:[“mango”,”banana”,”carrots”],
4:[“mango”,”carrots”]}
#Convertthecategoricalvaluesintonumericformat
Te=TransactionEncoder()
Te_ary=te.fit([TID[i]foriinTID]).transform([TID[i]foriinTID])
Df=pd.DataFrame(te_ary,columns=te.columns_)
#Applytheapriorialgorithm withdifferentmin_supvalues
Min_sup_values=[0.25,0.5,0.75]
Formin_supinmin_sup_values:
Frequent_itemsets=apriori(df,min_support=min_sup,use_colnames=True)
Print(“Frequentitemsetswithmin_sup=”,min_sup)
Print(frequent_itemsets)
Print(“\n”)


@Slip-15

Q.1)WriteAjaxprogram tofetchsuggestionswhenisuseristypinginatextbox.(eglikegoogle
Suggestions.Hintcreatearrayofsuggestionsandmatchingstringwillbedisplayed).
Ans:
<!DOCTYPEhtml>
<html>
<head>
<title>AJAXAutoSuggestionsExample</title>
<script>
FunctionfetchSuggestions(str){
If(str.length==0){
Document.getElementById(“suggestions”).innerHTML=“”;
Return;
}
Varsuggestions=[“apple”,“banana”,“cherry”,“dates”,“elderberry”,“fig”,
“grape”,“honeydew”,“kiwi”,“lemon”];
Varmatches=[];
For(vari=0;i<suggestions.length;i++){
If(suggestions[i].toLowerCase().startsWith(str.toLowerCase())){
Matches.push(suggestions[i]);
}
}
If(matches.length>0){
Document.getElementById(“suggestions”).innerHTML=
matches.join(“<br>”);
}else{
Document.getElementById(“suggestions”).innerHTML=“No
suggestionsfound”;
}
}
</script>
</head>
<body>
<inputtype=”text”onkeyup=”fetchSuggestions(this.value)”>
<divid=”suggestions”></div>
</body>
</html>
Q.2)Createthefollowingdatasetinpython&Convertthecategoricalvaluesintonumeric
format.Apply
Theapriorialgorithm ontheabovedatasettogeneratethefrequentitemsetsandassociation
rules.Repeat
Theprocesswithdifferentmin_supvalues.
No|Company| model |year
1. Tata. Nexon. 2017
2. MG. Astor. 2021
3. Kia. Seltos. 2019
4. Hyundai. Creta. 2015
Ans:
Importpandasaspd
#Createthedataset
Data={‘No’:[1,2,3,4],
‘Company’:[‘Tata’,‘MG’,‘Kia’,‘Hyundai’],
‘Model’:[‘Nexon’,‘Astor’,‘Seltos’,‘Creta’],
‘Year’:[2017,2021,2019,2015]}
Df=pd.DataFrame(data)
#Convertcategoricalvaluesintonumericformat
Df[‘Company’]=pd.Categorical(df[‘Company’])
Df[‘Model’]=pd.Categorical(df[‘Model’])
Df[‘Company’]=df[‘Company’].cat.codes
Df[‘Model’]=df[‘Model’].cat.codes
Print(df)
From mlxtend.frequent_patternsimportapriori
From mlxtend.frequent_patternsimportassociation_rules
#Generatefrequentitemsetswithmin_sup=0.5
Frequent_itemsets=apriori(df,min_support=0.5,use_colnames=True)
Print(frequent_itemsets)
#Generateassociationruleswithmin_threshold=0.7
Association_rules=association_rules(frequent_itemsets,metric=”confidence”,
min_threshold=0.7)
Print(association_rules)


@Slip-16

Q.1)WriteAjaxprogram togetbookdetailsfrom XMLfilewhenuserselectabookname.
CreateXML
Fileforstoringdetailsofbook(title,author,year,price).
Ans:
Xmlfilebook_details.xml
<books>
<book>
<title>TheGreatGatsby</title>
<author>F.ScottFitzgerald</author>
<year>1925</year>
<price>10.99</price>
</book>
<book>
<title>ToKillaMockingbird</title>
<author>HarperLee</author>
<year>1960</year>
<price>8.99</price>
</book>
<book>
<title>1984</title>
<author>GeorgeOrwell</author>
<year>1949</year>
<price>6.99</price>
</book>
<book>
<title>PrideandPrejudice</title>
<author>JaneAusten</author>
<year>1813</year>
<price>7.99</price>
</book>
</books>
Ajaxfile
<!DOCTYPEhtml>
<html>
<head>
<title>BookDetails</title>
<scriptsrc=https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js></script>
<script>
$(document).ready(function(){
$(“select”).change(function(){
Varbook=$(this).val();
$.ajax({
url:“book_details.xml”,
dataType:“xml”,
success:function(xml){
$(xml).find(‘book’).each(function(){
Vartitle=$(this).find(‘title’).text();
If(title==book){
Varauthor=
$(this).find(‘author’).text();
Varyear=$(this).find(‘year’).text();
Varprice=$(this).find(‘price’).text();
$(“#details”).html(“Author:“+author
+“<br>Year:“+year+“<br>Price:“+price);
}
});
}
});
});
});
</script>
</head>
<body>
<select>
<option>Selectabook</option>
<option>TheGreatGatsby</option>
<option>ToKillaMockingbird</option>
<option>1984</option>
<option>PrideandPrejudice</option>
</select>
<divid=”details”></div>
</body>
</html>
Q2).Consideranytextparagraph.Preprocessthetexttoremoveanyspecialcharactersand
digits.
Generatethesummaryusingextractivesummarizationpprocess.
Ans:
Importre
Importnltk
From nltk.corpusimportstopwords
From nltk.tokenizeimportsent_tokenize,word_tokenize
From heapqimportnlargest
#Sampletextparagraphyoucanwriteanytext
Text=“Naturallanguageprocessing(NLP)isasubfieldoflinguistics,computerscience,
informationengineering,andartificialintelligenceconcernedwiththeinteractionsbetween
computersandhumanlanguages,inparticularhowtoprogram computerstoprocessand
analyzelargeamountsofnaturallanguagedata.Challengesinnaturallanguageprocessing
frequentlyinvolvespeechrecognition,naturallanguageunderstanding,andnaturallanguage
generation.Thehistoryofnaturallanguageprocessinggenerallystartedinthe1950s,although
workcanbefoundfrom earlierperiods.”
#Removespecialcharactersanddigits
Text=re.sub(‘[^a-zA-Z]’,‘‘,text)
#Tokenizethetextintosentences
Sentences=sent_tokenize(text)
#Tokenizeeachsentenceintowordsandremovestopwords
Stop_words=set(stopwords.words(‘english’))
Words=[]
Forsentenceinsentences:
Words.extend(word_tokenize(sentence))
Words=[word.lower()forwordinwordsifword.lower()notinstop_words]
#Calculatewordfrequency
Word_freq=nltk.FreqDist(words)
#Calculatesentencescoresbasedonwordfrequency
Sentence_scores={}
Forsentenceinsentences:
Forwordinword_tokenize(sentence.lower()):
Ifwordinword_freq:
Iflen(sentence.split(‘‘))<30:
Ifsentencenotinsentence_scores:
Sentence_scores[sentence]=word_freq[word]
Else:
Sentence_scores[sentence]+=word_freq[word]
#Generatesummarybyselectingtop3sentenceswithhighestscores
Summary_sentences=nlargest(3,sentence_scores,key=sentence_scores.get)
Summary=‘‘.join(summary_sentences)
Print(summary)


@Slip-17

Q.1)WriteaJavaScriptProgram toshowHelloGoodMorningmessageonloadeventusing
alertbox
AnddisplaytheStudentregistrationfrom.
Ans:
<!DOCTYPEhtml>
<html>
<head>
<title>StudentRegistrationForm</title>
<script>
Window.onload=function(){
Alert(“HelloGoodMorning!”);
};
</script>
</head>
<body>
<h1>StudentRegistrationForm</h1>
<form>
<labelfor=”name”>Name:</label>
<inputtype=”text”id=”name”name=”name”required><br><br>
<labelfor=”email”>Email:</label>
<inputtype=”email”id=”email”name=”email”required><br><br>
<labelfor=”phone”>Phone:</label>
<inputtype=”tel”id=”phone”name=”phone”required><br><br>
<labelfor=”address”>Address:</label>
<textareaid=”address”name=”address”required></textarea><br><br>
<inputtype=”submit”value=”Submit”>
</form>
</body>
</html>
Q.2)Considertextparagraph.So,keepworking.Keepstriving.Nevergiveup.Falldownseven
times,get
Upeight.Easeisagreaterthreattoprogressthanhardship.Easeisagreaterthreattoprogress
than
Hardship.So,keepmoving,keepgrowing,keeplearning.Seeyouatwork.Preprocessthetextto
remove
Anyspecialcharactersanddigits.Generatethesummaryusingextractivesummarization
process.
Ans:
Importre
From nltk.tokenizeimportsent_tokenize
#Textparagraph
Text=“So,keepworking.Keepstriving.Nevergiveup.Falldownseventimes,getupeight.Ease
isagreaterthreattoprogressthanhardship.Easeisagreaterthreattoprogressthanhardship.
So,keepmoving,keepgrowing,keeplearning.Seeyouatwork.”
#Removespecialcharactersanddigits
Text=re.sub(‘[^A-Za-z]+’,‘‘,text)
#Tokenizethesentences
Sentences=sent_tokenize(text)
#Calculatethescoreofeachsentencebasedonthenumberofwords
#Thesentenceswithmorewordswillhaveahigherscore
Scores={}
Forsentenceinsentences:
Words=sentence.split()
Score=len(words)
Scores[sentence]=score
#Sortthesentencesbasedontheirscores
Sorted_sentences=sorted(scores.items(),key=lambdax:x[1],reverse=True)
#Extractthetop2sentenceswiththehighestscoresasthesummary
Summary_sentences=[sentence[0]forsentenceinsorted_sentences[:2]]
Summary=““.join(summary_sentences)
#Printthesummary
Print(summary)


@Slip-18

Q.1)WriteaJavaScriptProgram toprintFibonaccinumbersononclickevent.
Ans:
<!DOCTYPEhtml>
<html>
<head>
<title>FibonacciNumbers</title>
<script>
FunctiongenerateFibonacci(){
//Gettheinputvaluefrom theuser
Varinput=document.getElementById(“inputNumber”).value;
Varoutput=document.getElementById(“output”);
//Converttheinputtoanumber
Varn=parseInt(input);
//CreateanarraytostoretheFibonaccisequence
Varfib=[];
//CalculatetheFibonaccisequenceupton
Fib[0]=0;
Fib[1]=1;
For(vari=2;i<=n;i++){
Fib[i]=fib[i-1]+fib[i-2];
}
//DisplaytheFibonaccisequence
Output.innerHTML=“Fibonaccisequenceupto“+n+“:“+fib.join(“,“);
}
</script>
</head>
<body>
<h1>FibonacciNumbers</h1>
<p>Enteranumber:</p>
<inputtype=”text”id=”inputNumber”>
<buttononclick=”generateFibonacci()”>GenerateFibonacci</button>
<pid=”output”></p>
</body>
</html>
Q.2)Consideranytextparagraph.Removethestopwords.Tokenizetheparagraphtoextract
wordsand
Sentences.Calculatethewordfrequencydistributionandplotthefrequencies.Plotthe
wordcloudofthe
Txt.
Ans:
#Installthelibraries
!pipinstallnltkmatplotlibwordcloud
#Importthenecessarymodules
Importnltk
From nltk.corpusimportstopwords
From nltk.tokenizeimportword_tokenize,sent_tokenize
From nltk.probabilityimportFreqDist
Importmatplotlib.pyplotasplt
From wordcloudimportWordCloud
#Downloadthestopwordscorpus
Nltk.download(‘stopwords’)
#Definethetextparagraph
Text=“Lorem ipsum dolorsitamet,consecteturadipiscingelit.Sedtristiqueanteetvelit
vestibulum,velpharetraorciiaculis.Nullam mattisrisusquisauguetinciduntrhoncus.Morbi
varius,arcuvitaescelerisquelaoreet,magnaestimperdietquam,sitametultriceslectusjustoid
enim.Seddictum suscipitcommodo.Sedmaximusconsequatrisus,necpharetranibh
interdum quis.Etiam egetquam velauguedictum dignissim sitametnecelit.Nuncatsapien
dolor.Nullavitaeiaculislorem.Suspendissepotenti.Sednonanteturpis.Morbiconsectetur,
arcuavestibulum suscipit,mauriserosconvallisnibh,necfeugiatorcienim sitametenim.
Aliquam eratvolutpat.Etiam velnisiidnequeviverradapibusnonnonlectus.”
#Tokenizetheparagraphtoextractwordsandsentences
Words=word_tokenize(text.lower())
Sentences=sent_tokenize(text)
#Removethestopwordsfrom theextractedwords
Stop_words=set(stopwords.words(‘english’))
Filtered_words=[wordforwordinwordsifword.casefold()notinstop_words]
#Calculatethewordfrequencydistributionandplotthefrequenciesusingmatplotlib
Fdist=FreqDist(filtered_words)
Fdist.plot(30,cumulative=False)
Plt.show()
#Plotthewordcloudofthetextusingwordcloud
Wordcloud=WordCloud(width=800,height=800,
Background_color=’white’,
Stopwords=stop_words,
Min_font_size=10).generate(text)
#plottheWordCloudimage
Plt.figure(figsize=(8,8),facecolor=None)
Plt.imshow(wordcloud)
Plt.axis(“off”)
Plt.tight_layout(pad=0)
Plt.show()


@Slip-19

Q.1)WriteaJavaScriptProgram tovalidateusernameandpasswordononSubmitevent.
Ans:
<!DOCTYPEhtml>
<html>
<head>
<title>ValidateUserNameandPassword</title>
<script>
FunctionvalidateForm(){
Varusername=document.forms[“myForm”][“username”].value;
Varpassword=document.forms[“myForm”][“password”].value;
If(username==“”){
Alert(“Usernamemustbefilledout”);
Returnfalse;
}
If(password==“”){
Alert(“Passwordmustbefilledout”);
Returnfalse;
}
}
</script>
</head>
<body>
<h2>ValidateUserNameandPassword</h2>
<form name=”myForm”onsubmit=”returnvalidateForm()”method=”post”>
<labelfor=”username”>Username:</label>
<inputtype=”text”id=”username”name=”username”><br><br>
<labelfor=”password”>Password:</label>
<inputtype=”password”id=”password”name=”password”><br><br>
<inputtype=”submit”value=”Submit”>
</form>
</body>
</html>
Q.2)Downloadthemovie_review.csvdatasetfrom Kagglebyusingthefollowinglink
:https://www.kaggle.com/nltkdata/movie-review/version/3?select=movie_review.csvto
perform
Sentimentanalysisonabovedatasetandcreateawordcloud.
Ans:
Importpandasaspd
From textblobimportTextBlob
From wordcloudimportWordCloud,STOPWORDS
Importmatplotlib.pyplotasplt
#Loadthedataset
Df=pd.read_csv(‘movie_review.csv’)
#AddacolumnforsentimentanalysisusingTextBlob
Df[‘Sentiment’]=df[‘Review’].apply(lambdax:TextBlob(x).sentiment.polarity)
#Createanewdataframeforpositivereviewsonly
Pos_df=df[df[‘Sentiment’]>0.2]
#Createawordcloudforpositivereviews
Wordcloud=WordCloud(width=800,height=800,
Background_color=’white’,
Stopwords=STOPWORDS,
Min_font_size=10).generate(‘‘.join(pos_df[‘Review’]))
#Plotthewordcloud
Plt.figure(figsize=(8,8),facecolor=None)
Plt.imshow(wordcloud)
Plt.axis(“off”)
Plt.tight_layout(pad=0)
Plt.show()


@Slip-20

Q.1)createastudent.xmlfilecontainingatleast5studentinformation.
Ans:
<?xmlversion=”1.0”?>
<students>
<student>
<name>JohnDoe</name>
<age>21</age>
<gender>Male</gender>
<major>ComputerScience</major>
<gpa>3.8</gpa>
</student>
<student>
<name>JaneSmith</name>
<age>19</age>
<gender>Female</gender>
<major>Business</major>
<gpa>3.5</gpa>
</student>
<student>
<name>Tom Johnson</name>
<age>20</age>
<gender>Male</gender>
<major>Engineering</major>
<gpa>3.2</gpa>
</student>
<student>
<name>SaraLee</name>
<age>22</age>
<gender>Female</gender>
<major>Psychology</major>
<gpa>3.6</gpa>
</student>
<student>
<name>MikeBrown</name>
<age>18</age>
<gender>Male</gender>
<major>Education</major>
<gpa>3.4</gpa>
</student>
</students>
Q.2)Considertextparagraph.”””Helloall,WelcometoPythonProgrammingAcademy.Python
ProgrammingAcademyisaniceplatform tolearnnewprogrammingskills.Itisdifficulttoget
enrolled
InthisAcademy.”””Removethestopwords.
Ans:
Importnltk
From nltk.corpusimportstopwords
Nltk.download(‘stopwords’)
#Textparagraph
Text=“Helloall,WelcometoPythonProgrammingAcademy.PythonProgrammingAcademyis
aniceplatform tolearnnewprogrammingskills.ItisdifficulttogetenrolledinthisAcademy.”
#Tokenizethetext
Tokens=nltk.word_tokenize(text)
#Removestopwords
Stop_words=set(stopwords.words(‘english’))
Filtered_tokens=[wordforwordintokensifnotword.lower()instop_words]
#Printthefilteredtokens
Print(filtered_tokens)


@Slip-21

Q.1)AddaJavaScriptFileinCodeigniter.TheJavascriptcodeshouldcheckwhetheranumber
is
Positiveornegative.
Ans:
Htmlfile
<!DOCTYPEhtml>
<html>
<head>
<title>NumberCheck</title>
<scriptsrc=”<?phpechobase_url(‘js/numberCheck.js’);?>”></script>
</head>
<body>
<h1>NumberCheck</h1>
<p>Enteranumbertocheck:</p>
<inputtype=”number”id=”num”/>
<buttononclick=”checkNumber(document.getElementById(‘num’).value)”>Check</button>
</body>
</html>
Createisfilechecknumber.js
FunctioncheckNumber(num){
If(num >0){
Alert(“Thenumberispositive.”);
}elseif(num <0){
Alert(“Thenumberisnegative.”);
}else{
Alert(“Thenumberiszero.”);
}
}
Q.2)BuildasimplelinearregressionmodelforUserData.
Ans:
Importpandasaspd
From sklearn.model_selectionimporttrain_test_split
From sklearn.linear_modelimportLinearRegression
From sklearn.metricsimportmean_squared_error,r2_score
Importmatplotlib.pyplotasplt
#1.Collectdata
Data=pd.read_csv(‘user_data.csv’)
#2.Preprocessdata
Data.dropna(inplace=True)
X=data[‘age’].values.reshape(-1,1)
Y=data[‘income’].values.reshape(-1,1)
#3.Splitdata
X_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.2,random_state=0)
#4.Trainthemodel
Regressor=LinearRegression()
Regressor.fit(x_train,y_train)
#5.Predictvalues
Y_pred=regressor.predict(x_test)
#6.Evaluatemodel
Mse=mean_squared_error(y_test,y_pred)
R2=r2_score(y_test,y_pred)
Print(“Meansquarederror:“,mse)
Print(“R-squared:“,r2)
#7.Visualizeresults
Plt.scatter(x_test,y_test,color=’gray’)
Plt.plot(x_test,y_pred,color=’red’,linewidth=2)
Plt.show()


@Slip-22


Q.1)Createatablestudenthavingattributes(rollno,name,class).Usingcodeigniter,connectto
the
Databaseandinsert5recodesinit.
Ans:
<?php
//EstablishconnectiontoPostgreSQLdatabase
$conn=pg_connect(“host=localhostdbname=your_database_nameuser=your_username
password=your_password”);
//Checkifconnectionwassuccessful
If(!$conn){
Echo“Connectionfailed.”;
Exit;
}
//Createstudenttable
$query=“CREATETABLEstudent(
RollnoINTEGERPRIMARYKEY,
NameVARCHAR(50)NOTNULL,
ClassVARCHAR(10)NOTNULL
)”;
$result=pg_query($conn,$query);
If(!$result){
Echo“Errorcreatingtable:“.pg_last_error($conn);
Exit;
}else{
Echo“Tablecreatedsuccessfully.<br>”;
}
//Insert5recordsintostudenttable
$insert_query=“INSERTINTOstudent(rollno,name,class)
VALUES(1,‘JohnDoe’,‘10A’),
(2,‘JaneSmith’,‘9B’),
(3,‘BobJohnson’,‘11C’),
(4,‘SarahLee’,‘12D’),
(5,‘Tom Brown’,‘8E’)”;
$insert_result=pg_query($conn,$insert_query);
If(!$insert_result){
Echo“Errorinsertingrecords:“.pg_last_error($conn);
Exit;
}else{
Echo“Recordsinsertedsuccessfully.”;
}
//Closedatabaseconnection
Pg_close($conn);
?>
Q2).Consideranytextparagraph.Removethestopwords.
Ans:
Importnltk
From nltk.corpusimportstopwords
From nltk.tokenizeimportword_tokenize
#sampletextparagraph
Text=“Helloall,WelcometoPythonProgrammingAcademy.PythonProgrammingAcademyis
aniceplatform tolearnnewprogrammingskills.ItisdifficulttogetenrolledinthisAcademy.”
#tokenizethetextparagraph
Words=word_tokenize(text)
#definestopwords
Stop_words=set(stopwords.words(‘english’))
#removestopwords
Filtered_words=[wordforwordinwordsifword.casefold()notinstop_words]
#joinfilteredwordstoform asentence
Filtered_sentence=‘‘.join(filtered_words)
Print(filtered_sentence)


@Slip-23


Q.1)Createatablestudenthavingattributes(rollno,name,class)containingatleast5recodes.
Using
Codeigniter,displayallitsrecords.
Ans:
<?php
//EstablishconnectiontoPostgreSQLdatabase
$conn=pg_connect(“host=localhostdbname=your_database_nameuser=your_username
password=your_password”);
//Checkifconnectionwassuccessful
If(!$conn){
Echo“Connectionfailed.”;
Exit;
}
//Createstudenttable
$query=“CREATETABLEstudent(
RollnoINTEGERPRIMARYKEY,
NameVARCHAR(50)NOTNULL,
ClassVARCHAR(10)NOTNULL
)”;
$result=pg_query($conn,$query);
If(!$result){
Echo“Errorcreatingtable:“.pg_last_error($conn);
Exit;
}else{
Echo“Tablecreatedsuccessfully.<br>”;
}
//Insert5recordsintostudenttable
$insert_query=“INSERTINTOstudent(rollno,name,class)
VALUES(1,‘JohnDoe’,‘10A’),
(2,‘JaneSmith’,‘9B’),
(3,‘BobJohnson’,‘11C’),
(4,‘SarahLee’,‘12D’),
(5,‘Tom Brown’,‘8E’)”;
$insert_result=pg_query($conn,$insert_query);
If(!$insert_result){
Echo“Errorinsertingrecords:“.pg_last_error($conn);
Exit;
}else{
Echo“Recordsinsertedsuccessfully.”;
}
//Closedatabaseconnection
Pg_close($conn);
//functiontodisplaydatabaserecords
Functiondisplay_records($table_name){
//establishconnectiontoPostgreSQLdatabase
$conn=pg_connect(“host=localhostdbname=your_database_nameuser=your_username
password=your_password”);
//checkifconnectionwassuccessful
If(!$conn){
Echo“Connectionfailed.”;
Exit;
}
//retrieverecordsfrom specifiedtable
$query=“SELECT*FROM“.$table_name;
$result=pg_query($conn,$query);
//checkifquerywassuccessful
If(!$result){
Echo“Errorretrievingrecords:“.pg_last_error($conn);
Exit;
}
//displayrecordsinanHTMLtable
Echo“<table>”;
Echo“<tr><th>RollNo</th><th>Name</th><th>Class</th></tr>”;
While($row=pg_fetch_assoc($result)){
Echo“<tr><td>”.$row[‘rollno’].“</td><td>”.$row[‘name’].“</td><td>”.$row[‘class’].
“</td></tr>”;
}
Echo“</table>”;
//closedatabaseconnection
Pg_close($conn);
}
?>
Q2).Consideranytextparagraph.Preprocessthetexttoremoveanyspecialcharactersand
Digits.
Ans:
Importre
Text=“Hello,#world123!Thisisasampletextparagraph.Itcontainsspecialcharactersand5
digits.”
#Removespecialcharactersanddigits
Processed_text=re.sub(r’[^a-zA-Z\s]’,‘’,text)
Print(processed_text)

@Slip-24

Q.1)WriteaPHPscripttocreatestudent.xmlfilewhichcontainsstudentrollno,name,address,
college
Andcourse.Printstudentsdetailofspecificcourseintabularformatafteracceptingcourseas
input.
Ans:
<?php
//Definestudentdetails
$students=array(
Array(“rollno”=>1,“name”=>“JohnDoe”,“address”=>“123MainSt”,“college”=>“ABC
College”,“course”=>“ComputerScience”),
Array(“rollno”=>2,“name”=>“JaneSmith”,“address”=>“456MainSt”,“college”=>“DEF
College”,“course”=>“InformationTechnology”),
Array(“rollno”=>3,“name”=>“BobJohnson”,“address”=>“789MainSt”,“college”=>“GHI
College”,“course”=>“BusinessAdministration”),
Array(“rollno”=>4,“name”=>“SarahLee”,“address”=>“101MainSt”,“college”=>“JKL
College”,“course”=>“Marketing”),
Array(“rollno”=>5,“name”=>“Tom Brown”,“address”=>“121MainSt”,“college”=>“MNO
College”,“course”=>“ComputerScience”)
);
//CreateaSimpleXMLElementobject
$xml=newSimpleXMLElement(‘<students></students>’);
//AddstudentelementstotheXMLobject
Foreach($studentsas$student){
$student_element=$xml->addChild(‘student’);
$student_element->addChild(‘rollno’,$student[‘rollno’]);
$student_element->addChild(‘name’,$student[‘name’]);
$student_element->addChild(‘address’,$student[‘address’]);
$student_element->addChild(‘college’,$student[‘college’]);
$student_element->addChild(‘course’,$student[‘course’]);
}
//SavetheXMLdatatoafile
$xml->asXML(‘student.xml’);
//Getcourseinputfrom user
$course=isset($_POST[‘course’])?$_POST[‘course’]:‘’;
//LoadtheXMLfile
$xml=simplexml_load_file(‘student.xml’);
//Findstudentswithmatchingcourse
$filtered_students=$xml->xpath(“//student[course=’$course’]”);
//Printtableofmatchingstudents
Echo“<tableborder=’1’>”;
Echo“<tr><th>Roll
No</th><th>Name</th><th>Address</th><th>College</th><th>Course</th></tr>”;
Foreach($filtered_studentsas$student){
Echo“<tr>”;
Echo“<td>{$student->rollno}</td>”;
Echo“<td>{$student->name}</td>”;
Echo“<td>{$student->address}</td>”;
Echo“<td>{$student->college}</td>”;
Echo“<td>{$student->course}</td>”;
Echo“</tr>”;
}
Echo“</table>”;
?>
Q.2)Considerthefollowingdataset:
https://www.kaggle.com/datasets/datasnaek/youtubenew?select=INvideos.csv
WriteaPythonscriptforthefollowing:
i.
Readthedatasetandperform datacleaningoperationsonit.
ii.
ii.Findthetotalviews,totallikes,totaldislikesandcommentcount.
Ans:
Importpandasaspd
#Readthedataset
Df=pd.read_csv(‘INvideos.csv’)
#Dropthecolumnsthatarenotrequired
Df=df.drop([‘video_id’,‘trending_date’,‘channel_title’,‘category_id’,‘publish_time’,‘tags’,
‘thumbnail_link’,‘comments_disabled’,‘ratings_disabled’,‘video_error_or_removed’],axis=1)
#Convertthedatatypeof‘views’,‘likes’,‘dislikes’,and‘comment_count’tointeger
Df[[‘views’,‘likes’,‘dislikes’,‘comment_count’]]=df[[‘views’,‘likes’,‘dislikes’,
‘comment_count’]].astype(int)
#Findthetotalviews,likes,dislikes,andcommentcount
Total_views=df[‘views’].sum()
Total_likes=df[‘likes’].sum()
Total_dislikes=df[‘dislikes’].sum()
Total_comments=df[‘comment_count’].sum()
Print(‘TotalViews:’,total_views)
Print(‘TotalLikes:’,total_likes)
Print(‘TotalDislikes:’,total_dislikes)
Print(‘TotalComments:’,total_comments)


@Slip-25


Q.1)Writeascripttocreate“cricket.xml”filewithmultipleelementsasshownbelow:
<CricketTeam>
<Team country=”Australia”>
<player>____</player>
<runs>______</runs>
<wicket>____</wicket>
</Team>
</CricketTeam>

Writeascripttoaddmultipleelementsin“cricket.xml”fileofcategory,country=”India”.
Ans:
<?php
//CreateanewDOMdocument
$doc=newDOMDocument();
//Createtherootelement
$cricketTeam =$doc->createElement(“CricketTeam”);
//Createthefirstteam elementforAustralia
$teamAustralia=$doc->createElement(“Team”);
$teamAustralia->setAttribute(“country”,“Australia”);
//Createtheplayerelementandsetitsvalue
$player1=$doc->createElement(“player”,“SteveSmith”);
$teamAustralia->appendChild($player1);
//Createtherunselementandsetitsvalue
$runs1=$doc->createElement(“runs”,“7090”);
$teamAustralia->appendChild($runs1);
//Createthewicketelementandsetitsvalue
$wicket1=$doc->createElement(“wicket”,“17”);
$teamAustralia->appendChild($wicket1);
//Appendtheteam elementtotherootelement
$cricketTeam->appendChild($teamAustralia);
//Createthesecondteam elementforIndia
$teamIndia=$doc->createElement(“Team”);
$teamIndia->setAttribute(“country”,“India”);
//Createtheplayerelementandsetitsvalue
$player2=$doc->createElement(“player”,“ViratKohli”);
$teamIndia->appendChild($player2);
//Createtherunselementandsetitsvalue
$runs2=$doc->createElement(“runs”,“12169”);
$teamIndia->appendChild($runs2);
//Createthewicketelementandsetitsvalue
$wicket2=$doc->createElement(“wicket”,“4”);
$teamIndia->appendChild($wicket2);
//Createthecategoryelementandsetitsvalue
$category=$doc->createElement(“category”,“Captain”);
$teamIndia->appendChild($category);
//Appendtheteam elementtotherootelement
$cricketTeam->appendChild($teamIndia);
//Appendtherootelementtothedocument
$doc->appendChild($cricketTeam);
//SavetheXMLfile
$doc->save(“cricket.xml”);
Echo“Elementsaddedsuccessfully!”;
?>
Q.2)Considerthefollowingdataset:https://www.kaggle.com/datasets/seungguini/youtubecommentsfor-
covid19-relatedvideos?select=covid_2021_1.csv
WriteaPythonscriptforthefollowing:
i.
Readthedatasetandperform datacleaningoperationsonit.
ii.
ii.Tokenizethecommentsinwords.Iii.Perform sentimentanalysisandfindthepercentageof
positive,negativeandneutralcomments..
Ans:
Importpandasaspd
Importnltk
From nltk.sentiment.vaderimportSentimentIntensityAnalyzer
#readthedataset
Df=pd.read_csv(‘covid_2021_1.csv’)
#removenullvaluesandduplicates
Df.dropna(inplace=True)
Df.drop_duplicates(subset=’Comment’,inplace=True)
#tokenizecommentsinwords
Nltk.download(‘punkt’)
Df[‘tokens’]=df[‘Comment’].apply(nltk.word_tokenize)
#perform sentimentanalysis
Nltk.download(‘vader_lexicon’)
Sia=SentimentIntensityAnalyzer()
Df[‘sentiment’]=df[‘Comment’].apply(lambdax:sia.polarity_scores(x)[‘compound’])
#calculatepercentageofpositive,negative,andneutralcomments
Total_comments=len(df)
Positive_comments=len(df[df[‘sentiment’]>0])
Negative_comments=len(df[df[‘sentiment’]<0])
Neutral_comments=len(df[df[‘sentiment’]==0])
Positive_percentage=(positive_comments/total_comments)*100
Negative_percentage=(negative_comments/total_comments)*100
Neutral_percentage=(neutral_comments/total_comments)*100
#printtheresults
Print(‘TotalComments:’,total_comments)
Print(‘PositiveComments:’,positive_comments,‘(‘,positive_percentage,‘%)’)
Print(‘NegativeComments:’,negative_comments,‘(‘,negative_percentage,‘%)’)
Print(‘NeutralComments:’,neutral_comments,‘(‘,neutral_percentage,‘%)’)


@Slip-26

Q.1)CreateemployeetableasfollowsEMP(eno,ename,designation,salary).WriteAjax
program to
Selecttheemployeesnameandprinttheselectedemployee’sdetails.
Ans:
Htmlfile
<selectid=”employee-list”>
<optionvalue=””>Selectanemployee</option>
<!—PopulatethisdropdownwithemployeenamesusingPHP
</select>
<divid=”employee-details”>
<!—Employeedetailswillbedisplayedhere
</div>
Ajaxfile
$(document).ready(function(){
//Addeventlistenertotheselectdropdown
$(‘#employee-list’).change(function(){
VarselectedEmployee=$(this).val();
//MakeanAJAXrequesttofetchemployeedetails
$.ajax({
url:‘empdetails.php’,
type:‘POST’,
data:{employeeName:selectedEmployee},
dataType:‘json’,
success:function(response){
//ParsetheJSONresponseanddisplayemployeedetails
VardetailsHtml=‘EmployeeName:‘+response.ename+‘<br>’+
‘Designation:‘+response.designation+‘<br>’+
‘Salary:‘+response.salary;
$(‘#employee-details’).html(detailsHtml);
},
Error:function(xhr,status,error){
Console.log(‘Error:’,error);
}
});
});
});
Phpfileasempdetails.php
<?php
//Establishdatabaseconnection
$conn=pg_connect(“host=localhostdbname=database_nameuser=username
password=password”);
If(!$conn){
Die(‘Connectionfailed:‘.pg_last_error());
}
//Gettheselectedemployeenamefrom AJAXrequest
$employeeName=$_POST[‘employeeName’];
//QuerytheEMPtableforthedetailsoftheselectedemployee
$sql=“SELECT*FROMEMPWHEREename=‘$employeeName’”;
$result=pg_query($conn,$sql);
If(pg_num_rows($result)>0){
//BuildaJSONobjectwithemployeedetails
$employee=pg_fetch_assoc($result);
$response=array(
‘ename’=>$employee[‘ename’],
‘designation’=>$employee[‘designation’],
‘salary’=>$employee[‘salary’]
);
Echojson_encode($response);
}else{
Echo“Employeenotfound”;
}
//Closedatabaseconnection
Pg_close($conn);
?>
Q.2)Considertextparagraph.“””Helloall,WelcometoPythonProgrammingAcademy.Python
ProgrammingAcademyisaniceplatform tolearnnewprogrammingskills.Itisdifficulttoget
enrolled
InthisAcademy.”””Preprocessthetexttoremoveanyspecialcharactersanddigits.Generate
the
Summaryusingextractivesummarizationprocess.Q.
Ans:
Importre
From nltk.tokenizeimportsent_tokenize
From sklearn.feature_extraction.textimportTfidfVectorizer
From sklearn.metrics.pairwiseimportcosine_similarity
#Texttosummarize
Text=“Helloall,WelcometoPythonProgrammingAcademy.PythonProgrammingAcademyis
aniceplatform tolearnnewprogrammingskills.ItisdifficulttogetenrolledinthisAcademy.”
#Preprocessthetexttoremovespecialcharactersanddigits
Preprocessed_text=re.sub(r’[^a-zA-Z\s]’,‘’,text)
#Tokenizethepreprocessedtextintosentences
Sentences=sent_tokenize(preprocessed_text)
#CalculatetheimportancescoreofeachsentenceusingTF-IDF
Vectorizer=TfidfVectorizer()
Tfidf_matrix=vectorizer.fit_transform(sentences)
Similarity_matrix=cosine_similarity(tfidf_matrix)
#SelecttopNsentencesbasedontheirimportancescore
N=2
Top_sentences=sorted(range(len(similarity_matrix[-1])),key=lambdai:similarity_matrix[-1][i])[-
N:]
#Concatenatethetopsentencestoform thesummary
Summary=‘’
Foriintop_sentences:
Summary+=sentences[i]+‘‘
Print(summary)


@Slip-27

Q.1)CreatewebApplicationthatcontainsVotersdetailsandcheckpropervalidationfor(name,
Age,andnationality),asNameshouldbeinuppercaselettersonly,Ageshouldnotbelessthan
18yrsandNationalityshouldbeIndian.(useHTML-AJAX-PHP).
Ans:
Htmlfile
<!DOCTYPEhtml>
<html>
<head>
<title>VoterDetails</title>
<scriptsrc=https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js></script>
</head>
<body>
<h2>VoterDetails</h2>
<form id=”voterForm”>
<labelfor=”name”>Name:</label>
<inputtype=”text”id=”name”name=”name”required><br><br>
<labelfor=”age”>Age:</label>
<inputtype=”number”id=”age”name=”age”required><br><br>
<labelfor=”nationality”>Nationality:</label>
<inputtype=”text”id=”nationality”name=”nationality”required><br><br>
<inputtype=”submit”value=”Submit”>
</form>
<divid=”response”></div>
<script>
$(document).ready(function(){
$(‘#voterForm’).submit(function(event){
Event.preventDefault();
Varname=$(‘#name’).val().toUpperCase();
Varage=$(‘#age’).val();
Varnationality=$(‘#nationality’).val();
$.ajax({
url:‘voter.php’,
method:‘POST’,
data:{name:name,age:age,nationality:nationality},
success:function(response){
$(‘#response’).html(response);
}
});
});
});
</script>
</body>
</html>
Voter.phpfile
<?php
$name=$_POST[‘name’];
$age=$_POST[‘age’];
$nationality=$_POST[‘nationality’];
If(preg_match(‘/[^A-Z]/’,$name)){
Echo‘Nameshouldbeinuppercaselettersonly.’;
}elseif($age<18){
Echo‘Ageshouldnotbelessthan18years.’;
}elseif(strcasecmp($nationality,‘Indian’)!=0){
Echo‘NationalityshouldbeIndian.’;
}else{
Echo‘Validationsuccessful.Voterdetails:<br>Name:‘.$name.’<br>Age:
‘.$age.’<br>Nationality:‘.$nationality;
}
?>
Q.2)Createyourowntransactionsdatasetandapplytheaboveprocessonyourdataset
Ans:
Importrandom
Importcsv
#Generaterandom transactiondata
Transactions=[]
Foriinrange(1,101):
Transaction_id=i
Transaction_date=f”2022-05-{random.randint(1,31):02d}”
Customer_id=random.randint(1,10)
Item_id=random.choice([“A”,“B”,“C”])
Item_price=round(random.uniform(10.0,100.0),2)
Quantity=random.randint(1,10)
Transactions.append([transaction_id,transaction_date,customer_id,item_id,item_price,
quantity])
#SavethedatatoaCSVfile
Withopen(‘transactions.csv’,‘w’,newline=’’)ascsvfile:
Writer=csv.writer(csvfile)
Writer.writerow([“TransactionID”,“TransactionDate”,“CustomerID”,“Item ID”,“Item Price”,
“Quantity”])
Fortransactionintransactions:
Writer.writerow(transaction)
Importpandasaspd
#ReadtheCSVfileintoaPandasDataFrame
Df=pd.read_csv(‘transactions.csv’)
#Convertthe“Item Price”columntonumerictype
Df[‘Item Price’]=pd.to_numeric(df[‘Item Price’])
#Calculatethesalesamountforeachtransaction
Df[‘Sales’]=df[‘Item Price’]*df[‘Quantity’]
#GroupthetransactionsbycustomerIDandcalculatethetotalsalesforeachcustomer
Total_sales=df.groupby(‘CustomerID’)[‘Sales’].sum().reset_index()
#Printtheresults
Print(total_sales)


@Slip-28

Q.1)WriteaPHPscriptusingAJAXconcept,tocheckusernameandpasswordarevalidor
Invalid(use
Databasetostoreusernameandpassword).
Ans:
Htmlfile
<!DOCTYPEhtml>
<html>
<head>
<title>Login</title>
<scriptsrc=https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js></script>
<script>
$(document).ready(function(){
$(“#login-form”).submit(function(event){
Event.preventDefault();
Varusername=$(“#username”).val();
Varpassword=$(“#password”).val();
$.ajax({
url:‘check_login.php’,
type:‘post’,
data:{username:username,password:password},
success:function(response){
if(response==“valid”){
window.location.href=“dashboard.php”;
//redirecttodashboard
}
Else{
Alert(“Invalidusernameorpassword”);
}
}
});
});
});
</script>
</head>
<body>
<h2>Login</h2>
<form id=”login-form”method=”post”>
<label>Username:</label>
<inputtype=”text”name=”username”id=”username”><br><br>
<label>Password:</label>
<inputtype=”password”name=”password”id=”password”><br><br>
<inputtype=”submit”value=”Login”>
</form>
</body>
</html>
Phpfileascheck_login.php
<?php
//Establishdatabaseconnection
$conn=mysqli_connect(‘localhost’,‘username’,‘password’,‘database_name’);
If(!$conn){
Die(‘Connectionfailed:‘.mysqli_connect_error());
}
//Getusernameandpasswordfrom AJAXrequest
$username=$_POST[‘username’];
$password=$_POST[‘password’];
//Querytheuserstablefortheenteredusernameandpassword
$sql=“SELECT*FROMusersWHEREusername=‘$username’ANDpassword=‘$password’”;
$result=mysqli_query($conn,$sql);
If(mysqli_num_rows($result)>0){
Echo“valid”;
}else{
Echo“invalid”;
}
//Closedatabaseconnection
Mysqli_close($conn);
?>
Q.2)BuildasimplelinearregressionmodelforCarDataset.
Ans:
From sklearn.linear_modelimportLinearRegression
Mileage=[[10],[20],[30],[40],[50],[60],[70],[80]]
Price=[24,19,17,13,10,7,5,2]
Reg=LinearRegression().fit(mileage,price)
Print(‘Intercept:’,reg.intercept_)
Print(‘Coefficient:’,reg.coef_[0])
New_mileage=[[25],[45],[65]]
Predicted_price=reg.predict(new_mileage)
Print(‘Predictedprices:’,predicted_price)


@Slip-29

Q.1)WriteaPHPscriptforthefollowing:Designaform toacceptanumberfrom theuser.
Perform theoperationsandshowtheresults.
1)FibonacciSeries.
2)Tofindsum ofthedigitsofthatnumber.
(Usetheconceptofselfprocessingpage.)
Ans:
<!DOCTYPEhtml>
<html>
<head>
<title>NumberOperations</title>
</head>
<body>
<h1>NumberOperations</h1>
<?php
//definevariablesandsettoemptyvalues
$num =$op=“”;
If($_SERVER[“REQUEST_METHOD”]==“POST”){
$num =test_input($_POST[“num”]);
$op=test_input($_POST[“op”]);
//perform operationbasedonuser’schoice
Switch($op){
Case“fib”:
$result=fibonacci($num);
Echo“<p>TheFibonacciseriesof$num numbersis:$result</p>”;
Break;
Case“sum”:
$result=sumOfDigits($num);
Echo“<p>Thesum ofdigitsin$num is:$result</p>”;
Break;
Default:
Echo“<p>Invalidoperationselected</p>”;
}
}
Functiontest_input($data){
$data=trim($data);
$data=stripslashes($data);
$data=htmlspecialchars($data);
Return$data;
}
Functionfibonacci($num){
$first=0;
$second=1;
$result=“”;
For($i=0;$i<$num;$i++){
$result.=$first.““;
$third=$first+$second;
$first=$second;
$second=$third;
}
Return$result;
}
FunctionsumOfDigits($num){
$sum =0;
While($num >0){
$digit=$num %10;
$sum +=$digit;
$num =(int)($num /10);
}
Return$sum;
}
?>
<form method=”post”action=”<?phpecho
htmlspecialchars($_SERVER[“PHP_SELF”]);?>”>
<labelfor=”num”>Enteranumber:</label>
<inputtype=”number”name=”num”id=”num”required>
<br><br>
<labelfor=”op”>Selectanoperation:</label>
<selectname=”op”id=”op”required>
<optionvalue=””>--Select--</option>
<optionvalue=”fib”>FibonacciSeries</option>
<optionvalue=”sum”>Sum ofDigits</option>
</select>
<br><br>
<inputtype=”submit”value=”Submit”>
</form>
</body>
</html>
Q.2)BuildalogisticregressionmodelforStudentScoreDataset.
Ans:
#Importnecessarylibraries
Importpandasaspd
From sklearn.linear_modelimportLogisticRegression
From sklearn.model_selectionimporttrain_test_split
From sklearn.metricsimportaccuracy_score
#Loadthedataset
Data=pd.read_csv(‘student_scores.csv’)
#Splitthedataintoinputandoutputvariables
X=data.iloc[:,:-1].values
Y=data.iloc[:,-1].values
#Splitthedataintotrainingandtestingsets
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=0)
#Createthelogisticregressionmodelandfitittothetrainingdata
Classifier=LogisticRegression()
Classifier.fit(X_train,y_train)
#Makepredictionsonthetestingset
Y_pred=classifier.predict(X_test)
#Evaluatethemodel’saccuracy
Accuracy=accuracy_score(y_test,y_pred)
Print(“Accuracy:”,accuracy)


@Slip-30

Q.1)CreateaXMLfilewhichgivesdetailsofbooksavailablein“Bookstore”from following
Categories.
1)Yoga
2)Story
3)Technical
Andelementsineachcategoryareinthefollowingformat
<Book>
<Book_Title>
--------------</Book_Title>
<Book_Author>---------------</Book_Author>
<Book_Price>
--------------</Book_Price>
</Book>
Savethefileas“Bookcategory.xml”
.
Ans:
<?xmlve<?xmlversion=”1.0”encoding=”UTF-8”?>
<Bookstore>
<Yoga>
<Book>
<Book_Title>LightonYoga</Book_Title>
<Book_Author>B.K.S.Iyengar</Book_Author>
<Book_Price>20.99</Book_Price>
</Book>
<Book>
<Book_Title>TheYogaBible</Book_Title>
<Book_Author>ChristinaBrown</Book_Author>
<Book_Price>15.50</Book_Price>
</Book>
</Yoga>
<Story>
<Book>
<Book_Title>TheAlchemist</Book_Title>
<Book_Author>PauloCoelho</Book_Author>
<Book_Price>12.99</Book_Price>
</Book>
<Book>
<Book_Title>TheDaVinciCode</Book_Title>
<Book_Author>DanBrown</Book_Author>
<Book_Price>14.75</Book_Price>
</Book>
</Story>
<Technical>
<Book>
<Book_Title>PythonforDataScienceHandbook</Book_Title>
<Book_Author>JakeVanderPlas</Book_Author>
<Book_Price>28.99</Book_Price>
</Book>
<Book>
<Book_Title>CrackingtheCodingInterview</Book_Title>
<Book_Author>GayleLaakmannMcDowell</Book_Author>
<Book_Price>23.50</Book_Price>
</Book>
</Technical>
</Bookstore>
Q.2)Createthedataset.transactions=[[‘eggs’,‘milk’,’bread’],[‘eggs’,‘apple’],[‘milk’,‘bread’],
[‘apple’,
‘milk’],[‘milk’,‘apple’,‘bread’]].
Convertthecategoricalvaluesintonumericformat.Applytheapriorialgorithm ontheabove
datasetto
Generatethefrequentitemsetsandassociationrules.
Ans:
Transactions=[[‘eggs’,‘milk’,‘bread’],[‘eggs’,‘apple’],[‘milk’,‘bread’],[‘apple’,‘milk’],[‘milk’,
‘apple’,‘bread’]]
#Createadictionarytomapitemstouniquenumericvalues
Item_to_num ={‘eggs’:1,‘milk’:2,‘bread’:3,‘apple’:4}
#Convertthecategoricalvaluesinthedatasettonumericvalues
Numeric_transactions=[]
Fortransactionintransactions:
Numeric_transaction=[item_to_num[item]foritem intransaction]
Numeric_transactions.append(numeric_transaction)
Print(numeric_transactions)
From mlxtend.frequent_patternsimportapriori,association_rules
#Generatefrequentitemsetswithaminimum supportof0.4
Frequent_itemsets=apriori(numeric_transactions,min_support=0.4,use_colnames=True)
#Generateassociationruleswithaminimum confidenceof0.7
Rules=association_rules(frequent_itemsets,metric=”confidence”,min_threshold=0.7)
Print(frequent_itemsets)
Print(rules)