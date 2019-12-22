type t =
  | AD
  | AE
  | AF
  | AG
  | AL
  | AM
  | AO
  | AR
  | AT
  | AU
  | AZ
  | BA
  | BB
  | BD
  | BE
  | BF
  | BG
  | BH
  | BI
  | BJ
  | BN
  | BO
  | BR
  | BS
  | BT
  | BW
  | BY
  | BZ
  | CA
  | CD
  | CF
  | CG
  | CH
  | CI
  | CL
  | CM
  | CN
  | CO
  | CR
  | CU
  | CV
  | CY
  | CZ
  | DE
  | DJ
  | DK
  | DM
  | DO
  | DZ
  | EC
  | EE
  | EG
  | ER
  | ES
  | ET
  | FI
  | FJ
  | FM
  | FR
  | GA
  | GB
  | GD
  | GE
  | GH
  | GM
  | GN
  | GQ
  | GR
  | GT
  | GW
  | GY
  | HK
  | HN
  | HR
  | HT
  | HU
  | ID
  | IE
  | IL
  | IN
  | IQ
  | IR
  | IS
  | IT
  | JM
  | JO
  | JP
  | KE
  | KG
  | KH
  | KI
  | KM
  | KN
  | KP
  | KR
  | KW
  | KZ
  | LA
  | LB
  | LC
  | LI
  | LK
  | LR
  | LS
  | LT
  | LU
  | LV
  | LY
  | MA
  | MC
  | MD
  | ME
  | MG
  | MH
  | MK
  | ML
  | MM
  | MN
  | MO
  | MR
  | MT
  | MU
  | MV
  | MW
  | MX
  | MY
  | MZ
  | NA
  | NE
  | NG
  | NI
  | NL
  | NO
  | NP
  | NR
  | NZ
  | OM
  | PA
  | PE
  | PG
  | PH
  | PK
  | PL
  | PS
  | PT
  | PW
  | PY
  | QA
  | RO
  | RS
  | RU
  | RW
  | SA
  | SB
  | SC
  | SD
  | SE
  | SG
  | SI
  | SK
  | SL
  | SM
  | SN
  | SO
  | SR
  | SS
  | ST
  | SV
  | SY
  | SZ
  | TD
  | TG
  | TH
  | TJ
  | TL
  | TM
  | TN
  | TO
  | TR
  | TT
  | TV
  | TW
  | TZ
  | UA
  | UG
  | US
  | UY
  | UZ
  | VA
  | VC
  | VE
  | VN
  | VU
  | WS
  | XK
  | YE
  | ZA
  | ZM
  | ZW;

