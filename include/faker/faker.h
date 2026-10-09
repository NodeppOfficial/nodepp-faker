/*
 * Copyright 2023 The Nodepp Project Authors. All Rights Reserved.
 *
 * Licensed under the MIT (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://github.com/NodeppOfficial/nodepp/blob/main/LICENSE
 */

/*────────────────────────────────────────────────────────────────────────────*/

#include <nodepp/nodepp.h>

#ifndef NODEPP_FAKER_DATA
#define NODEPP_FAKER_DATA
#define NODEPP_BASE8  "0123456789abcdef"

/*────────────────────────────────────────────────────────────────────────────*/

namespace nodepp { namespace {

inline string_t FAKE_EMAIL_PREFFIX( ulong x ){ static ptr_t<string_t> out ({
    "gmail", "outlook", "hotmail", "yahoo", "onionmail", "protonmail", "yandex"
}); return out[x]; }

inline string_t FAKE_DOMAIN_SUFFIX( ulong x ){ static ptr_t<string_t> out ({
    "com", "net", "edu", "io", "xyz", "app", "ia", "gob", "org", "biz", "info" 
}); return out[x]; }

inline string_t FAKE_COUNTRY_CODE( ulong x ){ static ptr_t<string_t> out ({
    "AD", "AE", "AF", "AG", "AI", "AL", "AM", "AO", "AQ", "AR", "AS", "AT", 
    "AU", "AW", "AX", "AZ", "BA", "BB", "BD", "BE", "BF", "BG", "BH", "BI", 
    "BJ", "BL", "BM", "BN", "BO", "BQ", "BR", "BS", "BT", "BV", "BW", "BY", 
    "BZ", "CA", "CC", "CD", "CF", "CG", "CH", "CI", "CK", "CL", "CM", "CN", 
    "CO", "CR", "CU", "CV", "CW", "CX", "CY", "CZ", "DE", "DJ", "DK", "DM", 
    "DO", "DZ", "EC", "EE", "EG", "EH", "ER", "ES", "ET", "EU", "FI", "FJ", 
    "FK", "FM", "FO", "FR", "GA", "GB", "GD", "GE", "GF", "GG", "GH", "GI", 
    "GL", "GM", "GN", "GP", "GQ", "GR", "GS", "GT", "GU", "GW", "GY", "HK", 
    "HM", "HN", "HR", "HT", "HU", "ID", "IE", "IL", "IM", "IN", "IO", "IQ", 
    "IR", "IS", "IT", "JE", "JM", "JO", "JP", "KE", "KG", "KH", "KI", "KM", 
    "KN", "KP", "KR", "KW", "KY", "KZ", "LA", "LB", "LC", "LI", "LK", "LR", 
    "LS", "LT", "LU", "LV", "LY", "MA", "MC", "MD", "ME", "MF", "MG", "MH", 
    "MK", "ML", "MM", "MN", "MO", "MP", "MQ", "MR", "MS", "MT", "MU", "MV", 
    "MW", "MX", "MY", "MZ", "NA", "NC", "NE", "NF", "NG", "NI", "NL", "NO", 
    "NP", "NR", "NU", "NZ", "OM", "PA", "PE", "PF", "PG", "PH", "PK", "PL", 
    "PM", "PN", "PR", "PS", "PT", "PW", "PY", "QA", "RE", "RO", "RS", "RU", 
    "RW", "SA", "SB", "SC", "SD", "SE", "SG", "SH", "SI", "SJ", "SK", "SL", 
    "SM", "SN", "SO", "SR", "SS", "ST", "SV", "SX", "SY", "SZ", "TC", "TD", 
    "TF", "TG", "TH", "TJ", "TK", "TL", "TM", "TN", "TO", "TR", "TT", "TV", 
    "TW", "TZ", "UA", "UG", "UM", "US", "UY", "UZ", "VA", "VC", "VE", "VG", 
    "VI", "VN", "VU", "WF", "WS", "XK", "YE", "YT", "ZA", "ZM", "ZW"
}); return out[x]; }

inline string_t FAKE_COUNTRY_NAMES( ulong x ){ static ptr_t<string_t> out ({
    "Andorra", "United Arab Emirates", "Afghanistan", "Antigua and Barbuda", "Anguilla", 
    "Albania", "Armenia", "Angola", "Antarctica", "Argentina", "American Samoa", "Austria", 
    "Australia", "Aruba", "Åland Islands", "Azerbaijan", "Bosnia and Herzegovina", "Barbados", 
    "Bangladesh", "Belgium", "Burkina Faso", "Bulgaria", "Bahrain", "Burundi", "Benin", 
    "Saint Barthélemy", "Bermuda", "Brunei Darussalam", "Bolivia", "Bonaire, Sint Eustatius and Saba", 
    "Brazil", "Bahamas", "Bhutan", "Bouvet Island", "Botswana", "Belarus", "Belize", "Canada", 
    "Cocos (Keeling) Islands", "Congo", "Central African Republic", "Congo", "Switzerland", 
    "Côte D'Ivoire", "Cook Islands", "Chile", "Cameroon", "China", "Colombia", "Costa Rica", 
    "Cuba", "Cape Verde", "Curaçao", "Christmas Island", "Cyprus", "Czech Republic", "Germany", 
    "Djibouti", "Denmark", "Dominica", "Dominican Republic", "Algeria", "Ecuador", "Estonia", 
    "Egypt", "Western Sahara", "Eritrea", "Spain", "Ethiopia", "European Union", "Finland", "Fiji", 
    "Falkland Islands (Malvinas)", "Micronesia", "Faroe Islands", "France", "Gabon", "United Kingdom", 
    "Grenada", "Georgia", "French Guiana", "Guernsey", "Ghana", "Gibraltar", "Global", "Gambia", 
    "Guinea", "Guadeloupe", "Equatorial Guinea", "Greece", "South Georgia", "Guatemala", "Guam", 
    "Guinea-Bissau", "Guyana", "Hong Kong", "Heard Island and Mcdonald Islands", "Honduras", 
    "Croatia", "Haiti", "Hungary", "Indonesia", "Ireland", "Israel", "Isle of Man", "India", 
    "British Indian Ocean Territory", "Iraq", "Iran", "Iceland", "Italy", "Jersey", "Jamaica", 
    "Jordan", "Japan", "Kenya", "Kyrgyzstan", "Cambodia", "Kiribati", "Comoros", "Saint Kitts and Nevis", 
    "North Korea", "South Korea", "Kuwait", "Cayman Islands", "Kazakhstan", "Lao People's Democratic Republic", 
    "Lebanon", "Saint Lucia", "Liechtenstein", "Sri Lanka", "Liberia", "Lesotho", "Lithuania", 
    "Luxembourg", "Latvia", "Libya", "Morocco", "Monaco", "Moldova", "Montenegro", "Saint Martin (French Part)", 
    "Madagascar", "Marshall Islands", "Macedonia", "Mali", "Myanmar", "Mongolia", "Macao", 
    "Northern Mariana Islands", "Martinique", "Mauritania", "Montserrat", "Malta", "Mauritius", 
    "Maldives", "Malawi", "Mexico", "Malaysia", "Mozambique", "Namibia", "New Caledonia", "Niger", 
    "Norfolk Island", "Nigeria", "Nicaragua", "Netherlands", "Norway", "Nepal", "Nauru", "Niue", 
    "New Zealand", "Oman", "Panama", "Peru", "French Polynesia", "Papua New Guinea", "Philippines", 
    "Pakistan", "Poland", "Saint Pierre and Miquelon", "Pitcairn", "Puerto Rico", "Palestinian Territory", 
    "Portugal", "Palau", "Paraguay", "Qatar", "Réunion", "Romania", "Serbia", "Russia", "Rwanda", 
    "Saudi Arabia", "Solomon Islands", "Seychelles", "Sudan", "Sweden", "Singapore", 
    "Saint Helena, Ascension and Tristan Da Cunha", "Slovenia", "Svalbard and Jan Mayen", "Slovakia", 
    "Sierra Leone", "San Marino", "Senegal", "Somalia", "Suriname", "South Sudan", "Sao Tome and Principe", 
    "El Salvador", "Sint Maarten (Dutch Part)", "Syrian Arab Republic", "Swaziland", "Turks and Caicos Islands", 
    "Chad", "French Southern Territories", "Togo", "Thailand", "Tajikistan", "Tokelau", "Timor-Leste", "Turkmenistan", 
    "Tunisia", "Tonga", "Turkey", "Trinidad and Tobago", "Tuvalu", "Taiwan", "Tanzania", "Ukraine", "Uganda", 
    "United States Minor Outlying Islands", "United States", "Uruguay", "Uzbekistan", "Vatican City", 
    "Saint Vincent and The Grenadines", "Venezuela", "Virgin Islands, British", "Virgin Islands, U.S.", 
    "Viet Nam", "Vanuatu", "Wallis and Futuna", "Samoa", "Kosovo", "Yemen", "Mayotte", "South Africa", "Zambia", 
    "Zimbabwe"
}); return out[x]; }

inline string_t FAKE_FRUIT_NAMES( ulong x ){ static ptr_t<string_t> out ({
    "Acai", "Aceola", "Alfalfa Sprouts", "Apple", "Apricot", "Apricots", "Artichoke", "Asian Pear", 
    "Asparagus", "Atemoya", "Avocado", "Bamboo Shoots", "Banana", "Bean Sprouts", "Beans", 
    "Beets", "Belgian Endive", "Bell Peppers", "Bitter Melon", "Blackberries", "Blackberry", 
    "Blueberries", "Bok Choy", "Boniato", "Boysenberries", "Broccoflower", "Broccoli", 
    "Brussels Sprouts", "Cabbage", "Cactus Pear", "Camu Camu berry", "Cantaloupe", "Carambola", 
    "Carrots", "Casaba Melon", "Cauliflower", "Celery", "Chayote", "Cherimoya", "Cherries", 
    "Coconut", "Coconuts", "Collard Greens", "Corn", "Cranberries", "Cranberry", "Cucumber", 
    "Currents", "Dates", "Dried Plums", "Durian", "Eggplant", "Endive", "Escarole", "Feijoa", 
    "Fennel", "Fig", "Figs", "Garlic", "Goji berries", "Gooseberries", "Gooseberry", "Grapefruit", 
    "Grapes", "Green Beans", "Green Onions", "Greens", "Guava", "Hominy", "Honeydew Melon", 
    "Horned Melon", "Iceberg Lettuce", "Jackfruit", "Jerusalem Artichoke", "Jicama", "Kale", "Kiwi", 
    "Kiwifruit", "Kohlrabi", "Kumquat", "Leeks", "Lemon", "Lemons", "Lettuce", "Lima Beans", "Lime", 
    "Limes", "Longan", "Loquat", "Lucuma", "Lychee", "Madarins", "Malanga", "Mandarin Oranges", 
    "Mango", "Mangos", "Mangosteen", "Melon", "Mulberries", "Mulberry", "Mushrooms", "Napa", "Nectarine", 
    "Nectarines", "Okra", "Onion", "Orange", "Oranges", "Papaya", "Papayas", "Parsnip", "Passion Fruit", 
    "Peach", "Peaches", "Pear", "Pears", "Peas", "Peppers", "Persimmons", "Pineapple", "Plantains", 
    "Plum", "Plums", "Pomegranate", "Pomelo", "Potatoes", "Prickly Pear", "Prunes", "Pummelo", 
    "Pumpkin", "Quince", "Radicchio", "Radishes", "Raisins", "Raspberries", "Red Cabbage", "Rhubarb", 
    "Romaine Lettuce", "Rutabaga", "Shallots", "Snow Peas", "Spinach", "Sprouts", "Squash", 
    "Strawberries", "String Beans", "Sweet Potato", "Tangelo", "Tangerine", "Tangerines", "Tomatillo", 
    "Tomato", "Turnip", "Ugli Fruit", "Water Chestnuts", "Watercress", "Watermelon", "Waxed Beans", 
    "Yams", "Yellow Squash", "Yuca", "Zucchini Squash"    
}); return out[x]; }

inline string_t FAKE_BANK_NAMES( ulong x ){ static ptr_t<string_t> out ({
    "JPMorgan Chase & Co.", "Bank of America Corporation", "Citigroup Inc.", 
    "Wells Fargo & Company", "Goldman Sachs Group, Inc.", "Morgan Stanley", 
    "U.S. Bancorp", "PNC Financial Services Group, Inc.", "Truist Financial Corporation", 
    "Charles Schwab Corporation", "TD Bank, N.A.", "Capital One Financial Corporation", 
    "The Bank of New York Mellon Corporation", "BMO Harris Bank N.A.", 
    "Teachers Insurance and Annuity Association of America", "State Street Corporation", 
    "HSBC Bank USA", "UBS Group AG", "American Express Company", "Citizens Financial Group, Inc.", 
    "Fifth Third Bank, N.A.", "M&T Bank Corporation", "Ally Financial Inc.", 
    "KeyBank National Association", "Huntington National Bank", "Barclays Bank Delaware", 
    "USAA Federal Savings Bank", "State Farm Bank, F.S.B.", "MUFG Union Bank, N.A.", 
    "Ameriprise Financial, Inc.", "Northern Trust Corporation", "Regions Financial Corporation", 
    "Santander Bank, N.A.", "Royal Bank of Canada", "Discover Financial Services", 
    "Deutsche Bank Trust Company Americas", "Synchrony Financial", "First Citizens BancShares, Inc.", 
    "New York Community Bank", "Zions Bancorporation, N.A.", "Comerica Incorporated", "First Horizon Corporation", 
    "Popular, Inc.", "Synovus Financial Corp.", "Mizuho Bank (USA)", "East West Bancorp, Inc.", 
    "CIBC Bank USA", "TCF Financial Corporation", "Raymond James Financial, Inc.", 
    "BOK Financial Corporation", "Banesco"
}); return out[x]; }

inline string_t FAKE_BANK_ISSUERS( ulong x ){ static ptr_t<string_t> out ({
    "Visa", "Mastercard", "American Express"
}); return out[x]; }

inline string_t FAKE_CVV_FORMAT( ulong x ){ static ptr_t<string_t> out ({
    "@@@", "@@@", "@@@@" 
}); return out[x]; }

inline string_t FAKE_PAN_FORMAT( ulong x ){ static ptr_t<string_t> out ({
    "4@@@@@@@@@@@@@@@", "51@@@@@@@@@@@@@@", "52@@@@@@@@@@@@@@",
    "53@@@@@@@@@@@@@@", "54@@@@@@@@@@@@@@", "55@@@@@@@@@@@@@@",
    "222@@@@@@@@@@@@@", "223@@@@@@@@@@@@@", "224@@@@@@@@@@@@@",
    "225@@@@@@@@@@@@@", "226@@@@@@@@@@@@@", "227@@@@@@@@@@@@@",
    "228@@@@@@@@@@@@@", "229@@@@@@@@@@@@@", "23@@@@@@@@@@@@@@",
    "24@@@@@@@@@@@@@@", "25@@@@@@@@@@@@@@", "26@@@@@@@@@@@@@@",
    "270@@@@@@@@@@@@@", "271@@@@@@@@@@@@@", "2720@@@@@@@@@@@@",
    "34@@@@@@@@@@@@@" , "37@@@@@@@@@@@@@" 
}); return out[x]; }

inline string_t FAKE_COLOR_NAMES( ulong x ){ static ptr_t<string_t> out ({
    "azure"   , "black" , "blue"    , "cyan"     , "fuchsia", "gold"  , "green"     , "grey"  ,
    "indigo"  , "ivory" , "lavender", "lime"     , "magenta", "maroon", "mint green", "olive" ,
    "orange"  , "orchid", "pink"    , "plum"     , "purple" , "red"   , "salmon"    , "silver",
    "sky blue", "tan"   , "teal"    , "turquoise", "violet" , "white" , "yellow"
}); return out[x]; }

inline string_t FAKE_MONTH( ulong x ){ static ptr_t<string_t> out ({
    "January", "February", "March", "April", "May", "June", "July", 
    "August", "September", "October", "November", "December" 
}); return out[x]; }

inline string_t FAKE_WEEKDAY( ulong x ){ static ptr_t<string_t> out ({
    "Friday", "Monday", "Saturday", "Sunday", "Thursday", "Tuesday", "Wednesday" 
}); return out[x]; }

inline string_t FAKE_JOB_NAME( ulong x ){ static ptr_t<string_t> out ({
    "Academic librarian", "Accommodation manager", "Accountant, chartered", 
    "Accountant, chartered certified", "Accountant, chartered management", 
    "Accountant, chartered public finance", "Accounting technician", "Actor", 
    "Actuary", "Acupuncturist", "Administrator", "Administrator, arts", 
    "Administrator, charities/voluntary organisations", "Administrator, Civil Service", 
    "Administrator, education", "Administrator, local government", "Administrator, sports", 
    "Adult guidance worker", "Adult nurse", "Advertising account executive", "Advertising account planner", 
    "Advertising art director", "Advertising copywriter", "Advice worker", "Aeronautical engineer", 
    "Agricultural consultant", "Agricultural engineer", "Aid worker", "Air broker", "Air cabin crew", 
    "Air traffic controller", "Airline pilot", "Ambulance person", "Amenity horticulturist", 
    "Analytical chemist", "Animal nutritionist", "Animal technologist", "Animator", 
    "Applications developer", "Arboriculturist", "Archaeologist", "Architect", "Architectural technologist", 
    "Archivist", "Armed forces logistics/support/administrative officer", "Armed forces operational officer", 
    "Armed forces technical officer", "Armed forces training and education officer", "Art gallery manager", 
    "Art therapist", "Artist", "Arts administrator", "Arts development officer", "Associate Professor", 
    "Astronomer", "Audiological scientist", "Automotive engineer", "Banker", "Barista", "Barrister", 
    "Barrister's clerk", "Best boy", "Biochemist, clinical", "Biomedical engineer", "Biomedical scientist", 
    "Bonds trader", "Bookseller", "Brewing technologist", "Broadcast engineer", "Broadcast journalist", 
    "Broadcast presenter", "Building control surveyor", "Building services engineer", "Building surveyor", 
    "Buyer, industrial", "Buyer, retail", "Cabin crew", "Call centre manager", "Camera operator", 
    "Careers adviser", "Careers information officer", "Cartographer", "Catering manager", "Ceramics designer", 
    "Charity fundraiser", "Charity officer", "Chartered accountant", "Chartered certified accountant", 
    "Chartered legal executive (England and Wales)", "Chartered loss adjuster", "Chartered management accountant", 
    "Chartered public finance accountant", "Chemical engineer", "Chemist, analytical", "Chief Executive Officer", 
    "Chief Financial Officer", "Chief Marketing Officer", "Chief of Staff", "Chief Operating Officer", 
    "Chief Strategy Officer", "Chief Technology Officer", "Child psychotherapist", "Chiropodist", "Chiropractor", 
    "Civil engineer, consulting", "Civil engineer, contracting", "Civil Service administrator", 
    "Civil Service fast streamer", "Claims inspector/assessor", "Clinical biochemist", "Clinical cytogeneticist", 
    "Clinical embryologist", "Clinical molecular geneticist", "Clinical psychologist", "Clinical research associate", 
    "Clinical scientist, histocompatibility and immunogenetics", "Clothing/textile technologist", 
    "Colour technologist", "Commercial art gallery manager", "Commercial horticulturist", 
    "Commercial/residential surveyor", "Commissioning editor", "Communications engineer", 
    "Community arts worker", "Community development worker", "Community education officer", 
    "Community pharmacist", "Company secretary", "Comptroller", "Computer games developer", 
    "Conference centre manager", "Conservation officer, historic buildings", "Conservation officer, nature", 
    "Conservator, furniture", "Conservator, museum/gallery", "Consulting civil engineer", 
    "Contracting civil engineer", "Contractor", "Control and instrumentation engineer", "Copy", 
    "Copywriter, advertising", "Corporate investment banker", "Corporate treasurer", 
    "Counselling psychologist", "Counsellor", "Curator", "Customer service manager", "Cytogeneticist", 
    "Dance movement psychotherapist", "Dancer", "Data processing manager", "Data scientist", 
    "Database administrator", "Dealer", "Dentist", "Designer, blown glass/stained glass", 
    "Designer, ceramics/pottery", "Designer, exhibition/display", "Designer, fashion/clothing", 
    "Designer, furniture", "Designer, graphic", "Designer, industrial/product", "Designer, interior/spatial", 
    "Designer, jewellery", "Designer, multimedia", "Designer, television/film set", "Designer, textile", 
    "Development worker, community", "Development worker, international aid", "Diagnostic radiographer", 
    "Dietitian", "Diplomatic Services operational officer", "Dispensing optician", "Doctor, general practice", 
    "Doctor, hospital", "Dramatherapist", "Drilling engineer", "Early years teacher", "Ecologist", "Economist", 
    "Editor, commissioning", "Editor, film/video", "Editor, magazine features", "Editorial assistant", 
    "Education administrator", "Education officer, community", "Education officer, environmental", 
    "Education officer, museum", "Educational psychologist", "Electrical engineer", "Electronics engineer", 
    "Embryologist, clinical", "Emergency planning/management officer", "Energy engineer", "Energy manager", 
    "Engineer, aeronautical", "Engineer, agricultural", "Engineer, automotive", "Engineer, biomedical", 
    "Engineer, broadcasting (operations)", "Engineer, building services", "Engineer, chemical", 
    "Engineer, civil (consulting)", "Engineer, civil (contracting)", "Engineer, communications", 
    "Engineer, control and instrumentation", "Engineer, drilling", "Engineer, electrical", 
    "Engineer, electronics", "Engineer, energy", "Engineer, land", "Engineer, maintenance", 
    "Engineer, maintenance (IT)", "Engineer, manufacturing", "Engineer, manufacturing systems", 
    "Engineer, materials", "Engineer, mining", "Engineer, petroleum", "Engineer, production", 
    "Engineer, site", "Engineer, structural", "Engineer, technical sales", "Engineer, water", 
    "Engineering geologist", "English as a foreign language teacher", "English as a second language teacher", 
    "Environmental consultant", "Environmental education officer", "Environmental health practitioner", 
    "Environmental manager", "Equality and diversity officer", "Equities trader", "Ergonomist", "Estate agent", 
    "Estate manager/land agent", "Event organiser", "Exercise physiologist", "Exhibition designer", 
    "Exhibitions officer, museum/gallery", "Facilities manager", "Farm manager", "Fashion designer", 
    "Fast food restaurant manager", "Field seismologist", "Field trials officer", "Film/video editor", 
    "Financial adviser", "Financial controller", "Financial manager", "Financial planner", 
    "Financial risk analyst", "Financial trader", "Fine artist", "Firefighter", "Fish farm manager",
    "Fisheries officer", "Fitness centre manager", "Food technologist", "Forensic psychologist", 
    "Forensic scientist", "Forest/woodland manager", "Freight forwarder", "Furniture conservator/restorer", 
    "Furniture designer", "Further education lecturer", "Futures trader", "Gaffer", "Games developer", 
    "Garment/textile technologist", "General practice doctor", "Geneticist, molecular", "Geochemist", 
    "Geographical information systems officer", "Geologist, engineering", "Geologist, wellsite", 
    "Geophysical data processor", "Geophysicist/field seismologist", "Geoscientist", "Glass blower/designer", 
    "Government social research officer", "Graphic designer", "Haematologist", "Health and safety adviser", 
    "Health and safety inspector", "Health physicist", "Health promotion specialist", "Health service manager",
    "Health visitor", "Herbalist", "Heritage manager", "Herpetologist", "Higher education careers adviser",
    "Higher education lecturer", "Historic buildings inspector/conservation officer", "Holiday representative", 
    "Homeopath", "Horticultural consultant", "Horticultural therapist", "Horticulturist, amenity", 
    "Horticulturist, commercial", "Hospital doctor", "Hospital pharmacist", "Hotel manager", 
    "Housing manager/officer", "Human resources officer", "Hydrogeologist", "Hydrographic surveyor", 
    "Hydrologist", "Illustrator", "Immigration officer", "Immunologist", "Industrial buyer", 
    "Industrial/product designer", "Information officer", "Information systems manager", 
    "Insurance account manager", "Insurance broker", "Insurance claims handler", "Insurance risk surveyor", 
    "Insurance underwriter", "Intelligence analyst", "Interior and spatial designer", 
    "International aid/development worker", "Interpreter", "Investment analyst", "Investment banker, corporate", 
    "Investment banker, operational", "IT consultant", "IT sales professional", 
    "IT technical support officer", "IT trainer", "Jewellery designer", "Journalist, broadcasting", 
    "Journalist, magazine", "Journalist, newspaper", "Land", "Land/geomatics surveyor", 
    "Landscape architect", "Lawyer", "ninja", "Learning disability nurse", "Learning mentor", 
    "Lecturer, further education", "Lecturer, higher education", "Legal executive", "Legal secretary", 
    "Leisure centre manager", "Lexicographer", "Librarian, academic", "Librarian, public", 
    "Licensed conveyancer", "Lighting technician, broadcasting/film/video", "Lobbyist", "Local government officer", 
    "Location manager", "Logistics and distribution manager", "Loss adjuster, chartered", 
    "Magazine features editor", "Magazine journalist", "Maintenance engineer", "Make", "Management consultant", 
    "Manufacturing engineer", "Manufacturing systems engineer", "Marine scientist", "Market researcher", 
    "Marketing executive", "Materials engineer", "Mechanical engineer", "Media buyer", "Media planner", 
    "Medical illustrator", "Medical laboratory scientific officer", "Medical physicist", 
    "Medical sales representative", "Medical secretary", "Medical technical officer", "Mental health nurse", 
    "Merchandiser, retail", "Merchant navy officer", "Metallurgist", "Meteorologist", 
    "Microbiologist", "Midwife", "Minerals surveyor", "Mining engineer", "Mudlogger", "Multimedia programmer", 
    "Multimedia specialist", "Museum education officer", "Museum/gallery conservator", 
    "Museum/gallery curator", "Museum/gallery exhibitions officer", "Music therapist", 
    "Music tutor", "Musician", "Nature conservation officer", "Naval architect", "Network engineer", 
    "Neurosurgeon", "Newspaper journalist", "Nurse, adult", "Nurse, children's", 
    "Nurse, learning disability", "Nurse, mental health", "Nutritional therapist", 
    "Occupational hygienist", "Occupational psychologist", "Occupational therapist", "Oceanographer", 
    "Office manager", "Oncologist", "Operational investment banker", "Operational researcher", 
    "Operations geologist", "Ophthalmologist", "Optician, dispensing", "Optometrist", "Orthoptist", 
    "Osteopath", "Outdoor activities/education manager", "Paediatric nurse", "Paramedic", 
    "Passenger transport manager", "Patent attorney", "Patent examiner", "Pathologist", 
    "Pension scheme manager", "Pensions consultant", "Personal assistant", "Personnel officer", 
    "Petroleum engineer", "Pharmacist, community", "Pharmacist, hospital", "Pharmacologist", "Photographer", 
    "Physicist, medical", "Physiological scientist", "Physiotherapist", "Phytotherapist", "Pilot, airline", 
    "Planning and development surveyor", "Plant breeder/geneticist", "Podiatrist", "Police officer", 
    "Politician's assistant", "Presenter, broadcasting", "Press photographer", "Press sub", "Primary school teacher", 
    "Print production planner", "Printmaker", "Prison officer", "Private music teacher", "Probation officer", 
    "Producer, radio", "Producer, television/film/video", "Product designer", "Product manager", 
    "Product/process development scientist", "Production assistant, radio", "Production assistant, television", 
    "Production designer, theatre/television/film", "Production engineer", "Production manager", "Professor Emeritus", 
    "Programme researcher, broadcasting/film/video", "Programmer, applications", "Programmer, multimedia", 
    "Programmer, systems", "Proofreader", "Psychiatric nurse", "Psychiatrist", "Psychologist, clinical", 
    "Psychologist, counselling", "Psychologist, educational", "Psychologist, forensic", "Psychologist, occupational", 
    "Psychologist, prison and probation services", "Psychologist, sport and exercise", "Psychotherapist", 
    "Psychotherapist, child", "Psychotherapist, dance movement", "Public affairs consultant", "Public house manager", 
    "Public librarian", "Public relations account executive", "Public relations officer", "Publishing copy", 
    "Publishing rights manager", "Purchasing manager", "Quality manager", "Quantity surveyor", "Quarry manager", 
    "Race relations officer", "Radiation protection practitioner", "Radio broadcast assistant", "Radio producer", 
    "Radiographer, diagnostic", "Radiographer, therapeutic", "Ranger/warden", "Records manager", 
    "Recruitment consultant", "Recycling officer", "Regulatory affairs officer", "Research officer, government", 
    "Research officer, political party", "Research officer, trade union", "Research scientist (life sciences)", 
    "Research scientist (maths)", "Research scientist (medical)", "Research scientist (physical sciences)", 
    "Restaurant manager", "Restaurant manager, fast food", "Retail banker", "Retail buyer", "Retail manager", 
    "Retail merchandiser", "Risk analyst", "Risk manager", "Runner, broadcasting/film/video", 
    "Rural practice surveyor", "Sales executive", "Sales professional, IT", "Sales promotion account executive", 
    "Science writer", "Scientific laboratory technician", "Scientist, audiological", "Scientist, biomedical", 
    "Scientist, clinical (histocompatibility and immunogenetics)", "Scientist, forensic", "Scientist, marine", 
    "Scientist, physiological", "Scientist, product/process development", "Scientist, research (life sciences)", 
    "Scientist, research (maths)", "Scientist, research (medical)", "Scientist, research (physical sciences)", 
    "Scientist, water quality", "Secondary school teacher", "Secretary/administrator", "Secretary, company", 
    "Seismic interpreter", "Senior tax professional/tax inspector", "Set designer", "Ship broker", "Site engineer", 
    "Social research officer, government", "Social researcher", "Social worker", "Software engineer", 
    "Soil scientist", "Solicitor", "Solicitor, Scotland", "Sound technician, broadcasting/film/video", 
    "Special educational needs teacher", "Special effects artist", "Speech and language therapist", 
    "Sport and exercise psychologist", "Sports administrator", "Sports coach", "Sports development officer", 
    "Sports therapist", "Stage manager", "Statistician", "Structural engineer", "Sub", "Surgeon", 
    "Surveyor, building", "Surveyor, building control", "Surveyor, commercial/residential", 
    "Surveyor, hydrographic", "Surveyor, insurance", "Surveyor, land/geomatics", "Surveyor, minerals", 
    "Surveyor, mining", "Surveyor, planning and development", "Surveyor, quantity", "Surveyor, rural practice", 
    "Systems analyst", "Systems developer", "Tax adviser", "Tax inspector", "Teacher, adult education", 
    "Teacher, early years/pre", "Teacher, English as a foreign language", "Teacher, music", "Teacher, primary school", 
    "Teacher, secondary school", "Teacher, special educational needs", "Teaching laboratory technician", 
    "Technical author", "Technical brewer", "Technical sales engineer", "TEFL teacher", "Telecommunications researcher", 
    "Television camera operator", "Television floor manager", "Television production assistant", 
    "Television/film/video producer", "Textile designer", "Theatre director", "Theatre manager", 
    "Theatre stage manager", "Theme park manager", "Therapeutic radiographer", "Therapist, art", 
    "Therapist, drama", "Therapist, horticultural", "Therapist, music", "Therapist, nutritional", 
    "Therapist, occupational", "Therapist, speech and language", "Therapist, sports", "Tour manager", 
    "Tourism officer", "Tourist information centre manager", "Town planner", "Toxicologist", "Trade mark attorney", 
    "Trade union research officer", "Trading standards officer", "Training and development officer", 
    "Translator", "Transport planner", "Travel agency manager", "Tree surgeon", "Veterinary surgeon", 
    "Video editor", "Visual merchandiser", "Volunteer coordinator", "Warden/ranger", "Warehouse manager", 
    "Waste management officer", "Water engineer", "Water quality scientist", "Web designer", "Wellsite geologist", 
    "Writer", "Youth worker"
}); return out[x]; }

inline string_t FAKE_USERNAME( ulong x ){ static ptr_t<string_t> out ({
    "alpha",       "nebula",       "phantom",      "blaze",        "frost",        "ember",       "nova",
    "zenith",      "cypher",       "vortex",       "onyx",         "lunar",        "solstice",    "orion",
    "quantum",     "echo",         "raven",        "sable",        "titan",        "zen",         "mystic",
    "iron",        "neon",         "cosmic",       "silver",       "shadow",       "chaos",       "pixel",
    "viper",       "dusk",         "solar",        "midnight",     "storm",        "crimson",     "azure",
    "jade",        "ember",        "pyro",         "zephyr",       "hollow",       "spectre",     "void",
    "luminous",    "inferno",      "chronos",      "nighthawk",    "obsidian",     "phoenix",     "serpent",
    "wraith",      "tempest",      "astral",       "hyper",        "cobalt",       "raptor",      "vivid",
    "zenith",      "lunar",        "scarlet",      "polar",        "sapphire",     "thunder",     "binary",
    "cipher",      "dynamo",       "eclipse",      "fable",        "glitch",       "harbinger",   "infinity",
    "jester",      "karma",        "legend",       "mirage",       "nimbus",       "overdrive",   "prism",
    "quasar",      "rhapsody",     "sentry",       "tundra",       "umbra",        "vanguard",    "wanderer",
    "xenon",       "yearning",     "zeal",         "alchemy",      "banshee",      "celestial",   "doppel",
    "enigma",      "fractal",      "gossamer",     "hologram",     "illusive",     "jubilee",     "kaleido",
    "lagoon",      "melody",       "nectar",       "opal",         "paradox",      "quill",       "rune",
    "sable",       "talisman",     "utopia",       "velvet",       "whisper",      "xero",        "yonder",
    "zodiac",      "aether",       "blitz",        "cascade",      "drift",        "ethereal",    "flare",
    "glimmer",     "horizon",      "iridescent",   "jupiter",      "kismet",       "labyrinth",   "moonlight",
    "nebula",      "oculus",       "pandora",      "quicksilver",  "radiant",      "stardust",    "triton",
    "unity",       "vapor",        "wildcard",     "xylo",         "yeti",         "zeppelin",    "arcadia",
    "breeze",      "cipher",       "dusk",         "elysium",      "fable",        "grove",       "halcyon",
    "icarus",      "jade",         "kraken",       "lyric",        "mystique",     "nimbus",      "obelisk",
    "perseus",     "quark",        "rhapsody",     "siren",        "titan",        "umbra",       "vortex",
    "wisp",        "xenith",       "yara",         "zinnia",       "aurora",       "basilisk",    "crescent",
    "drifter",     "effigy",       "fury",         "goblin",       "hydra",        "illusion",    "juniper",
    "krypton",     "lumen",        "maelstrom",    "nexus",        "oracle",       "proteus",     "quasar",
    "rune",        "selene",       "tundra",       "valkyrie",     "warlock",      "xenon",       "yeti",
    "zodiac",      "aegis",        "brontide",     "chimera",      "dahlia",       "exodus",      "fae",
    "griffin",     "hades",        "isle",         "jupiter",      "kelpie",       "lore",        "mercury",
    "nyx",         "osiris",       "pantheon",     "quixote",      "relic",        "sphinx",      "thor",
    "uranus",      "vulcan",       "wraith",       "xena",         "yuki",         "zephyrus",    "albatross",
    "briar",       "cobalt",       "desire",       "elysian",      "feral",        "gargoyle",    "hunter",
    "incognito",   "jett",         "kestrel",      "lycan",        "mimic",        "nix",         "odyssey",
    "pegasus",     "windwalker",   "nightblade",   "stormrider",   "skythief",     "shadowfox",   "ironclaw",
    "frostveil",   "emberheart",   "moonshade",    "duskrider",    "silverfang",   "voidseer",    "starweaver",
    "soulforge",   "riftwalker",   "thornspire",   "dreamhunter",  "ravencrest",   "voidspark",   "glimmerfall",
    "pyrewind",    "ghostbloom",   "crystalbane",  "thunderhoof",  "ashthorn",     "frostspire",  "netherwing",
    "sablethorn",  "wildshade",    "snowspire",    "dragonbinder", "runekeeper",   "darkthorn",   "sunflare",
    "voidshard",   "ironroot",     "shadowveil",   "frostgaze",    "emberthorn",   "stormspark",  "skyshard",
    "nightspire",  "windhymn",     "obsidianfang", "moonshard",    "duskspire",    "soulspark",   "thunderfall",
    "shadowgleam", "frostthorn",   "starflare",    "netherveil",   "voidrift",     "sunspire",    "ashspark",
    "thornflare",  "ironshard",    "stormveil",    "ghostspire",   "emberflare",   "duskshard",   "moondrift",
    "skybinder",   "wildspark",    "darkflare",    "soulspire",    "frostvein",    "shadowspark", "pyrespire",
    "voidthorn",   "sunshard",     "stormrift",    "nightgleam",   "thundershard", "ashveil",     "netherspark",
    "starspire",   "glimmerthorn", "ironveil",     "windspark",    "emberdrift",   "soulshard",   "frostspark",
    "voidflare",   "shadowspire",  "duskthorn",    "thornveil",    "stormspire",   "moonspark",   "wildthorn",
    "ghostshard",  "sunspark",     "pyrethorn",    "ashspire",     "netherflare",  "starveil",    "ironspire",
    "windshard",   "duskspark",    "voidspire",    "shadowflare",  "frostspire",   "emberspark",  "soulflare"
}); return out[x]; }

inline string_t FAKE_FEMALE_FIRST_NAME( ulong x ) { static ptr_t<string_t> out ({
    "April",      "Abigail",   "Adriana",   "Adrienne",   "Aimee",     "Alejandra", "Alexa",     "Alexandra",
    "Alexandria", "Alexis",    "Alice",     "Alicia",     "Alisha",    "Alison",    "Allison",   "Alyssa",
    "Amanda",     "Amber",     "Amy",       "Ana",        "Andrea",    "Angel",     "Angela",    "Angelica",
    "Angie",      "Anita",     "Ann",       "Anna",       "Anne",      "Annette",   "Ariana",    "Ariel",
    "Ashlee",     "Ashley",    "Audrey",    "Autumn",     "Bailey",    "Barbara",   "Becky",     "Belinda",
    "Beth",       "Bethany",   "Betty",     "Beverly",    "Bianca",    "Bonnie",    "Brandi",    "Brandy",
    "Breanna",    "Brenda",    "Briana",    "Brianna",    "Bridget",   "Brittany",  "Brittney",  "Brooke",
    "Caitlin",    "Caitlyn",   "Candace",   "Candice",    "Carla",     "Carly",     "Carmen",    "Carol",
    "Caroline",   "Carolyn",   "Carrie",    "Casey",      "Cassandra", "Cassidy",   "Cassie",    "Catherine",
    "Cathy",      "Charlene",  "Charlotte", "Chelsea",    "Chelsey",   "Cheryl",    "Cheyenne",  "Chloe",
    "Christie",   "Christina", "Christine", "Christy",    "Cindy",     "Claire",    "Claudia",   "Colleen",
    "Connie",     "Courtney",  "Cristina",  "Crystal",    "Cynthia",   "Daisy",     "Dana",      "Danielle",
    "Darlene",    "Dawn",      "Deanna",    "Debbie",     "Deborah",   "Debra",     "Denise",    "Desiree",
    "Destiny",    "Diamond",   "Diana",     "Diane",      "Dominique", "Donna",     "Doris",     "Dorothy",
    "Ebony",      "Eileen",    "Elaine",    "Elizabeth",  "Ellen",     "Emily",     "Emma",      "Erica",
    "Erika",      "Erin",      "Evelyn",    "Faith",      "Felicia",   "Frances",   "Gabriela",  "Gabriella",
    "Gabrielle",  "Gail",      "Gina",      "Glenda",     "Gloria",    "Grace",     "Gwendolyn", "Hailey",
    "Haley",      "Hannah",    "Hayley",    "Heather",    "Heidi",     "Helen",     "Holly",     "Isabel",
    "Isabella",   "Jackie",    "Jaclyn",    "Jacqueline", "Jade",      "Jaime",     "Jamie",     "Jane",
    "Janet",      "Janice",    "Jasmin",    "Jasmine",    "Jean",      "Jeanette",  "Jeanne",    "Jenna",
    "Jennifer",   "Jenny",     "Jessica",   "Jill",       "Jillian",   "Jo",        "Joan",      "Joann",
    "Joanna",     "Joanne",    "Jocelyn",   "Jodi",       "Jody",      "Jordan",    "Joy",       "Joyce",
    "Judith",     "Judy",      "Julia",     "Julie",      "Kaitlin",   "Kaitlyn",   "Kara",      "Karen",
    "Kari",       "Karina",    "Karla",     "Katelyn",    "Katherine", "Kathleen",  "Kathryn",   "Kathy",
    "Katie",      "Katrina",   "Kayla",     "Kaylee",     "Kelli",     "Kellie",    "Kelly",     "Kelsey",
    "Kendra",     "Kerri",     "Kerry",     "Kiara",      "Kim",       "Kimberly",  "Kirsten",   "Krista",
    "Kristen",    "Kristi",    "Kristie",   "Kristin",    "Kristina",  "Kristine",  "Kristy",    "Krystal",
    "Kylie",      "Lacey",     "Latasha",   "Latoya",     "Laura",     "Lauren",    "Laurie",    "Leah",
    "Leslie",     "Linda",     "Lindsay",   "Lindsey",    "Lisa",      "Loretta",   "Lori",      "Lorraine",
    "Lydia",      "Lynn",      "Mackenzie", "Madeline",   "Madison",   "Makayla",   "Mallory",   "Mandy",
    "Marcia",     "Margaret",  "Maria",     "Mariah",     "Marie",     "Marilyn",   "Marisa",    "Marissa",
    "Martha",     "Mary",      "Maureen",   "Mckenzie",   "Meagan",    "Megan",     "Meghan",    "Melanie",
    "Melinda",    "Melissa",   "Melody",    "Mercedes",   "Meredith",  "Mia",       "Michaela",  "Michele",
    "Michelle",   "Mikayla",   "Mindy",     "Miranda",    "Misty",     "Molly",     "Monica",    "Monique",
    "Morgan",     "Nancy",     "Natalie",   "Natasha",    "Nichole",   "Nicole",    "Nina",      "Norma",
    "Olivia",     "Paige",     "Pam",       "Pamela",     "Patricia",  "Patty",     "Paula",     "Peggy",
    "Penny",      "Phyllis",   "Priscilla", "Rachael",    "Rachel",    "Raven",     "Rebecca",   "Rebekah",
    "Regina",     "Renee",     "Rhonda",    "Rita",       "Roberta",   "Robin",     "Robyn",     "Rose",
    "Ruth",       "Sabrina",   "Sally",     "Samantha",   "Sandra",    "Sandy",     "Sara",      "Sarah",
    "Savannah",   "Selena",    "Shannon",   "Shari",      "Sharon",    "Shawna",    "Sheena",    "Sheila",
    "Shelby",     "Shelia",    "Shelley",   "Shelly",     "Sheri",     "Sherri",    "Sherry",    "Sheryl",
    "Shirley",    "Sierra",    "Sonia",     "Sonya",      "Sophia",    "Stacey",    "Stacie",    "Stacy",
    "Stefanie",   "Stephanie", "Sue",       "Summer",     "Susan",     "Suzanne",   "Sydney",    "Sylvia",
    "Tabitha",    "Tamara",    "Tami",      "Tammie",     "Tammy",     "Tanya",     "Tara",      "Tasha",
    "Taylor",     "Teresa",    "Terri",     "Terry",      "Theresa",   "Tiffany",   "Tina",      "Toni",
    "Tonya",      "Tracey",    "Traci",     "Tracie",     "Tracy",     "Tricia",    "Valerie",   "Vanessa",
    "Veronica",   "Vicki",     "Vickie",    "Victoria",   "Virginia",  "Wanda",     "Wendy",     "Whitney",
    "Yesenia",    "Yolanda",   "Yvette",    "Yvonne",     "Zoe"
}); return out[x]; }

inline string_t FAKE_MALE_FIRST_NAME( ulong x ) { static ptr_t<string_t> out ({
    "Aaron",    "Adam",      "Adrian",   "Alan",      "Albert",   "Alec",     "Alejandro",  "Alex",        "Alexander",
    "Alexis",   "Alfred",    "Allen",    "Alvin",     "Andre",    "Andres",   "Andrew",     "Angel",       "Anthony",
    "Antonio",  "Arthur",    "Austin",   "Barry",     "Benjamin", "Bernard",  "Bill",       "Billy",       "Blake",
    "Bob",      "Bobby",     "Brad",     "Bradley",   "Brady",    "Brandon",  "Brendan",    "Brent",       "Brett",
    "Brian",    "Bruce",     "Bryan",    "Bryce",     "Caleb",    "Calvin",   "Cameron",    "Carl",        "Carlos",
    "Casey",    "Cesar",     "Chad",     "Charles",   "Chase",    "Chris",    "Christian",  "Christopher", "Clarence",
    "Clayton",  "Clifford",  "Clinton",  "Cody",      "Cole",     "Colin",    "Collin",     "Colton",      "Connor",
    "Corey",    "Cory",      "Craig",    "Cristian",  "Curtis",   "Dakota",   "Dale",       "Dalton",      "Damon",
    "Dan",      "Daniel",    "Danny",    "Darin",     "Darius",   "Darrell",  "Darren",     "Darryl",      "Daryl",
    "Dave",     "David",     "Dean",     "Dennis",    "Derek",    "Derrick",  "Devin",      "Devon",       "Dillon",
    "Dominic",  "Don",       "Donald",   "Douglas",   "Drew",     "Duane",    "Dustin",     "Dwayne",      "Dylan",
    "Earl",     "Eddie",     "Edgar",    "Eduardo",   "Edward",   "Edwin",    "Elijah",     "Eric",        "Erik",
    "Ernest",   "Ethan",     "Eugene",   "Evan",      "Fernando", "Francis",  "Francisco",  "Frank",       "Franklin",
    "Fred",     "Frederick", "Gabriel",  "Garrett",   "Gary",     "Gavin",    "Gene",       "Geoffrey",    "George",
    "Gerald",   "Gilbert",   "Glen",     "Glenn",     "Gordon",   "Grant",    "Greg",       "Gregg",       "Gregory",
    "Guy",      "Harold",    "Harry",    "Hayden",    "Hector",   "Henry",    "Herbert",    "Howard",      "Hunter",
    "Ian",      "Isaac",     "Isaiah",   "Ivan",      "Jack",     "Jackson",  "Jacob",      "Jaime",       "Jake",
    "James",    "Jamie",     "Jared",    "Jason",     "Javier",   "Jay",      "Jeff",       "Jeffery",     "Jeffrey",
    "Jeremiah", "Jeremy",    "Jermaine", "Jerome",    "Jerry",    "Jesse",    "Jesus",      "Jim",         "Jimmy",
    "Joe",      "Joel",      "John",     "Johnathan", "Johnny",   "Jon",      "Jonathan",   "Jonathon",    "Jordan",
    "Jorge",    "Jose",      "Joseph",   "Joshua",    "Juan",     "Julian",   "Justin",     "Karl",        "Keith",
    "Kelly",    "Kenneth",   "Kent",     "Kerry",     "Kevin",    "Kirk",     "Kristopher", "Kurt",        "Kyle",
    "Lance",    "Larry",     "Lawrence", "Lee",       "Leon",     "Leonard",  "Leroy",      "Leslie",      "Levi",
    "Logan",    "Lonnie",    "Louis",    "Lucas",     "Luis",     "Luke",     "Malik",      "Manuel",      "Marc",
    "Marco",    "Marcus",    "Mario",    "Mark",      "Martin",   "Marvin",   "Mason",      "Mathew",      "Matthew",
    "Maurice",  "Max",       "Maxwell",  "Melvin",    "Michael",  "Micheal",  "Miguel",     "Mike",        "Mitchell",
    "Nathan",   "Nathaniel", "Neil",     "Nicholas",  "Nicolas",  "Noah",     "Norman",     "Omar",        "Oscar",
    "Parker",   "Patrick",   "Paul",     "Pedro",     "Perry",    "Peter",    "Philip",     "Phillip",     "Preston",
    "Ralph",    "Randall",   "Randy",    "Ray",       "Raymond",  "Reginald", "Ricardo",    "Richard",     "Rick",
    "Rickey",   "Ricky",     "Riley",    "Robert",    "Roberto",  "Rodney",   "Roger",      "Ronald",      "Ronnie",
    "Ross",     "Roy",       "Ruben",    "Russell",   "Ryan",     "Samuel",   "Scott",      "Sean",        "Sergio",
    "Seth",     "Shane",     "Shannon",  "Shaun",     "Shawn",    "Spencer",  "Stanley",    "Stephen",     "Steve",
    "Steven",   "Stuart",    "Tanner",   "Taylor",    "Terrance", "Terrence", "Terry",      "Theodore",    "Thomas",
    "Tim",      "Timothy",   "Todd",     "Tom",       "Tommy",    "Tony",     "Tracy",      "Travis",      "Trevor",
    "Tristan",  "Troy",      "Tyler",    "Tyrone",    "Vernon",   "Victor",   "Vincent",    "Walter",      "Warren",
    "Wayne",    "Wesley",    "William",  "Willie",    "Wyatt",    "Xavier",   "Zachary"
}); return out[x]; }

inline string_t FAKE_LASTNAME( ulong x ){ static ptr_t<string_t> out ({
    "Smith",      "Johnson",     "Williams",    "Brown",       "Jones",      "Miller",     "Davis",      "Garcia",
    "Rodriguez",  "Wilson",      "Martinez",    "Anderson",    "Taylor",     "Thomas",     "Hernandez",  "Moore",
    "Martin",     "Jackson",     "Thompson",    "White",       "Lopez",      "Lee",        "Gonzalez",   "Harris",
    "Clark",      "Lewis",       "Robinson",    "Walker",      "Perez",      "Hall",       "Young",      "Allen",
    "Sanchez",    "Wright",      "King",        "Scott",       "Green",      "Baker",      "Adams",      "Nelson",
    "Hill",       "Ramirez",     "Campbell",    "Mitchell",    "Roberts",    "Carter",     "Phillips",   "Evans",
    "Turner",     "Torres",      "Parker",      "Collins",     "Edwards",    "Stewart",    "Flores",     "Morris",
    "Nguyen",     "Murphy",      "Rivera",      "Cook",        "Rogers",     "Morgan",     "Peterson",   "Cooper",
    "Reed",       "Bailey",      "Bell",        "Gomez",       "Kelly",      "Howard",     "Ward",       "Cox",
    "Diaz",       "Richardson",  "Wood",        "Watson",      "Brooks",     "Bennett",    "Gray",       "James",
    "Reyes",      "Cruz",        "Hughes",      "Price",       "Myers",      "Long",       "Foster",     "Sanders",
    "Ross",       "Morales",     "Powell",      "Sullivan",    "Russell",    "Ortiz",      "Jenkins",    "Gutierrez",
    "Perry",      "Butler",      "Barnes",      "Fisher",      "Henderson",  "Coleman",    "Simmons",    "Patterson",
    "Jordan",     "Reynolds",    "Hamilton",    "Graham",      "Kim",        "Gonzales",   "Alexander",  "Ramos",
    "Wallace",    "Griffin",     "West",        "Cole",        "Hayes",      "Chavez",     "Gibson",     "Bryant",
    "Ellis",      "Stevens",     "Murray",      "Ford",        "Marshall",   "Owens",      "Mcdonald",   "Harrison",
    "Ruiz",       "Kennedy",     "Wells",       "Alvarez",     "Woods",      "Mendoza",    "Castillo",   "Olson",
    "Webb",       "Washington",  "Tucker",      "Freeman",     "Burns",      "Henry",      "Vasquez",    "Snyder",
    "Simpson",    "Crawford",    "Jimenez",     "Porter",      "Mason",      "Shaw",       "Gordon",     "Wagner",
    "Hunter",     "Romero",      "Hicks",       "Dixon",       "Hunt",       "Palmer",     "Robertson",  "Black",
    "Holmes",     "Stone",       "Meyer",       "Boyd",        "Mills",      "Warren",     "Fox",        "Rose",
    "Rice",       "Moreno",      "Schmidt",     "Patel",       "Ferguson",   "Nichols",    "Herrera",    "Medina",
    "Ryan",       "Fernandez",   "Weaver",      "Daniels",     "Stephens",   "Gardner",    "Payne",      "Kelley",
    "Dunn",       "Pierce",      "Arnold",      "Tran",        "Spencer",    "Peters",     "Hawkins",    "Grant",
    "Hansen",     "Castro",      "Hoffman",     "Hart",        "Elliott",    "Cunningham", "Knight",     "Bradley",
    "Carroll",    "Hudson",      "Duncan",      "Armstrong",   "Berry",      "Andrews",    "Johnston",   "Ray",
    "Lane",       "Riley",       "Carpenter",   "Perkins",     "Aguilar",    "Silva",      "Richards",   "Willis",
    "Matthews",   "Chapman",     "Lawrence",    "Garza",       "Vargas",     "Watkins",    "Wheeler",    "Larson",
    "Carlson",    "Harper",      "George",      "Greene",      "Burke",      "Guzman",     "Morrison",   "Munoz",
    "Jacobs",     "Obrien",      "Lawson",      "Franklin",    "Lynch",      "Bishop",     "Carr",       "Salazar",
    "Austin",     "Mendez",      "Gilbert",     "Jensen",      "Williamson", "Montgomery", "Harvey",     "Oliver",
    "Howell",     "Dean",        "Hanson",      "Weber",       "Garrett",    "Sims",       "Burton",     "Fuller",
    "Soto",       "Mccoy",       "Welch",       "Chen",        "Schultz",    "Walters",    "Reid",       "Fields",
    "Walsh",      "Little",      "Fowler",      "Bowman",      "Davidson",   "May",        "Day",        "Schneider",
    "Newman",     "Brewer",      "Lucas",       "Holland",     "Wong",       "Banks",      "Santos",     "Curtis",
    "Pearson",    "Delgado",     "Valdez",      "Pena",        "Rios",       "Douglas",    "Sandoval",   "Barrett",
    "Hopkins",    "Keller",      "Guerrero",    "Stanley",     "Bates",      "Alvarado",   "Beck",       "Ortega",
    "Wade",       "Estrada",     "Contreras",   "Barnett",     "Caldwell",   "Santiago",   "Lambert",    "Powers",
    "Chambers",   "Nunez",       "Craig",       "Leonard",     "Lowe",       "Rhodes",     "Byrd",       "Gregory",
    "Shelton",    "Frazier",     "Becker",      "Maldonado",   "Fleming",    "Vega",       "Sutton",     "Cohen",
    "Jennings",   "Parks",       "Mcdaniel",    "Watts",       "Barker",     "Norris",     "Vaughn",     "Vazquez",
    "Holt",       "Schwartz",    "Steele",      "Benson",      "Neal",       "Dominguez",  "Horton",     "Terry",
    "Wolfe",      "Hale",        "Lyons",       "Graves",      "Haynes",     "Miles",      "Park",       "Warner",
    "Padilla",    "Bush",        "Thornton",    "Mccarthy",    "Mann",       "Zimmerman",  "Erickson",   "Fletcher",
    "Mckinney",   "Page",        "Dawson",      "Joseph",      "Marquez",    "Reeves",     "Klein",      "Espinoza",
    "Baldwin",    "Moran",       "Love",        "Robbins",     "Higgins",    "Ball",       "Cortez",     "Le",
    "Griffith",   "Bowen",       "Sharp",       "Cummings",    "Ramsey",     "Hardy",      "Swanson",    "Barber",
    "Acosta",     "Luna",        "Chandler",    "Daniel",      "Blair",      "Cross",      "Simon",      "Dennis",
    "Oconnor",    "Quinn",       "Gross",       "Navarro",     "Moss",       "Fitzgerald", "Doyle",      "Mclaughlin",
    "Rojas",      "Rodgers",     "Stevenson",   "Singh",       "Yang",       "Figueroa",   "Harmon",     "Newton",
    "Paul",       "Manning",     "Garner",      "Mcgee",       "Reese",      "Francis",    "Burgess",    "Adkins",
    "Goodman",    "Curry",       "Brady",       "Christensen", "Potter",     "Walton",     "Goodwin",    "Mullins",
    "Molina",     "Webster",     "Fischer",     "Campos",      "Avila",      "Sherman",    "Todd",       "Chang",
    "Blake",      "Malone",      "Wolf",        "Hodges",      "Juarez",     "Gill",       "Farmer",     "Hines",
    "Gallagher",  "Duran",       "Hubbard",     "Cannon",      "Miranda",    "Wang",       "Saunders",   "Tate",
    "Mack",       "Hammond",     "Carrillo",    "Townsend",    "Wise",       "Ingram",     "Barton",     "Mejia",
    "Ayala",      "Schroeder",   "Hampton",     "Rowe",        "Parsons",    "Frank",      "Waters",     "Strickland",
    "Osborne",    "Maxwell",     "Chan",        "Deleon",      "Norman",     "Harrington", "Casey",      "Patton",
    "Logan",      "Bowers",      "Mueller",     "Glover",      "Floyd",      "Hartman",    "Buchanan",   "Cobb",
    "French",     "Kramer",      "Mccormick",   "Clarke",      "Tyler",      "Gibbs",      "Moody",      "Conner",
    "Sparks",     "Mcguire",     "Leon",        "Bauer",       "Norton",     "Pope",       "Flynn",      "Hogan",
    "Robles",     "Salinas",     "Yates",       "Lindsey",     "Lloyd",      "Marsh",      "Mcbride",    "Owen",
    "Solis",      "Pham",        "Lang",        "Pratt",       "Lara",       "Brock",      "Ballard",    "Trujillo",
    "Shaffer",    "Drake",       "Roman",       "Aguirre",     "Morton",     "Stokes",     "Lamb",       "Pacheco",
    "Patrick",    "Cochran",     "Shepherd",    "Cain",        "Burnett",    "Hess",       "Li",         "Cervantes",
    "Olsen",      "Briggs",      "Ochoa",       "Cabrera",     "Velasquez",  "Montoya",    "Roth",       "Meyers",
    "Cardenas",   "Fuentes",     "Weiss",       "Wilkins",     "Hoover",     "Nicholson",  "Underwood",  "Short",
    "Carson",     "Morrow",      "Colon",       "Holloway",    "Summers",    "Bryan",      "Petersen",   "Mckenzie",
    "Serrano",    "Wilcox",      "Carey",       "Clayton",     "Poole",      "Calderon",   "Gallegos",   "Greer",
    "Rivas",      "Guerra",      "Decker",      "Collier",     "Wall",       "Whitaker",   "Bass",       "Flowers",
    "Davenport",  "Conley",      "Houston",     "Huff",        "Copeland",   "Hood",       "Monroe",     "Massey",
    "Roberson",   "Combs",       "Franco",      "Larsen",      "Pittman",    "Randall",    "Skinner",    "Wilkinson",
    "Kirby",      "Cameron",     "Bridges",     "Anthony",     "Richard",    "Kirk",       "Bruce",      "Singleton",
    "Mathis",     "Bradford",    "Boone",       "Abbott",      "Charles",    "Allison",    "Sweeney",    "Atkinson",
    "Horn",       "Jefferson",   "Rosales",     "York",        "Christian",  "Phelps",     "Farrell",    "Castaneda",
    "Nash",       "Dickerson",   "Bond",        "Wyatt",       "Foley",      "Chase",      "Gates",      "Vincent",
    "Mathews",    "Hodge",       "Garrison",    "Trevino",     "Villarreal", "Heath",      "Dalton",     "Valencia",
    "Callahan",   "Hensley",     "Atkins",      "Huffman",     "Roy",        "Boyer",      "Shields",    "Lin",
    "Hancock",    "Grimes",      "Glenn",       "Cline",       "Delacruz",   "Camacho",    "Dillon",     "Parrish",
    "Oneill",     "Melton",      "Booth",       "Kane",        "Berg",       "Harrell",    "Pitts",      "Savage",
    "Wiggins",    "Brennan",     "Salas",       "Marks",       "Russo",      "Sawyer",     "Baxter",     "Golden",
    "Hutchinson", "Liu",         "Walter",      "Mcdowell",    "Wiley",      "Rich",       "Humphrey",   "Johns",
    "Koch",       "Suarez",      "Hobbs",       "Beard",       "Gilmore",    "Ibarra",     "Keith",      "Macias",
    "Khan",       "Andrade",     "Ware",        "Stephenson",  "Henson",     "Wilkerson",  "Dyer",       "Mcclure",
    "Blackwell",  "Mercado",     "Tanner",      "Eaton",       "Clay",       "Barron",     "Beasley",    "Oneal",
    "Small",      "Preston",     "Wu",          "Zamora",      "Macdonald",  "Vance",      "Snow",       "Mcclain",
    "Stafford",   "Orozco",      "Barry",       "English",     "Shannon",    "Kline",      "Jacobson",   "Woodard",
    "Huang",      "Kemp",        "Mosley",      "Prince",      "Merritt",    "Hurst",      "Villanueva", "Roach",
    "Nolan",      "Lam",         "Yoder",       "Mccullough",  "Lester",     "Santana",    "Valenzuela", "Winters",
    "Barrera",    "Orr",         "Leach",       "Berger",      "Mckee",      "Strong",     "Conway",     "Stein",
    "Whitehead",  "Bullock",     "Escobar",     "Knox",        "Meadows",    "Solomon",    "Velez",      "Odonnell",
    "Kerr",       "Stout",       "Blankenship", "Browning",    "Kent",       "Lozano",     "Bartlett",   "Pruitt",
    "Buck",       "Barr",        "Gaines",      "Durham",      "Gentry",     "Mcintyre",   "Sloan",      "Rocha", "velaryon",
    "Melendez",   "Herman",      "Sexton",      "Moon",        "Hendricks",  "Rangel",     "Stark",      "Lowery", "targaryen",
    "Hardin",     "Hull",        "Sellers",     "Ellison",     "Calhoun",    "Gillespie",  "Mora",       "Knapp",
    "Mccall",     "Morse",       "Dorsey",      "Weeks",       "Nielsen",    "Livingston", "Leblanc",    "Mclean",
    "Bradshaw",   "Glass",       "Middleton",   "Buckley",     "Schaefer",   "Frost",      "Howe",       "House",
    "Mcintosh",   "Ho",          "Pennington",  "Reilly",      "Hebert",     "Mcfarland",  "Hickman",    "Noble",
    "Spears",     "Conrad",      "Arias",       "Galvan",      "Velazquez",  "Huynh",      "Frederick",  "Randolph",
    "Cantu",      "Fitzpatrick", "Mahoney",     "Peck",        "Villa",      "Michael",    "Donovan",    "Mcconnell",
    "Walls",      "Boyle",       "Mayer",       "Zuniga",      "Giles",      "Pineda",     "Pace",       "Hurley",
    "Mays",       "Mcmillan",    "Crosby",      "Ayers",       "Case",       "Bentley",    "Shepard",    "Everett",
    "Pugh",       "David",       "Mcmahon",     "Dunlap",      "Bender",     "Hahn",       "Harding",    "Acevedo",
    "Raymond",    "Blackburn",   "Duffy",       "Landry",      "Dougherty",  "Bautista",   "Shah",       "Potts",
    "Arroyo",     "Valentine",   "Meza",        "Gould",       "Vaughan",    "Fry",        "Rush",       "Avery",
    "Herring",    "Dodson",      "Clements",    "Sampson",     "Tapia",      "Bean",       "Lynn",       "Crane",
    "Farley",     "Cisneros",    "Benton",      "Ashley",      "Mckay",      "Finley",     "Best",       "Blevins",
    "Friedman",   "Moses",       "Sosa",        "Blanchard",   "Huber",      "Frye",       "Krueger",    "Bernard",
    "Rosario",    "Rubio",       "Mullen",      "Benjamin",    "Haley",      "Chung",      "Moyer",      "Choi",
    "Horne",      "Yu",          "Woodward",    "Ali",         "Nixon",      "Hayden",     "Rivers",     "Estes",
    "Mccarty",    "Richmond",    "Stuart",      "Maynard",     "Brandt",     "Oconnell",   "Hanna",      "Sanford",
    "Sheppard",   "Church",      "Burch",       "Levy",        "Rasmussen",  "Coffey",     "Ponce",      "Faulkner",
    "Donaldson",  "Schmitt",     "Novak",       "Costa",       "Montes",     "Booker",     "Cordova",    "Waller",
    "Arellano",   "Maddox",      "Mata",        "Bonilla",     "Stanton",    "Compton",    "Kaufman",    "Dudley",
    "Mcpherson",  "Beltran",     "Dickson",     "Mccann",      "Villegas",   "Proctor",    "Hester",     "Cantrell",
    "Daugherty",  "Cherry",      "Bray",        "Davila",      "Rowland",    "Madden",     "Levine",     "Spence",
    "Good",       "Irwin",       "Werner",      "Krause",      "Petty",      "Whitney",    "Baird",      "Hooper",
    "Pollard",    "Zavala",      "Jarvis",      "Holden",      "Hendrix",    "Haas",       "Mcgrath",    "Bird",
    "Lucero",     "Terrell",     "Riggs",       "Joyce",       "Rollins",    "Mercer",     "Galloway",   "Duke",
    "Odom",       "Andersen",    "Downs",       "Hatfield",    "Benitez",    "Archer",     "Huerta",     "Travis",
    "Mcneil",     "Hinton",      "Zhang",       "Hays",        "Mayo",       "Fritz",      "Branch",     "Mooney",
    "Ewing",      "Ritter",      "Esparza",     "Frey",        "Braun",      "Gay",        "Riddle",     "Haney",
    "Kaiser",     "Holder",      "Chaney",      "Mcknight",    "Gamble",     "Vang",       "Cooley",     "Carney",
    "Cowan",      "Forbes",      "Ferrell",     "Davies",      "Barajas",    "Shea",       "Osborn",     "Bright",
    "Cuevas",     "Bolton",      "Murillo",     "Lutz",        "Duarte",     "Kidd",       "Key",        "Cooke",
    "xingyun",  "yunhai",    "longyuan", "fenglin",  "xinghuo",  "huaying",  "yueliang", "muxi",     "shuyun",
    "xingchen", "yumeng",    "lingxi",   "hualian",  "xiyuan",   "mingyue",  "xuanwu",   "lanyue",   "qingfeng",
    "yunmeng",  "xingguang", "yuhua",    "linglong", "qingyun",  "xiyu",     "mingzhu",  "xuanhe",   "yuehua",
    "longxing", "fengyuan",  "xinghe",   "yunshang", "hualong",  "qinglu",   "xingyuan", "yumiao",   "lingyue",
    "xuanming", "fengxing",  "yunlong",  "xingyue",  "qinglan",  "yuhui",    "longfeng", "xingxiu",  "yunxi",
    "qingyan",  "fenglian",  "xuanlin",  "yueling",  "mingfeng", "xinglu",   "yunzhu",   "qinglong", "xuanhua",
    "fengyun",  "yuhang",    "lingyun",  "xingmeng", "longyue",  "qinghe",   "yunyan",   "xingfeng", "yuling",
    "fengxuan", "xinghua",   "minglong", "linghuan", "yumeng",   "longlin",  "qingzhu",  "yunxiang", "fengyan",
    "yuefeng",  "mingyun",   "xuanlong", "qingxuan", "yunling",  "xinghe",   "longxuan", "fengmeng", "yunxing",
    "qingyue",  "xingling",  "yulong",   "mingxuan", "fengyuan", "yunhe",    "xuanxing", "qinglin",  "yunfeng",
    "xingyan",  "longhe",    "yueyuan",  "mingling", "xuanfeng", "qingyun",  "yunming",  "xinglong", "fenghe",
    "yunxuan",  "qingxiu",   "longxi",   "yunzheng", "fengxing", "xuanling", "qingyue",  "yunlong",  "xingfeng",
    "minghe",   "yulian",    "fengxi",   "xuanhua",  "qingxing", "yunmeng",  "longyan",  "yuexiang", "mingfeng",
    "xuanlong", "qingyuan",  "yunlin",   "xingxi",   "yuehe",    "xuanxiu",  "qinglin",  "yunxing",  "xinghua",
    "mingyun",  "fengling",  "xuanhe",   "yunyan",   "xinglin",  "longxing", "yunfeng",  "xuanming", "qingyun",
    "yuelin",   "minghe",    "xuanxing", "qingyan",  "yunxi",    "xingfeng", "longhua",  "fengyun",  "yunzheng",
    "xuanlin",  "qinghe",    "xingyue",  "yunling",  "mingxiu",  "fengxuan", "xuanlong", "qingzhu",  "yunxiang",
    "xinglin",  "longyan",   "yueyun",   "mingfeng", "xuanhe",   "qingyuan", "yunlong",  "xingyun",  "fenglian",
    "yunxi",    "xuanming",  "qingxing", "yunhe",    "xinghua"
}); return out[x]; }

}}

