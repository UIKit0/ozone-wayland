// Copyright 2013 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OZONE_UI_EVENTS_KEYBOARD_CODES_OZONE_H_
#define OZONE_UI_EVENTS_KEYBOARD_CODES_OZONE_H_

#include "ui/events/keycodes/keyboard_codes_posix.h"

namespace ui {

// This is unfiy the keycodes used in Chromium and XKB/any backend used in
// Ozone-Wayland.

// Standard ASCII set, HTML Entity names, ISO 10646, ISO 8879, ISO 8859-1.
enum OZONECHARCODE {
  OZONECHARCODE_NULL = 0x0000,
  OZONECHARCODE_PAUSE = 0x0004,
  OZONECHARCODE_BACKSPACE = 0x0008,
  OZONECHARCODE_TAB = 0x0009,
  OZONECHARCODE_LINEFEED = 0x000A,
  OZONECHARCODE_RETURN = 0x000D,
  OZONECHARCODE_ESCAPE = 0x001B,
  OZONECHARCODE_FILE_SEPARATOR = 0x001C,  // SEPARATOR
  OZONECHARCODE_GROUP_SEPARATOR = 0x001D,
  OZONECHARCODE_RECORD_SEPARATOR = 0x001E,
  OZONECHARCODE_UNIT_SEPARATOR = 0x001F,
  OZONECHARCODE_SPACE = 0x0020,
  OZONECHARCODE_EXCLAMATORY = 0x0021,  // !
  OZONECHARCODE_DOUBLE_QUOTES = 0x0022,  // "
  OZONECHARCODE_NUMBER = 0x0023,  // #
  OZONECHARCODE_DOLLAR = 0x0024,  // $
  OZONECHARCODE_PERCENT = 0x0025,  // %
  OZONECHARCODE_AMPERSAND = 0x0026,  // &
  OZONECHARCODE_SINGLEQUOTE = 0x0027,  // '
  OZONECHARCODE_OPEN_PARENTHESIS = 0x0028,  // (
  OZONECHARCODE_CLOSED_PARENTHESIS = 0x0029,  // )
  OZONECHARCODE_ASTERISK = 0x002A,  // *
  OZONECHARCODE_PLUS = 0x002B,  // +
  OZONECHARCODE_COMMA = 0x002C,  // ,
  OZONECHARCODE_MINUS = 0x002D,  // -
  OZONECHARCODE_PERIOD = 0x002E,  // .
  OZONECHARCODE_SLASH = 0x002F,  // /
  OZONECHARCODE_0 = 0x0030,  // Numbers.
  OZONECHARCODE_1 = 0x0031,
  OZONECHARCODE_2 = 0x0032,
  OZONECHARCODE_3 = 0x0033,
  OZONECHARCODE_4 = 0x0034,
  OZONECHARCODE_5 = 0x0035,
  OZONECHARCODE_6 = 0x0036,
  OZONECHARCODE_7 = 0x0037,
  OZONECHARCODE_8 = 0x0038,
  OZONECHARCODE_9 = 0x0039,
  OZONECHARCODE_COLON = 0x003A,  // :
  OZONECHARCODE_SEMI_COLON = 0x003B,  // ;
  OZONECHARCODE_LESS_THAN = 0x003C,  // <
  OZONECHARCODE_EQUAL = 0x003D,  // =
  OZONECHARCODE_GREATER_THAN = 0x003E,  // >
  OZONECHARCODE_QUESTION_MARK = 0x003F,  // ?
  OZONECHARCODE_AT = 0x0040,  // @
  OZONECHARCODE_A = 0x0041,  // Alphabets.
  OZONECHARCODE_B = 0x0042,
  OZONECHARCODE_C = 0x0043,
  OZONECHARCODE_D = 0x0044,
  OZONECHARCODE_E = 0x0045,
  OZONECHARCODE_F = 0x0046,
  OZONECHARCODE_G = 0x0047,
  OZONECHARCODE_H = 0x0048,
  OZONECHARCODE_I = 0x0049,
  OZONECHARCODE_J = 0x004A,
  OZONECHARCODE_K = 0x004B,
  OZONECHARCODE_L = 0x004C,
  OZONECHARCODE_M = 0x004D,
  OZONECHARCODE_N = 0x004E,
  OZONECHARCODE_O = 0x004F,
  OZONECHARCODE_P = 0x0050,
  OZONECHARCODE_Q = 0x0051,
  OZONECHARCODE_R = 0x0052,
  OZONECHARCODE_S = 0x0053,
  OZONECHARCODE_T = 0x0054,
  OZONECHARCODE_U = 0x0055,
  OZONECHARCODE_V = 0x0056,
  OZONECHARCODE_W = 0x0057,
  OZONECHARCODE_X = 0x0058,
  OZONECHARCODE_Y = 0x0059,
  OZONECHARCODE_Z = 0x005A,
  OZONECHARCODE_LEFT_BRACKET = 0x005B,  // [
  OZONECHARCODE_BACK_SLASH = 0x005C,  // /
  OZONECHARCODE_RIGHT_BRACKET = 0x005D,  // ]
  OZONECHARCODE_CARET_CIRCUMFLEX = 0x005E,  // ^
  OZONECHARCODE_UNDER_SCORE = 0x005F,  // _
  OZONECHARCODE_GRAVE_ASSCENT = 0x0060,  // `
  OZONECHARCODE_a = 0x0061,  // Alphabets small case.
  OZONECHARCODE_b = 0x0062,
  OZONECHARCODE_c = 0x0063,
  OZONECHARCODE_d = 0x0064,
  OZONECHARCODE_e = 0x0065,
  OZONECHARCODE_f = 0x0066,
  OZONECHARCODE_g = 0x0067,
  OZONECHARCODE_h = 0x0068,
  OZONECHARCODE_i = 0x0069,
  OZONECHARCODE_j = 0x006A,
  OZONECHARCODE_k = 0x006B,
  OZONECHARCODE_l = 0x006C,
  OZONECHARCODE_m = 0x006D,
  OZONECHARCODE_n = 0x006E,
  OZONECHARCODE_o = 0x006F,
  OZONECHARCODE_p = 0x0070,
  OZONECHARCODE_q = 0x0071,
  OZONECHARCODE_r = 0x0072,
  OZONECHARCODE_s = 0x0073,
  OZONECHARCODE_t = 0x0074,
  OZONECHARCODE_u = 0x0075,
  OZONECHARCODE_v = 0x0076,
  OZONECHARCODE_w = 0x0077,
  OZONECHARCODE_x = 0x0078,
  OZONECHARCODE_y = 0x0079,
  OZONECHARCODE_z = 0x007A,
  OZONECHARCODE_OPEN_BRACE = 0x007B,
  OZONECHARCODE_VERTICAL_BAR = 0x007C,
  OZONECHARCODE_CLOSE_BRACE = 0x007D,
  OZONECHARCODE_TILDE = 0x007E,  //  ~
  OZONECHARCODE_DELETE = 0x007F,  //  del
  OZONECHARCODE_NONBREAKING_SPACE = 0x00A0,
  OZONECHARCODE_INVERTED_EXCLAMATION = 0x00A1,  // ¡
  OZONECHARCODE_CENT = 0x00A2,  // ¢
  OZONECHARCODE_STERLING = 0x00A3,  // £
  OZONECHARCODE_CURRENCY = 0x00A4,  // ¤
  OZONECHARCODE_YEN = 0x00A5,  // ¥
  OZONECHARCODE_BROKEN_BAR = 0x00A6,  // ¦
  OZONECHARCODE_SECTION = 0x00A7,  // §
  OZONECHARCODE_SPACING_DIAERESIS = 0x00A8,  // ¨
  OZONECHARCODE_COPYRIGHT = 0x00A9,  // ©
  OZONECHARCODE_FEMININE_ORDINAL_INDICATOR = 0x00AA,  // ª
  OZONECHARCODE_LEFT_ANGLE_QUOTES = 0x00AB,  // «
  OZONECHARCODE_NOT_SIGN =  0x00AC,  // ¬
  OZONECHARCODE_SOFT_HYPHEN = 0x00AD,
  OZONECHARCODE_REGISTERED = 0x00AE,  // ®
  OZONECHARCODE_SPACING_MACRON = 0x00AF,
  OZONECHARCODE_DEGREE = 0x00B0,  // °
  OZONECHARCODE_PLUS_MINUS = 0x00B1,  // ±
  OZONECHARCODE_SUPERSCRIPT_TWO = 0x00B2,  // ²
  OZONECHARCODE_SUPERSCRIPT_THREE = 0x00B3,  // ³
  OZONECHARCODE_SPACING_ACUTE =  0x00B4,  // ´
  OZONECHARCODE_MICRO = 0x00B5,  // µ
  OZONECHARCODE_PARAGRAPH = 0x00B6,  // ¶
  OZONECHARCODE_MIDDLEDOT = 0x00B7,  // ·
  OZONECHARCODE_SPACING_CEDILLA = 0x00B8,  // ¸
  OZONECHARCODE_SUPERSCRIPT_ONE = 0x00B9,  // ¹
  OZONECHARCODE_MASCULINE_ORDINAL_INDICATOR = 0x00BA,  // º
  OZONECHARCODE_RIGHTANGLE_QUOTES = 0x00BB,  // »
  OZONECHARCODE_ONE_QUARTER = 0x00BC,  // ¼
  OZONECHARCODE_ONE_HALF =  0x00BD,  // ½
  OZONECHARCODE_THREE_QUARTERS = 0x00BE,  // ¾
  OZONECHARCODE_INVERTED_QUESTION_MARK = 0x00BF,  // ¿
  OZONECHARCODE_LA_WITH_GRAVE = 0x00C0,  // À
  OZONECHARCODE_LA_WITH_ACUTE = 0x00C1,  // Á
  OZONECHARCODE_LA_WITH_CIRCUMFLEX = 0x00C2,  // Â
  OZONECHARCODE_LA_WITH_TILDE = 0x00C3,  // Ã
  OZONECHARCODE_LA_WITH_DIAERESIS = 0x00C4,  // Ä
  OZONECHARCODE_LA_WITH_RING_ABOVE = 0x00C5,  // Å
  OZONECHARCODE_LAE = 0x00C6,  // Æ
  OZONECHARCODE_LC_WITH_CEDILLA = 0x00C7,  // Ç
  OZONECHARCODE_LE_WITH_GRAVE = 0x00C8,  // È
  OZONECHARCODE_LE_WITH_ACUTE = 0x00C9,  // É
  OZONECHARCODE_LE_WITH_CIRCUMFLEX = 0x00CA,  // Ê
  OZONECHARCODE_LE_WITH_DIAERESIS = 0x00CB,  // Ë
  OZONECHARCODE_LI_WITH_GRAVE = 0x00CC,  // Ì
  OZONECHARCODE_LI_WITH_ACUTE = 0x00CD,  // Í
  OZONECHARCODE_LI_WITH_CIRCUMFLEX = 0x00CE,  // Î
  OZONECHARCODE_LI_WITH_DIAERESIS = 0x00CF,  // Ï
  OZONECHARCODE_LETH = 0x00D0,  // Ð
  OZONECHARCODE_LN_WITH_TILDE =  0x00D1,  // Ñ
  OZONECHARCODE_LO_WITH_GRAVE = 0x00D2,  // Ò
  OZONECHARCODE_LO_WITH_ACUTE = 0x00D3,  // Ó
  OZONECHARCODE_LO_WITH_CIRCUMFLEX = 0x00D4,  // Ô
  OZONECHARCODE_LO_WITH_TILDE =  0x00D5,  // Õ
  OZONECHARCODE_LO_WITH_DIAERESIS = 0x00D6,  // Ö
  OZONECHARCODE_MULTIPLY =  0x00D7,  // ×
  OZONECHARCODE_LO_WITH_STROKE = 0x00D8,  // Ø
  OZONECHARCODE_LU_WITH_GRAVE = 0x00D9,  // Ù
  OZONECHARCODE_LU_WITH_ACUTE = 0x00DA,  // Ú
  OZONECHARCODE_LU_WITH_CIRCUMFLEX = 0x00DB,  // Û
  OZONECHARCODE_LU_WITH_DIAERESIS = 0x00DC,  // Ü
  OZONECHARCODE_LY_WITH_ACUTE =  0x00DD,  // Ý
  OZONECHARCODE_LTHORN = 0x00DE,  // Þ
  OZONECHARCODE_LSMALL_SHARP = 0x00DF,  // ß
  OZONECHARCODE_LSMALL_A_WITH_GRAVE = 0x00E0,  // à
  OZONECHARCODE_LSMALL_A_WITH_ACUTE = 0x00E1,  // á
  OZONECHARCODE_LSMALL_A_WITH_CIRCUMFLEX = 0x00E2,  // â
  OZONECHARCODE_LSMALL_A_WITH_TILDE = 0x00E3,  // ã
  OZONECHARCODE_LSMALL_A_WITH_DIAERESIS = 0x00E4,  // ä
  OZONECHARCODE_LSMALL_A_WITH_RINGABOVE = 0x00E5,  // å
  OZONECHARCODE_LSMALL_AE = 0x00E6,  // æ
  OZONECHARCODE_LSMALL_C_WITH_CEDILLA = 0x00E7,  // ç
  OZONECHARCODE_LSMALL_E_WITH_GRAVE = 0x00E8,  // è
  OZONECHARCODE_LSMALL_E_WITH_ACUTE = 0x00E9,  // é
  OZONECHARCODE_LSMALL_E_WITH_CIRCUMFLEX = 0x00EA,  // ê
  OZONECHARCODE_LSMALL_E_WITH_DIAERESIS = 0x00EB,  // ë
  OZONECHARCODE_LSMALL_I_WITH_GRAVE = 0x00EC,  // ì
  OZONECHARCODE_LSMALL_I_WITH_ACUTE = 0x00ED,  // í
  OZONECHARCODE_LSMALL_I_WITH_CIRCUMFLEX = 0x00EE,  // î
  OZONECHARCODE_LSMALL_I_WITH_DIAERESIS = 0x00EF,  // ï
  OZONECHARCODE_LSMALL_ETH = 0x00F0,  // ð
  OZONECHARCODE_LSMALL_N_WITH_TILDE =  0x00F1,  // ñ
  OZONECHARCODE_LSMALL_O_WITH_GRAVE = 0x00F2,  // ò
  OZONECHARCODE_LSMALL_O_WITH_ACUTE = 0x00F3,  // ó
  OZONECHARCODE_LSMALL_O_WITH_CIRCUMFLEX = 0x00F4,  // ô
  OZONECHARCODE_LSMALL_O_WITH_TILDE =  0x00F5,  // õ
  OZONECHARCODE_LSMALL_O_WITH_DIAERESIS = 0x00F6,  // ö
  OZONECHARCODE_DIVISION =  0x00F7,  // ÷
  OZONECHARCODE_LSMALL_O_WITH_SLASH = 0x00F8,  // ø
  OZONECHARCODE_LSMALL_U_WITH_GRAVE = 0x00F9,  // ù
  OZONECHARCODE_LSMALL_U_WITH_ACUTE = 0x00FA,  // ú
  OZONECHARCODE_LSMALL_U_WITH_CIRCUMFLEX = 0x00FB,  // û
  OZONECHARCODE_LSMALL_U_WITH_DIAERESIS = 0x00FC,  // ü
  OZONECHARCODE_LSMALL_Y_WITH_ACUTE =  0x00FD,  // ý
  OZONECHARCODE_LSMALL_THORN = 0x00FE,  // þ
  OZONECHARCODE_LSMALL_UY_WITH_DIAERESIS = 0x00FF,  // ÿ
  OZONECHARCODE_LSMALL_DOT_LESS_I = 0x0131,  // ı
  OZONECHARCODE_LSMALL_KRA = 0x0138,  // ĸ
  OZONECHARCODE_LENG = 0x014A,  // Ŋ
  OZONECHARCODE_LSMALL_ENG = 0x014B,  // ŋ
  OZONECHARCODE_LOE = 0x00152,  // Œ
  OZONECHARCODE_LSMALL_OE = 0x0153,  // œ
  OZONECHARCODE_LSWITH_CARRON = 0x0160,  // Š
  OZONECHARCODE_LSMALL_S_WITH_CARRON = 0x0161,  // š
  OZONECHARCODE_LY_WITH_DIAERESIS = 0x0178,  // Ÿ
  OZONECHARCODE_LSMALL_F_WITH_HOOK = 0x0192,  // ƒ
  OZONECHARCODE_CARON = 0x02C7,  // ˇ
  OZONECHARCODE_DOUBLE_ACUTE_ACCENT = 0x02DD,  // ˝
  OZONECHARCODE_COMBINING_HORN = 0x031B,  // ̛
  OZONECHARCODE_COMBINING_DOT_BELOW = 0x0323,  // .
  OZONECHARCODE_COMBINING_DIAERESIS_BELOW = 0x0324,  // ..
  OZONECHARCODE_ENDASH =  0x2013,  // –
  OZONECHARCODE_EMDASH =  0x2014,  // —
  OZONECHARCODE_LEFT_SINGLE_QUOTATION_MARK = 0x2018,  // ‘
  OZONECHARCODE_RIGHT_SINGLE_QUOTATION_MARK = 0x2019,  // ’
  OZONECHARCODE_SINGLE_LOW_QUOTATION_MARK = 0x201A,  // ‚
  OZONECHARCODE_LEFT_DOUBLE_QUOTATION_MARK = 0x201C,  // “
  OZONECHARCODE_RIGHT_DOUBLE_QUOTATION_MARK = 0x201D,  // ”
  OZONECHARCODE_DOUBLE_LOW_QUOTATION_MARK = 0x201E,  // „
  OZONECHARCODE_DAGGER =  0x2020,  // †
  OZONECHARCODE_DOUBLE_DAGGER = 0x2021,  // ‡
  OZONECHARCODE_BULLET = 0x2022,  // •
  OZONECHARCODE_HORIZONTAL_ELLIPSIS = 0x2026,  // …
  OZONECHARCODE_PER_THOUSAND = 0x2030,  // ‰
  OZONECHARCODE_EURO = 0x20AC,  // €
  OZONECHARCODE_TRADEMARK = 0x2122  // ™
};

// Keys which result in specific Action. The enum is defined as
// OZONEACTIONKEY_START + VKEY_ defined in keyboard_codes_posix. This is to
// make it easy in oz-wl side to differentiate between character codes and
// action keys.
enum OzoneKeyboardCode {
  OZONEACTIONKEY_START = 0x111100,
  OZONEACTIONKEY_BACK = OZONEACTIONKEY_START + ui::VKEY_BACK,
  OZONEACTIONKEY_TAB = OZONEACTIONKEY_START + ui::VKEY_TAB,
  OZONEACTIONKEY_BACKTAB = OZONEACTIONKEY_START + ui::VKEY_BACKTAB,
  OZONEACTIONKEY_CLEAR = OZONEACTIONKEY_START + ui::VKEY_CLEAR,
  OZONEACTIONKEY_RETURN = OZONEACTIONKEY_START + ui::VKEY_RETURN,
  OZONEACTIONKEY_SHIFT = OZONEACTIONKEY_START + ui::VKEY_SHIFT,
  OZONEACTIONKEY_CONTROL = OZONEACTIONKEY_START + ui::VKEY_CONTROL,
  OZONEACTIONKEY_MENU = OZONEACTIONKEY_START + ui::VKEY_MENU,
  OZONEACTIONKEY_PAUSE = OZONEACTIONKEY_START + ui::VKEY_PAUSE,
  OZONEACTIONKEY_CAPITAL = OZONEACTIONKEY_START + ui::VKEY_CAPITAL,
  OZONEACTIONKEY_KANA = OZONEACTIONKEY_START + ui::VKEY_KANA,
  OZONEACTIONKEY_HANGUL = OZONEACTIONKEY_START + ui::VKEY_HANGUL,
  OZONEACTIONKEY_JUNJA = OZONEACTIONKEY_START + ui::VKEY_JUNJA,
  OZONEACTIONKEY_FINAL = OZONEACTIONKEY_START + ui::VKEY_FINAL,
  OZONEACTIONKEY_HANJA = OZONEACTIONKEY_START + ui::VKEY_HANJA,
  OZONEACTIONKEY_KANJI = OZONEACTIONKEY_START + ui::VKEY_KANJI,
  OZONEACTIONKEY_ESCAPE = OZONEACTIONKEY_START + ui::VKEY_ESCAPE,
  OZONEACTIONKEY_CONVERT = OZONEACTIONKEY_START + ui::VKEY_CONVERT,
  OZONEACTIONKEY_NONCONVERT = OZONEACTIONKEY_START + ui::VKEY_NONCONVERT,
  OZONEACTIONKEY_ACCEPT = OZONEACTIONKEY_START + ui::VKEY_ACCEPT,
  OZONEACTIONKEY_MODECHANGE = OZONEACTIONKEY_START + ui::VKEY_MODECHANGE,
  OZONEACTIONKEY_SPACE = OZONEACTIONKEY_START + ui::VKEY_SPACE,
  OZONEACTIONKEY_PRIOR = OZONEACTIONKEY_START + ui::VKEY_PRIOR,
  OZONEACTIONKEY_NEXT = OZONEACTIONKEY_START + ui::VKEY_NEXT,
  OZONEACTIONKEY_END = OZONEACTIONKEY_START + ui::VKEY_END,
  OZONEACTIONKEY_HOME = OZONEACTIONKEY_START + ui::VKEY_HOME,
  OZONEACTIONKEY_LEFT = OZONEACTIONKEY_START + ui::VKEY_LEFT,
  OZONEACTIONKEY_UP = OZONEACTIONKEY_START + ui::VKEY_UP,
  OZONEACTIONKEY_RIGHT = OZONEACTIONKEY_START + ui::VKEY_RIGHT,
  OZONEACTIONKEY_DOWN = OZONEACTIONKEY_START + ui::VKEY_DOWN,
  OZONEACTIONKEY_SELECT = OZONEACTIONKEY_START + ui::VKEY_SELECT,
  OZONEACTIONKEY_PRINT = OZONEACTIONKEY_START + ui::VKEY_PRINT,
  OZONEACTIONKEY_EXECUTE = OZONEACTIONKEY_START + ui::VKEY_EXECUTE,
  OZONEACTIONKEY_SNAPSHOT = OZONEACTIONKEY_START + ui::VKEY_SNAPSHOT,
  OZONEACTIONKEY_INSERT = OZONEACTIONKEY_START + ui::VKEY_INSERT,
  OZONEACTIONKEY_DELETE = OZONEACTIONKEY_START + ui::VKEY_DELETE,
  OZONEACTIONKEY_HELP = OZONEACTIONKEY_START + ui::VKEY_HELP,
  OZONEACTIONKEY_LWIN = OZONEACTIONKEY_START + ui::VKEY_LWIN,
  OZONEACTIONKEY_COMMAND = OZONEACTIONKEY_START + ui::VKEY_COMMAND,
  OZONEACTIONKEY_RWIN = OZONEACTIONKEY_START + ui::VKEY_RWIN,
  OZONEACTIONKEY_APPS = OZONEACTIONKEY_START + ui::VKEY_APPS,
  OZONEACTIONKEY_SLEEP = OZONEACTIONKEY_START + ui::VKEY_SLEEP,
  OZONEACTIONKEY_ADD = OZONEACTIONKEY_START + ui::VKEY_ADD,
  OZONEACTIONKEY_SEPARATOR = OZONEACTIONKEY_START + ui::VKEY_SEPARATOR,
  OZONEACTIONKEY_SUBTRACT = OZONEACTIONKEY_START + ui::VKEY_SUBTRACT,
  OZONEACTIONKEY_DECIMAL = OZONEACTIONKEY_START + ui::VKEY_DECIMAL,
  OZONEACTIONKEY_DIVIDE = OZONEACTIONKEY_START + ui::VKEY_DIVIDE,
  OZONEACTIONKEY_F1 = OZONEACTIONKEY_START + ui::VKEY_F1,
  OZONEACTIONKEY_F2 = OZONEACTIONKEY_START + ui::VKEY_F2,
  OZONEACTIONKEY_F3 = OZONEACTIONKEY_START + ui::VKEY_F3,
  OZONEACTIONKEY_F4 = OZONEACTIONKEY_START + ui::VKEY_F4,
  OZONEACTIONKEY_F5 = OZONEACTIONKEY_START + ui::VKEY_F5,
  OZONEACTIONKEY_F6 = OZONEACTIONKEY_START + ui::VKEY_F6,
  OZONEACTIONKEY_F7 = OZONEACTIONKEY_START + ui::VKEY_F7,
  OZONEACTIONKEY_F8 = OZONEACTIONKEY_START + ui::VKEY_F8,
  OZONEACTIONKEY_F9 = OZONEACTIONKEY_START + ui::VKEY_F9,
  OZONEACTIONKEY_F10 = OZONEACTIONKEY_START + ui::VKEY_F10,
  OZONEACTIONKEY_F11 = OZONEACTIONKEY_START + ui::VKEY_F11,
  OZONEACTIONKEY_F12 = OZONEACTIONKEY_START + ui::VKEY_F12,
  OZONEACTIONKEY_F13 = OZONEACTIONKEY_START + ui::VKEY_F13,
  OZONEACTIONKEY_F14 = OZONEACTIONKEY_START + ui::VKEY_F14,
  OZONEACTIONKEY_F15 = OZONEACTIONKEY_START + ui::VKEY_F15,
  OZONEACTIONKEY_F16 = OZONEACTIONKEY_START + ui::VKEY_F16,
  OZONEACTIONKEY_F17 = OZONEACTIONKEY_START + ui::VKEY_F17,
  OZONEACTIONKEY_F18 = OZONEACTIONKEY_START + ui::VKEY_F18,
  OZONEACTIONKEY_F19 = OZONEACTIONKEY_START + ui::VKEY_F19,
  OZONEACTIONKEY_F20 = OZONEACTIONKEY_START + ui::VKEY_F20,
  OZONEACTIONKEY_F21 = OZONEACTIONKEY_START + ui::VKEY_F21,
  OZONEACTIONKEY_F22 = OZONEACTIONKEY_START + ui::VKEY_F22,
  OZONEACTIONKEY_F23 = OZONEACTIONKEY_START + ui::VKEY_F23,
  OZONEACTIONKEY_F24 = OZONEACTIONKEY_START + ui::VKEY_F24,
  OZONEACTIONKEY_NUMLOCK = OZONEACTIONKEY_START + ui::VKEY_NUMLOCK,
  OZONEACTIONKEY_SCROLL = OZONEACTIONKEY_START + ui::VKEY_SCROLL,
  OZONEACTIONKEY_WLAN = OZONEACTIONKEY_START + ui::VKEY_WLAN,
  OZONEACTIONKEY_POWER = OZONEACTIONKEY_START + ui::VKEY_POWER,
  OZONEACTIONKEY_LSHIFT = OZONEACTIONKEY_START + ui::VKEY_LSHIFT,
  OZONEACTIONKEY_RSHIFT = OZONEACTIONKEY_START + ui::VKEY_RSHIFT,
  OZONEACTIONKEY_LCONTROL = OZONEACTIONKEY_START + ui::VKEY_LCONTROL,
  OZONEACTIONKEY_RCONTROL = OZONEACTIONKEY_START + ui::VKEY_RCONTROL,
  OZONEACTIONKEY_LMENU = OZONEACTIONKEY_START + ui::VKEY_LMENU,
  OZONEACTIONKEY_RMENU = OZONEACTIONKEY_START + ui::VKEY_RMENU,
  OZONEACTIONKEY_BROWSER_BACK = OZONEACTIONKEY_START + ui::VKEY_BROWSER_BACK,
  OZONEACTIONKEY_BROWSER_FORWARD = OZONEACTIONKEY_START +
                                     ui::VKEY_BROWSER_FORWARD,
  OZONEACTIONKEY_BROWSER_REFRESH = OZONEACTIONKEY_START +
                                     ui::VKEY_BROWSER_REFRESH,
  OZONEACTIONKEY_BROWSER_STOP = OZONEACTIONKEY_START + ui::VKEY_BROWSER_STOP,
  OZONEACTIONKEY_BROWSER_SEARCH = OZONEACTIONKEY_START +
                                    ui::VKEY_BROWSER_SEARCH,
  OZONEACTIONKEY_BROWSER_FAVORITES = OZONEACTIONKEY_START +
                                       ui::VKEY_BROWSER_FAVORITES,
  OZONEACTIONKEY_BROWSER_HOME = OZONEACTIONKEY_START + ui::VKEY_BROWSER_HOME,
  OZONEACTIONKEY_VOLUME_MUTE = OZONEACTIONKEY_START + ui::VKEY_VOLUME_MUTE,
  OZONEACTIONKEY_VOLUME_DOWN = OZONEACTIONKEY_START + ui::VKEY_VOLUME_DOWN,
  OZONEACTIONKEY_VOLUME_UP = OZONEACTIONKEY_START + ui::VKEY_VOLUME_UP,
  OZONEACTIONKEY_MEDIA_NEXT_TRACK = OZONEACTIONKEY_START +
                                      ui::VKEY_MEDIA_NEXT_TRACK ,
  OZONEACTIONKEY_MEDIA_PREV_TRACK = OZONEACTIONKEY_START +
                                      ui::VKEY_MEDIA_PREV_TRACK,
  OZONEACTIONKEY_MEDIA_STOP = OZONEACTIONKEY_START + ui::VKEY_MEDIA_STOP,
  OZONEACTIONKEY_MEDIA_PLAY_PAUSE = OZONEACTIONKEY_START +
                                      ui::VKEY_MEDIA_PLAY_PAUSE,
  OZONEACTIONKEY_MEDIA_LAUNCH_MAIL = OZONEACTIONKEY_START +
                                       ui::VKEY_MEDIA_LAUNCH_MAIL,
  OZONEACTIONKEY_MEDIA_LAUNCH_MEDIA_SELECT = OZONEACTIONKEY_START
      +ui::VKEY_MEDIA_LAUNCH_MEDIA_SELECT,
  OZONEACTIONKEY_MEDIA_LAUNCH_APP1 = OZONEACTIONKEY_START +
                                       ui::VKEY_MEDIA_LAUNCH_APP1,
  OZONEACTIONKEY_MEDIA_LAUNCH_APP2 = OZONEACTIONKEY_START +
                                       ui::VKEY_MEDIA_LAUNCH_APP2,
  OZONEACTIONKEY_OEM_1 = OZONEACTIONKEY_START + ui::VKEY_OEM_1,
  OZONEACTIONKEY_OEM_PLUS = OZONEACTIONKEY_START + ui::VKEY_OEM_PLUS,
  OZONEACTIONKEY_OEM_COMMA = OZONEACTIONKEY_START + ui::VKEY_OEM_COMMA,
  OZONEACTIONKEY_OEM_MINUS = OZONEACTIONKEY_START + ui::VKEY_OEM_MINUS,
  OZONEACTIONKEY_OEM_PERIOD = OZONEACTIONKEY_START + ui::VKEY_OEM_PERIOD,
  OZONEACTIONKEY_OEM_2 = OZONEACTIONKEY_START + ui::VKEY_OEM_2,
  OZONEACTIONKEY_OEM_3 = OZONEACTIONKEY_START + ui::VKEY_OEM_3,
  OZONEACTIONKEY_BRIGHTNESS_DOWN = OZONEACTIONKEY_START +
                                     ui::VKEY_BRIGHTNESS_DOWN,
  OZONEACTIONKEY_BRIGHTNESS_UP = OZONEACTIONKEY_START + ui::VKEY_BRIGHTNESS_UP,
  OZONEACTIONKEY_KBD_BRIGHTNESS_DOWN = OZONEACTIONKEY_START +
                                         ui::VKEY_KBD_BRIGHTNESS_DOWN,
  OZONEACTIONKEY_OEM_4 = OZONEACTIONKEY_START + ui::VKEY_OEM_4,
  OZONEACTIONKEY_OEM_5 = OZONEACTIONKEY_START + ui::VKEY_OEM_5,
  OZONEACTIONKEY_OEM_6 = OZONEACTIONKEY_START + ui::VKEY_OEM_6,
  OZONEACTIONKEY_OEM_7 = OZONEACTIONKEY_START + ui::VKEY_OEM_7,
  OZONEACTIONKEY_OEM_8 = OZONEACTIONKEY_START + ui::VKEY_OEM_8,
  OZONEACTIONKEY_ALTGR = OZONEACTIONKEY_START + ui::VKEY_ALTGR,
  OZONEACTIONKEY_OEM_102 = OZONEACTIONKEY_START + ui::VKEY_OEM_102,
  OZONEACTIONKEY_OEM_103 = OZONEACTIONKEY_START + ui::VKEY_OEM_103,
  OZONEACTIONKEY_OEM_104 = OZONEACTIONKEY_START + ui::VKEY_OEM_104,
  OZONEACTIONKEY_PROCESSKEY = OZONEACTIONKEY_START + ui::VKEY_PROCESSKEY,
  OZONEACTIONKEY_COMPOSE = OZONEACTIONKEY_START + 0xE6,
  OZONEACTIONKEY_PACKET = OZONEACTIONKEY_START + ui::VKEY_PACKET,
  OZONEACTIONKEY_KBD_BRIGHTNESS_UP = OZONEACTIONKEY_START +
                                       ui::VKEY_KBD_BRIGHTNESS_UP,
  OZONEACTIONKEY_DBE_SBCSCHAR = OZONEACTIONKEY_START + ui::VKEY_DBE_SBCSCHAR,
  OZONEACTIONKEY_DBE_DBCSCHAR = OZONEACTIONKEY_START + ui::VKEY_DBE_DBCSCHAR,
  OZONEACTIONKEY_ATTN = OZONEACTIONKEY_START + ui::VKEY_ATTN,
  OZONEACTIONKEY_CRSEL = OZONEACTIONKEY_START + ui::VKEY_CRSEL,
  OZONEACTIONKEY_EXSEL = OZONEACTIONKEY_START + ui::VKEY_EXSEL,
  OZONEACTIONKEY_EREOF = OZONEACTIONKEY_START + ui::VKEY_EREOF,
  OZONEACTIONKEY_PLAY = OZONEACTIONKEY_START + ui::VKEY_PLAY,
  OZONEACTIONKEY_ZOOM = OZONEACTIONKEY_START + ui::VKEY_ZOOM,
  OZONEACTIONKEY_NONAME = OZONEACTIONKEY_START + ui::VKEY_NONAME,
  OZONEACTIONKEY_PA1 = OZONEACTIONKEY_START + ui::VKEY_PA1,
  OZONEACTIONKEY_OEM_CLEAR = OZONEACTIONKEY_START + ui::VKEY_OEM_CLEAR
};

}  // namespace ui

#endif  // OZONE_UI_EVENTS_KEYBOARD_CODES_OZONE_H_
