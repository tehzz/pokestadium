char pokemon[][11] = {
	"",
	"Bulbasaur",
	"Ivysaur",
	"Venusaur",
	"Charmander",
	"Charmeleon",
	"Charizard",
	"Squirtle",
	"Wartortle",
	"Blastoise",
	"Caterpie",
	"Metapod",
	"Butterfree",
	"Weedle",
	"Kakuna",
	"Beedrill",
	"Pidgey",
	"Pidgeotto",
	"Pidgeot",
	"Rattata",
	"Raticate",
	"Spearow",
	"Fearow",
	"Ekans",
	"Arbok",
	"Pikachu",
	"Raichu",
	"Sandshrew",
	"Sandslash",
	"Nidoran♀",
	"Nidorina",
	"Nidoqueen",
	"Nidoran♂",
	"Nidorino",
	"Nidoking",
	"Clefairy",
	"Clefable",
	"Vulpix",
	"Ninetales",
	"Jigglypuff",
	"Wigglytuff",
	"Zubat",
	"Golbat",
	"Oddish",
	"Gloom",
	"Vileplume",
	"Paras",
	"Parasect",
	"Venonat",
	"Venomoth",
	"Diglett",
	"Dugtrio",
	"Meowth",
	"Persian",
	"Psyduck",
	"Golduck",
	"Mankey",
	"Primeape",
	"Growlithe",
	"Arcanine",
	"Poliwag",
	"Poliwhirl",
	"Poliwrath",
	"Abra",
	"Kadabra",
	"Alakazam",
	"Machop",
	"Machoke",
	"Machamp",
	"Bellsprout",
	"Weepinbell",
	"Victreebel",
	"Tentacool",
	"Tentacruel",
	"Geodude",
	"Graveler",
	"Golem",
	"Ponyta",
	"Rapidash",
	"Slowpoke",
	"Slowbro",
	"Magnemite",
	"Magneton",
	"Farfetch'd",
	"Doduo",
	"Dodrio",
	"Seel",
	"Dewgong",
	"Grimer",
	"Muk",
	"Shellder",
	"Cloyster",
	"Gastly",
	"Haunter",
	"Gengar",
	"Onix",
	"Drowzee",
	"Hypno",
	"Krabby",
	"Kingler",
	"Voltorb",
	"Electrode",
	"Exeggcute",
	"Exeggutor",
	"Cubone",
	"Marowak",
	"Hitmonlee",
	"Hitmonchan",
	"Lickitung",
	"Koffing",
	"Weezing",
	"Rhyhorn",
	"Rhydon",
	"Chansey",
	"Tangela",
	"Kangaskhan",
	"Horsea",
	"Seadra",
	"Goldeen",
	"Seaking",
	"Staryu",
	"Starmie",
	"Mr.Mime",
	"Scyther",
	"Jynx",
	"Electabuzz",
	"Magmar",
	"Pinsir",
	"Tauros",
	"Magikarp",
	"Gyarados",
	"Lapras",
	"Ditto",
	"Eevee",
	"Vaporeon",
	"Jolteon",
	"Flareon",
	"Porygon",
	"Omanyte",
	"Omastar",
	"Kabuto",
	"Kabutops",
	"Aerodactyl",
	"Snorlax",
	"Articuno",
	"Zapdos",
	"Moltres",
	"Dratini",
	"Dragonair",
	"Dragonite",
	"Mewtwo",
	"Mew",
	"Chikorita",
	"Bayleef",
	"Meganium",
	"Cyndaquil",
	"Quilava",
	"Typhlosion",
	"Totodile",
	"Croconaw",
	"Feraligatr",
	"Sentret",
	"Furret",
	"Hoothoot",
	"Noctowl",
	"Ledyba",
	"Ledian",
	"Spinarak",
	"Ariados",
	"Crobat",
	"Chinchou",
	"Lanturn",
	"Pichu",
	"Cleffa",
	"Igglybuff",
	"Togepi",
	"Togetic",
	"Natu",
	"Xatu",
	"Mareep",
	"Flaaffy",
	"Ampharos",
	"Bellossom",
	"Marill",
	"Azumarill",
	"Sudowoodo",
	"Politoed",
	"Hoppip",
	"Skiploom",
	"Jumpluff",
	"Aipom",
	"Sunkern",
	"Sunflora",
	"Yanma",
	"Wooper",
	"Quagsire",
	"Espeon",
	"Umbreon",
	"Murkrow",
	"Slowking",
	"Misdreavus",
	"Unown",
	"Wobbuffet",
	"Girafarig",
	"Pineco",
	"Forretress",
	"Dunsparce",
	"Gligar",
	"Steelix",
	"Snubbull",
	"Granbull",
	"Qwilfish",
	"Scizor",
	"Shuckle",
	"Heracross",
	"Sneasel",
	"Teddiursa",
	"Ursaring",
	"Slugma",
	"Magcargo",
	"Swinub",
	"Piloswine",
	"Corsola",
	"Remoraid",
	"Octillery",
	"Delibird",
	"Mantine",
	"Skarmory",
	"Houndour",
	"Houndoom",
	"Kingdra",
	"Phanpy",
	"Donphan",
	"Porygon2",
	"Stantler",
	"Smeargle",
	"Tyrogue",
	"Hitmontop",
	"Smoochum",
	"Elekid",
	"Magby",
	"Miltank",
	"Blissey",
	"Raikou",
	"Entei",
	"Suicune",
	"Larvitar",
	"Pupitar",
	"Tyranitar",
	"Lugia",
	"Ho-oh",
	"Celebi",
	"???",
	"Egg"
};