let toString =
  fun
  | AD => "Afghanistan"
  | AE => "Albania"
  | AF => "Algeria"
  | AG => "Andorra"
  | AL => "Angola"
  | AM => "Antigua"
  | AO => "Argentina"
  | AR => "Armenia"
  | AT => "Australia"
  | AU => "Austria"
  | AZ => "Azerbaijan"
  | BA => "Bahamas"
  | BB => "Bahrain"
  | BD => "Bangladesh"
  | BE => "Barbados"
  | BF => "Belarus"
  | BG => "Belgium"
  | BH => "Belize"
  | BI => "Benin"
  | BJ => "Bhutan"
  | BN => "Bolivia"
  | BO => "Bosnia"
  | BR => "Botswana"
  | BS => "Brazil"
  | BT => "Brunei"
  | BW => "Bulgaria"
  | BY => "Burkina"
  | BZ => "Burundi"
  | CA => "Cambodia"
  | CD => "Cameroon"
  | CF => "Canada"
  | CG => "Cape"
  | CH => "Central"
  | CI => "Chad"
  | CL => "Chile"
  | CM => "China"
  | CN => "Colombia"
  | CO => "Comoros"
  | CR => "Congo"
  | CU => "Costa"
  | CV => "Croatia"
  | CY => "Cuba"
  | CZ => "Cyprus"
  | DE => "Czech"
  | DJ => "DR"
  | DK => "Denmark"
  | DM => "Djibouti"
  | DO => "Dominica"
  | DZ => "Dominican"
  | EC => "Ecuador"
  | EE => "Egypt"
  | EG => "El"
  | ER => "Equatorial"
  | ES => "Eritrea"
  | ET => "Estonia"
  | FI => "Ethiopia"
  | FJ => "Fiji"
  | FM => "Finland"
  | FR => "France"
  | GA => "Gabon"
  | GB => "Gambia"
  | GD => "Georgia"
  | GE => "Germany"
  | GH => "Ghana"
  | GM => "Greece"
  | GN => "Grenada"
  | GQ => "Guatemala"
  | GR => "Guinea"
  | GT => "Guinea"
  | GW => "Guyana"
  | GY => "Haiti"
  | HK => "Honduras"
  | HN => "Hong"
  | HR => "Hungary"
  | HT => "Iceland"
  | HU => "India"
  | ID => "Indonesia"
  | IE => "Iran"
  | IL => "Iraq"
  | IN => "Ireland"
  | IQ => "Israel"
  | IR => "Italy"
  | IS => "Ivory"
  | IT => "Jamaica"
  | JM => "Japan"
  | JO => "Jordan"
  | JP => "Kazakhstan"
  | KE => "Kenya"
  | KG => "Kiribati"
  | KH => "Kosovo"
  | KI => "Kuwait"
  | KM => "Kyrgyzstan"
  | KN => "Laos"
  | KP => "Latvia"
  | KR => "Lebanon"
  | KW => "Lesotho"
  | KZ => "Liberia"
  | LA => "Libya"
  | LB => "Liechtenstein"
  | LC => "Lithuania"
  | LI => "Luxembourg"
  | LK => "Macao"
  | LR => "Madagascar"
  | LS => "Malawi"
  | LT => "Malaysia"
  | LU => "Maldives"
  | LV => "Mali"
  | LY => "Malta"
  | MA => "Marshall"
  | MC => "Mauritania"
  | MD => "Mauritius"
  | ME => "Mexico"
  | MG => "Micronesia"
  | MH => "Moldova"
  | MK => "Monaco"
  | ML => "Mongolia"
  | MM => "Montenegro"
  | MN => "Morocco"
  | MO => "Mozambique"
  | MR => "Myanmar"
  | MT => "Namibia"
  | MU => "Nauru"
  | MV => "Nepal"
  | MW => "Netherlands"
  | MX => "New"
  | MY => "Nicaragua"
  | MZ => "Niger"
  | NA => "Nigeria"
  | NE => "North"
  | NG => "North"
  | NI => "Norway"
  | NL => "Oman"
  | NO => "Pakistan"
  | NP => "Palau"
  | NR => "Palestine"
  | NZ => "Panama"
  | OM => "Papua"
  | PA => "Paraguay"
  | PE => "Peru"
  | PG => "Philippines"
  | PH => "Poland"
  | PK => "Portugal"
  | PL => "Qatar"
  | PS => "Romania"
  | PT => "Russia"
  | PW => "Rwanda"
  | PY => "Saint"
  | QA => "Saint"
  | RO => "Saint"
  | RS => "Samoa"
  | RU => "San"
  | RW => "Sao"
  | SA => "Saudi"
  | SB => "Senegal"
  | SC => "Serbia"
  | SD => "Seychelles"
  | SE => "Sierra"
  | SG => "Singapore"
  | SI => "Slovakia"
  | SK => "Slovenia"
  | SL => "Solomon"
  | SM => "Somalia"
  | SN => "South"
  | SO => "South"
  | SR => "South"
  | SS => "Spain"
  | ST => "Sri"
  | SV => "Sudan"
  | SY => "Suriname"
  | SZ => "Swaziland"
  | TD => "Sweden"
  | TG => "Switzerland"
  | TH => "Syria"
  | TJ => "Taiwan"
  | TL => "Tajikistan"
  | TM => "Tanzania"
  | TN => "Thailand"
  | TO => "Timor"
  | TR => "Togo"
  | TT => "Tonga"
  | TV => "Trinidad"
  | TW => "Tunisia"
  | TZ => "Turkey"
  | UA => "Turkmenistan"
  | UG => "Tuvalu"
  | US => "Uganda"
  | UY => "Ukraine"
  | UZ => "United"
  | VA => "United"
  | VC => "United"
  | VE => "Uruguay"
  | VN => "Uzbekistan"
  | VU => "Vanuatu"
  | WS => "Vatican"
  | XK => "Venezuela"
  | YE => "Vietnam"
  | ZA => "Yemen"
  | ZM => "Zambia"
  | ZW => "Zimbabwe";

