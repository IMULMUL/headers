typedef enum _MM_PERM_ENUM
{
  _MM_PERM_AAAA = 0,
  _MM_PERM_AAAB = 1,
  _MM_PERM_AAAC = 2,
  _MM_PERM_AAAD = 3,
  _MM_PERM_AABA = 4,
  _MM_PERM_AABB = 5,
  _MM_PERM_AABC = 6,
  _MM_PERM_AABD = 7,
  _MM_PERM_AACA = 8,
  _MM_PERM_AACB = 9,
  _MM_PERM_AACC = 10,
  _MM_PERM_AACD = 11,
  _MM_PERM_AADA = 12,
  _MM_PERM_AADB = 13,
  _MM_PERM_AADC = 14,
  _MM_PERM_AADD = 15,
  _MM_PERM_ABAA = 16,
  _MM_PERM_ABAB = 17,
  _MM_PERM_ABAC = 18,
  _MM_PERM_ABAD = 19,
  _MM_PERM_ABBA = 20,
  _MM_PERM_ABBB = 21,
  _MM_PERM_ABBC = 22,
  _MM_PERM_ABBD = 23,
  _MM_PERM_ABCA = 24,
  _MM_PERM_ABCB = 25,
  _MM_PERM_ABCC = 26,
  _MM_PERM_ABCD = 27,
  _MM_PERM_ABDA = 28,
  _MM_PERM_ABDB = 29,
  _MM_PERM_ABDC = 30,
  _MM_PERM_ABDD = 31,
  _MM_PERM_ACAA = 32,
  _MM_PERM_ACAB = 33,
  _MM_PERM_ACAC = 34,
  _MM_PERM_ACAD = 35,
  _MM_PERM_ACBA = 36,
  _MM_PERM_ACBB = 37,
  _MM_PERM_ACBC = 38,
  _MM_PERM_ACBD = 39,
  _MM_PERM_ACCA = 40,
  _MM_PERM_ACCB = 41,
  _MM_PERM_ACCC = 42,
  _MM_PERM_ACCD = 43,
  _MM_PERM_ACDA = 44,
  _MM_PERM_ACDB = 45,
  _MM_PERM_ACDC = 46,
  _MM_PERM_ACDD = 47,
  _MM_PERM_ADAA = 48,
  _MM_PERM_ADAB = 49,
  _MM_PERM_ADAC = 50,
  _MM_PERM_ADAD = 51,
  _MM_PERM_ADBA = 52,
  _MM_PERM_ADBB = 53,
  _MM_PERM_ADBC = 54,
  _MM_PERM_ADBD = 55,
  _MM_PERM_ADCA = 56,
  _MM_PERM_ADCB = 57,
  _MM_PERM_ADCC = 58,
  _MM_PERM_ADCD = 59,
  _MM_PERM_ADDA = 60,
  _MM_PERM_ADDB = 61,
  _MM_PERM_ADDC = 62,
  _MM_PERM_ADDD = 63,
  _MM_PERM_BAAA = 64,
  _MM_PERM_BAAB = 65,
  _MM_PERM_BAAC = 66,
  _MM_PERM_BAAD = 67,
  _MM_PERM_BABA = 68,
  _MM_PERM_BABB = 69,
  _MM_PERM_BABC = 70,
  _MM_PERM_BABD = 71,
  _MM_PERM_BACA = 72,
  _MM_PERM_BACB = 73,
  _MM_PERM_BACC = 74,
  _MM_PERM_BACD = 75,
  _MM_PERM_BADA = 76,
  _MM_PERM_BADB = 77,
  _MM_PERM_BADC = 78,
  _MM_PERM_BADD = 79,
  _MM_PERM_BBAA = 80,
  _MM_PERM_BBAB = 81,
  _MM_PERM_BBAC = 82,
  _MM_PERM_BBAD = 83,
  _MM_PERM_BBBA = 84,
  _MM_PERM_BBBB = 85,
  _MM_PERM_BBBC = 86,
  _MM_PERM_BBBD = 87,
  _MM_PERM_BBCA = 88,
  _MM_PERM_BBCB = 89,
  _MM_PERM_BBCC = 90,
  _MM_PERM_BBCD = 91,
  _MM_PERM_BBDA = 92,
  _MM_PERM_BBDB = 93,
  _MM_PERM_BBDC = 94,
  _MM_PERM_BBDD = 95,
  _MM_PERM_BCAA = 96,
  _MM_PERM_BCAB = 97,
  _MM_PERM_BCAC = 98,
  _MM_PERM_BCAD = 99,
  _MM_PERM_BCBA = 100,
  _MM_PERM_BCBB = 101,
  _MM_PERM_BCBC = 102,
  _MM_PERM_BCBD = 103,
  _MM_PERM_BCCA = 104,
  _MM_PERM_BCCB = 105,
  _MM_PERM_BCCC = 106,
  _MM_PERM_BCCD = 107,
  _MM_PERM_BCDA = 108,
  _MM_PERM_BCDB = 109,
  _MM_PERM_BCDC = 110,
  _MM_PERM_BCDD = 111,
  _MM_PERM_BDAA = 112,
  _MM_PERM_BDAB = 113,
  _MM_PERM_BDAC = 114,
  _MM_PERM_BDAD = 115,
  _MM_PERM_BDBA = 116,
  _MM_PERM_BDBB = 117,
  _MM_PERM_BDBC = 118,
  _MM_PERM_BDBD = 119,
  _MM_PERM_BDCA = 120,
  _MM_PERM_BDCB = 121,
  _MM_PERM_BDCC = 122,
  _MM_PERM_BDCD = 123,
  _MM_PERM_BDDA = 124,
  _MM_PERM_BDDB = 125,
  _MM_PERM_BDDC = 126,
  _MM_PERM_BDDD = 127,
  _MM_PERM_CAAA = 128,
  _MM_PERM_CAAB = 129,
  _MM_PERM_CAAC = 130,
  _MM_PERM_CAAD = 131,
  _MM_PERM_CABA = 132,
  _MM_PERM_CABB = 133,
  _MM_PERM_CABC = 134,
  _MM_PERM_CABD = 135,
  _MM_PERM_CACA = 136,
  _MM_PERM_CACB = 137,
  _MM_PERM_CACC = 138,
  _MM_PERM_CACD = 139,
  _MM_PERM_CADA = 140,
  _MM_PERM_CADB = 141,
  _MM_PERM_CADC = 142,
  _MM_PERM_CADD = 143,
  _MM_PERM_CBAA = 144,
  _MM_PERM_CBAB = 145,
  _MM_PERM_CBAC = 146,
  _MM_PERM_CBAD = 147,
  _MM_PERM_CBBA = 148,
  _MM_PERM_CBBB = 149,
  _MM_PERM_CBBC = 150,
  _MM_PERM_CBBD = 151,
  _MM_PERM_CBCA = 152,
  _MM_PERM_CBCB = 153,
  _MM_PERM_CBCC = 154,
  _MM_PERM_CBCD = 155,
  _MM_PERM_CBDA = 156,
  _MM_PERM_CBDB = 157,
  _MM_PERM_CBDC = 158,
  _MM_PERM_CBDD = 159,
  _MM_PERM_CCAA = 160,
  _MM_PERM_CCAB = 161,
  _MM_PERM_CCAC = 162,
  _MM_PERM_CCAD = 163,
  _MM_PERM_CCBA = 164,
  _MM_PERM_CCBB = 165,
  _MM_PERM_CCBC = 166,
  _MM_PERM_CCBD = 167,
  _MM_PERM_CCCA = 168,
  _MM_PERM_CCCB = 169,
  _MM_PERM_CCCC = 170,
  _MM_PERM_CCCD = 171,
  _MM_PERM_CCDA = 172,
  _MM_PERM_CCDB = 173,
  _MM_PERM_CCDC = 174,
  _MM_PERM_CCDD = 175,
  _MM_PERM_CDAA = 176,
  _MM_PERM_CDAB = 177,
  _MM_PERM_CDAC = 178,
  _MM_PERM_CDAD = 179,
  _MM_PERM_CDBA = 180,
  _MM_PERM_CDBB = 181,
  _MM_PERM_CDBC = 182,
  _MM_PERM_CDBD = 183,
  _MM_PERM_CDCA = 184,
  _MM_PERM_CDCB = 185,
  _MM_PERM_CDCC = 186,
  _MM_PERM_CDCD = 187,
  _MM_PERM_CDDA = 188,
  _MM_PERM_CDDB = 189,
  _MM_PERM_CDDC = 190,
  _MM_PERM_CDDD = 191,
  _MM_PERM_DAAA = 192,
  _MM_PERM_DAAB = 193,
  _MM_PERM_DAAC = 194,
  _MM_PERM_DAAD = 195,
  _MM_PERM_DABA = 196,
  _MM_PERM_DABB = 197,
  _MM_PERM_DABC = 198,
  _MM_PERM_DABD = 199,
  _MM_PERM_DACA = 200,
  _MM_PERM_DACB = 201,
  _MM_PERM_DACC = 202,
  _MM_PERM_DACD = 203,
  _MM_PERM_DADA = 204,
  _MM_PERM_DADB = 205,
  _MM_PERM_DADC = 206,
  _MM_PERM_DADD = 207,
  _MM_PERM_DBAA = 208,
  _MM_PERM_DBAB = 209,
  _MM_PERM_DBAC = 210,
  _MM_PERM_DBAD = 211,
  _MM_PERM_DBBA = 212,
  _MM_PERM_DBBB = 213,
  _MM_PERM_DBBC = 214,
  _MM_PERM_DBBD = 215,
  _MM_PERM_DBCA = 216,
  _MM_PERM_DBCB = 217,
  _MM_PERM_DBCC = 218,
  _MM_PERM_DBCD = 219,
  _MM_PERM_DBDA = 220,
  _MM_PERM_DBDB = 221,
  _MM_PERM_DBDC = 222,
  _MM_PERM_DBDD = 223,
  _MM_PERM_DCAA = 224,
  _MM_PERM_DCAB = 225,
  _MM_PERM_DCAC = 226,
  _MM_PERM_DCAD = 227,
  _MM_PERM_DCBA = 228,
  _MM_PERM_DCBB = 229,
  _MM_PERM_DCBC = 230,
  _MM_PERM_DCBD = 231,
  _MM_PERM_DCCA = 232,
  _MM_PERM_DCCB = 233,
  _MM_PERM_DCCC = 234,
  _MM_PERM_DCCD = 235,
  _MM_PERM_DCDA = 236,
  _MM_PERM_DCDB = 237,
  _MM_PERM_DCDC = 238,
  _MM_PERM_DCDD = 239,
  _MM_PERM_DDAA = 240,
  _MM_PERM_DDAB = 241,
  _MM_PERM_DDAC = 242,
  _MM_PERM_DDAD = 243,
  _MM_PERM_DDBA = 244,
  _MM_PERM_DDBB = 245,
  _MM_PERM_DDBC = 246,
  _MM_PERM_DDBD = 247,
  _MM_PERM_DDCA = 248,
  _MM_PERM_DDCB = 249,
  _MM_PERM_DDCC = 250,
  _MM_PERM_DDCD = 251,
  _MM_PERM_DDDA = 252,
  _MM_PERM_DDDB = 253,
  _MM_PERM_DDDC = 254,
  _MM_PERM_DDDD = 255,
} MM_PERM_ENUM, *PMM_PERM_ENUM;