char moves[][15] = {
	"",
	"Pound",
	"Karate Chop",
	"Doubleslap",
	"Comet Punch",
	"Mega Punch",
	"Pay Day",
	"Fire Punch",
	"Ice Punch",
	"Thunderpunch",
	"Scratch",
	"Vicegrip",
	"Guillotine",
	"Razor Wind",
	"Swords Dance",
	"Cut",
	"Gust",
	"Wing Attack",
	"Whirlwind",
	"Fly",
	"Bind",
	"Slam",
	"Vine Whip",
	"Stomp",
	"Double Kick",
	"Mega Kick",
	"Jump Kick",
	"Rolling Kick",
	"Sand-Attack",
	"Headbutt",
	"Horn Attack",
	"Fury Attack",
	"Horn Drill",
	"Tackle",
	"Body Slam",
	"Wrap",
	"Take Down",
	"Thrash",
	"Double-Edge",
	"Tail Whip",
	"Poison Sting",
	"Twineedle",
	"Pin Missile",
	"Leer",
	"Bite",
	"Growl",
	"Roar",
	"Sing",
	"Supersonic",
	"Sonicboom",
	"Disable",
	"Acid",
	"Ember",
	"Flamethrower",
	"Mist",
	"Water Gun",
	"Hydro Pump",
	"Surf",
	"Ice Beam",
	"Blizzard",
	"Psybeam",
	"Bubblebeam",
	"Aurora Beam",
	"Hyper Beam",
	"Peck",
	"Drill Peck",
	"Submission",
	"Low Kick",
	"Counter",
	"Seismic Toss",
	"Strength",
	"Absorb",
	"Mega Drain",
	"Leech Seed",
	"Growth",
	"Razor Leaf",
	"Solarbeam",
	"Poisonpowder",
	"Stun Spore",
	"Sleep Powder",
	"Petal Dance",
	"String Shot",
	"Dragon Rage",
	"Fire Spin",
	"Thundershock",
	"Thunderbolt",
	"Thunder Wave",
	"Thunder",
	"Rock Throw",
	"Earthquake",
	"Fissure",
	"Dig",
	"Toxic",
	"Confusion",
	"Psychic",
	"Hypnosis",
	"Meditate",
	"Agility",
	"Quick Attack",
	"Rage",
	"Teleport",
	"Night Shade",
	"Mimic",
	"Screech",
	"Double Team",
	"Recover",
	"Harden",
	"Minimize",
	"Smokescreen",
	"Confuse Ray",
	"Withdraw",
	"Defense Curl",
	"Barrier",
	"Light Screen",
	"Haze",
	"Reflect",
	"Focus Energy",
	"Bide",
	"Metronome",
	"Mirror Move",
	"Selfdestruct",
	"Egg Bomb",
	"Lick",
	"Smog",
	"Sludge",
	"Bone Club",
	"Fire Blast",
	"Waterfall",
	"Clamp",
	"Swift",
	"Skull Bash",
	"Spike Cannon",
	"Constrict",
	"Amnesia",
	"Kinesis",
	"Softboiled",
	"Hi Jump Kick",
	"Glare",
	"Dream Eater",
	"Poison Gas",
	"Barrage",
	"Leech Life",
	"Lovely Kiss",
	"Sky Attack",
	"Transform",
	"Bubble",
	"Dizzy Punch",
	"Spore",
	"Flash",
	"Psywave",
	"Splash",
	"Acid Armor",
	"Crabhammer",
	"Explosion",
	"Fury Swipes",
	"Bonemerang",
	"Rest",
	"Rock Slide",
	"Hyper Fang",
	"Sharpen",
	"Conversion",
	"Tri Attack",
	"Super Fang",
	"Slash",
	"Substitute",
	"Struggle",
	"Sketch",
	"Triple Kick",
	"Thief",
	"Spider Web",
	"Mind Reader",
	"Nightmare",
	"Flame Wheel",
	"Snore",
	"Curse",
	"Flail",
	"Conversion 2",
	"Aeroblast",
	"Cotton Spore",
	"Reversal",
	"Spite",
	"Powder Snow",
	"Protect",
	"Mach Punch",
	"Scary Face",
	"Faint Attack",
	"Sweet Kiss",
	"Belly Drum",
	"Sludge Bomb",
	"Mud-Slap",
	"Octazooka",
	"Spikes",
	"Zap Cannon",
	"Foresight",
	"Destiny Bond",
	"Perish Song",
	"Icy Wind",
	"Detect",
	"Bone Rush",
	"Lock-On",
	"Outrage",
	"Sandstorm",
	"Giga Drain",
	"Endure",
	"Charm",
	"Rollout",
	"False Swipe",
	"Swagger",
	"Milk Drink",
	"Spark",
	"Fury Cutter",
	"Steel Wing",
	"Mean Look",
	"Attract",
	"Sleep Talk",
	"Heal Bell",
	"Return",
	"Present",
	"Frustration",
	"Safeguard",
	"Pain Split",
	"Sacred Fire",
	"Magnitude",
	"Dynamicpunch",
	"Megahorn",
	"Dragonbreath",
	"Baton Pass",
	"Encore",
	"Pursuit",
	"Rapid Spin",
	"Sweet Scent",
	"Iron Tail",
	"Metal Claw",
	"Vital Throw",
	"Morning Sun",
	"Synthesis",
	"Moonlight",
	"Hidden Power",
	"Cross Chop",
	"Twister",
	"Rain Dance",
	"Sunny Day",
	"Crunch",
	"Mirror Coat",
	"Psych Up",
	"Extremespeed",
	"Ancientpower",
	"Shadow Ball",
	"Future Sight",
	"Rock Smash",
	"Whirlpool",
	"Beat Up"
};