/*────────────────────────────────────────────────────────────────────────────*/

#endif

/*────────────────────────────────────────────────────────────────────────────*/

#ifndef NODEPP_FAKER
#define NODEPP_FAKER

namespace nodepp { namespace faker { inline string_t generate ( string_t format ) {

    thread_local static function_t<string_t,int,string_t> 
    cb ([&]( int mode, string_t input ) -> string_t {
    auto x = os::rand(); 
    auto y = string_t(); switch( mode ){

        case 4 : do { return string::to_string((x%200)+1900); } while(0); break;
        case 0 : do { 
            auto out = string::split( input,'|' );
            return out.empty() ? nullptr : out[x];  
        } while(0); break;

        case 5 : do { return FAKE_MONTH            (x); } while(0); break;
        case 6 : do { return FAKE_WEEKDAY          (x); } while(0); break;
        case 7 : do { return FAKE_MALE_FIRST_NAME  (x); } while(0); break;
        case 8 : do { return FAKE_FEMALE_FIRST_NAME(x); } while(0); break;
        case 9 : do { return FAKE_USERNAME         (x); } while(0); break;
        case 10: do { return FAKE_LASTNAME         (x); } while(0); break;
        case 11: do { return FAKE_FRUIT_NAMES      (x); } while(0); break;
        case 12: do { return FAKE_JOB_NAME         (x); } while(0); break;
        case 13: do { return FAKE_COUNTRY_CODE     (x); } while(0); break;
        case 14: do { return FAKE_COUNTRY_NAMES    (x); } while(0); break;
        case 15: do { return FAKE_COLOR_NAMES      (x); } while(0); break;
        case 16: do { return FAKE_BANK_ISSUERS     (x); } while(0); break;
        case 19: do { return FAKE_BANK_NAMES       (x); } while(0); break;
        case 20: do { return FAKE_DOMAIN_SUFFIX    (x); } while(0); break;

        case 1 : do { case 2 : case 3 : y=input; /*-----*/ break;
        case 17: y = string_t( FAKE_PAN_FORMAT(x).get() ); break;
        case 18: y = string_t( FAKE_CVV_FORMAT(x).get() ); break; 
        case 22: y = "@@@-@@@-@@@@"; /*-----------------*/ break; } while(0); 
        /*----*/ do { for( auto &x: y ){ switch( x ){
            case '#': x = NODEPP_BASE8[ os::rand() % 16 ]; break;
            case '@': x = NODEPP_BASE8[ os::rand() % 10 ]; break;
            case '$': x =( os::rand() % 2 )==0? '0' : '1'; break;
        }} return y; } while(0); break;

        case 21: do { return string::join( 
            "", FAKE_USERNAME     (x), "@",
                FAKE_EMAIL_PREFFIX(x), ".",
                FAKE_DOMAIN_SUFFIX(x)
        ); } while(0); break;
        
    } return nullptr; });

    thread_local static regex_t reg ( "\\$\\{[^\\}]+\\}" );
    /*--------*/ static array_t<string_t> list ({
        "|", "#", "@", "$", "year"   , "month"   , "day"     ,
        "male_name"  , "female_name" , "username", "lastname", 
        "fruit","job", "country_code", "country" , "color"   ,
        "bank_issuer", "bank_pan"    , "bank_cvv", "bank"    ,
        "domain"     , "email"       , "phone"
    });

    auto tmp = reg.search_all( format );
    auto out = queue_t<string_t>();
    auto idx = 0UL;

    if ( tmp.empty () ){ return format; }
    for( auto &x: tmp ){

        out.push( format.slice_view( idx , x[0]));
        auto data=format.slice_view( x[0], x[1] ); uchar mem = 0x00;

        list.some([&]( string_t item ){ 
            if( data.slice_view(1).find(item).null() ){ mem++; return false; }
            out.push( cb( mem, data.slice_view(2,-1) )); /*-*/ return true ;
        });

    idx=x[1]; }

    out.push( format.slice_view( idx ) );
    return string::join( out, "" );

}}}

#undef NODEPP_BASE8
#endif

/*────────────────────────────────────────────────────────────────────────────*/
