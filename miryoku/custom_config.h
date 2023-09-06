// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Mainly CS:GO and Valorant
// However it is also useful for other games
#define MIRYOKU_LAYER_TAP \
U_MT(ESC, C),      &kp N1,            &kp N2,                       U_MT(N4, N3),      U_MT(J,T),             &kp Y,             &u_to_U_BASE,      &kp I,             &kp O,             &kp P,      \
U_MT(I,X),         &kp Q,             &kp W,                        &kp E,             U_MT(H,R),             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
U_MT(TAB,Z),       &kp A,             &kp S,                        &kp D,             U_MT(B,F),             U_MT(TILDE, GRAVE),             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LSHFT,                    &kp LCTRL,         &kp BSPC,              &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP


// [ -> ğ || ] -> ü || ; -> ş || '-> i || , -> ö || . -> ç
#define MIRYOKU_LAYER_TR \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp RBKT,          &kp SQT,           &kp COMMA,         &kp P,             \
&kp A,             &kp SEMI,          &kp D,             &kp F,             &kp LBKT,          &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp DOT,           &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_TR MIRYOKU_MAPPING

// Update base qwerty for accessing TR layer
#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_LT(U_TR, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_LT(U_TR, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Gaming") \
MIRYOKU_X(TR, "TR") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_TR     3
#define U_BUTTON 4
#define U_NAV    5
#define U_MOUSE  6
#define U_MEDIA  7
#define U_NUM    8
#define U_SYM    9
#define U_FUN    10