char groups[][18] = {
	"",
	"Medium",
	"Cooltrainer♂",
	"Cooltrainer♀",
	"Beauty",
	"Officer",
	"Pokémaniac",
	"Swimmer♂",
	"Burglar",
	"Blackbelt",
	"Guitarist",
	"Camper",
	"Psychic",
	"Gentleman",
	"Juggler",
	"Schoolboy",
	"Skier",
	"Teacher",
	"Pokéfan♂",
	"Pokéfan♀",
	"Youngster",
	"Fisherman",
	"Bird Keeper",
	"Scientist",
	"Swimmer♀",
	"Picnicker",
	"Firebreather",
	"Twins",
	"Sailor",
	"Sage",
	"Biker",
	"Boarder",
	"Kimono Girl",
	"Lass",
	"Bug Catcher",
	"Hiker",
	"Super Nerd",
	"Grunt♂",
	"Grunt♀",
	"Champion",
	"Elite Four",
	"Gym Leader",
	"Pokémon Trainer",
	"Rival",
	"Executive♂",
	"Executive♀",
	"Rival1",
	"Rival2",
	"Rival3",
	"Rival4",
	"Rival5",
	"Rival6",
	"Rival7",
	"Rival8",
	"Rival9",
	"Rival10",
	"Rival11",
	"Rival12",
	"Rival13",
	"Rival14",
	"Rival15",
	"Rival16",
	"Rival17"
};

