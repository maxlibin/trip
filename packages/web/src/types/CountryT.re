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
  | ZW
  | NONE;

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
  | GT => "Guinea-Bissau"
  | GW => "Guyana"
  | GY => "Haiti"
  | HK => "Honduras"
  | HN => "Hong Kong"
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
  | NE => "North Korea"
  | NG => "North Macedonia"
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
  | PY => "Saint Kitts and Nevis	"
  | QA => "Saint Lucia"
  | RO => "Saint Vincent and the Grenadines"
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
  | SN => "South Africa"
  | SO => "South Korea"
  | SR => "South Sudan"
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
  | UZ => "United Arab Emirates"
  | VA => "United Kingdom"
  | VC => "United States"
  | VE => "Uruguay"
  | VN => "Uzbekistan"
  | VU => "Vanuatu"
  | WS => "Vatican"
  | XK => "Venezuela"
  | YE => "Vietnam"
  | ZA => "Yemen"
  | ZM => "Zambia"
  | ZW => "Zimbabwe"
  | NONE => "";

let fromString =
  fun
  | "afghanistan" => AD
  | "albania" => AE
  | "algeria" => AF
  | "andorra" => AG
  | "angola" => AL
  | "antigua" => AM
  | "argentina" => AO
  | "armenia" => AR
  | "australia" => AT
  | "austria" => AU
  | "azerbaijan" => AZ
  | "bahamas" => BA
  | "bahrain" => BB
  | "bangladesh" => BD
  | "barbados" => BE
  | "belarus" => BF
  | "belgium" => BG
  | "belize" => BH
  | "benin" => BI
  | "bhutan" => BJ
  | "bolivia" => BN
  | "bosnia" => BO
  | "botswana" => BR
  | "brazil" => BS
  | "brunei" => BT
  | "bulgaria" => BW
  | "burkina" => BY
  | "burundi" => BZ
  | "cambodia" => CA
  | "cameroon" => CD
  | "canada" => CF
  | "cape" => CG
  | "central" => CH
  | "chad" => CI
  | "chile" => CL
  | "china" => CM
  | "colombia" => CN
  | "comoros" => CO
  | "congo" => CR
  | "costa" => CU
  | "croatia" => CV
  | "cuba" => CY
  | "cyprus" => CZ
  | "czech" => DE
  | "dR" => DJ
  | "denmark" => DK
  | "djibouti" => DM
  | "dominica" => DO
  | "dominican" => DZ
  | "ecuador" => EC
  | "egypt" => EE
  | "el" => EG
  | "equatorial" => ER
  | "eritrea" => ES
  | "estonia" => ET
  | "ethiopia" => FI
  | "fiji" => FJ
  | "finland" => FM
  | "france" => FR
  | "gabon" => GA
  | "gambia" => GB
  | "georgia" => GD
  | "germany" => GE
  | "ghana" => GH
  | "greece" => GM
  | "grenada" => GN
  | "guatemala" => GQ
  | "guinea" => GR
  | "guinea-bissau" => GT
  | "guyana" => GW
  | "haiti" => GY
  | "honduras" => HK
  | "hong Kong" => HN
  | "hungary" => HR
  | "iceland" => HT
  | "india" => HU
  | "indonesia" => ID
  | "iran" => IE
  | "iraq" => IL
  | "ireland" => IN
  | "israel" => IQ
  | "italy" => IR
  | "ivory" => IS
  | "jamaica" => IT
  | "japan" => JM
  | "jordan" => JO
  | "kazakhstan" => JP
  | "kenya" => KE
  | "kiribati" => KG
  | "kosovo" => KH
  | "kuwait" => KI
  | "kyrgyzstan" => KM
  | "laos" => KN
  | "latvia" => KP
  | "lebanon" => KR
  | "lesotho" => KW
  | "liberia" => KZ
  | "libya" => LA
  | "liechtenstein" => LB
  | "lithuania" => LC
  | "luxembourg" => LI
  | "macao" => LK
  | "madagascar" => LR
  | "malawi" => LS
  | "malaysia" => LT
  | "maldives" => LU
  | "mali" => LV
  | "malta" => LY
  | "marshall" => MA
  | "mauritania" => MC
  | "mauritius" => MD
  | "mexico" => ME
  | "micronesia" => MG
  | "moldova" => MH
  | "monaco" => MK
  | "mongolia" => ML
  | "montenegro" => MM
  | "morocco" => MN
  | "mozambique" => MO
  | "myanmar" => MR
  | "namibia" => MT
  | "nauru" => MU
  | "nepal" => MV
  | "netherlands" => MW
  | "new" => MX
  | "nicaragua" => MY
  | "niger" => MZ
  | "nigeria" => NA
  | "north-korea" => NE
  | "north-macedonia" => NG
  | "norway" => NI
  | "oman" => NL
  | "pakistan" => NO
  | "palau" => NP
  | "palestine" => NR
  | "panama" => NZ
  | "papua" => OM
  | "paraguay" => PA
  | "peru" => PE
  | "philippines" => PG
  | "poland" => PH
  | "portugal" => PK
  | "qatar" => PL
  | "romania" => PS
  | "russia" => PT
  | "rwanda" => PW
  | "saint-kitts-and-nevis" => PY
  | "saint Lucia" => QA
  | "saint-vincent-and-the-grenadines" => RO
  | "samoa" => RS
  | "san" => RU
  | "sao" => RW
  | "saudi" => SA
  | "senegal" => SB
  | "serbia" => SC
  | "seychelles" => SD
  | "sierra" => SE
  | "singapore" => SG
  | "slovakia" => SI
  | "slovenia" => SK
  | "solomon" => SL
  | "somalia" => SM
  | "south-africa" => SN
  | "south-korea" => SO
  | "south-sudan	" => SR
  | "spain" => SS
  | "sri" => ST
  | "sudan" => SV
  | "suriname" => SY
  | "swaziland" => SZ
  | "sweden" => TD
  | "switzerland" => TG
  | "syria" => TH
  | "taiwan" => TJ
  | "tajikistan" => TL
  | "tanzania" => TM
  | "thailand" => TN
  | "timor" => TO
  | "togo" => TR
  | "tonga" => TT
  | "trinidad" => TV
  | "tunisia" => TW
  | "turkey" => TZ
  | "turkmenistan" => UA
  | "tuvalu" => UG
  | "uganda" => US
  | "ukraine" => UY
  | "united-arab-emirates" => UZ
  | "united-kingdom" => VA
  | "unitedstates" => VC
  | "uruguay" => VE
  | "uzbekistan" => VN
  | "vanuatu" => VU
  | "vatican" => WS
  | "venezuela" => XK
  | "vietnam" => YE
  | "yemen" => ZA
  | "zambia" => ZM
  | "zimbabwe" => ZW
  | _ => NONE;

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
  | _ => Destination;

let visaToString =
  fun
  | VisaFree => "Visa free"
  | VisaOnArraival => "Visa on arrival"
  | ETA => "E-Visa"
  | Visa => "Visa required"
  | Destination => "Current location";

[@decco]
type result = {
  [@decco.key "Destination"]
  destination: string,
  [@decco.key "Passport"]
  passport: string,
  [@decco.key "Code"]
  code: int,
};

type results = list(result);