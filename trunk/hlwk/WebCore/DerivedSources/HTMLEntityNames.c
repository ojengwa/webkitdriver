/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf -a -L ANSI-C -C -G -c -o -t -k '*' -N findEntity -D -s 2 ../html/HTMLEntityNames.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "../html/HTMLEntityNames.gperf"

/*
     Copyright (C) 1999 Lars Knoll (knoll@mpi-hd.mpg.de)
     Copyright (C) 2002, 2003, 2004, 2005 Apple Inc. All rights reserved.
  
     This library is free software; you can redistribute it and/or
     modify it under the terms of the GNU Library General Public
     License as published by the Free Software Foundation; either
     version 2 of the License, or (at your option) any later version.
  
     This library is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
     Library General Public License for more details.
  
     You should have received a copy of the GNU Library General Public License
     along with this library; see the file COPYING.LIB.  If not, write to
     the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
     Boston, MA 02110-1301, USA.
  
  ----------------------------------------------------------------------------
  
    HTMLEntityNames.gperf: input file to generate a hash table for entities
    HTMLEntityNames.c: DO NOT EDIT! generated by the command
    "gperf -a -L "ANSI-C" -C -G -c -o -t -k '*' -NfindEntity -D -s 2 HTMLEntityNames.gperf > entities.c"   
    from HTMLEntityNames.gperf 
*/
#line 29 "../html/HTMLEntityNames.gperf"
struct Entity {
    const char *name;
    int code;
};