char trainers[][15] = {
	"",
	"Grunt",
	"Executive",
	"Rival",
	"Lance",
	"Will",
	"Bruno",
	"Karen",
	"Koga",
	"Clair",
	"Chuck",
	"Jasmine",
	"Pryce",
	"Morty",
	"Bugsy",
	"Whitney",
	"Falkner",
	"Cal",
	"Red",
	"Blue",
	"Blaine",
	"Sabrina",
	"Janine",
	"Erika",
	"Lt.Surge",
	"Misty",
	"Brock",
	"Clark",
	"Marty",
	"Yang",
	"Bruce",
	"Jensen",
	"Craig",
	"Roberto",
	"Chester",
	"Clifford",
	"Pedro",
	"Baxter",
	"Curtis",
	"Cliff",
	"Dillon",
	"Marcus",
	"Dwight",
	"Curt",
	"Gerald",
	"Travis",
	"Oliver",
	"Mason",
	"Claude",
	"Darcy",
	"Bernie",
	"Wyatt",
	"Adam",
	"Daren",
	"Nelson",
	"Terry",
	"Kathy",
	"Melissa",
	"Emiko",
	"Chase",
	"Grant",
	"Rex",
	"Chen",
	"Ty",
	"Vince",
	"Nick",
	"Alvin",
	"Matt",
	"Chaz",
	"Peggy",
	"Holly",
	"Jan&Jane",
	"Min&Lyn",
	"Floria",
	"Tina",
	"Janet",
	"Cora",
	"Stacy",
	"Alissa",
	"Molly",
	"Carmen",
	"Gloria",
	"Rita",
	"Carol",
	"Lois",
	"1P",
	"2P",
	"Rental",
	"1P",
	"Cole",
	"Melvin",
	"Carson",
	"Clayton",
	"Jonathan",
	"Cyndy",
	"Nancy",
	"Joseph",
	"Naomi",
	"Tammy",
	"Dustin",
	"Nolan",
	"Connor",
	"Becky",
	"Ferris",
	"Julian",
	"Student",
	"Carrie"
};

char items[][20] = {
	"",
	"Master Ball",
	"Ultra Ball",
	"Bright Powder",
	"Great Ball",
	"Poké Ball",
	"teru-sama",
	"Bicycle",
	"Moon Stone",
	"Antidote",
	"Burn Heal",
	"Ice Heal",
	"Awakening",
	"Parlyz Heal",
	"Full Restore",
	"Max Potion",
	"Hyper Potion",
	"Super Potion",
	"Potion",
	"Escape Rope",
	"Repel",
	"Max Elixer",
	"Fire Stone",
	"Thunderstone",
	"Water Stone",
	"teru-sama",
	"HP Up",
	"Protein",
	"Iron",
	"Carbos",
	"Lucky Punch",
	"Calcium",
	"Rare Candy",
	"X Accuracy",
	"Leaf Stone",
	"Metal Powder",
	"Nugget",
	"PokÉ Doll",
	"Full Heal",
	"Revive",
	"Max Revive",
	"Guard Spec.",
	"Super Repel",
	"Max Repel",
	"Dire Hit",
	"teru-sama",
	"Fresh Water",
	"Soda Pop",
	"Lemonade",
	"X Attack",
	"teru-sama",
	"X Defend",
	"X Speed",
	"X Special",
	"Coin Case",
	"Itemfinder",
	"teru-sama",
	"Exp. Share",
	"Old Rod",
	"Good Rod",
	"Silver Leaf",
	"Super Rod",
	"PP Up",
	"Ether",
	"Max Ether",
	"Elixer",
	"Red Scale",
	"Secretpotion",
	"S.S. Ticket",
	"Mystery Egg",
	"Clear Bell",
	"Silver Wing",
	"Moomoo Milk",
	"Quick Claw",
	"Psncureberry",
	"Gold Leaf",
	"Soft Sand",
	"Sharp Beak",
	"Przcureberry",
	"Burnt Berry",
	"Ice Berry",
	"Poison Barb",
	"King's Rock",
	"Bitter Berry",
	"Mint Berry",
	"Red Apricorn",
	"Tinymushroom",
	"Big Mushroom",
	"Silverpowder",
	"Blu Apricorn",
	"teru-sama",
	"Amulet Coin",
	"Ylw Apricorn",
	"Grn Apricorn",
	"Cleanse Tag",
	"Mystic Water",
	"Twistedspoon",
	"Wht Apricorn",
	"Black Belt",
	"Blk Apricorn",
	"teru-sama",
	"Pnk Apricorn",
	"Blackglasses",
	"Slowpoketail",
	"Pink Bow",
	"Stick",
	"Smoke Ball",
	"Nevermeltice",
	"Magnet",
	"Miracleberry",
	"Pearl",
	"Big Pearl",
	"Everstone",
	"Spell Tag",
	"Ragecandybar",
	"Gs Ball",
	"Blue Card",
	"Miracle Seed",
	"Thick Club",
	"Focus Band",
	"teru-sama",
	"Energypowder",
	"Energy Root",
	"Heal Powder",
	"Revival Herb",
	"Hard Stone",
	"Lucky Egg",
	"Card Key",
	"Machine Part",
	"Egg Ticket",
	"Lost Item",
	"Stardust",
	"Star Piece",
	"Basement Key",
	"Pass",
	"teru-sama",
	"teru-sama",
	"teru-sama",
	"Charcoal",
	"Berry Juice",
	"Scope Lens",
	"teru-sama",
	"teru-sama",
	"Metal Coat",
	"Dragon Fang",
	"teru-sama",
	"Leftovers",
	"teru-sama",
	"teru-sama",
	"teru-sama",
	"Mysteryberry",
	"Dragon Scale",
	"Berserk Gene",
	"teru-sama",
	"teru-sama",
	"teru-sama",
	"Sacred Ash",
	"Heavy Ball",
	"Flower Mail",
	"Level Ball",
	"Lure Ball",
	"Fast Ball",
	"teru-sama",
	"Light Ball",
	"Friend Ball",
	"Moon Ball",
	"Love Ball",
	"Normal Box",
	"Gorgeous Box",
	"Sun Stone",
	"Polkadot Bow",
	"teru-sama",
	"Up-Grade",
	"Berry",
	"Gold Berry",
	"Squirtbottle",
	"teru-sama",
	"Park Ball",
	"Rainbow Wing",
	"teru-sama",
	"Brick Piece",
	"Surf Mail",
	"Liteblue Mail",
	"Portrait Mail",
	"Lovely Mail",
	"Eon Mail",
	"Morph Mail",
	"Bluesky Mail",
	"Music Mail",
	"Mirage Mail",
	"teru-sama",
	"TM01",
	"TM02",
	"TM03",
	"TM04",
	"teru-sama",
	"TM05",
	"TM06",
	"TM07",
	"TM08",
	"TM09",
	"TM10",
	"TM11",
	"TM12",
	"TM13",
	"TM14",
	"TM15",
	"TM16",
	"TM17",
	"TM18",
	"TM19",
	"TM20",
	"TM21",
	"TM22",
	"TM23",
	"TM24",
	"TM25",
	"TM26",
	"TM27",
	"TM28",
	"teru-sama",
	"TM29",
	"TM30",
	"TM31",
	"TM32",
	"TM33",
	"TM34",
	"TM35",
	"TM36",
	"TM37",
	"TM38",
	"TM39",
	"TM40",
	"TM41",
	"TM42",
	"TM43",
	"TM44",
	"TM45",
	"TM46",
	"TM47",
	"TM48",
	"TM49",
	"TM50",
	"HM01",
	"HM02",
	"HM03",
	"HM04",
	"HM05",
	"HM06",
	"HM07"
};

