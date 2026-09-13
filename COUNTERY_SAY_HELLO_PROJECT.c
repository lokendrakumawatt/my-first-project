/*
this code is talles the country nationality according to user input
this code is made for do welcome a perticular person according to theri 
nationality.
total country [195]
thank you!
*/

#include <stdio.h>
#include <string.h>

int main() {
    char country[250];

    printf("Enter your country name\n");
   fgets (country , sizeof(country) , stdin); 
   size_t len = strlen(country);
   if(len > 0 && country[len - 1] == '\n')
   {
    country [len - 1 ] = '\0';

   }
   if (strcmp(country, "America") == 0) {
        printf("Hello\n");
        return 0;
    }

    if (strcmp(country, "Afghanistan") == 0) {
        printf("سلام (Salam)\n");
        return 0;
    }

    if (strcmp(country, "Albania") == 0) {
        printf("Përshëndetje\n");
        return 0; 
    }

    if (strcmp(country, "Algeria") == 0) {
        printf("سلام (Salam)\n");
        return 0; 
    }
if (strcmp (country , "Andorra")== 0){
    printf("Hola\n");
    return 0;
}
if (strcmp (country, "Angola")== 0){
    printf("Olá\n");
    return 0;
}
 if (strcmp (country , "Antigua")== 0){
    printf("hello\n");
 }
 else if (strcmp (country , "Barbuda") == 0) {
    printf("hello\n");
    return 0;
 }
if (strcmp (country , "Argentina") == 0){
printf("hola\n");
return 0;
}
if(strcmp (country , "Armenia") == 0){
    printf("Բարեւ Ձեզ (Barev Dzez)\n");
    return 0;
}
if (strcmp (country, "Australia") == 0){
    printf("G'day\n");
    return 0;
}
if (strcmp (country , "Austria\n") == 0){
    printf("hallo\n");
    return 0;
}
if (strcmp (country , "Azerbaijan") == 0){
    printf("Salam\n");
    return 0 ;
}

if (strcmp (country , "Bahamas\n")== 0){
    printf("hello\n");
    return 0 ;
}
if (strcmp  (country , "Bahrain" )== 0){
    printf("مرحبا (Marhaba)\n");
    return 0;
}
if (strcmp  (country , "Bangladesh") == 0){
    printf("হ্যালো (Hyalo)\n");
return 0;
}
if (strcmp (country , "Barbados") == 0){
    printf("Hello\n");
    return 0;
}
if (strcmp (country , "Belarus") == 0){
    printf("Прывітанне (Pryvitannie)\n");
    return 0;
}
if (strcmp (country , "Belgium") == 0){
    printf("hallo\n");
    return 0;
}
if (strcmp  (country , "Belize")== 0){
    printf("hello\n");
    return 0;
}
if (strcmp (country , "Benin")== 0){
    printf("Bonjour\n");
    return 0;
}
if (strcmp (country ,  "Bhutan") == 0){
    printf("བཀྲིས་བདེ་ལེགས་བཟང་ (Kuzu Zangpo)");
    return 0;
}
if (strcmp (country , "Bolivia") == 0) {
    printf("hola\n");
    return 0;
}
if (strcmp (country , "Bosnia") == 0){
    printf("Zdravo\n");
}
else if (strcmp (country , "Herzegovina") == 0){
    printf("Zdravo\n");
    return 0;
}
 if (strcmp (country , "Botswana") == 0){
    printf("Dumela\n");
    return 0;
 }
 if (strcmp (country , "Brazil")== 0){
    printf("Olá\n");
    return 0;
 }
 if (strcmp (country ,"Brunei") == 0){
    printf("Selamat sejahtera\n");
    return 0;
 }
 if (strcmp (country, "Bulgaria") == 0){
    printf("Здравейте (Zdraveĭte)\n");
    return 0;
 }
 if (strcmp (country , "Burkina Faso") == 0){
    printf("Bonjour\n");
    return 0;
 }
 if (strcmp (country , "Burundi")== 0){
    printf("Bonjou\n");
    return 0;
 }
 if (strcmp (country , "Cabo Verde") == 0){
printf(" Olá\n");
return 0;
 }
 if (strcmp (country , "Cambodia") == 0){
    printf("សួស្ដី (Suo Sdei)\n");
    return 0;
 }
 if (strcmp (country , "Cameroon") == 0){
    printf("Bonjour\n");
    return 0;
 }
 if (strcmp (country , "Canada") == 0){
    printf("hello\n");
    return 0;
 }
 if (strcmp (country , "Central African Republic")== 0){
    printf("Bonjour\n");
    return 0;
 }
 if (strcmp (country , "Chad")== 0){
    printf("Bonjour\n");
    return 0 ;
 }
 if (strcmp (country , "Chile") == 0){
    printf("Hola\n");
    return 0 ;
 }
 if (strcmp (country , "China") == 0){
    printf("你好 (Nǐ hǎo)\n");
    return 0;
 }
 if (strcmp (country , "Colombia") == 0){
    printf("Hola\n");
    return 0;
 }
 if (strcmp (country , "Comoros") == 0){
    printf("Salama\n");
    return 0;
 }
 if (strcmp (country , "Congo") == 0){
    printf("Mbote\n");
    return 0;
 }
 if (strcmp (country , "Costa Rica") == 0){
    printf("Hola\n");
    return 0;
 }
 if (strcmp (country , "Côte d'Ivoire") == 0){
    printf("Bonjour\n");
    return 0;
 }
if (strcmp  (country , "Croatia")== 0){
    printf("Bok\n");
    return 0;
}
if (strcmp (country  , "Cuba")== 0 ){
    printf("Hola\n");
    return 0;
}
if (strcmp (country , "Cyprus") == 0){
    printf("Χαίρετε (Chairete)\n");
    return 0 ;
}
if (strcmp (country , "Czechia") == 0) {
    printf("Ahoj\n");
    return 0;
}
if (strcmp (country , "Denmark") == 0){
    printf("Hej\n");
    return 0;
}
if (strcmp (country , "Djibouti")== 0){
    printf("Salaam\n");
    return 0;
}
if (strcmp (country , "Dominica") == 0){
    printf("Hello\n");
    return 0;
}
if (strcmp (country , "Dominican Republic")== 0){
    printf("Hola\n");
    return 0;
}
 if (strcmp (country , "East Timor") == 0){
    printf("Olá\n");
    return 0;
 }
if (strcmp (country , "Ecuador") == 0){
printf("Hola\n");
return 0;
}
if (strcmp  (country , "Egypt")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
}
if (strcmp (country , "El Salvador") == 0){
    printf("Hola\n");
    return 0;
}
if (strcmp (country , "Equatorial Guinea") == 0){
    printf("Hola\n");
    return 0;
}
if (strcmp (country , "Eritrea")== 0){
    printf("ሰላም (Selam)\n");
    return 0;
}
if (strcmp (country , "Estonia")== 0){
    printf("Tere\n");
    return 0;
}
if (strcmp (country , "Swaziland") == 0){
    printf("Sawubona\n");
    return 0;
}
if (strcmp (country , "Ethiopia") == 0){
    printf("ሰላም (Selam");
return 0;
}
if (strcmp (country , "Fiji")== 0){
    printf("Bula\n");
    return 0;
}
if (strcmp  (country , "Finland")== 0){
    printf("Hei\n");
    return 0;
}
if (strcmp (country , "France")== 0){
    printf("Bonjour\n");
    return 0;
}
if (strcmp (country , "Gabon")== 0){
    printf("Bonjour\n");
    return 0;
}
if (strcmp , (country , "Gambia")== 0){
    printf("Hello\n");
    return 0;
}
if (strcmp , (country , "Georgia")== 0){
    printf("გამარჯობა (Gamarjoba)\n");
    return 0;
}
if (strcmp  (country , "Germany")== 0){
    printf("Hallo\n");
    return 0;
}
if (strcmp (country , "Ghana")== 0){
    printf("hello\n");
    return 0;
}
 if (strcmp (country , "Greece") == 0){
    printf(" Γει (Yia sou)\n");
    return 0;
 }
if (strcmp (country , "Grenada")== 0){
    printf("hello\n");
    return 0;
}
if (strcmp (country , "Guatemala") == 0){
    printf ("Hola\n");
    return 0;
}
if (strcmp (country , "Guinea")== 0){
    printf("Bonjour\n");
    return 0;
}
if (strcmp (country , "Guinea Bissau")== 0){
    printf(" Olá\n");
    return 0;
}
if (strcmp (country , "Guyana")== 0){
    printf("Hello\n");
    return 0;
}
if (strcmp (country , "Haiti")== 0){
    printf("Bonjou\n");
    return 0;
}
if (strcmp (country ,"Holy See")== 0){
    printf("Salve\n");
    return 0;
}
if (strcmp (country ,"Honduras")== 0){
    printf("Hola\n");
    return 0;
}
if (strcmp (country , "Hungary")== 0){
    printf("Helló");
    return 0;
}
if (strcmp (country , "Iceland")== 0){
    printf("Halló\n");
    return 0;
}
if (strcmp (country , "India")== 0){
    printf("नमस्ते (Namaste)\n");
    return 0;
}
if (strcmp (country ,"Indonesia")== 0){
    printf("Halo\n");
    return 0;
}
if (strcmp (country , "Iran")== 0){
    printf ("سلام (Salam)\n");
    return 0;
}
if (strcmp (country , "Iraq")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
}
if (strcmp (country ,"Ireland")== 0){
    printf("Dia dhuit\n");
    return 0;
}
if (strcmp (country , "Israel")== 0){
    printf("שלום (Shalom)\n");
    return 0;
}
if (strcmp (country , "Italy")== 0){
    printf("Ciao\n");
    return 0;
}
if (strcmp (country , "Jamaica")== 0){
    printf ("Hello\n");
    return 0;
}
if (strcmp (country , "Japan")== 0){
    printf("こんにちは (Konnichiwa)\n");
    return 0;
}
if (strcmp(country , "Jordan")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
}
if (strcmp (country , "Kazakhstan")== 0){
    printf("Сәлеметсіз бе (Sälemetsiz be)\n");
    return 0;
}
if (strcmp (country , "Kenya")== 0){
    printf("Jambo\n");
    return 0;
}
if (strcmp (country , "Kiribati")== 0){
    printf(" Mauri\n");
    return 0;
}
if (strcmp (country , "Kuwait")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
}
if (strcmp (country , "Kyrgyzstan")== 0){
    printf("Салам (Salam)\n");
    return 0;
}
if (strcmp (country , "Dubai")== 0){
    printf("Ahlan");
    return 0;
}
if (strcmp (country , "Laos")== 0){
    printf("ສະບາຍດີ (Sabaidi)\n");
    return 0;
}
if (strcmp (country ,"Latvia")== 0){
    printf("Sveiki\n");
    return 0;
}
if (strcmp  (country , "Lebanon" ) == 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
}
if (strcmp (country , "Lesotho")== 0){
    printf("Lumela\n");
    return 0;
}
if (strcmp (country , "Liberia")== 0){
    printf ("Hello\n");
    return 0;
}
if (strcmp (country , "Libya")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
}
if (strcmp (country , "Liechtenstein")== 0){
    printf("Hallo\n");
    return 0;
}
 if (strcmp (country , "Lithuania")== 0){
    printf("Labas\n");
    return 0;
 }
 if (strcmp (country , "Luxembourg")== 0){
    printf("Moien\n");
    return 0;
 }
 if (strcmp (country , "Madagascar")== 0){
    printf("Manao ahoana\n");
    return 0;
 }
 if (strcmp (country , "Malawi")== 0){
    printf("Moni\n");
    return 0;
 }
 if (strcmp (country , "Malaysia")== 0){
    printf("Selamat sejahtera\n");
    return 0;
 }
 if (strcmp (country ,"Maldives")== 0){
    printf("ހެލޯ (Hello)");
    return 0;
 }
 if (strcmp (country , "Mali")== 0 ){
    printf ("Bonjour\n");
    return 0;
 }
 if (strcmp (country , "Malta")== 0){
    printf("Bongu\n");
    return 0;
 }
 if (strcmp (country , "Marshall Islands")== 0){
    printf("Iakwe\n");
    return 0;
 }
 if (strcmp (country , "Mauritania")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
 }
 if (strcmp (country , "Mauritius")== 0){
    printf("Bonjour\n");
    return 0;
 }
 if (strcmp  (country ,"Mexico")==0) {
    printf("Hola\n");
    return 0;
 }
 if (strcmp (country , "Micronesia")== 0){
    printf("Kaselehlie\n");
    return 0;
 }
 if (strcmp (country , "Moldova")== 0){
    printf ("Salut\n");
    return 0;
 }
 if (strcmp (country , "Monaco")== 0){
    printf("Bonjour\n");
    return 0;
 }
 if (strcmp  (country , "Mongolia")== 0){
    printf("Сайн уу (Sain uu)\n");
    return 0;
 }
 if (strcmp (country , "Montenegro")== 0){
    printf("Zdravo\n");
    return 0;
 }
 if (strcmp (country , "Morocco")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
 }
 if (strcmp(country ,"Mozambique")== 0){
    printf("Olá\n");
    return 0;
 }
 if (strcmp (country , "Myanmar")== 0){
    printf("မင်္ဂလာပါ (Mingalaba)\n");
 }
 else if (strcmp (country , "Burma")== 0){
    printf("မင်္ဂလာပါ (Mingalaba)\n");
    return 0;
 }
 if (strcmp (country , "Namibia")== 0){
    printf("Hello\n");
    return 0;
 }
 if (strcmp (country , "Nauru")== 0){
    printf("Ekamawir Omo\n");
    return 0;
 }
 if (strcmp (country , "Nepal")== 0){
    printf("नमस्ते (Namaste)\n");
    return 0;
 }
 if (strcmp (country , "Netherlands")== 0){
    printf("Hallo\n");
    return 0;
 }
 if (strcmp (country , "NewZealand")== 0){
    printf("Kia ora\n");
    return 0;
 }
 if (strcmp (country , "Nicaragua")== 0){
    printf("Hola\n");
    return 0;
 }
 if (strcmp (country , "Niger")== 0){
    printf("Bonjour\n");
    return 0;
 }
 if (strcmp (country , "Nigeria")== 0){
    printf("Hello\n");
    return 0;
 }
 if (strcmp (country , "North Macedonia")== 0){
    printf("Здраво (Zdravo)\n");
    return 0;
 }
 if (strcmp(country , "Norway")== 0 ){
    printf("Hei\n");
    return 0;
 }
 if (strcmp (country , "Oman")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
 }
 if (strcmp (country , "Pakistan")== 0){
    printf("سلام (Salam)\n");
    return 0;
 }
 if (strcmp (country , "Palau")== 0){
    printf("Alii\n");
    return 0;
 }
 if (strcmp (country , "Panama")== 0){
    printf("Hola\n");
    return 0;
 }
 if (strcmp (country , "Papua New Guinea")== 0){
    printf("Halo\n");
    return 0;
 }
 if (strcmp (country , "Paraguay")== 0){
    printf("Hola\n");
    return 0;
 }
 if (strcmp (country , "Peru")== 0){
    printf("Hola\n");
    return 0;
 }
 if (strcmp (country , "Philippines")== 0){
    printf("Kamusta\n");
    return 0;
 }
 if (strcmp (country , "Poland")== 0){
    printf("Cześć\n");
    return 0;
 }
 if (strcmp (country , "Portugal")== 0){
    printf("Olá");
    return 0;
 }
 if (strcmp (country ,  "Qatar")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
 }
 if (strcmp (country , "Romania")== 0){
    printf("Salut\n");
    return 0;
 }
 if (strcmp (country , "Russia")== 0){
    printf("Здравствуйте (Zdravstvuyte)\n");
    return 0;
 }
 if (strcmp (country , "Rwanda")== 0){
    printf("Muraho\n");
    return 0;
 }
 if (strcmp (country , "Saint Kitts")== 0){
    printf("Hello\n");
 }
 else if(strcmp (country , "Nevis")== 0){
    printf("Hello\n");
    return 0;
 }
 if (strcmp (country ,"Saint Lucia")== 0){
    printf("Hello\n");
    return 0;
 }
 if (strcmp (country , "Saint Vincent")==0){
    printf("Hello\n");
 }
 else if (strcmp (country , "the Grenadines")== 0){
    printf("Hello\n");
    return 0;
 }
 if (strcmp (country , "Samoa")== 0){
    printf("Talofa\n");
    return 0;
 }
 if(strcmp (country , "San Marino")== 0){
    printf("Salve\n");
    return 0;
 }
 if (strcmp (country , "Sao Tome")== 0){
    printf("Olá\n");
 }
 else if (strcmp (country , "Principe")== 0){
    printf("Olá\n");
    return 0;
 }
 if (strcmp (country , "Saudi Arabia")== 0){
    printf("مرحبا (Marhaban)\n");
    return 0;
 }
 if (strcmp (country , "Senegal")== 0){
    printf("Bonjour\n");
    return 0;
 }
 if (strcmp (country , "Serbia")== 0){
    printf("Здраво (Zdravo)\n");
    return 0;
 }
 if (strcmp (country  , "Seychelles")== 0){
    printf("Bonzour\n");
    return 0;
 }
 if (strcmp (country , "Sierra Leone")== 0){
    printf("Hello\n");
    return 0;
 }
 if (strcmp (country , "Singapore")== 0){
    printf("Hello\n");
    return 0;
 }
 if (strcmp (country , "Slovakia")== 0){
    printf("Ahoj\n");
    return 0;
 }
 if (strcmp (country , "Slovenia")== 0){
    printf("Zdravo\n");
    return 0;
 }
 if (strcmp (country , "Solomon Islands")== 0){
    printf("Hello\n");
    return 0;
 }
if (strcmp (country , "Somalia")== 0){
    printf("Salaam alaykum\n");
    return 0;
}
if (strcmp (country , "South Africa")== 0){
    printf("Hello\n");
    return 0;
}
if (strcmp (country , "South Korea")== 0){
   printf("안녕하세요 (Annyeonghaseyo)\n");
return 0;
}
if (strcmp (country , "South Sudan")== 0){
   printf("Kuwaaja\n");
   return 0;
}
if (strcmp (country ,"Spain")== 0){
   printf("Hola\n");
   return 0;
}
if (strcmp (country , "Sri Lanka")== 0){
   printf("ආයුබෝවන් (Ayubowan)\n");
   return 0;
}
if (strcmp (country , "Sudan")== 0){
   printf("مرحبا (Marhaban)\n");
   return 0;
}
if (strcmp (country , "Suriname")== 0){
   printf("Hallo\n");
   return 0;
}
if (strcmp (country , "Sweden")== 0){
   printf("Hej\n");          // from here code is not working
   return 0;
}
if (strcmp (country , "Switzerland")== 0){
   printf("Hallo\n");
   return 0;
}
if (strcmp (country , "Syria")== 0){
   printf("مرحبا (Marhaban)\n");
   return 0;
}
if (strcmp (country , "Taiwan")== 0){
   printf("你好 (Nǐ hǎo)\n");
   return 0;
}
if (strcmp (country , "Tajikistan")== 0){
   printf("Салом (Salom)\n");
   return 0;
}
if (strcmp (country , "Tanzania")== 0){
   printf("Jambo\n");
   return 0;
}
if (strcmp (country , "Thailand")== 0){
   printf("สวัสดี (Sawasdee)\n");
   return 0;
}
if (strcmp (country ,"Togo")== 0){
   printf("Bonjour\n");
   return 0;
}
if (strcmp (country ,"Tonga")== 0){
   printf("Mālō e lele\n");
   return 0;
}
if (strcmp (country , "Trinidad")== 0){
   printf("Hello\n");
   return 0;
}
if (strcmp (country , "Tobago")== 0){
   printf("Hello\n");
   return 0;
}
if (strcmp (country , "Tunisia")== 0){
   printf ("مرحبا (Marhaban)\n");
   return 0;
}
if (strcmp (country ,"Turkey")== 0){
   printf("Merhaba\n");
   return 0;
}
if (strcmp (country , "Turkmenistan")== 0){
   printf(" Salam\n");
   return 0;
}
if (strcmp (country , "Tuvalu")== 0){
   printf("Talofa\n");
   return 0;
}
if (strcmp (country , " Uganda")== 0){
   printf("Hello\n");
   return 0;
}
if (strcmp (country , "Ukraine")== 0){
   printf("Привіт (Pryvit)\n");
   return 0;
}
if (strcmp (country , "United Arab Emirate")== 0){
   printf("مرحبا (Marhaban\n");
   
   
}
else if (strcmp (country , "UAE")== 0){
   printf("مرحبا (Marhaban\n");
   return 0;
}
if (strcmp (country , "United Kingdom")== 0){
   printf("Hello\n");

}
else if (strcmp (country , "UK")== 0){
   printf("Hello\n");
   return 0;
}
if ( strcmp (country , "United States")== 0){
   printf("Hello\n");

}
else if (strcmp (country , "United States")== 0){
   printf("Hello\n");
   return 0;
}
if (strcmp (country , "Uruguay")== 0){
   printf("Hola\n");
   return 0;
}
if (strcmp (country , "Uzbekistan")== 0){
   printf("Салом (Salom)\n");
   return 0;
}
if (strcmp (country , "Vanuatu")== 0){
   printf("Halo\n");
   return 0;
}
if (strcmp (country , "Vatican City")== 0){
   printf("Salve\n");
   return 0;
}
if (strcmp (country , "Venezuela")==0){
   printf("Hola\n");
   return 0;
}
if (strcmp (country , "Vietnam")== 0){
   printf("Xin chào\n");
   return 0;
}
if (strcmp (country , "Yemen")== 0){
printf("مرحبا (Marhaban\n");
return 0;
}
if (strcmp (country , "Zambia")== 0){
   printf("Hello\n");
   return 0;
}
if (strcmp (country , "Zimbabwe")== 0){
   printf("Hello\n");
   return 0;
}



    printf("Country not recognized\n"); 
return 0;
}
/*
 I am hoping that this is usefull code for us 
 thank you!
*/