#define TOTAL_KEYWORDS 262
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 28
#define MAX_HASH_VALUE 1091
/* maximum key range = 1064, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,   15,
        50,   20,    0, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092,  135,  145,   85,    0,   55,
        65,    5,    5,  140, 1092,   30,   20,    5,   15,   70,
        50,   40,   30,    5,   60,   95,   40, 1092,   25,   20,
        35, 1092, 1092, 1092, 1092, 1092, 1092,   85,   20,   25,
        35,    0,  250,  150,  315,   10,  410,    5,  105,  140,
         0,   40,   10,  215,   10,   50,   15,    5,   80,   15,
         5,  120,   10,    5, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092, 1092,
      1092, 1092, 1092, 1092, 1092, 1092, 1092
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+1];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct Entity wordlist[] =
  {
#line 201 "../html/HTMLEntityNames.gperf"
    {"not", 0x00ac},
#line 227 "../html/HTMLEntityNames.gperf"
    {"phi", 0x03c6},
#line 204 "../html/HTMLEntityNames.gperf"
    {"nsup", 0x2285},
#line 235 "../html/HTMLEntityNames.gperf"
    {"psi", 0x03c8},
#line 172 "../html/HTMLEntityNames.gperf"
    {"isin", 0x2208},
#line 202 "../html/HTMLEntityNames.gperf"
    {"notin", 0x2209},
#line 271 "../html/HTMLEntityNames.gperf"
    {"there4", 0x2234},
#line 270 "../html/HTMLEntityNames.gperf"
    {"tau", 0x03c4},
#line 203 "../html/HTMLEntityNames.gperf"
    {"nsub", 0x2284},
#line 122 "../html/HTMLEntityNames.gperf"
    {"chi", 0x03c7},
#line 281 "../html/HTMLEntityNames.gperf"
    {"uarr", 0x2191},
#line 241 "../html/HTMLEntityNames.gperf"
    {"rarr", 0x2192},
#line 118 "../html/HTMLEntityNames.gperf"
    {"cap", 0x2229},
#line 223 "../html/HTMLEntityNames.gperf"
    {"part", 0x2202},
#line 247 "../html/HTMLEntityNames.gperf"
    {"rho", 0x03c1},
#line 141 "../html/HTMLEntityNames.gperf"
    {"emsp", 0x2003},
#line 231 "../html/HTMLEntityNames.gperf"
    {"pound", 0x00a3},
#line 169 "../html/HTMLEntityNames.gperf"
    {"int", 0x222b},
#line 137 "../html/HTMLEntityNames.gperf"
    {"eacute", 0x00e9},
#line 78 "../html/HTMLEntityNames.gperf"
    {"Phi", 0x03a6},
#line 280 "../html/HTMLEntityNames.gperf"
    {"uacute", 0x00fa},
#line 81 "../html/HTMLEntityNames.gperf"
    {"Psi", 0x03a8},
#line 132 "../html/HTMLEntityNames.gperf"
    {"darr", 0x2193},
#line 275 "../html/HTMLEntityNames.gperf"
    {"thorn", 0x00fe},
#line 163 "../html/HTMLEntityNames.gperf"
    {"iacute", 0x00ed},
#line 206 "../html/HTMLEntityNames.gperf"
    {"nu", 0x03bd},
#line 84 "../html/HTMLEntityNames.gperf"
    {"Rho", 0x03a1},
#line 138 "../html/HTMLEntityNames.gperf"
    {"ecirc", 0x00ea},
#line 66 "../html/HTMLEntityNames.gperf"
    {"Mu", 0x039c},
#line 88 "../html/HTMLEntityNames.gperf"
    {"Tau", 0x03a4},
#line 197 "../html/HTMLEntityNames.gperf"
    {"nbsp", 0x00a0},
#line 282 "../html/HTMLEntityNames.gperf"
    {"ucirc", 0x00fb},
#line 96 "../html/HTMLEntityNames.gperf"
    {"Yacute", 0x00dd},
#line 215 "../html/HTMLEntityNames.gperf"
    {"or", 0x2228},
#line 145 "../html/HTMLEntityNames.gperf"
    {"eta", 0x03b7},
#line 164 "../html/HTMLEntityNames.gperf"
    {"icirc", 0x00ee},
#line 171 "../html/HTMLEntityNames.gperf"
    {"iquest", 0x00bf},
#line 68 "../html/HTMLEntityNames.gperf"
    {"Nu", 0x039d},
#line 106 "../html/HTMLEntityNames.gperf"
    {"amp", 38},
#line 274 "../html/HTMLEntityNames.gperf"
    {"thinsp", 0x2009},
#line 56 "../html/HTMLEntityNames.gperf"
    {"GT", 62},
#line 83 "../html/HTMLEntityNames.gperf"
    {"REG", 0x00ae},
#line 142 "../html/HTMLEntityNames.gperf"
    {"ensp", 0x2002},
#line 238 "../html/HTMLEntityNames.gperf"
    {"radic", 0x221a},
#line 46 "../html/HTMLEntityNames.gperf"
    {"Chi", 0x03a7},
#line 253 "../html/HTMLEntityNames.gperf"
    {"sdot", 0x22c5},
#line 144 "../html/HTMLEntityNames.gperf"
    {"equiv", 0x2261},
#line 207 "../html/HTMLEntityNames.gperf"
    {"oacute", 0x00f3},
#line 189 "../html/HTMLEntityNames.gperf"
    {"lt", 60},
#line 284 "../html/HTMLEntityNames.gperf"
    {"uml", 0x00a8},
#line 234 "../html/HTMLEntityNames.gperf"
    {"prop", 0x221d},
#line 64 "../html/HTMLEntityNames.gperf"
    {"LT", 60},
#line 128 "../html/HTMLEntityNames.gperf"
    {"cup", 0x222a},
#line 170 "../html/HTMLEntityNames.gperf"
    {"iota", 0x03b9},
#line 208 "../html/HTMLEntityNames.gperf"
    {"ocirc", 0x00f4},
#line 50 "../html/HTMLEntityNames.gperf"
    {"Eacute", 0x00c9},
#line 185 "../html/HTMLEntityNames.gperf"
    {"loz", 0x25ca},
#line 222 "../html/HTMLEntityNames.gperf"
    {"para", 0x00b6},
#line 272 "../html/HTMLEntityNames.gperf"
    {"theta", 0x03b8},
#line 129 "../html/HTMLEntityNames.gperf"
    {"curren", 0x00a4},
#line 213 "../html/HTMLEntityNames.gperf"
    {"omicron", 0x03bf},
#line 148 "../html/HTMLEntityNames.gperf"
    {"euro", 0x20ac},
#line 174 "../html/HTMLEntityNames.gperf"
    {"kappa", 0x03ba},
#line 233 "../html/HTMLEntityNames.gperf"
    {"prod", 0x220f},
#line 51 "../html/HTMLEntityNames.gperf"
    {"Ecirc", 0x00ca},
#line 70 "../html/HTMLEntityNames.gperf"
    {"Oacute", 0x00d3},
#line 263 "../html/HTMLEntityNames.gperf"
    {"sup", 0x2283},
#line 267 "../html/HTMLEntityNames.gperf"
    {"supe", 0x2287},
#line 101 "../html/HTMLEntityNames.gperf"
    {"acute", 0x00b4},
#line 54 "../html/HTMLEntityNames.gperf"
    {"Eta", 0x0397},
#line 179 "../html/HTMLEntityNames.gperf"
    {"larr", 0x2190},
#line 140 "../html/HTMLEntityNames.gperf"
    {"empty", 0x2205},
#line 260 "../html/HTMLEntityNames.gperf"
    {"sub", 0x2282},
#line 261 "../html/HTMLEntityNames.gperf"
    {"sube", 0x2286},
#line 71 "../html/HTMLEntityNames.gperf"
    {"Ocirc", 0x00d4},
#line 99 "../html/HTMLEntityNames.gperf"
    {"aacute", 0x00e1},
#line 158 "../html/HTMLEntityNames.gperf"
    {"gt", 62},
#line 49 "../html/HTMLEntityNames.gperf"
    {"ETH", 0x00d0},
#line 264 "../html/HTMLEntityNames.gperf"
    {"sup1", 0x00b9},
#line 63 "../html/HTMLEntityNames.gperf"
    {"Kappa", 0x039a},
#line 205 "../html/HTMLEntityNames.gperf"
    {"ntilde", 0x00f1},
#line 74 "../html/HTMLEntityNames.gperf"
    {"Omicron", 0x039f},
#line 107 "../html/HTMLEntityNames.gperf"
    {"and", 0x2227},
#line 266 "../html/HTMLEntityNames.gperf"
    {"sup3", 0x00b3},
#line 242 "../html/HTMLEntityNames.gperf"
    {"rceil", 0x2309},
#line 90 "../html/HTMLEntityNames.gperf"
    {"Uacute", 0x00da},
#line 126 "../html/HTMLEntityNames.gperf"
    {"copy", 0x00a9},
#line 100 "../html/HTMLEntityNames.gperf"
    {"acirc", 0x00e2},
#line 279 "../html/HTMLEntityNames.gperf"
    {"uArr", 0x21d1},
#line 89 "../html/HTMLEntityNames.gperf"
    {"Theta", 0x0398},
#line 67 "../html/HTMLEntityNames.gperf"
    {"Ntilde", 0x00d1},
#line 237 "../html/HTMLEntityNames.gperf"
    {"rArr", 0x21d2},
#line 91 "../html/HTMLEntityNames.gperf"
    {"Ucirc", 0x00db},
#line 85 "../html/HTMLEntityNames.gperf"
    {"Scaron", 0x0160},
#line 255 "../html/HTMLEntityNames.gperf"
    {"shy", 0x00ad},
#line 239 "../html/HTMLEntityNames.gperf"
    {"rang", 0x3009},
#line 127 "../html/HTMLEntityNames.gperf"
    {"crarr", 0x21b5},
#line 125 "../html/HTMLEntityNames.gperf"
    {"cong", 0x2245},
#line 278 "../html/HTMLEntityNames.gperf"
    {"trade", 0x2122},
#line 290 "../html/HTMLEntityNames.gperf"
    {"yacute", 0x00fd},
#line 265 "../html/HTMLEntityNames.gperf"
    {"sup2", 0x00b2},
#line 211 "../html/HTMLEntityNames.gperf"
    {"oline", 0x203e},
#line 190 "../html/HTMLEntityNames.gperf"
    {"macr", 0x00af},
#line 149 "../html/HTMLEntityNames.gperf"
    {"exist", 0x2203},
#line 219 "../html/HTMLEntityNames.gperf"
    {"otilde", 0x00f5},
#line 35 "../html/HTMLEntityNames.gperf"
    {"AMP", 38},
#line 130 "../html/HTMLEntityNames.gperf"
    {"dArr", 0x21d3},
#line 36 "../html/HTMLEntityNames.gperf"
    {"Aacute", 0x00c1},
#line 44 "../html/HTMLEntityNames.gperf"
    {"COPY", 0x00a9},
#line 58 "../html/HTMLEntityNames.gperf"
    {"Iacute", 0x00cd},
#line 82 "../html/HTMLEntityNames.gperf"
    {"QUOT", 34},
#line 232 "../html/HTMLEntityNames.gperf"
    {"prime", 0x2032},
#line 119 "../html/HTMLEntityNames.gperf"
    {"ccedil", 0x00e7},
#line 37 "../html/HTMLEntityNames.gperf"
    {"Acirc", 0x00c2},
#line 195 "../html/HTMLEntityNames.gperf"
    {"mu", 0x03bc},
#line 59 "../html/HTMLEntityNames.gperf"
    {"Icirc", 0x00ce},
#line 252 "../html/HTMLEntityNames.gperf"
    {"scaron", 0x0161},
#line 76 "../html/HTMLEntityNames.gperf"
    {"Otilde", 0x00d5},
#line 196 "../html/HTMLEntityNames.gperf"
    {"nabla", 0x2207},
#line 124 "../html/HTMLEntityNames.gperf"
    {"clubs", 0x2663},
#line 112 "../html/HTMLEntityNames.gperf"
    {"atilde", 0x00e3},
#line 268 "../html/HTMLEntityNames.gperf"
    {"supl", 0x00b9},
#line 167 "../html/HTMLEntityNames.gperf"
    {"image", 0x2111},
#line 220 "../html/HTMLEntityNames.gperf"
    {"otimes", 0x2297},
#line 199 "../html/HTMLEntityNames.gperf"
    {"ne", 0x2260},
#line 61 "../html/HTMLEntityNames.gperf"
    {"Iota", 0x0399},
#line 80 "../html/HTMLEntityNames.gperf"
    {"Prime", 0x2033},
#line 180 "../html/HTMLEntityNames.gperf"
    {"lceil", 0x2308},
#line 217 "../html/HTMLEntityNames.gperf"
    {"ordm", 0x00ba},
#line 116 "../html/HTMLEntityNames.gperf"
    {"brvbar", 0x00a6},
#line 262 "../html/HTMLEntityNames.gperf"
    {"sum", 0x2211},
#line 175 "../html/HTMLEntityNames.gperf"
    {"lArr", 0x21d0},
#line 243 "../html/HTMLEntityNames.gperf"
    {"rdquo", 0x201d},
#line 45 "../html/HTMLEntityNames.gperf"
    {"Ccedil", 0x00c7},
#line 108 "../html/HTMLEntityNames.gperf"
    {"ang", 0x2220},
#line 177 "../html/HTMLEntityNames.gperf"
    {"lang", 0x3008},
#line 212 "../html/HTMLEntityNames.gperf"
    {"omega", 0x03c9},
#line 226 "../html/HTMLEntityNames.gperf"
    {"perp", 0x22a5},
#line 114 "../html/HTMLEntityNames.gperf"
    {"bdquo", 0x201e},
#line 184 "../html/HTMLEntityNames.gperf"
    {"lowast", 0x2217},
#line 250 "../html/HTMLEntityNames.gperf"
    {"rsquo", 0x2019},
#line 248 "../html/HTMLEntityNames.gperf"
    {"rlm", 0x200f},
#line 121 "../html/HTMLEntityNames.gperf"
    {"cent", 0x00a2},
#line 240 "../html/HTMLEntityNames.gperf"
    {"raquo", 0x00bb},
#line 41 "../html/HTMLEntityNames.gperf"
    {"Atilde", 0x00c3},
#line 186 "../html/HTMLEntityNames.gperf"
    {"lrm", 0x200e},
#line 110 "../html/HTMLEntityNames.gperf"
    {"aring", 0x00e5},
#line 288 "../html/HTMLEntityNames.gperf"
    {"weierp", 0x2118},
#line 73 "../html/HTMLEntityNames.gperf"
    {"Omega", 0x03a9},
#line 117 "../html/HTMLEntityNames.gperf"
    {"bull", 0x2022},
#line 168 "../html/HTMLEntityNames.gperf"
    {"infin", 0x221e},
#line 224 "../html/HTMLEntityNames.gperf"
    {"percnt", 0x0025},
#line 87 "../html/HTMLEntityNames.gperf"
    {"THORN", 0x00de},
#line 146 "../html/HTMLEntityNames.gperf"
    {"eth", 0x00f0},
#line 269 "../html/HTMLEntityNames.gperf"
    {"szlig", 0x00df},
#line 65 "../html/HTMLEntityNames.gperf"
    {"Lambda", 0x039b},
#line 147 "../html/HTMLEntityNames.gperf"
    {"euml", 0x00eb},
#line 287 "../html/HTMLEntityNames.gperf"
    {"uuml", 0x00fc},
#line 47 "../html/HTMLEntityNames.gperf"
    {"Dagger", 0x2021},
#line 173 "../html/HTMLEntityNames.gperf"
    {"iuml", 0x00ef},
#line 251 "../html/HTMLEntityNames.gperf"
    {"sbquo", 0x201a},
#line 254 "../html/HTMLEntityNames.gperf"
    {"sect", 0x00a7},
#line 97 "../html/HTMLEntityNames.gperf"
    {"Yuml", 0x0178},
#line 40 "../html/HTMLEntityNames.gperf"
    {"Aring", 0x00c5},
#line 230 "../html/HTMLEntityNames.gperf"
    {"plusmn", 0x00b1},
#line 236 "../html/HTMLEntityNames.gperf"
    {"quot", 34},
#line 182 "../html/HTMLEntityNames.gperf"
    {"le", 0x2264},
#line 160 "../html/HTMLEntityNames.gperf"
    {"harr", 0x2194},
#line 246 "../html/HTMLEntityNames.gperf"
    {"rfloor", 0x230b},
#line 293 "../html/HTMLEntityNames.gperf"
    {"zeta", 0x03b6},
#line 221 "../html/HTMLEntityNames.gperf"
    {"ouml", 0x00f6},
#line 181 "../html/HTMLEntityNames.gperf"
    {"ldquo", 0x201c},
#line 131 "../html/HTMLEntityNames.gperf"
    {"dagger", 0x2020},
#line 291 "../html/HTMLEntityNames.gperf"
    {"yen", 0x00a5},
#line 115 "../html/HTMLEntityNames.gperf"
    {"beta", 0x03b2},
#line 111 "../html/HTMLEntityNames.gperf"
    {"asymp", 0x2248},
#line 249 "../html/HTMLEntityNames.gperf"
    {"rsaquo", 0x203a},
#line 216 "../html/HTMLEntityNames.gperf"
    {"ordf", 0x00aa},
#line 55 "../html/HTMLEntityNames.gperf"
    {"Euml", 0x00cb},
#line 188 "../html/HTMLEntityNames.gperf"
    {"lsquo", 0x2018},
#line 98 "../html/HTMLEntityNames.gperf"
    {"Zeta", 0x0396},
#line 178 "../html/HTMLEntityNames.gperf"
    {"laquo", 0x00ab},
#line 109 "../html/HTMLEntityNames.gperf"
    {"apos", 0x0027},
#line 57 "../html/HTMLEntityNames.gperf"
    {"Gamma", 0x0393},
#line 77 "../html/HTMLEntityNames.gperf"
    {"Ouml", 0x00d6},
#line 165 "../html/HTMLEntityNames.gperf"
    {"iexcl", 0x00a1},
#line 157 "../html/HTMLEntityNames.gperf"
    {"ge", 0x2265},
#line 69 "../html/HTMLEntityNames.gperf"
    {"OElig", 0x0152},
#line 176 "../html/HTMLEntityNames.gperf"
    {"lambda", 0x03bb},
#line 200 "../html/HTMLEntityNames.gperf"
    {"ni", 0x220b},
#line 245 "../html/HTMLEntityNames.gperf"
    {"reg", 0x00ae},
#line 113 "../html/HTMLEntityNames.gperf"
    {"auml", 0x00e4},
#line 289 "../html/HTMLEntityNames.gperf"
    {"xi", 0x03be},
#line 214 "../html/HTMLEntityNames.gperf"
    {"oplus", 0x2295},
#line 228 "../html/HTMLEntityNames.gperf"
    {"pi", 0x03c0},
#line 94 "../html/HTMLEntityNames.gperf"
    {"Uuml", 0x00dc},
#line 143 "../html/HTMLEntityNames.gperf"
    {"epsilon", 0x03b5},
#line 294 "../html/HTMLEntityNames.gperf"
    {"zwj", 0x200d},
#line 295 "../html/HTMLEntityNames.gperf"
    {"zwnj", 0x200c},
#line 120 "../html/HTMLEntityNames.gperf"
    {"cedil", 0x00b8},
#line 153 "../html/HTMLEntityNames.gperf"
    {"frac14", 0x00bc},
#line 286 "../html/HTMLEntityNames.gperf"
    {"upsilon", 0x03c5},
#line 154 "../html/HTMLEntityNames.gperf"
    {"frac34", 0x00be},
#line 95 "../html/HTMLEntityNames.gperf"
    {"Xi", 0x039e},
#line 133 "../html/HTMLEntityNames.gperf"
    {"deg", 0x00b0},
#line 259 "../html/HTMLEntityNames.gperf"
    {"spades", 0x2660},
#line 273 "../html/HTMLEntityNames.gperf"
    {"thetasym", 0x03d1},
#line 292 "../html/HTMLEntityNames.gperf"
    {"yuml", 0x00ff},
#line 244 "../html/HTMLEntityNames.gperf"
    {"real", 0x211c},
#line 198 "../html/HTMLEntityNames.gperf"
    {"ndash", 0x2013},
#line 183 "../html/HTMLEntityNames.gperf"
    {"lfloor", 0x230a},
#line 48 "../html/HTMLEntityNames.gperf"
    {"Delta", 0x0394},
#line 79 "../html/HTMLEntityNames.gperf"
    {"Pi", 0x03a0},
#line 42 "../html/HTMLEntityNames.gperf"
    {"Auml", 0x00c4},
#line 62 "../html/HTMLEntityNames.gperf"
    {"Iuml", 0x00cf},
#line 34 "../html/HTMLEntityNames.gperf"
    {"AElig", 0x00c6},
#line 187 "../html/HTMLEntityNames.gperf"
    {"lsaquo", 0x2039},
#line 123 "../html/HTMLEntityNames.gperf"
    {"circ", 0x02c6},
#line 152 "../html/HTMLEntityNames.gperf"
    {"frac12", 0x00bd},
#line 53 "../html/HTMLEntityNames.gperf"
    {"Epsilon", 0x0395},
#line 159 "../html/HTMLEntityNames.gperf"
    {"hArr", 0x21d4},
#line 134 "../html/HTMLEntityNames.gperf"
    {"delta", 0x03b4},
#line 139 "../html/HTMLEntityNames.gperf"
    {"egrave", 0x00e8},
#line 43 "../html/HTMLEntityNames.gperf"
    {"Beta", 0x0392},
#line 283 "../html/HTMLEntityNames.gperf"
    {"ugrave", 0x00f9},
#line 229 "../html/HTMLEntityNames.gperf"
    {"piv", 0x03d6},
#line 166 "../html/HTMLEntityNames.gperf"
    {"igrave", 0x00ec},
#line 93 "../html/HTMLEntityNames.gperf"
    {"Upsilon", 0x03a5},
#line 225 "../html/HTMLEntityNames.gperf"
    {"permil", 0x2030},
#line 210 "../html/HTMLEntityNames.gperf"
    {"ograve", 0x00f2},
#line 156 "../html/HTMLEntityNames.gperf"
    {"gamma", 0x03b3},
#line 155 "../html/HTMLEntityNames.gperf"
    {"frasl", 0x2044},
#line 52 "../html/HTMLEntityNames.gperf"
    {"Egrave", 0x00c8},
#line 209 "../html/HTMLEntityNames.gperf"
    {"oelig", 0x0153},
#line 72 "../html/HTMLEntityNames.gperf"
    {"Ograve", 0x00d2},
#line 276 "../html/HTMLEntityNames.gperf"
    {"tilde", 0x02dc},
#line 151 "../html/HTMLEntityNames.gperf"
    {"forall", 0x2200},
#line 136 "../html/HTMLEntityNames.gperf"
    {"divide", 0x00f7},
#line 103 "../html/HTMLEntityNames.gperf"
    {"agrave", 0x00e0},
#line 150 "../html/HTMLEntityNames.gperf"
    {"fnof", 0x0192},
#line 92 "../html/HTMLEntityNames.gperf"
    {"Ugrave", 0x00d9},
#line 191 "../html/HTMLEntityNames.gperf"
    {"mdash", 0x2014},
#line 285 "../html/HTMLEntityNames.gperf"
    {"upsih", 0x03d2},
#line 258 "../html/HTMLEntityNames.gperf"
    {"sim", 0x223c},
#line 102 "../html/HTMLEntityNames.gperf"
    {"aelig", 0x00e6},
#line 194 "../html/HTMLEntityNames.gperf"
    {"minus", 0x2212},
#line 218 "../html/HTMLEntityNames.gperf"
    {"oslash", 0x00f8},
#line 277 "../html/HTMLEntityNames.gperf"
    {"times", 0x00d7},
#line 192 "../html/HTMLEntityNames.gperf"
    {"micro", 0x00b5},
#line 38 "../html/HTMLEntityNames.gperf"
    {"Agrave", 0x00c0},
#line 60 "../html/HTMLEntityNames.gperf"
    {"Igrave", 0x00cc},
#line 105 "../html/HTMLEntityNames.gperf"
    {"alpha", 0x03b1},
#line 75 "../html/HTMLEntityNames.gperf"
    {"Oslash", 0x00d8},
#line 193 "../html/HTMLEntityNames.gperf"
    {"middot", 0x00b7},
#line 39 "../html/HTMLEntityNames.gperf"
    {"Alpha", 0x0391},
#line 135 "../html/HTMLEntityNames.gperf"
    {"diams", 0x2666},
#line 161 "../html/HTMLEntityNames.gperf"
    {"hearts", 0x2665},
#line 104 "../html/HTMLEntityNames.gperf"
    {"alefsym", 0x2135},
#line 86 "../html/HTMLEntityNames.gperf"
    {"Sigma", 0x03a3},
#line 162 "../html/HTMLEntityNames.gperf"
    {"hellip", 0x2026},
#line 256 "../html/HTMLEntityNames.gperf"
    {"sigma", 0x03c3},
#line 257 "../html/HTMLEntityNames.gperf"
    {"sigmaf", 0x03c2}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,  -1,
     -1,  -1,  -1,   1,   2,  -1,  -1,  -1,   3,   4,
      5,   6,  -1,   7,   8,  -1,  -1,  -1,   9,  10,
     -1,  -1,  -1,  -1,  11,  -1,  -1,  -1,  12,  13,
     -1,  -1,  -1,  14,  15,  16,  -1,  -1,  17,  -1,
     -1,  18,  -1,  19,  -1,  -1,  20,  -1,  21,  22,
     23,  24,  25,  26,  -1,  27,  -1,  28,  29,  30,
     31,  32,  33,  34,  -1,  35,  36,  37,  38,  -1,
     -1,  39,  40,  41,  42,  43,  -1,  -1,  44,  45,
     46,  47,  48,  49,  50,  -1,  -1,  51,  52,  -1,
     -1,  -1,  -1,  -1,  53,  54,  55,  -1,  56,  57,
     58,  59,  60,  -1,  61,  62,  -1,  -1,  -1,  63,
     64,  65,  -1,  66,  67,  68,  -1,  -1,  69,  70,
     71,  -1,  -1,  72,  73,  74,  75,  76,  77,  78,
     79,  80,  81,  82,  83,  84,  85,  -1,  -1,  86,
     87,  -1,  -1,  -1,  88,  89,  90,  -1,  -1,  91,
     92,  93,  -1,  94,  95,  96,  -1,  -1,  -1,  97,
     98,  99,  -1,  -1, 100, 101,  -1,  -1,  -1, 102,
    103, 104,  -1, 105, 106,  -1, 107,  -1,  -1, 108,
     -1, 109,  -1,  -1, 110, 111, 112,  -1,  -1,  -1,
    113,  -1, 114,  -1,  -1, 115, 116,  -1,  -1,  -1,
     -1, 117,  -1,  -1,  -1, 118,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 119, 120,  -1,  -1, 121,
    122, 123, 124,  -1, 125, 126,  -1,  -1,  -1,  -1,
    127,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 128,
     -1, 129,  -1, 130, 131, 132, 133,  -1, 134, 135,
    136,  -1,  -1,  -1, 137, 138, 139,  -1,  -1,  -1,
    140,  -1,  -1, 141, 142, 143, 144,  -1, 145,  -1,
    146, 147,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    148,  -1,  -1,  -1, 149, 150, 151,  -1,  -1,  -1,
    152,  -1,  -1, 153,  -1, 154, 155,  -1,  -1, 156,
     -1,  -1,  -1,  -1, 157,  -1, 158,  -1,  -1, 159,
    160,  -1,  -1,  -1, 161,  -1,  -1,  -1,  -1, 162,
    163, 164,  -1,  -1, 165,  -1,  -1, 166,  -1, 167,
     -1, 168,  -1,  -1, 169,  -1,  -1,  -1,  -1, 170,
    171, 172,  -1, 173, 174, 175, 176,  -1,  -1, 177,
     -1,  -1,  -1,  -1, 178, 179,  -1,  -1,  -1, 180,
    181,  -1,  -1,  -1, 182, 183,  -1,  -1,  -1, 184,
    185,  -1, 186,  -1,  -1, 187,  -1,  -1,  -1,  -1,
     -1, 188, 189, 190, 191,  -1,  -1, 192,  -1,  -1,
    193,  -1, 194,  -1, 195,  -1,  -1, 196, 197, 198,
    199, 200, 201,  -1,  -1,  -1, 202, 203, 204,  -1,
     -1, 205,  -1, 206,  -1,  -1,  -1,  -1,  -1, 207,
     -1,  -1,  -1,  -1, 208, 209, 210,  -1,  -1,  -1,
    211,  -1, 212,  -1, 213,  -1,  -1,  -1,  -1, 214,
    215, 216,  -1,  -1, 217,  -1,  -1,  -1,  -1,  -1,
     -1, 218, 219,  -1, 220,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 221, 222,  -1,  -1, 223,
     -1, 224,  -1, 225,  -1,  -1, 226,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 227,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 228,  -1,  -1,  -1,  -1, 229,  -1,  -1,  -1,
    230,  -1,  -1,  -1,  -1, 231,  -1,  -1,  -1,  -1,
     -1, 232,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    233,  -1,  -1,  -1,  -1,  -1, 234,  -1,  -1,  -1,
    235, 236,  -1,  -1,  -1,  -1, 237,  -1,  -1,  -1,
     -1, 238,  -1,  -1, 239,  -1,  -1,  -1,  -1,  -1,
     -1, 240,  -1,  -1,  -1, 241,  -1,  -1,  -1,  -1,
    242,  -1,  -1, 243,  -1, 244,  -1,  -1,  -1,  -1,
    245,  -1,  -1,  -1,  -1,  -1, 246,  -1,  -1,  -1,
    247,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    248, 249,  -1,  -1,  -1,  -1, 250,  -1,  -1,  -1,
    251,  -1,  -1,  -1,  -1,  -1, 252,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 253,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    254,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 255,  -1,  -1,  -1,  -1,
     -1, 256,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 257,  -1,  -1, 258,  -1,  -1,  -1,  -1,
     -1, 259,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    260,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 261
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct Entity *
findEntity (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist[index];
            }
        }
    }
  return 0;
}
#line 296 "../html/HTMLEntityNames.gperf"