char texts[][50] = {
	"text/cal.txt",
	"text/gymleadercastle/violet/matt1.txt",
	"text/gymleadercastle/violet/falkner1.txt",
	"text/gymleadercastle/azalea/chaz1.txt",
	"text/gymleadercastle/azalea/minlyn1.txt",
	"text/gymleadercastle/azalea/bugsy1.txt",
	"text/gymleadercastle/goldenrod/lois1.txt",
	"text/gymleadercastle/goldenrod/rita1.txt",
	"text/gymleadercastle/goldenrod/whitney1.txt",
	"text/gymleadercastle/ecruteak/ty1.txt",
	"text/gymleadercastle/ecruteak/holly1.txt",
	"text/gymleadercastle/ecruteak/morty1.txt",
	"text/gymleadercastle/cianwood/nick1.txt",
	"text/gymleadercastle/cianwood/chuck1.txt",
	"text/gymleadercastle/olivine/jasmine1.txt",
	"text/gymleadercastle/rocket/gruntm1.txt",
	"text/gymleadercastle/rocket/gruntf1.txt",
	"text/gymleadercastle/rocket/executivef1.txt",
	"text/gymleadercastle/rocket/executivem1.txt",
	"text/gymleadercastle/mahogany/alvin1.txt",
	"text/gymleadercastle/mahogany/carol1.txt",
	"text/gymleadercastle/mahogany/pryce1.txt",
	"text/gymleadercastle/blackthorn/gloria1.txt",
	"text/gymleadercastle/blackthorn/vince1.txt",
	"text/gymleadercastle/blackthorn/clair1.txt",
	"text/gymleadercastle/indigo/will1.txt",
	"text/gymleadercastle/indigo/koga1.txt",
	"text/gymleadercastle/indigo/bruno1.txt",
	"text/gymleadercastle/indigo/karen1.txt",
	"text/gymleadercastle/indigo/lance1.txt",
	"text/gymleadercastle/kanto/surge1.txt",
	"text/gymleadercastle/kanto/sabrina1.txt",
	"text/gymleadercastle/kanto/misty1.txt",
	"text/gymleadercastle/kanto/erika1.txt",
	"text/gymleadercastle/kanto/janine1.txt",
	"text/gymleadercastle/kanto/brock1.txt",
	"text/gymleadercastle/kanto/blaine1.txt",
	"text/gymleadercastle/kanto/blue1.txt",
	"text/gymleadercastle/kanto/red1.txt",
	"text/rival1.txt",
	"text/pokecup/pokeball/nelson1.txt",
	"text/pokecup/pokeball/bruce1.txt",
	"text/pokecup/pokeball/chester1.txt",
	"text/pokecup/pokeball/clifford1.txt",
	"text/pokecup/pokeball/alissa1.txt",
	"text/pokecup/pokeball/jensen1.txt",
	"text/pokecup/pokeball/claude1.txt",
	"text/pokecup/pokeball/mason1.txt",
	"text/pokecup/greatball/carmen1.txt",
	"text/pokecup/greatball/wyatt1.txt",
	"text/pokecup/greatball/cliff1.txt",
	"text/pokecup/greatball/dillon1.txt",
	"text/pokecup/greatball/molly1.txt",
	"text/pokecup/greatball/baxter1.txt",
	"text/pokecup/greatball/chen1.txt",
	"text/pokecup/greatball/pedro1.txt",
	"text/pokecup/ultraball/nelson1.txt",
	"text/pokecup/ultraball/bruce1.txt",
	"text/pokecup/ultraball/chester1.txt",
	"text/pokecup/ultraball/clifford1.txt",
	"text/pokecup/ultraball/alissa1.txt",
	"text/pokecup/ultraball/jensen1.txt",
	"text/pokecup/ultraball/claude1.txt",
	"text/pokecup/ultraball/mason1.txt",
	"text/pokecup/masterball/carmen1.txt",
	"text/pokecup/masterball/wyatt1.txt",
	"text/pokecup/masterball/cliff1.txt",
	"text/pokecup/masterball/dillon1.txt",
	"text/pokecup/masterball/molly1.txt",
	"text/pokecup/masterball/baxter1.txt",
	"text/pokecup/masterball/chen1.txt",
	"text/pokecup/masterball/pedro1.txt",
	"text/challengecup/pokeball/marcus1.txt",
	"text/challengecup/pokeball/peggy1.txt",
	"text/challengecup/pokeball/gruntm1.txt",
	"text/challengecup/pokeball/melissa1.txt",
	"text/challengecup/pokeball/daren1.txt",
	"text/challengecup/greatball/curt1.txt",
	"text/challengecup/pokeball/gruntf1.txt",
	"text/challengecup/pokeball/dwight1.txt",
	"text/challengecup/greatball/janjane1.txt",
	"text/challengecup/pokeball/curtis1.txt",
	"text/challengecup/greatball/oliver1.txt",
	"text/challengecup/greatball/darcy1.txt",
	"text/challengecup/greatball/gerald1.txt",
	"text/challengecup/greatball/emiko1.txt",
	"text/challengecup/greatball/roberto1.txt",
	"text/challengecup/greatball/travis1.txt",
	"text/challengecup/ultraball/marcus1.txt",
	"text/challengecup/ultraball/peggy1.txt",
	"text/challengecup/ultraball/gruntm1.txt",
	"text/challengecup/ultraball/melissa1.txt",
	"text/challengecup/ultraball/daren1.txt",
	"text/challengecup/masterball/curt1.txt",
	"text/challengecup/ultraball/gruntf1.txt",
	"text/challengecup/ultraball/dwight1.txt",
	"text/challengecup/masterball/janjane1.txt",
	"text/challengecup/ultraball/curtis1.txt",
	"text/challengecup/masterball/oliver1.txt",
	"text/challengecup/masterball/darcy1.txt",
	"text/challengecup/masterball/gerald1.txt",
	"text/challengecup/masterball/emiko1.txt",
	"text/challengecup/masterball/roberto1.txt",
	"text/challengecup/masterball/travis1.txt",
	"text/littlecup/bernie1.txt",
	"text/littlecup/stacy1.txt",
	"text/littlecup/grant1.txt",
	"text/littlecup/janet1.txt",
	"text/littlecup/clark1.txt",
	"text/littlecup/cora1.txt",
	"text/littlecup/tina1.txt",
	"text/littlecup/rex1.txt",
	"text/primecup/terry1.txt",
	"text/primecup/yang1.txt",
	"text/primecup/adam1.txt",
	"text/primecup/floria1.txt",
	"text/primecup/chase1.txt",
	"text/primecup/craig1.txt",
	"text/primecup/kathy1.txt",
	"text/primecup/marty1.txt",
	"text/gymleadercastle/violet/matt2.txt",
	"text/gymleadercastle/violet/falkner2.txt",
	"text/gymleadercastle/azalea/chaz2.txt",
	"text/gymleadercastle/azalea/minlyn2.txt",
	"text/gymleadercastle/azalea/bugsy2.txt",
	"text/gymleadercastle/goldenrod/lois2.txt",
	"text/gymleadercastle/goldenrod/rita2.txt",
	"text/gymleadercastle/goldenrod/whitney2.txt",
	"text/gymleadercastle/ecruteak/ty2.txt",
	"text/gymleadercastle/ecruteak/holly2.txt",
	"text/gymleadercastle/ecruteak/morty2.txt",
	"text/gymleadercastle/cianwood/nick2.txt",
	"text/gymleadercastle/cianwood/chuck2.txt",
	"text/gymleadercastle/olivine/jasmine2.txt",
	"text/gymleadercastle/rocket/gruntm2.txt",
	"text/gymleadercastle/rocket/gruntf2.txt",
	"text/gymleadercastle/rocket/executivef2.txt",
	"text/gymleadercastle/rocket/executivem2.txt",
	"text/gymleadercastle/mahogany/alvin2.txt",
	"text/gymleadercastle/mahogany/carol2.txt",
	"text/gymleadercastle/mahogany/pryce2.txt",
	"text/gymleadercastle/blackthorn/gloria2.txt",
	"text/gymleadercastle/blackthorn/vince2.txt",
	"text/gymleadercastle/blackthorn/clair2.txt",
	"text/gymleadercastle/indigo/will2.txt",
	"text/gymleadercastle/indigo/koga2.txt",
	"text/gymleadercastle/indigo/bruno2.txt",
	"text/gymleadercastle/indigo/karen2.txt",
	"text/gymleadercastle/indigo/lance2.txt",
	"text/gymleadercastle/kanto/surge2.txt",
	"text/gymleadercastle/kanto/sabrina2.txt",
	"text/gymleadercastle/kanto/misty2.txt",
	"text/gymleadercastle/kanto/erika2.txt",
	"text/gymleadercastle/kanto/janine2.txt",
	"text/gymleadercastle/kanto/brock2.txt",
	"text/gymleadercastle/kanto/blaine2.txt",
	"text/gymleadercastle/kanto/blue2.txt",
	"text/gymleadercastle/kanto/red2.txt",
	"text/pokecup/pokeball/nelson2.txt",
	"text/pokecup/pokeball/bruce2.txt",
	"text/pokecup/pokeball/chester2.txt",
	"text/pokecup/pokeball/clifford2.txt",
	"text/pokecup/pokeball/alissa2.txt",
	"text/pokecup/pokeball/jensen2.txt",
	"text/pokecup/pokeball/claude2.txt",
	"text/pokecup/pokeball/mason2.txt",
	"text/pokecup/greatball/carmen2.txt",
	"text/pokecup/greatball/wyatt2.txt",
	"text/pokecup/greatball/cliff2.txt",
	"text/pokecup/greatball/dillon2.txt",
	"text/pokecup/greatball/molly2.txt",
	"text/pokecup/greatball/baxter2.txt",
	"text/pokecup/greatball/chen2.txt",
	"text/pokecup/greatball/pedro2.txt",
	"text/pokecup/ultraball/nelson2.txt",
	"text/pokecup/ultraball/bruce2.txt",
	"text/pokecup/ultraball/chester2.txt",
	"text/pokecup/ultraball/clifford2.txt",
	"text/pokecup/ultraball/alissa2.txt",
	"text/pokecup/ultraball/jensen2.txt",
	"text/pokecup/ultraball/claude2.txt",
	"text/pokecup/ultraball/mason2.txt",
	"text/pokecup/masterball/carmen2.txt",
	"text/pokecup/masterball/wyatt2.txt",
	"text/pokecup/masterball/cliff2.txt",
	"text/pokecup/masterball/dillon2.txt",
	"text/pokecup/masterball/molly2.txt",
	"text/pokecup/masterball/baxter2.txt",
	"text/pokecup/masterball/chen2.txt",
	"text/pokecup/masterball/pedro2.txt",
	"text/challengecup/pokeball/marcus2.txt",
	"text/challengecup/pokeball/peggy2.txt",
	"text/challengecup/pokeball/executivem2.txt",
	"text/challengecup/pokeball/melissa2.txt",
	"text/challengecup/pokeball/daren2.txt",
	"text/challengecup/greatball/curt2.txt",
	"text/challengecup/pokeball/executivef2.txt",
	"text/challengecup/pokeball/dwight2.txt",
	"text/challengecup/greatball/janjane2.txt",
	"text/challengecup/pokeball/curtis2.txt",
	"text/challengecup/greatball/oliver2.txt",
	"text/challengecup/greatball/darcy2.txt",
	"text/challengecup/greatball/gerald2.txt",
	"text/challengecup/greatball/emiko2.txt",
	"text/challengecup/greatball/roberto2.txt",
	"text/challengecup/greatball/travis2.txt",
	"text/challengecup/ultraball/marcus2.txt",
	"text/challengecup/ultraball/peggy2.txt",
	"text/challengecup/ultraball/executivem2.txt",
	"text/challengecup/ultraball/melissa2.txt",
	"text/challengecup/ultraball/daren2.txt",
	"text/challengecup/masterball/curt2.txt",
	"text/challengecup/ultraball/executivef2.txt",
	"text/challengecup/ultraball/dwight2.txt",
	"text/challengecup/masterball/janjane2.txt",
	"text/challengecup/ultraball/curtis2.txt",
	"text/challengecup/masterball/oliver2.txt",
	"text/challengecup/masterball/darcy2.txt",
	"text/challengecup/masterball/gerald2.txt",
	"text/challengecup/masterball/emiko2.txt",
	"text/challengecup/masterball/roberto2.txt",
	"text/challengecup/masterball/travis2.txt",
	"text/littlecup/bernie2.txt",
	"text/littlecup/stacy2.txt",
	"text/littlecup/grant2.txt",
	"text/littlecup/janet2.txt",
	"text/littlecup/clark2.txt",
	"text/littlecup/cora2.txt",
	"text/littlecup/tina2.txt",
	"text/littlecup/rex2.txt",
	"text/primecup/terry2.txt",
	"text/primecup/yang2.txt",
	"text/primecup/adam2.txt",
	"text/primecup/floria2.txt",
	"text/primecup/chase2.txt",
	"text/primecup/craig2.txt",
	"text/primecup/kathy2.txt",
	"text/primecup/marty2.txt",
	"text/rival2.txt",
	"text/academy/skilltest/trainer/cole.txt",
	"text/academy/skilltest/trainer/melvin.txt",
	"text/academy/skilltest/trainer/carson.txt",
	"text/academy/skilltest/trainer/clayton.txt",
	"text/academy/skilltest/trainer/jonathan.txt",
	"text/academy/skilltest/trainer/cyndy.txt",
	"text/academy/skilltest/trainer/nancy.txt",
	"text/academy/skilltest/gymleader/joseph.txt",
	"text/academy/skilltest/gymleader/naomi.txt",
	"text/academy/skilltest/gymleader/tammy.txt",
	"text/academy/skilltest/gymleader/dustin.txt",
	"text/academy/skilltest/gymleader/nolan.txt",
	"text/academy/skilltest/elitefour/connor.txt",
	"text/academy/skilltest/elitefour/becky.txt",
	"text/academy/skilltest/elitefour/ferris.txt",
	"text/academy/skilltest/elitefour/julian.txt"
};

int
strtopokemon(const char *s)
{
	int i;
	for (i = 0; i < 254; ++i) {
		if (strcasecmp(s, pokemon[i]) == 0) {
			return i;
		}
	}
}

int
strtoitem(const char *s)
{
	int i;
	for (i = 0; i < 250; ++i) {
		if (strcasecmp(s, items[i]) == 0) {
			return i;
		}
	}
}

int
strtomove(const char *s)
{
	int i;
	for (i = 0; i < 252; ++i) {
		if (strcasecmp(s, moves[i]) == 0) {
			return i;
		}
	}
}

int
strtogroup(const char *s)
{
	int i;
	for (i = 0; i < 63; ++i) {
		if (strcasecmp(s, groups[i]) == 0) {
			return i;
		}
	}
}

int
strtotrainer(const char *s)
{
	int i;
	for (i = 0; i < 106; ++i) {
		if (strcasecmp(s, trainers[i]) == 0) {
			return i;
		}
	}
}

int
strtotext(const char *s)
{
	int i;
	for (i = 0; i < 255; ++i) {
		if (strcasecmp(s, texts[i]) == 0) {
			return i;
		}
	}
}