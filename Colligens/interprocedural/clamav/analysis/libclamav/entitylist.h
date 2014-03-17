#include <stubs.h>
/*
 *  Copyright (C) 2007-2008 Sourcefire, Inc.
 *
 *  Authors: Török Edvin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

//#include <hashtab.h>
static struct cli_element entities_htable_elements[] = {
	{"rsaquo", 8250, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"Kcy", 1050, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"emsp13", 8196, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"clubs", 9827, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Tau", 932, 3},
	{"bcong", 8780, 5},
	{NULL,0,0},
	{"ocirc", 244, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Upsilon", 933, 7},
	{NULL,0,0},
	{"ape", 8778, 3},
	{NULL,0,0},
	{"dashv", 8867, 5},
	{NULL,0,0},
	{"hairsp", 8202, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"piv", 982, 3},
	{NULL,0,0},
	{"plus", 43, 4},
	{"psi", 968, 3},
	{"frac13", 8531, 6},
	{"sube", 8838, 4},
	{NULL,0,0},
	{"aacgr", 940, 5},
	{"vDash", 8872, 5},
	{"Eta", 919, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxUr", 9561, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"euro", 8364, 4},
	{"dblac", 733, 5},
	{"spades", 9824, 6},
	{"gel", 8923, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"frac15", 8533, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Eacgr", 904, 5},
	{"rArr", 8658, 4},
	{"dollar", 36, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"Acirc", 194, 5},
	{"ang90", 8735, 5},
	{"scaron", 353, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"djcy", 1106, 4},
	{"lcy", 1083, 3},
	{NULL,0,0},
	{"Dot", 168, 3},
	{"sol", 47, 3},
	{NULL,0,0},
	{"blk34", 9619, 5},
	{NULL,0,0},
	{"numero", 8470, 6},
	{NULL,0,0},
	{"osol", 8856, 4},
	{NULL,0,0},
	{"nbsp", 160, 4},
	{"supe", 8839, 4},
	{"NJcy", 1034, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sharp", 9839, 5},
	{NULL,0,0},
	{"gcy", 1075, 3},
	{NULL,0,0},
	{"mid", 8739, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"drcrop", 8972, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"shchcy", 1097, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sim", 8764, 3},
	{"puncsp", 8200, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"tau", 964, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxDR", 9556, 5},
	{"agrave", 224, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxVr", 9567, 5},
	{"Aring", 197, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxDr", 9555, 5},
	{NULL,0,0},
	{"dgr", 948, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ssmile", 8995, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"ltrie", 8884, 5},
	{"boxHU", 9577, 5},
	{"ne", 8800, 2},
	{NULL,0,0},
	{"ang", 8736, 3},
	{"pre", 10927, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"bump", 8782, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"there4", 8756, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"nu", 957, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"thetas", 952, 6},
	{"Ocy", 1054, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"lceil", 8968, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"jnodot", 106, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"bumpe", 8783, 5},
	{"dlcrop", 8973, 6},
	{NULL,0,0},
	{"leg", 8922, 3},
	{"bsol", 92, 4},
	{"idigr", 970, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxVh", 9579, 5},
	{"sqcup", 8852, 5},
	{NULL,0,0},
	{"gimel", 8503, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Omega", 937, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"upsi", 965, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"eta", 951, 3},
	{"frac38", 8540, 6},
	{"kgr", 954, 3},
	{"Ocirc", 212, 5},
	{"yacy", 1103, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"horbar", 8213, 6},
	{"Idigr", 938, 5},
	{NULL,0,0},
	{"bottom", 8869, 6},
	{NULL,0,0},
	{"rarr", 8594, 4},
	{"reg", 174, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"xdtri", 9661, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Igr", 921, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Bcy", 1041, 3},
	{"prod", 8719, 4},
	{"cuesc", 8927, 5},
	{"uArr", 8657, 4},
	{"Mgr", 924, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"flat", 9837, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"acute", 180, 5},
	{"sum", 8721, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"DJcy", 1026, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Eacute", 201, 6},
	{"larr", 8592, 4},
	{"Pgr", 928, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"lArr", 8656, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"natur", 9838, 5},
	{NULL,0,0},
	{"Euml", 203, 4},
	{NULL,0,0},
	{"Nu", 925, 2},
	{NULL,0,0},
	{"ecolon", 8789, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"cross", 10007, 5},
	{"ljcy", 1113, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"alpha", 945, 5},
	{"dscy", 1109, 4},
	{"dagger", 8224, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"THgr", 920, 4},
	{"conint", 8750, 6},
	{"Xi", 926, 2},
	{"Sigma", 931, 5},
	{NULL,0,0},
	{"angsph", 8738, 6},
	{NULL,0,0},
	{"boxvl", 9508, 5},
	{"Auml", 196, 4},
	{"lsquor", 8218, 6},
	{"squf", 9642, 4},
	{"ordm", 186, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Jukcy", 1028, 5},
	{"THORN", 222, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxuL", 9563, 5},
	{"prime", 8242, 5},
	{"cedil", 184, 5},
	{"kjcy", 1116, 4},
	{"hearts", 9829, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"xutri", 9651, 5},
	{"DScy", 1029, 4},
	{"cir", 9675, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"Omicron", 927, 7},
	{"colon", 58, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"darr", 8595, 4},
	{"macr", 175, 4},
	{"uplus", 8846, 5},
	{"gl", 8823, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ges", 10878, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"Icirc", 206, 5},
	{NULL,0,0},
	{"telrec", 8981, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"bernou", 8492, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"frac45", 8536, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"dot", 729, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"bcy", 1073, 3},
	{"ell", 8467, 3},
	{"zwj", 8205, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"Oacute", 211, 6},
	{NULL,0,0},
	{"acy", 1072, 3},
	{"zwnj", 8204, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"mdash", 8212, 5},
	{"Vcy", 1042, 3},
	{NULL,0,0},
	{"nldr", 8229, 4},
	{"rfloor", 8971, 6},
	{NULL,0,0},
	{"Epsilon", 917, 7},
	{"Pi", 928, 2},
	{"verbar", 124, 6},
	{NULL,0,0},
	{"ldot", 8918, 4},
	{NULL,0,0},
	{"top", 8868, 3},
	{NULL,0,0},
	{"part", 8706, 4},
	{"lE", 8806, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"lpar", 40, 4},
	{"eacgr", 941, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"die", 168, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ogr", 959, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"bepsi", 1014, 5},
	{"utrif", 9652, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"kcy", 1082, 3},
	{"ocir", 8858, 4},
	{"curren", 164, 6},
	{"permil", 8240, 6},
	{"omega", 969, 5},
	{"efDot", 8786, 5},
	{"le", 8804, 2},
	{"block", 9608, 5},
	{NULL,0,0},
	{"odash", 8861, 5},
	{"prsim", 8830, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"smile", 8995, 5},
	{"xcirc", 9711, 5},
	{NULL,0,0},
	{"els", 10901, 3},
	{"Rgr", 929, 3},
	{NULL,0,0},
	{"sigmav", 962, 6},
	{NULL,0,0},
	{"Ggr", 915, 3},
	{NULL,0,0},
	{"Ugrave", 217, 6},
	{"lowbar", 95, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"bsim", 8765, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Egrave", 200, 6},
	{"ssetmn", 8726, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"shy", 173, 3},
	{NULL,0,0},
	{"divonx", 8903, 6},
	{"boxul", 9496, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"fflig", 64256, 5},
	{NULL,0,0},
	{"ouml", 246, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Otilde", 213, 6},
	{NULL,0,0},
	{"micro", 181, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sdot", 8901, 4},
	{"squ", 9633, 3},
	{NULL,0,0},
	{"bgr", 946, 3},
	{"Zeta", 918, 4},
	{"ffilig", 64259, 6},
	{NULL,0,0},
	{"bull", 8226, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxhD", 9573, 5},
	{"lg", 8822, 2},
	{"sigmaf", 962, 6},
	{"YIcy", 1031, 4},
	{"oline", 8254, 5},
	{NULL,0,0},
	{"njcy", 1114, 4},
	{"pgr", 960, 3},
	{"middot", 183, 6},
	{"omicron", 959, 7},
	{"pcy", 1087, 3},
	{"asymp", 8776, 5},
	{"blk12", 9618, 5},
	{NULL,0,0},
	{"Oslash", 216, 6},
	{"semi", 59, 4},
	{NULL,0,0},
	{"plusmn", 177, 6},
	{"lowast", 8727, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"Sgr", 931, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"divide", 247, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"inodot", 305, 6},
	{"mu", 956, 2},
	{NULL,0,0},
	{"pr", 8826, 2},
	{NULL,0,0},
	{"becaus", 8757, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"lfloor", 8970, 6},
	{"square", 9633, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"les", 10877, 3},
	{NULL,0,0},
	{"mcy", 1084, 3},
	{"gt", 62, 2},
	{NULL,0,0},
	{"lgr", 955, 3},
	{NULL,0,0},
	{"ograve", 242, 6},
	{"Alpha", 913, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Verbar", 8214, 6},
	{NULL,0,0},
	{"or", 8744, 2},
	{NULL,0,0},
	{"Rho", 929, 3},
	{"coprod", 8720, 6},
	{"frac34", 190, 6},
	{"rx", 8478, 2},
	{"hyphen", 8208, 6},
	{"sext", 10038, 4},
	{"fcy", 1092, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxhu", 9524, 5},
	{"loz", 9674, 3},
	{NULL,0,0},
	{"PSgr", 936, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"Uacgr", 910, 5},
	{"Bgr", 914, 3},
	{NULL,0,0},
	{"dcy", 1076, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"iacute", 237, 6},
	{"radic", 8730, 5},
	{NULL,0,0},
	{"Xgr", 926, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"male", 9794, 4},
	{"drcorn", 8991, 6},
	{NULL,0,0},
	{"Iacute", 205, 6},
	{NULL,0,0},
	{"sfrown", 8994, 6},
	{"Dagger", 8225, 6},
	{NULL,0,0},
	{"SOFTcy", 1068, 6},
	{"cap", 8745, 3},
	{NULL,0,0},
	{"sup3", 179, 4},
	{NULL,0,0},
	{"eeacgr", 942, 6},
	{NULL,0,0},
	{"lsqb", 91, 4},
	{"harr", 8596, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Cap", 8914, 3},
	{NULL,0,0},
	{"rpar", 41, 4},
	{NULL,0,0},
	{"angst", 8491, 5},
	{"image", 8465, 5},
	{"Iuml", 207, 4},
	{"boxUl", 9564, 5},
	{"twixt", 8812, 5},
	{"Prime", 8243, 5},
	{NULL,0,0},
	{"Yuml", 376, 4},
	{"epsilon", 949, 7},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Zgr", 918, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"upsih", 978, 5},
	{NULL,0,0},
	{"beta", 946, 4},
	{"ogon", 731, 4},
	{"Pcy", 1055, 3},
	{NULL,0,0},
	{"Ll", 8920, 2},
	{NULL,0,0},
	{NULL,0,0},
	{"ubrcy", 1118, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"ohm", 8486, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"half", 189, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"ycy", 1099, 3},
	{"para", 182, 4},
	{"bprime", 8245, 6},
	{"esdot", 8784, 5},
	{"Ubrcy", 1038, 5},
	{NULL,0,0},
	{"boxVR", 9568, 5},
	{"boxVl", 9570, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"nsub", 8836, 4},
	{NULL,0,0},
	{"gammad", 989, 6},
	{"incare", 8453, 6},
	{NULL,0,0},
	{"rdquo", 8221, 5},
	{"oacute", 243, 6},
	{NULL,0,0},
	{"EEgr", 919, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"idiagr", 912, 6},
	{"tcy", 1090, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"wreath", 8768, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxhd", 9516, 5},
	{"dtri", 9663, 4},
	{"ffllig", 64260, 6},
	{NULL,0,0},
	{"nabla", 8711, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"yicy", 1111, 4},
	{"caret", 8257, 5},
	{"empty", 8709, 5},
	{"gamma", 947, 5},
	{"Ncy", 1053, 3},
	{"psgr", 968, 4},
	{"rho", 961, 3},
	{NULL,0,0},
	{"iff", 8660, 3},
	{NULL,0,0},
	{"boxdR", 9554, 5},
	{"rtri", 9657, 4},
	{"Tcy", 1058, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"frac25", 8534, 6},
	{NULL,0,0},
	{"acirc", 226, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"Ngr", 925, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"phgr", 966, 4},
	{NULL,0,0},
	{"sccue", 8829, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"star", 9734, 4},
	{NULL,0,0},
	{"aacute", 225, 6},
	{NULL,0,0},
	{"malt", 10016, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"Chi", 935, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"comma", 44, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"delta", 948, 5},
	{"szlig", 223, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"blank", 9251, 5},
	{"OHgr", 937, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"setmn", 8726, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"trade", 8482, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"dlcorn", 8990, 6},
	{"rlm", 8207, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"lt", 60, 2},
	{NULL,0,0},
	{NULL,0,0},
	{"boxdL", 9557, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"kappav", 1008, 6},
	{"ltimes", 8905, 6},
	{"Ucirc", 219, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sgr", 963, 3},
	{"perp", 8869, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"shcy", 1096, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxh", 9472, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"notin", 8713, 5},
	{NULL,0,0},
	{"trie", 8796, 4},
	{"urcrop", 8974, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"AElig", 198, 5},
	{"boxHu", 9575, 5},
	{"boxVL", 9571, 5},
	{"frac16", 8537, 6},
	{"hArr", 8660, 4},
	{"Ecy", 1069, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"aleph", 8501, 5},
	{"sbquo", 8218, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Jcy", 1049, 3},
	{"Iukcy", 1030, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"icirc", 238, 5},
	{"intcal", 8890, 6},
	{"dzcy", 1119, 4},
	{NULL,0,0},
	{"Ntilde", 209, 6},
	{"Ugr", 933, 3},
	{NULL,0,0},
	{"amp", 38, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"egr", 949, 3},
	{NULL,0,0},
	{"equiv", 8801, 5},
	{"agr", 945, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxDL", 9559, 5},
	{"iukcy", 1110, 5},
	{NULL,0,0},
	{"ominus", 8854, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"forall", 8704, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"supE", 10950, 4},
	{"igr", 953, 3},
	{NULL,0,0},
	{"rpargt", 10644, 6},
	{"sfgr", 962, 4},
	{NULL,0,0},
	{"Ecirc", 202, 5},
	{NULL,0,0},
	{"hardcy", 1098, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"cuvee", 8910, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"lozf", 10731, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxvr", 9500, 5},
	{NULL,0,0},
	{"boxdl", 9488, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"models", 8871, 6},
	{"IOcy", 1025, 4},
	{NULL,0,0},
	{"boxvh", 9532, 5},
	{"frac56", 8538, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"utri", 9653, 4},
	{NULL,0,0},
	{"Yacute", 221, 6},
	{NULL,0,0},
	{"uarr", 8593, 4},
	{"boxVH", 9580, 5},
	{"colone", 8788, 6},
	{NULL,0,0},
	{"YUcy", 1070, 4},
	{"rthree", 8908, 6},
	{"crarr", 8629, 5},
	{NULL,0,0},
	{"uacgr", 973, 5},
	{"amalg", 10815, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Jsercy", 1032, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"apos", 39, 4},
	{"cupre", 8828, 5},
	{"prap", 10935, 4},
	{NULL,0,0},
	{"Rcy", 1056, 3},
	{"thinsp", 8201, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"oelig", 339, 5},
	{"eegr", 951, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"tdot", 8411, 4},
	{NULL,0,0},
	{"gap", 10886, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Lcy", 1051, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"igrave", 236, 6},
	{"DZcy", 1039, 4},
	{NULL,0,0},
	{"boxur", 9492, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxvR", 9566, 5},
	{"circ", 710, 4},
	{NULL,0,0},
	{"fork", 8916, 4},
	{"Gg", 8921, 2},
	{"vcy", 1074, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"auml", 228, 4},
	{"zeta", 950, 4},
	{NULL,0,0},
	{"caron", 711, 5},
	{"Cup", 8915, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"deg", 176, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"bsime", 8909, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"oast", 8859, 4},
	{"boxvL", 9569, 5},
	{NULL,0,0},
	{"thksim", 8764, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"jsercy", 1112, 6},
	{NULL,0,0},
	{"Ouml", 214, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"rdquor", 8221, 6},
	{"ugrave", 249, 6},
	{NULL,0,0},
	{"eth", 240, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"Lgr", 923, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"rgr", 961, 3},
	{NULL,0,0},
	{"Acy", 1040, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ni", 8715, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Iacgr", 906, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"khcy", 1093, 4},
	{"thkap", 8776, 5},
	{NULL,0,0},
	{"chcy", 1095, 4},
	{NULL,0,0},
	{"udiagr", 944, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"frac35", 8535, 6},
	{"gsim", 8819, 4},
	{"OElig", 338, 5},
	{"raquo", 187, 5},
	{"sung", 9834, 4},
	{"rsqb", 93, 4},
	{"frasl", 8260, 5},
	{NULL,0,0},
	{"tprime", 8244, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"atilde", 227, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"phi", 966, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"iocy", 1105, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"num", 35, 3},
	{"lthree", 8907, 6},
	{NULL,0,0},
	{"Sub", 8912, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"DotDot", 8412, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sstarf", 8902, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"frac12", 189, 6},
	{"ulcrop", 8975, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"gjcy", 1107, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Barwed", 8966, 6},
	{NULL,0,0},
	{"boxUR", 9562, 5},
	{NULL,0,0},
	{"boxhU", 9576, 5},
	{"SHcy", 1064, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Atilde", 195, 6},
	{"egs", 10902, 3},
	{NULL,0,0},
	{"odot", 8857, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"thetasym", 977, 8},
	{NULL,0,0},
	{"Aacgr", 902, 5},
	{"gE", 8807, 2},
	{"tgr", 964, 3},
	{"tshcy", 1115, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"KHgr", 935, 4},
	{"sbsol", 65128, 5},
	{NULL,0,0},
	{"Mu", 924, 2},
	{"jukcy", 1108, 5},
	{"Scy", 1057, 3},
	{"boxHd", 9572, 5},
	{"mnplus", 8723, 6},
	{"ucy", 1091, 3},
	{"percnt", 37, 6},
	{"uuml", 252, 4},
	{NULL,0,0},
	{"yucy", 1102, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"target", 8982, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ETH", 208, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"rhov", 1009, 4},
	{NULL,0,0},
	{"lambda", 955, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"thgr", 952, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"Mcy", 1052, 3},
	{NULL,0,0},
	{"boxdr", 9484, 5},
	{NULL,0,0},
	{"sup2", 178, 4},
	{"boxDl", 9558, 5},
	{NULL,0,0},
	{"marker", 9646, 6},
	{"rang", 9002, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"breve", 728, 5},
	{"ecirc", 234, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"pi", 960, 2},
	{NULL,0,0},
	{NULL,0,0},
	{"dArr", 8659, 4},
	{"frown", 8994, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"rceil", 8969, 5},
	{"blk14", 9617, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sqsup", 8848, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"aelig", 230, 5},
	{NULL,0,0},
	{"xgr", 958, 3},
	{NULL,0,0},
	{"fllig", 64258, 5},
	{NULL,0,0},
	{"yen", 165, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"cuepr", 8926, 5},
	{"rsquo", 8217, 5},
	{NULL,0,0},
	{"Uuml", 220, 4},
	{"Agr", 913, 3},
	{NULL,0,0},
	{"yacute", 253, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"Icy", 1048, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ucirc", 251, 5},
	{"rtrie", 8885, 5},
	{"egrave", 232, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"copy", 169, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"cuwed", 8911, 5},
	{"starf", 9733, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"thetav", 977, 6},
	{"Zcy", 1047, 3},
	{"Lambda", 923, 6},
	{"ohgr", 969, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"filig", 64257, 5},
	{"epsiv", 949, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"iecy", 1077, 4},
	{"frac18", 8539, 6},
	{NULL,0,0},
	{"ldquor", 8222, 6},
	{NULL,0,0},
	{"phone", 9742, 5},
	{"lsaquo", 8249, 6},
	{NULL,0,0},
	{"LJcy", 1033, 4},
	{NULL,0,0},
	{"dtrif", 9662, 5},
	{"sqsube", 8849, 6},
	{NULL,0,0},
	{"KHcy", 1061, 4},
	{"subE", 10949, 4},
	{NULL,0,0},
	{"boxUL", 9565, 5},
	{"quot", 34, 4},
	{NULL,0,0},
	{"phmmat", 8499, 6},
	{"uhblk", 9600, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ugr", 965, 3},
	{"sect", 167, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"vellip", 8942, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxuR", 9560, 5},
	{NULL,0,0},
	{"ast", 42, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"period", 46, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"laquo", 171, 5},
	{NULL,0,0},
	{"planck", 8463, 6},
	{"samalg", 8720, 6},
	{NULL,0,0},
	{"smid", 8739, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"upsilon", 965, 7},
	{"prop", 8733, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"brvbar", 166, 6},
	{NULL,0,0},
	{"sqsupe", 8850, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"spar", 8741, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"HARDcy", 1066, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"par", 8741, 3},
	{"eDot", 8785, 4},
	{"sime", 8771, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"udigr", 971, 5},
	{"ggr", 947, 3},
	{"gsdot", 8919, 5},
	{NULL,0,0},
	{"Ogr", 927, 3},
	{"lcub", 123, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"epsi", 1013, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"YAcy", 1071, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"scy", 1089, 3},
	{"Aacute", 193, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"hybull", 8259, 6},
	{"urcorn", 8989, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"jcy", 1081, 3},
	{"uml", 168, 3},
	{"PHgr", 934, 4},
	{"uacute", 250, 6},
	{"lrm", 8206, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"lagran", 8466, 6},
	{"mgr", 956, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxV", 9553, 4},
	{"ring", 730, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"xi", 958, 2},
	{NULL,0,0},
	{"frac58", 8541, 6},
	{"Upsi", 978, 4},
	{NULL,0,0},
	{"rsquor", 8217, 6},
	{"emsp14", 8197, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"times", 215, 5},
	{"sqcap", 8851, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"zhcy", 1078, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"lsquo", 8216, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"dash", 8208, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"rtimes", 8906, 6},
	{"lpargt", 10656, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Udigr", 939, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"female", 9792, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"plusdo", 8724, 6},
	{NULL,0,0},
	{"otilde", 245, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"rcub", 125, 4},
	{"ecir", 8790, 4},
	{NULL,0,0},
	{"diam", 8900, 4},
	{"wedgeq", 8793, 6},
	{"isin", 8712, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"order", 8500, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Fcy", 1060, 3},
	{NULL,0,0},
	{"TSHcy", 1035, 5},
	{"yuml", 255, 4},
	{"fnof", 402, 4},
	{"excl", 33, 4},
	{"timesb", 8864, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Igrave", 204, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"lhblk", 9604, 5},
	{"ulcorn", 8988, 6},
	{NULL,0,0},
	{"int", 8747, 3},
	{"ltrif", 9666, 5},
	{"Gt", 8811, 2},
	{"ldquo", 8220, 5},
	{"KJcy", 1036, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sup", 8835, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Gcy", 1043, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ZHcy", 1046, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Theta", 920, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"comp", 8705, 4},
	{"sce", 10928, 3},
	{NULL,0,0},
	{"chi", 967, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Kappa", 922, 5},
	{NULL,0,0},
	{"Vvdash", 8874, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxv", 9474, 4},
	{"zcy", 1079, 3},
	{NULL,0,0},
	{"and", 8743, 3},
	{"thorn", 254, 5},
	{NULL,0,0},
	{"cire", 8791, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"equals", 61, 6},
	{"ecy", 1101, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"tscy", 1094, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"boxH", 9552, 4},
	{"Ccedil", 199, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Ycy", 1067, 3},
	{NULL,0,0},
	{"Tgr", 932, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"frac23", 8532, 6},
	{"sqsub", 8847, 5},
	{"sup1", 185, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"angmsd", 8737, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"CHcy", 1063, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"GJcy", 1027, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Oacgr", 908, 5},
	{"OHacgr", 911, 6},
	{NULL,0,0},
	{"grave", 96, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Uacute", 218, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"zgr", 950, 3},
	{NULL,0,0},
	{"ge", 8805, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"barwed", 8965, 6},
	{"emsp", 8195, 4},
	{"ohacgr", 974, 6},
	{NULL,0,0},
	{NULL,0,0},
	{"Lt", 8810, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"iuml", 239, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"compfn", 8728, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"phiv", 966, 4},
	{NULL,0,0},
	{"rtrif", 9656, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"bowtie", 8904, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"tilde", 732, 5},
	{"Beta", 914, 4},
	{"Scaron", 352, 6},
	{"ordf", 170, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"eacute", 233, 6},
	{"scsim", 8831, 5},
	{"vprop", 8733, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"otimes", 8855, 6},
	{NULL,0,0},
	{"Dcy", 1044, 3},
	{"nexist", 8708, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"commat", 64, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"euml", 235, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Ograve", 210, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"diams", 9830, 5},
	{"beth", 8502, 4},
	{"scap", 10936, 4},
	{"frac14", 188, 6},
	{"Iota", 921, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"check", 10003, 5},
	{NULL,0,0},
	{"minusb", 8863, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Agrave", 192, 6},
	{NULL,0,0},
	{"erDot", 8787, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"lap", 10885, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"TScy", 1062, 4},
	{"vprime", 8242, 6},
	{NULL,0,0},
	{"SHCHcy", 1065, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"epsis", 1013, 5},
	{NULL,0,0},
	{"lang", 9001, 4},
	{"boxvH", 9578, 5},
	{"infin", 8734, 5},
	{"oplus", 8853, 5},
	{NULL,0,0},
	{"ngr", 957, 3},
	{"pound", 163, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"frac78", 8542, 6},
	{"oacgr", 972, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"quest", 63, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"phis", 981, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"ncy", 1085, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ensp", 8194, 4},
	{"gEl", 10892, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"cong", 8773, 4},
	{NULL,0,0},
	{NULL,0,0},
	{"Vdash", 8873, 5},
	{"vltri", 8882, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"iota", 953, 4},
	{"EEacgr", 905, 6},
	{"iquest", 191, 6},
	{"Sup", 8913, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"hamilt", 8459, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"oS", 9416, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"ocy", 1086, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"Delta", 916, 5},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Dgr", 916, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"not", 172, 3},
	{"ndash", 8211, 5},
	{"sub", 8834, 3},
	{"softcy", 1100, 6},
	{"mldr", 8230, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"copysr", 8471, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"iacgr", 943, 5},
	{"rcy", 1088, 3},
	{NULL,0,0},
	{"vdash", 8866, 5},
	{NULL,0,0},
	{"sc", 8827, 2},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"Egr", 917, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"alefsym", 8501, 7},
	{NULL,0,0},
	{"ntilde", 241, 6},
	{"cent", 162, 4},
	{NULL,0,0},
	{"sdotb", 8865, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"ap", 8776, 2},
	{"lsim", 8818, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"daleth", 8504, 6},
	{"veebar", 8891, 6},
	{NULL,0,0},
	{"rect", 9645, 4},
	{NULL,0,0},
	{"aring", 229, 5},
	{"Ucy", 1059, 3},
	{NULL,0,0},
	{NULL,0,0},
	{"minus", 8722, 5},
	{"hellip", 8230, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"lEg", 10891, 3},
	{"iexcl", 161, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"numsp", 8199, 5},
	{"oslash", 248, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"real", 8476, 4},
	{"Kgr", 922, 3},
	{NULL,0,0},
	{"weierp", 8472, 6},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"vrtri", 8883, 5},
	{"bdquo", 8222, 5},
	{"Psi", 936, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"exist", 8707, 5},
	{"ccedil", 231, 6},
	{"icy", 1080, 3},
	{"kappa", 954, 5},
	{"cup", 8746, 3},
	{"ltri", 9667, 4},
	{NULL,0,0},
	{"IEcy", 1045, 4},
	{"Phi", 934, 3},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"boxHD", 9574, 5},
	{"khgr", 967, 4},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{NULL,0,0},
	{"sigma", 963, 5},
	{NULL,0,0},
	{NULL,0,0},
	{"Gamma", 915, 5},
	{"theta", 952, 5},
	{NULL,0,0},
	{"plusb", 8862, 5},
	{NULL,0,0},
	{NULL,0,0},
};
const struct cli_hashtable entities_htable = {
	entities_htable_elements, 2048, 743, 1638
};