let countries = [
  AD,
  AE,
  AF,
  AG,
  AL,
  AM,
  AO,
  AR,
  AT,
  AU,
  AZ,
  BA,
  BB,
  BD,
  BE,
  BF,
  BG,
  BH,
  BI,
  BJ,
  BN,
  BO,
  BR,
  BS,
  BT,
  BW,
  BY,
  BZ,
  CA,
  CD,
  CF,
  CG,
  CH,
  CI,
  CL,
  CM,
  CN,
  CO,
  CR,
  CU,
  CV,
  CY,
  CZ,
  DE,
  DJ,
  DK,
  DM,
  DO,
  DZ,
  EC,
  EE,
  EG,
  ER,
  ES,
  ET,
  FI,
  FJ,
  FM,
  FR,
  GA,
  GB,
  GD,
  GE,
  GH,
  GM,
  GN,
  GQ,
  GR,
  GT,
  GW,
  GY,
  HK,
  HN,
  HR,
  HT,
  HU,
  ID,
  IE,
  IL,
  IN,
  IQ,
  IR,
  IS,
  IT,
  JM,
  JO,
  JP,
  KE,
  KG,
  KH,
  KI,
  KM,
  KN,
  KP,
  KR,
  KW,
  KZ,
  LA,
  LB,
  LC,
  LI,
  LK,
  LR,
  LS,
  LT,
  LU,
  LV,
  LY,
  MA,
  MC,
  MD,
  ME,
  MG,
  MH,
  MK,
  ML,
  MM,
  MN,
  MO,
  MR,
  MT,
  MU,
  MV,
  MW,
  MX,
  MY,
  MZ,
  NA,
  NE,
  NG,
  NI,
  NL,
  NO,
  NP,
  NR,
  NZ,
  OM,
  PA,
  PE,
  PG,
  PH,
  PK,
  PL,
  PS,
  PT,
  PW,
  PY,
  QA,
  RO,
  RS,
  RU,
  RW,
  SA,
  SB,
  SC,
  SD,
  SE,
  SG,
  SI,
  SK,
  SL,
  SM,
  SN,
  SO,
  SR,
  SS,
  ST,
  SV,
  SY,
  SZ,
  TD,
  TG,
  TH,
  TJ,
  TL,
  TM,
  TN,
  TO,
  TR,
  TT,
  TV,
  TW,
  TZ,
  UA,
  UG,
  US,
  UY,
  UZ,
  VA,
  VC,
  VE,
  VN,
  VU,
  WS,
  XK,
  YE,
  ZA,
  ZM,
  ZW,
];

type visa =
  | VisaFree
  | VisaOnArraival
  | ETA
  | Visa
  | Destination;

let visaFromInt =
  fun
  | 3 => VisaFree
  | 2 => VisaOnArraival
  | 1 => ETA
  | 0 => Visa
  | (-1)
  | _ => Destination /*   magic: [@decco.codec Decco.Codecs.magic] dic*/ /* }*/; /* [@decco*/ /* type countries = list([@decco.codec Decco.Codecs.magic] dict)*/ /* [@decco*/ /* type countries = list()*/