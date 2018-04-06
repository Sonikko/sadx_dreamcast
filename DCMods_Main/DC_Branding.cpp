#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>
#include "DC_Levels.h"

DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(CreditsList, MainCredits, 0x2BC2FD0);
DataArray(PVMEntry, GUITextures_Japanese, 0x007EECF0, 30);
DataArray(PVMEntry, GUITextures_English, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITextures_French, 0x007EEED0, 30);
DataArray(PVMEntry, GUITextures_Spanish, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITextures_German, 0x007EF0B0, 30);
DataArray(NJS_TEXANIM, PauseMenu_TEXANIMs, 0x009177B8, 15);

FunctionPointer(ObjectMaster*, sub_510390, (int a1), 0x510390);

NJS_TEXANIM PauseBar_Top = { 0x10, 0x10, 0, 0, 0, 0, 0, 0, 8, 0x20 };
NJS_TEXANIM PauseBar_Bottom = { 0x10, 0x10, 0, 0, 0, 255, 0, 255, 8, 0x20 };

static NJS_COLOR TitleBGTransparency;
static NJS_COLOR BlackFadeout;
static float Options_ArrowScale = 0.0f;
static float Options_ArrowScaleAmount = 0.1f;
static float HalfResHZ = 320.0f;
static float HalfResVT = 240.0f;
static float floatone = 1.0f;
static int PSInt = 0;
static float PSsX = 0;
static float PSsY = 0;
static float PSsZ = 0;
static int BSInt = 0;
static float BSsX = 0;
static float BSsY = 0;
static float BSsZ = 0;
static int titleframe = 0;
static int titledrawn = -1;
static int logoframe = 0;
static int logodrawn = -1;
static int startframe = 0;
static int startdrawn = -1;
static int transitionmode = 0;
static bool titlebackloaded = false;
static bool disablevtxcolor = false;
//Ini stuff
static bool RipplesOn = true;
static bool EnableTransition = false;
static bool DisableSA1TitleScreen = false;
static bool DisableFade = true;
static bool DrawOverlay = true;
static bool RemoveCream = false;
static int TextOffsetX = 0;
static int TextOffsetY = 0;
static int SonicTeamOffsetX = 0;
static int SonicTeamOffsetY = 0;
static int PressStartOffsetX = 0;
static int PressStartOffsetY = 0;
static int LogoOffsetX = 0;
static int LogoOffsetY = 0;
static float LogoScaleX = 1.0f;
static float LogoScaleY = 1.0f;
static float LogoScaleXT = 1.0f;
static float LogoScaleYT = 1.0f;
static int BackgroundOffsetX = 0;
static int BackgroundOffsetY = 0;
static float BackgroundScaleX = 1.0f;
static float BackgroundScaleY = 1.0f;
static float f480_Fixed = 0;
static float f640_Fixed = 0;

Uint8 options;

static float pausexpos = 137.0f;
static float vstretchx = 0.3525f;
static float vstretchz = 0.4025f;
static float rewritestretch = 0.5f;
static float zero = 0.0f;
static float one = 1.0f;

static float control_vertoffset = 455.0f;
static float control_hzoffset = 566.0f;
static float camera_vertoffset = 75.0f;
static float camera_hzoffset = 215.0f;

CreditsEntry SA1Credits[] = {
	{ 1, 0, 0, 0, "SONIC ADVENTURE STAFF" },
{ 3, -1, 0, 0, " " },
{ 2, -1, 0, 0, "Executive producers" },
{ 3, -1, 0, 0, "Hayao Nakayama" },
{ 3, -1, 0, 0, "Shoichiro Irimajiri" },
{ 2, -1, 0, 0, "Project management" },
{ 3, -1, 0, 0, "Syuji Utsumi" },
{ 3, -1, 0, 0, "Youji Ishii" },
{ 0, 0, 0, 0, "" }, //MAIN
{ 2, -1, 0, 0, "Producer" },
{ 3, -1, 0, 0, "Yuji Naka" },
{ 2, -1, 0, 0, "Director" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 2, -1, 0, 0, "Art director" },
{ 3, -1, 0, 0, "Kazuyuki Hoshino" },
{ 2, -1, 0, 0, "Main programmer" },
{ 3, -1, 0, 0, "Tetsu Katano" },
{ 2, -1, 0, 0, "Sound director" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, " " },
{ 2, -1, 0, 0, "Character designer" },
{ 3, -1, 0, 0, "Yuji Uekawa" },
{ 2, -1, 0, 0, "Character game designers" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 3, -1, 0, 0, "Takao Miyoshi" },
{ 3, -1, 0, 0, "Yojiro Ogawa" },
{ 2, -1, 0, 0, "Player character programmers" },
{ 3, -1, 0, 0, "Tetsu Katano" },
{ 3, -1, 0, 0, "Masanobu Yamamoto" },
{ 3, -1, 0, 0, "Kouichi Toya" },
{ 3, -1, 0, 0, "Yasuhiro Takahashi" },
{ 3, -1, 0, 0, "Kazuyuki Mukaida" },
{ 2, -1, 0, 0, "Character motion designers" },
{ 3, -1, 0, 0, "Yuji Uekawa" },
{ 3, -1, 0, 0, "Akikazu Mizuno" },
{ 0, 1, 0, 0, "" }, //FIELD STAFF
{ 2, -1, 0, 0, "Field designers" },
{ 3, -1, 0, 0, "Takao Miyoshi" },
{ 3, -1, 0, 0, "Shiro Maekawa" },
{ 3, -1, 0, 0, "Yojiro Ogawa" },
{ 3, -1, 0, 0, "Yuichiro Suzuki" },
{ 3, -1, 0, 0, "Shun Nakamura" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 2, -1, 0, 0, "Lead field programmers" },
{ 3, -1, 0, 0, "Masahiro Wakayama" },
{ 3, -1, 0, 0, "Takuya Matsumoto" },
{ 3, -1, 0, 0, "Tetsu Katano" },
{ 3, -1, 0, 0, "Akio Setsumasa" },
{ 2, -1, 0, 0, "Field programmers" },
{ 3, -1, 0, 0, "Takeshi Sakakibara" },
{ 3, -1, 0, 0, "Yoshitaka Kawabata" },
{ 3, -1, 0, 0, "Akihiko Shinya" },
{ 3, -1, 0, 0, "Shinya Matsunami" },
{ 3, -1, 0, 0, "Kouji Ogino" },
{ 3, -1, 0, 0, "Masakazu Miura" },
{ 2, -1, 0, 0, "Lead field artists" },
{ 3, -1, 0, 0, "Kazuyuki Hoshino" },
{ 3, -1, 0, 0, "Nobuhiko Honda" },
{ 3, -1, 0, 0, "Hideaki Moriya" },
{ 3, -1, 0, 0, "Michikazu Tamamura" },
{ 3, -1, 0, 0, "Masamichi Harada" },
{ 3, -1, 0, 0, "Satoshi Sakai" },
{ 3, -1, 0, 0, "Hiroshi Nishiyama" },
{ 2, -1, 0, 0, "Field artists" },
{ 3, -1, 0, 0, "Makiko Banju" },
{ 3, -1, 0, 0, "Akira Mikame" },
{ 3, -1, 0, 0, "Satoshi Okano" },
{ 3, -1, 0, 0, "Kensuke Kita" },
{ 3, -1, 0, 0, "Yoshinari Amaike" },
{ 3, -1, 0, 0, "Ai Ikeda" },
{ 3, -1, 0, 0, "Kosei Kitamura" },
{ 3, -1, 0, 0, "Takayuki Hatamura" },
{ 3, -1, 0, 0, "Yoshitaka Miura" },
{ 3, -1, 0, 0, "Kazuko Ito" },
{ 3, -1, 0, 0, "Yuki Takahashi" },
{ 3, -1, 0, 0, "Takanori Fukazawa" },
{ 3, -1, 0, 0, "Yasuhisa Nakagawa" },
{ 2, -1, 0, 0, "Visual effects designer" },
{ 3, -1, 0, 0, "Sachiko Kawamura" },
{ 2, -1, 0, 0, "Field program support" },
{ 3, -1, 0, 0, "Hideto Fujishita" },
{ 3, -1, 0, 0, "Yuhki Hatakeyama" },
{ 2, -1, 0, 0, "Field art support" },
{ 3, -1, 0, 0, "Misaqa Kitamura" },
{ 3, -1, 0, 0, "Yoshihito Takahashi" },
{ 3, -1, 0, 0, "Miho Takayanagi" },
{ 3, -1, 0, 0, "Nanako Yarimizu" },
{ 3, -1, 0, 0, "Katsumi Yokota" },
{ 3, -1, 0, 0, "Wataru Watanabe" },
{ 3, -1, 0, 0, "Chisai Abe" },
{ 3, -1, 0, 0, "Maki Kaneko" },
{ 2, -1, 0, 0, "Visual effects support" },
{ 3, -1, 0, 0, "Naoko Hamada" },
{ 0, 2, 0, 0, "" }, //ENEMY STAFF
{ 2, -1, 0, 0, "\"CHAOS\" game designers" },
{ 3, -1, 0, 0, "Takashi Iizuka" },
{ 3, -1, 0, 0, "Norihito Kato" },
{ 2, -1, 0, 0, "\"CHAOS\" programmer" },
{ 3, -1, 0, 0, "Kouichi Toya" },
{ 2, -1, 0, 0, "\"CHAOS\" character designer" },
{ 3, -1, 0, 0, "Yuji Uekawa" },
{ 2, -1, 0, 0, "Enemy game designers" },
{ 3, -1, 0, 0, "Takao Miyoshi" },
{ 3, -1, 0, 0, "Daisuke Mori" },
{ 3, -1, 0, 0, "Kenjiro Morimoto" },
{ 2, -1, 0, 0, "Enemy programmer" },
{ 3, -1, 0, 0, "Yoshihisa Hashimoto" },
{ 2, -1, 0, 0, "Enemy character designers" },
{ 3, -1, 0, 0, "Kazuyuki Hoshino" },
{ 3, -1, 0, 0, "Tohru Watanuki" },
{ 3, -1, 0, 0, "Satoshi Sakai" },
{ 2, -1, 0, 0, "Enemy program support" },
{ 3, -1, 0, 0, "Mitsuteru Iwaki" },
{ 3, -1, 0, 0, "Tohru Mita" },
{ 3, -1, 0, 0, "Mitsuru Takahashi" },
{ 2, -1, 0, 0, "Enemy art support" },
{ 3, -1, 0, 0, "Satoshi Yokokawa" },
{ 3, -1, 0, 0, "Masami Hayashi" },
{ 3, -1, 0, 0, "Satoshi Arai" },
{ 3, -1, 0, 0, "Takehiko Akabane" },
{ 3, -1, 0, 0, "Haruo Nakano" },
{ 3, -1, 0, 0, "Yuichi Ide" },
{ 0, 3, 0, 0, "" }, //A-LIFE SYSTEM STAFF
{ 2, -1, 0, 0, "A-LIFE system designers" },
{ 3, -1, 0, 0, "Shiro Maekawa" },
{ 3, -1, 0, 0, "Daisuke Mori" },
{ 2, -1, 0, 0, "A-LIFE system programmer" },
{ 3, -1, 0, 0, "Yoshihisa Hashimoto" },
{ 2, -1, 0, 0, "Program advisor" },
{ 3, -1, 0, 0, "Yasuhiro Takahashi" },
{ 2, -1, 0, 0, "Lead A-LIFE artist" },
{ 3, -1, 0, 0, "Tohru Watanuki" },
{ 2, -1, 0, 0, "Artists" },
{ 3, -1, 0, 0, "Sachiko Kawamura" },
{ 3, -1, 0, 0, "Hiroyuki Watanabe" },
{ 2, -1, 0, 0, "Modeling art support" },
{ 3, -1, 0, 0, "Chika Kohjitani" },
{ 3, -1, 0, 0, "Yuichi Higuchi" },
{ 2, -1, 0, 0, "Visual memory game designer" },
{ 3, -1, 0, 0, "Shiro Maekawa" },
{ 2, -1, 0, 0, "Visual memory programmer" },
{ 3, -1, 0, 0, "Jun Fukushima" },
{ 0, 4, 0, 0, "" }, //STORY EVENT STAFF
{ 2, -1, 0, 0, "Story event director" },
{ 3, -1, 0, 0, "Akinori Nishiyama" },
{ 2, -1, 0, 0, "Story event coordinator" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 2, -1, 0, 0, "Scenario writer" },
{ 3, -1, 0, 0, "Akinori Nishiyama" },
{ 2, -1, 0, 0, "Event scene editors" },
{ 3, -1, 0, 0, "Shintaro Hata" },
{ 3, -1, 0, 0, "Kenichi Fujiwara" },
{ 3, -1, 0, 0, "Eitaro Toyoda" },
{ 2, -1, 0, 0, "Story sequence programmer" },
{ 3, -1, 0, 0, "Yoshitaka Kawabata" },
{ 2, -1, 0, 0, "Story event programmers" },
{ 3, -1, 0, 0, "Takaaki Saito" },
{ 3, -1, 0, 0, "Masato Nakazawa" },
{ 2, -1, 0, 0, "Event motion designers" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 3, -1, 0, 0, "Tomonori Dobashi" },
{ 2, -1, 0, 0, "Event scene edit support" },
{ 3, -1, 0, 0, "Hiroyuki Abe" },
{ 2, -1, 0, 0, "Event program support" },
{ 3, -1, 0, 0, "Koh Midoro" },
{ 3, -1, 0, 0, "Kunihiko Mori" },
{ 2, -1, 0, 0, "Modeling art support" },
{ 3, -1, 0, 0, "Toshiyuki Mukaiyama" },
{ 3, -1, 0, 0, "Shinichi Higashi" },
{ 3, -1, 0, 0, "Kazuo Komuro" },
{ 3, -1, 0, 0, "Toshihiro Ito" },
{ 3, -1, 0, 0, "Toshiyuki Takamatsu" },
{ 3, -1, 0, 0, "Satsuki Nagano" },
{ 0, 5, 0, 0, "" }, //CG MOVIE STAFF
{ 2, -1, 0, 0, "CG movie producer" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 2, -1, 0, 0, "CG movie director" },
{ 3, -1, 0, 0, "Manabu Kusunoki" },
{ 2, -1, 0, 0, "Lead CG movie artist" },
{ 3, -1, 0, 0, "Norihiro Nishiyama" },
{ 2, -1, 0, 0, "CG movie artists" },
{ 3, -1, 0, 0, "Masahiro Kumono" },
{ 3, -1, 0, 0, "Motomu Hayashi" },
{ 3, -1, 0, 0, "Tsuyoshi Morimoto" },
{ 3, -1, 0, 0, "Tamotsu Kushibe" },
{ 3, -1, 0, 0, "Kouji Kubo" },
{ 3, -1, 0, 0, "Emiko Hirose" },
{ 3, -1, 0, 0, "Naomi Honda" },
{ 3, -1, 0, 0, "Masashi Yamaguchi" },
{ 3, -1, 0, 0, "Isamu Yamasaki" },
{ 2, -1, 0, 0, "Opening movie editor" },
{ 3, -1, 0, 0, "Naoto Ohshima" },
{ 2, -1, 0, 0, "MA studio" },
{ 3, -1, 0, 0, "Maruni Studio, Tokyo, Japan" },
{ 2, -1, 0, 0, "MA engineer" },
{ 3, -1, 0, 0, "Koji Ito (Maruni Studio)" },
{ 0, 6, 0, 0, "" }, //COORDINATORS
{ 2, -1, 0, 0, "Program coordinator" },
{ 3, -1, 0, 0, "Takahiro Hamano" },
{ 2, -1, 0, 0, "Camera system programmer" },
{ 3, -1, 0, 0, "Takeshi Sakakibara" },
{ 2, -1, 0, 0, "Technical supervisor" },
{ 3, -1, 0, 0, "Takuya Matsumoto" },
{ 2, -1, 0, 0, "Technical staff coordinators" },
{ 3, -1, 0, 0, "Masanobu Yamamoto" },
{ 3, -1, 0, 0, "Osamu Hori" },
{ 3, -1, 0, 0, "Kazuyuki Mukaida" },
{ 2, -1, 0, 0, "Art staff coordinators" },
{ 3, -1, 0, 0, "Minoru Matsuura" },
{ 3, -1, 0, 0, "Atsushi Seimiya" },
{ 3, -1, 0, 0, "Chie Yoshida" },
{ 0, 7, 0, 0, "" }, //SOUND STAFF
{ 2, -1, 0, 0, "Executive sound coordinator" },
{ 3, -1, 0, 0, "Yukifumi Makino" },
{ 2, -1, 0, 0, "Lead music composer" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 2, -1, 0, 0, "Music composers" },
{ 3, -1, 0, 0, "Kenichi Tokoi" },
{ 3, -1, 0, 0, "Fumie Kumatani" },
{ 2, -1, 0, 0, "Sound effects" },
{ 3, -1, 0, 0, "Masaru Setsumaru" },
{ 3, -1, 0, 0, "Tatsuyuki Maeda" },
{ 3, -1, 0, 0, "Yutaka Minobe" },
{ 3, -1, 0, 0, "Takashi Endo (1991,Inc.)" },
{ 2, -1, 0, 0, "Music produced by" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, "Atsushi \"SUSHI\" Kosugi (Beat On Beat,Inc.)" },
{ 2, -1, 0, 0, "Recording studios" },
{ 3, -1, 0, 0, "A&M Studio, Hollywood, CA." },
{ 3, -1, 0, 0, "Cam-Am Recorders, Tarzana, CA." },
{ 3, -1, 0, 0, "Avatar Studio, N.Y., NY." },
{ 3, -1, 0, 0, "Beat On Beat Studio, N.Y., NY." },
{ 3, -1, 0, 0, "Sound On Sound Studio, N.Y., NY." },
{ 3, -1, 0, 0, "MIT Studio, Tokyo" },
{ 3, -1, 0, 0, "MAGNET Studio, Tokyo" },
{ 3, -1, 0, 0, "SEGA Digital Studio" },
{ 2, -1, 0, 0, "Recording engineers" },
{ 3, -1, 0, 0, "Stan Katayama" },
{ 3, -1, 0, 0, "Roy Hendrickson" },
{ 3, -1, 0, 0, "Justin Luchter" },
{ 3, -1, 0, 0, "Masahiro Fukuhara (MIT Studio) " },
{ 3, -1, 0, 0, "Hirokazu Akashi (SEGA Digital Studio) " },
{ 3, -1, 0, 0, "Yoshitada Miya (SEGA Digital Studio) " },
{ 2, -1, 0, 0, "Recording coordination" },
{ 3, -1, 0, 0, "Atsushi \"SUSHI\" Kosugi (Beat On Beat,Inc.)" },
{ 3, -1, 0, 0, "Emi Akimoto (Global Vision Productions)" },
{ 3, -1, 0, 0, "Makoto Suzuki (Compozila)" },
{ 2, -1, 0, 0, "Mastering studio" },
{ 3, -1, 0, 0, "Master Disk Studio, N.Y., NY." },
{ 3, -1, 0, 0, "WARNER MUSIC JAPAN, Tokyo" },
{ 2, -1, 0, 0, "Mastering engineers" },
{ 3, -1, 0, 0, "Scott Hull (Master Disk Studio)" },
{ 3, -1, 0, 0, "Isao Kikuchi (WARNER MUSIC JAPAN)" },
{ 0, 8, 0, 0, "" }, //Musicians
{ 2, -1, 0, 0, "Vocals" },
{ 3, -1, 0, 0, "Johnny Gioeli" },
{ 3, -1, 0, 0, "Tony Harnell" },
{ 3, -1, 0, 0, "Ted Poley" },
{ 3, -1, 0, 0, "Marlon Saunders" },
{ 3, -1, 0, 0, "Dread Fox" },
{ 3, -1, 0, 0, "Nikki Gregoroff" },
{ 3, -1, 0, 0, "Karen Brake" },
{ 3, -1, 0, 0, "Terry Woods" },
{ 3, -1, 0, 0, "Maxine Waters" },
{ 2, -1, 0, 0, "Guitars" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, "Mike Campbell" },
{ 3, -1, 0, 0, "Jon Paris" },
{ 3, -1, 0, 0, "Rohn Lawrence" },
{ 3, -1, 0, 0, "Kenichi Tokoi" },
{ 2, -1, 0, 0, "Bass" },
{ 3, -1, 0, 0, "Naoto Shibata" },
{ 3, -1, 0, 0, "Will Lee" },
{ 3, -1, 0, 0, "Takeshi Taneda" },
{ 3, -1, 0, 0, "Zev Katz" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 3, -1, 0, 0, "Kenichi Tokoi" },
{ 2, -1, 0, 0, "Drums" },
{ 3, -1, 0, 0, "Hiro Honma" },
{ 3, -1, 0, 0, "Ricky Wellman" },
{ 2, -1, 0, 0, "Keyboards" },
{ 3, -1, 0, 0, "Philippe Saisse" },
{ 3, -1, 0, 0, "Yutaka Minobe" },
{ 3, -1, 0, 0, "Jun Senoue" },
{ 2, -1, 0, 0, "Percussion" },
{ 3, -1, 0, 0, "Bashiri Johnson" },
{ 2, -1, 0, 0, "Horn section" },
{ 3, -1, 0, 0, "East 4th Horns" },
{ 2, -1, 0, 0, "Voice files operation" },
{ 3, -1, 0, 0, "Hideki Abe" },
{ 2, -1, 0, 0, "Sound technical adviser" },
{ 3, -1, 0, 0, "Tadashi Jyokagi" },
{ 2, -1, 0, 0, "Lyrics translation" },
{ 3, -1, 0, 0, "Takahiro Fukada" },
{ 0, 9, 0, 0, "" }, //JAPANESE VOICE
{ 2, -1, 0, 0, "Japanese character voices" },
{ 3, -1, 0, 0, "Junichi Kanemaru" },
{ 3, -1, 0, 0, "Kazuki Hayashi" },
{ 3, -1, 0, 0, "Nobutoshi Hayashi" },
{ 3, -1, 0, 0, "Taeko Kawada" },
{ 3, -1, 0, 0, "Jyoji Nakata" },
{ 3, -1, 0, 0, "Syun Yashiro" },
{ 3, -1, 0, 0, "Kaori Aso" },
{ 3, -1, 0, 0, "Kaho Kouda" },
{ 3, -1, 0, 0, "Toru Okawa" },
{ 3, -1, 0, 0, "Chikao Otsuka" },
{ 2, -1, 0, 0, "Postrecording producer" },
{ 3, -1, 0, 0, "Hiroyuki Inage" },
{ 3, -1, 0, 0, "(TOHOKUSHINSHA)" },
{ 2, -1, 0, 0, "Postrecording director" },
{ 3, -1, 0, 0, "Eriko Kimura" },
{ 3, -1, 0, 0, "(TOHOKUSHINSHA)" },
{ 2, -1, 0, 0, "Recording" },
{ 3, -1, 0, 0, "OMNIBUS JAPAN" },
{ 0, 10, 0, 0, "" }, //ENGLISH VOICE
{ 2, -1, 0, 0, "English character voices" },
{ 3, -1, 0, 0, "Ryan Drummond" },
{ 3, -1, 0, 0, "Corey Bringas" },
{ 3, -1, 0, 0, "Michael Mcgaharn" },
{ 3, -1, 0, 0, "Jennifer Douillard" },
{ 3, -1, 0, 0, "Jon St. John" },
{ 3, -1, 0, 0, "Elara Distler" },
{ 3, -1, 0, 0, "Deem Bristow" },
{ 3, -1, 0, 0, "Steve Brodie" },
{ 2, -1, 0, 0, "Postrecording director" },
{ 3, -1, 0, 0, "Lani Minella" },
{ 3, -1, 0, 0, "Bobby White" },
{ 2, -1, 0, 0, "Recording Studio" },
{ 3, -1, 0, 0, "Lightspan, San Diego, CA." },
{ 3, -1, 0, 0, "Audio Banks, Santa Monica, CA." },
{ 0, 11, 0, 0, "" }, //LOCALIZATION
{ 2, -1, 0, 0, "Localization staff" },
{ 3, -1, 0, 0, "Keith Palmer (SOA)" },
{ 3, -1, 0, 0, "Osamu Shibamiya (SOA)" },
{ 3, -1, 0, 0, "Shinobu Shindo (SOJ)" },
{ 3, -1, 0, 0, "Monika Hudgins (SOJ)" },
{ 3, -1, 0, 0, "Nulty Dave (SOE)" },
{ 3, -1, 0, 0, "Katsu Sato (SOE)" },
{ 3, -1, 0, 0, "" },
{ 2, -1, 0, 0, "Executive management" },
{ 3, -1, 0, 0, "Sadahiko Hirose" },
{ 3, -1, 0, 0, "Hidekazu Yukawa" },
{ 3, -1, 0, 0, "Hideki Sato" },
{ 3, -1, 0, 0, "Hideki Okamura" },
{ 3, -1, 0, 0, "Okitane Usui" },
{ 3, -1, 0, 0, "" },
{ 3, -1, 0, 0, "Toshiro Kezuka" },
{ 3, -1, 0, 0, "Bernard Stolar" },
{ 3, -1, 0, 0, "Makoto Kaneshiro" },
{ 2, -1, 0, 0, "Executive coordination" },
{ 3, -1, 0, 0, "Shinobu Toyoda" },
{ 3, -1, 0, 0, "Toshinori Asai" },
{ 3, -1, 0, 0, "Noriyoshi Ohba" },
{ 3, -1, 0, 0, "Jin Shimazaki" },
{ 3, -1, 0, 0, "Makoto Oshitani" },
{ 3, -1, 0, 0, "Masanao Maeda" },
{ 2, -1, 0, 0, "Marketing producer" },
{ 3, -1, 0, 0, "Tomoaki Ogawa" },
{ 2, -1, 0, 0, "Promotion management" },
{ 3, -1, 0, 0, "Kunihisa Ueno" },
{ 3, -1, 0, 0, "Kenichi Sato" },
{ 3, -1, 0, 0, "Seijiro Sannabe" },
{ 3, -1, 0, 0, "Hirokazu Kanno" },
{ 3, -1, 0, 0, "Masatoshi Kawaguchi" },
{ 3, -1, 0, 0, "Mitsuru Takahashi" },
{ 3, -1, 0, 0, "Kenji Kato" },
{ 3, -1, 0, 0, "Hiroto Kikuchi" },
{ 2, -1, 0, 0, "Public relations" },
{ 3, -1, 0, 0, "Tadashi Takezaki" },
{ 3, -1, 0, 0, "Junji Yamazaki" },
{ 3, -1, 0, 0, "Masanori Hirano" },
{ 2, -1, 0, 0, "Software support" },
{ 3, -1, 0, 0, "Masaharu Yoshii" },
{ 3, -1, 0, 0, "Takashi Ando" },
{ 3, -1, 0, 0, "Tomoaki Saito" },
{ 3, -1, 0, 0, "Kazuhiro Takase" },
{ 3, -1, 0, 0, "Takashi Shoji" },
{ 3, -1, 0, 0, "Hiroaki Sano" },
{ 3, -1, 0, 0, "Hakuro Matsuda" },
{ 3, -1, 0, 0, "Kenei Unoki" },
{ 3, -1, 0, 0, "Akira Ohe" },
{ 3, -1, 0, 0, "and... " },
{ 3, -1, 0, 0, "Dreamcast LIBRARY STAFF" },
{ 3, -1, 0, 0, "Masao Oshimi (CRI)" },
{ 3, -1, 0, 0, "Tomonori Saguchi (CRI)" },
{ 3, -1, 0, 0, "Yutaka Sugano" },
{ 2, -1, 0, 0, "Hardware support" },
{ 3, -1, 0, 0, "Nobuhisa Yamada" },
{ 3, -1, 0, 0, "Osamu Kaji" },
{ 3, -1, 0, 0, "Shiro Hagiwara" },
{ 3, -1, 0, 0, "Taku Matsubara" },
{ 3, -1, 0, 0, "Shoji Nishikawa" },
{ 3, -1, 0, 0, "Takashi Sekimoto" },
{ 3, -1, 0, 0, "Shuji Hori" },
{ 3, -1, 0, 0, "Osamu Hosokawa" },
{ 3, -1, 0, 0, "Hirokazu Hama" },
{ 3, -1, 0, 0, "Kenji Tosaki" },
{ 3, -1, 0, 0, "Atsunori Himoto" },
{ 3, -1, 0, 0, "and... " },
{ 3, -1, 0, 0, "Dreamcast HARDWARE STAFF" },
{ 2, -1, 0, 0, "Visual material editors" },
{ 3, -1, 0, 0, "Yuji Sawairi" },
{ 3, -1, 0, 0, "Ikuo Ishizaka" },
{ 3, -1, 0, 0, "Takayuki Ohta" },
{ 2, -1, 0, 0, "Manual production" },
{ 3, -1, 0, 0, "Kaoru Ichigozaki" },
{ 3, -1, 0, 0, "Youichi Takahashi" },
{ 3, -1, 0, 0, "Chieko Nakamura" },
{ 3, -1, 0, 0, "Makoto Nishino" },
{ 3, -1, 0, 0, "Monika Hudgins" },
{ 2, -1, 0, 0, "Browser production" },
{ 3, -1, 0, 0, "Tetsuya Kaku" },
{ 3, -1, 0, 0, "Paul Stathacopoulos" },
{ 3, -1, 0, 0, "Hiroaki Ito" },
{ 3, -1, 0, 0, "Takeshi Ito" },
{ 3, -1, 0, 0, "ACCESS CO.,LTD." },
{ 3, -1, 0, 0, "Planetweb,Inc." },
{ 2, -1, 0, 0, "Internet support" },
{ 3, -1, 0, 0, "Keitaro Shigemasa (SNI)" },
{ 3, -1, 0, 0, "Tomoaki Yoshioka" },
{ 3, -1, 0, 0, "Mutsuhiro Fujii" },
{ 3, -1, 0, 0, "Masaya Miyauchi" },
{ 3, -1, 0, 0, "Takamitsu Shoji" },
{ 3, -1, 0, 0, "A.J. Briones" },
{ 3, -1, 0, 0, "Alexander Villagran" },
{ 3, -1, 0, 0, "Masamitsu Uchiyama" },
{ 2, -1, 0, 0, "Special thanks" },
{ 3, -1, 0, 0, "Tomoko Sasaki" },
{ 3, -1, 0, 0, "Naofumi Hataya" },
{ 3, -1, 0, 0, "Sawako Sogabe" },
{ 3, -1, 0, 0, "Yoshiaki Kashima" },
{ 3, -1, 0, 0, "Isao Miyazaki (ESP Guitars)" },
{ 3, -1, 0, 0, "Hiroki Hayashi (ESP Guitars)" },
{ 3, -1, 0, 0, "Yosuke Okunari" },
{ 3, -1, 0, 0, " " },
{ 3, -1, 0, 0, "Yukio Aoyama" },
{ 3, -1, 0, 0, "Yuki Kobayashi" },
{ 3, -1, 0, 0, "Shadow Roldan" },
{ 2, -1, 0, 0, "Executive supervisor" },
{ 3, -1, 0, 0, "Isao Okawa" },
{ 10, -1, 0, 0, " " },
{ 5, 2, 0, 0, "MPEG ROGO" },
{ 5, 0, 0, 0, "ADX ROGO" },
{ 5, 3, 0, 0, "SEGA Digital Studio ROGO" },
{ 3, -1, 0, 0, " " },
{ 5, 1, 0, 0, "SONIC TEAM ROGO" },
{ 3, -1, 0, 0, " " },
{ 6, -1, 0, 0, "presented by" },
{ 7, -1, 0, 0, "SEGA ENTERPRISES,LTD." }
};

int __cdecl PlayStartSound_EnableTransition()
{
	if (EnableTransition == true)
	{
		transitionmode = 1;
		disablevtxcolor = true;
	}
	PlaySound(2, 0, 0, 0);
	return 0;
}

int __cdecl PlayReturnSound_EnableTransition()
{
	PlaySound(3, 0, 0, 0);
	if (EnableTransition == true)
	{
		transitionmode = 3;
		disablevtxcolor = true;
	}
	return 0;
}

void __cdecl DrawAVA_TITLE_BACK_E_DC(float depth)
{
	titlebackloaded = true;
	if (transitionmode == 2) transitionmode = 3;
	float xpos = 0;
	float ypos = 0;
	float scaleX = 0;
	float scaleY = 0;
	int texturenumber = 0;
	int surfacesucks = 0;
	float y; // ST08_4@1
	float x; // ST04_4@1
	float v3; // ST08_4@1
	float v4; // ST04_4@1
	float v5; // ST08_4@1
	float v6; // ST04_4@1
	float v7; // ST08_4@1
	float v8; // ST04_4@1
	float v9; // ST08_4@1
	float v10; // ST04_4@1
	float v11; // ST08_4@1
	float v12; // ST04_4@1
	float v13; // ST08_4@1
	float v14; // ST04_4@1
	float v15; // ST08_4@1
	float v16; // ST04_4@1
	float z; // [sp+1Ch] [bp+4h]@1
	njSetTexture(&ava_title_e_TEXLIST);
	njTextureShadingMode(1);
	SetVtxColorB(0xFFFFFFFF);
	njSetTexture(&ava_title_back_e_TEXLIST);
	z = depth - 4.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) surfacesucks = -48.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) >= 2.2f) surfacesucks = -96.0f;
	//Draw main menu BG
	xpos = BackgroundOffsetX * HorizontalStretch * BackgroundScaleX;
	ypos = BackgroundOffsetY *  (VerticalStretch*rewritestretch) * BackgroundScaleY;
	scaleX = HorizontalStretch * 0.5f * BackgroundScaleX;
	scaleY = VerticalStretch * rewritestretch * BackgroundScaleY;
	DrawBG(texturenumber, xpos, ypos, z, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 256.0f)* HorizontalStretch * BackgroundScaleX;
	ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
	DrawBG(texturenumber + 1, xpos, ypos, z, scaleX, scaleY);

	xpos = BackgroundOffsetX* HorizontalStretch * BackgroundScaleX;
	ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
	DrawBG(texturenumber + 2, xpos, ypos, z, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 256.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
	DrawBG(texturenumber + 3, xpos, ypos, z, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
	DrawBG(texturenumber + 4, xpos, ypos, z, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 256.0f)*BackgroundScaleY;
	DrawBG(texturenumber + 5, xpos, ypos, z, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 512.0f)*BackgroundScaleY;
	DrawBG(texturenumber + 6, xpos, ypos, z, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 768.0f)*BackgroundScaleY;
	DrawBG(texturenumber + 7, xpos, ypos, z, scaleX, scaleY);
	//Draw logo
	DrawBG(8, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, z, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
	//Draw logo overlay
	if (DrawOverlay == true) DrawBG(9, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, z, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
	njTextureShadingMode(2);
	njSetTexture(&ava_title_e_TEXLIST);
}

void BoxBackgroundColor()
{
	SetMaterialAndSpriteColor_Float(0.8f, 1.0f, 1.0f, 1.0f);
}

void DrawLogo()
{
	if (HorizontalStretch != 1.0f)
	{
		if (transitionmode == 0) TitleBGTransparency.argb.a = 255;
		//Draw AVA_BACK first
		if (EnableTransition == true && titlebackloaded == false)
		{
			njSetTexture(&ava_back_TEXLIST);
			SetVtxColorB(0xFFFFFFFF);
			DrawTiledBG_AVA_BACK(1.2f);
		}
		//Variables for logo/background
		float xpos;
		float ypos;
		float smalloff;
		float surfacesucks = 0.0f;
		int texturenumber;
		float scaleX;
		float scaleY;
		if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) smalloff = -60; //16:10
		if (float(HorizontalResolution) / float(VerticalResolution) <= 1.3f) smalloff = -40; //5:4
		if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) surfacesucks = -48.0f;
		if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f)  surfacesucks = -96.0f;
		//Draw title BG
		njSetTexture(&ava_title_cmn_TEXLIST);
		njTextureShadingMode(1);
		if (!DroppedFrames)
		{
			if (titlebackloaded == false) SetVtxColorB(TitleBGTransparency.color); else SetVtxColorB(0xFFFFFFFF);
			if (titledrawn != titleframe)
			{
				if (titleframe > 22) titleframe = 0;
				if (RipplesOn == false) texturenumber = 0; else texturenumber = 8 + (titleframe * 8);
				xpos = BackgroundOffsetX * HorizontalStretch * BackgroundScaleX;
				ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
				scaleX = HorizontalStretch * 0.5f * BackgroundScaleX;
				scaleY = VerticalStretch * rewritestretch * BackgroundScaleY;
				DrawBG(texturenumber, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = (BackgroundOffsetX + 256.0f)* HorizontalStretch * BackgroundScaleX;
				ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
				DrawBG(texturenumber + 1, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = BackgroundOffsetX * HorizontalStretch * BackgroundScaleX;
				ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
				DrawBG(texturenumber + 2, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = (BackgroundOffsetX + 256.0f)*BackgroundScaleX * HorizontalStretch;
				ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
				DrawBG(texturenumber + 3, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
				ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
				DrawBG(texturenumber + 4, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
				ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 256.0f)*BackgroundScaleY;
				DrawBG(texturenumber + 5, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
				ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 512.0f)*BackgroundScaleY;
				DrawBG(texturenumber + 6, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
				ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 768.0f)*BackgroundScaleY;
				DrawBG(texturenumber + 7, xpos, ypos, 1.2f, scaleX, scaleY);
				titledrawn = titleframe;
			}
		}
		//Draw logo
		if (logodrawn != logoframe)
		{
			njSetTexture((NJS_TEXLIST*)0x010D7C48); //AVA_GTITLE0_E
			if (logoframe > 128) logoframe = 0;
			//Draw logo
			SetVtxColorB(TitleBGTransparency.color);
			DrawBG(0, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, 1.2f, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
			//Draw logo overlay
			if (DrawOverlay == true) DrawBG(1, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, 1.2f, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
			//Disable this stuff for ultra wide screens because there isn't enough space
			if (float(HorizontalResolution) / float(VerticalResolution) < 2.2f)
			{
				//Draw Sonic Team logo
				DrawBG(2, (320 - 32 + SonicTeamOffsetX)*HorizontalStretch, (64 + surfacesucks + SonicTeamOffsetY)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f, VerticalStretch * rewritestretch);
				//Draw copyright text
				DrawBG(3, (64 + TextOffsetX)*HorizontalStretch, (960 - 168 + TextOffsetY + surfacesucks)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f, VerticalStretch * rewritestretch);
			}
			//Ultra wide
			if (float(HorizontalResolution) / float(VerticalResolution) >= 2.2f)
			{
				//Draw Sonic Team logo
				DrawBG(2, (320 - 32 + SonicTeamOffsetX)*HorizontalStretch, (64 + surfacesucks + SonicTeamOffsetY)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f*0.8f, VerticalStretch * rewritestretch*0.8f);
				//Draw copyright text
				DrawBG(3, (64 + TextOffsetX)*HorizontalStretch, (960 - 168 + TextOffsetY + surfacesucks)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f*0.8f, VerticalStretch * rewritestretch*0.8f);
			}
			logodrawn = logoframe;
		}
		if (transitionmode != 0)
		{
			if (transitionmode == 1)
			{
				{
					if (TitleBGTransparency.argb.a >= 16)
					{
						TitleBGTransparency.argb.a -= 16;
						if (LogoScaleXT < LogoScaleX * 2.0f) LogoScaleXT = LogoScaleXT * 1.05f;
						if (LogoScaleYT < LogoScaleY * 2.0f) LogoScaleYT = LogoScaleYT * 1.05f;
						if (BlackFadeout.argb.a <= 48) BlackFadeout.argb.a += 16;
					}
					else
					{
						transitionmode = 2;
						TitleBGTransparency.argb.a = 0;
						BlackFadeout.argb.a = 64;
						LogoScaleXT = LogoScaleX * 2.0f;
						LogoScaleYT = LogoScaleY * 2.0f;
					}
				}
			}
			if (transitionmode == 3)
			{
				if (TitleBGTransparency.argb.a <= 223)
				{
					if (BlackFadeout.argb.a >= 4) BlackFadeout.argb.a -= 4;
					TitleBGTransparency.argb.a += 32;
					if (LogoScaleXT > LogoScaleX) LogoScaleXT = LogoScaleXT * 0.92f;
					if (LogoScaleYT > LogoScaleY) LogoScaleYT = LogoScaleYT * 0.92f;
				}
				else
				{
					transitionmode = 0;
					TitleBGTransparency.argb.a = 255;
					LogoScaleXT = LogoScaleX;
					LogoScaleYT = LogoScaleY;
				}
			}
			xpos = (HorizontalResolution - LogoScaleXT * 512.0f * HorizontalStretch) / 2.0f;
			ypos = (VerticalResolution - LogoScaleYT * 256.0f * HorizontalStretch + smalloff * VerticalStretch * rewritestretch) / 2.0f;
			//Draw logo transition
			SetVtxColorB(TitleBGTransparency.color);
			if (LogoScaleXT > 1.1f) DrawBG(0, xpos, ypos, 1.2f, HorizontalStretch * 0.5f*LogoScaleXT, VerticalStretch * rewritestretch*LogoScaleYT);
		}
		njTextureShadingMode(2);
		//Draw black box if transitioning
		if (transitionmode == 3 || transitionmode == 1) DrawRect_Queue(0, 0, HorizontalResolution, VerticalResolution, 1.2f, BlackFadeout.color, QueuedModelFlagsB_SomeTextureThing);
	}
}

void DrawLogo_640()
{
	if (HorizontalStretch == 1)
	{
		//Variables for logo/background
		float xpos;
		float ypos;
		int texturenumber;
		float scaleX;
		float scaleY;
		if (transitionmode == 0) TitleBGTransparency.argb.a = 255;
		//Draw AVA_BACK first
		if (EnableTransition == true && titlebackloaded == false)
		{
			njSetTexture(&ava_back_TEXLIST);
			SetVtxColorB(0xFFFFFFFF);
			if (!DroppedFrames)
			{
				DrawTiledBG_AVA_BACK(1.2f);
			}
		}
		//Draw title screen BG
		njSetTexture(&ava_title_cmn_small_TEXLIST);
		njTextureShadingMode(1);
		if (!DroppedFrames)
		{
			if (titlebackloaded == false) SetVtxColorB(TitleBGTransparency.color); else SetVtxColorB(0xFFFFFFFF);
			if (titledrawn != titleframe)
			{
				if (titleframe > 22) titleframe = 0;
				if (RipplesOn == false) texturenumber = 0; else texturenumber = 8 + (titleframe * 8);
				scaleX = 1.0f;
				scaleY = 1.0f;

				xpos = 0;
				ypos = 0;
				DrawBG(texturenumber, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = 256;
				ypos = 0;
				DrawBG(texturenumber + 1, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = 0;
				ypos = 256;
				DrawBG(texturenumber + 2, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = 256;
				ypos = 256;
				DrawBG(texturenumber + 3, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = 512;
				ypos = 0;
				DrawBG(texturenumber + 4, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = 512;
				ypos = 128;
				DrawBG(texturenumber + 5, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = 512;
				ypos = 256;
				DrawBG(texturenumber + 6, xpos, ypos, 1.2f, scaleX, scaleY);

				xpos = 512;
				ypos = 384;
				DrawBG(texturenumber + 7, xpos, ypos, 1.2f, scaleX, scaleY);
				titledrawn = titleframe;
			}
		}
		//Draw logo separately if ripples are enabled
		if (logodrawn != logoframe)
		{
			njSetTexture((NJS_TEXLIST*)0x010D7C48); //AVA_GTITLE0_E
			if (logoframe > 128) logoframe = 0;
			//Draw logo if using logo-less background
			SetVtxColorB(TitleBGTransparency.color);
			if (RipplesOn == true) DrawBG(4, 64, 81, 1.2f, 1.0f, 1.0f);
			//Draw logo overlay
			if (RipplesOn == true && DrawOverlay == true) DrawBG(5, 64, 81, 1.2f, 1.0f, 1.0f);
			if (RipplesOn == false && DrawOverlay == true) DrawBG(5, 64, 112, 1.2f, 1.0f, 1.0f);
			//Draw Sonic Team logo if using logo-less background
			if (RipplesOn == true) DrawBG(6, (320 - 32), 35, 1.2f, 1.0f, 1.0f);
			//Draw copyright text if using logo-less background
			if (RipplesOn == true) DrawBG(7, 64, (480 - 84), 1.2f, 1.0f, 1.0f);
			logodrawn = logoframe;
		}
		if (transitionmode != 0)
		{
			if (transitionmode == 1)
			{
				{
					if (TitleBGTransparency.argb.a >= 16)
					{
						TitleBGTransparency.argb.a -= 16;
						if (LogoScaleXT < LogoScaleX * 2.0f) LogoScaleXT = LogoScaleXT * 1.05f;
						if (LogoScaleYT < LogoScaleY * 2.0f) LogoScaleYT = LogoScaleYT * 1.05f;
						if (BlackFadeout.argb.a <= 48) BlackFadeout.argb.a += 16;
					}
					else
					{
						transitionmode = 2;
						TitleBGTransparency.argb.a = 0;
						BlackFadeout.argb.a = 64;
						LogoScaleXT = LogoScaleX * 2.0f;
						LogoScaleYT = LogoScaleY * 2.0f;
					}
				}
			}
			if (transitionmode == 3)
			{
				if (TitleBGTransparency.argb.a <= 223)
				{
					if (BlackFadeout.argb.a >= 4) BlackFadeout.argb.a -= 4;
					TitleBGTransparency.argb.a += 32;
					if (LogoScaleXT > LogoScaleX) LogoScaleXT = LogoScaleXT * 0.92f;
					if (LogoScaleYT > LogoScaleY) LogoScaleYT = LogoScaleYT * 0.92f;
				}
				else
				{
					transitionmode = 0;
					TitleBGTransparency.argb.a = 255;
					LogoScaleXT = LogoScaleX;
					LogoScaleYT = LogoScaleY;
				}
			}
			//Draw logo transition
			SetVtxColorB(TitleBGTransparency.color);
			xpos = (640.0f - LogoScaleXT * 512.0f) / 2.0f;
			if (RipplesOn == true) ypos = (480.0f - LogoScaleYT * 256.0f) / 2.0f - LogoScaleYT * 15.5f;
			else ypos = (480.0f - LogoScaleYT * 256.0f) / 2.0f - LogoScaleYT;
			if (LogoScaleXT > 1.1f) DrawBG(4, xpos, ypos, 1.2f, LogoScaleXT, LogoScaleYT);
		}
		njTextureShadingMode(2);
		//Draw black box if transitioning
		if (transitionmode == 3 || transitionmode == 1) DrawRect_Queue(0, 0, HorizontalResolution, VerticalResolution, 1.2f, BlackFadeout.color, QueuedModelFlagsB_SomeTextureThing);
	}
}

void DrawPressStart()
{
	if (transitionmode != 1)
	{
		njTextureShadingMode(1);
		float yoff = 112.0f;
		if (float(HorizontalResolution) / float(VerticalResolution) < 1.5f) yoff = 112.0f; //4:3
		if (float(HorizontalResolution) / float(VerticalResolution) > 1.6f) yoff = 82.0f; //16:9
		if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) yoff = 120.0f; //16:10
		if (float(HorizontalResolution) / float(VerticalResolution) <= 1.3f) yoff = 134; //5:4
		if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) yoff = 92.0f; //3:2
		if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f) yoff = 48.0f; //Ultra wide
		if (!(HorizontalResolution == 640 && VerticalResolution == 480) && startdrawn != startframe)
		{
			if (startframe > 128) startframe = 0;
			DrawBG(8, HorizontalStretch*(320.0f - 128.0f + PressStartOffsetX), VerticalResolution - HorizontalStretch * (yoff - PressStartOffsetY), 1.1f, HorizontalStretch * 0.5f, VerticalStretch * rewritestretch);
		}
		if (HorizontalResolution == 640 && VerticalResolution == 480 && startdrawn != startframe)
		{
			if (startframe > 128) startframe = 0;
			DrawBG(8, (320.0f - 128.0f), (480 - 114), 1.1f, 0.5f, 0.5f);
		}
		startdrawn = startframe;
		njTextureShadingMode(2);
	}
}

void DrawShadow_Hook(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	njTextureShadingMode(1);
	DrawBG(texnum, x, y, z, scaleX, scaleY);
	njTextureShadingMode(2);
}

void DrawTexture_Hook(int that_cant_be_right, float x, float y, float z)
{
	njTextureShadingMode(1);
	DisplayScreenTexture(that_cant_be_right, x, y, z);
	njTextureShadingMode(2);
}

void DisplayScreenTexture_AlwaysTop(int that_cant_be_right, float x, float y, float z)
{
	Direct3D_SetZFunc(7u);
	Direct3D_EnableZWrite(0);
	DisplayScreenTexture(that_cant_be_right, x, y, z);
	Direct3D_EnableZWrite(1);
	Direct3D_SetZFunc(3u);
}

void ScreenFadeFix(float left, float top, float right, float bottom, float depth, int color, QueuedModelFlagsB queueflags)
{
	DrawRect_Queue(-50.0f, -50.0f, HorizontalResolution + 50.0f, VerticalResolution + 50.0f, 32048.0f, color, QueuedModelFlagsB_EnableZWrite);
}

void RenderShittyTextures(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	DrawBG(texnum, x, y, z, scaleX, scaleY);
	DoColorGradientThingMaybe(0xFF0016FF, 0xFF002EFF, 0xFF0016FF, 0xFF002EFF);
	DisplayScreenTexture(BSInt, BSsX, BSsY, BSsZ);
	DoColorGradientThingMaybe(0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu);
	DisplayScreenTexture(PSInt, PSsX, PSsY, PSsZ);
}

void RetrieveBottomThingStuff(int texnum, float x, float y, float z)
{
	BSInt = texnum;
	BSsX = x;
	BSsY = y;
	BSsZ = z;
}

void RetrievePlayerSelectStuff(int that_cant_be_right, float x, float y, float z)
{
	PSInt = that_cant_be_right;
	PSsX = x;
	PSsY = y;
	PSsZ = z;
}

void FileIcon_Hook(int that_cant_be_right, float Texture_X, float Texture_Y, float Texture_Z)
{
	float Arrow1_X;
	float Arrow1_Y;
	float Arrow2_X;
	float Arrow2_Y;
	float Arrow1Center_X = 251.0f;
	float Arrow1Center_Y = 268.0f;
	float Arrow2Center_X = 218.0f;
	float Arrow2Center_Y = 322.0f;
	float Arrow1Scale = 0.0f + Options_ArrowScale;
	float Arrow2Scale = 0.5f - Options_ArrowScale;
	Arrow1_X = (Arrow1Center_X - 64 * Arrow1Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow1_Y = (Arrow1Center_Y - 64 * Arrow1Scale) - 240.0f + VerticalStretch * 240.0f;
	Arrow2_X = (Arrow2Center_X - 64 * Arrow2Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow2_Y = (Arrow2Center_Y - 64 * Arrow2Scale) - 240.0f + VerticalStretch * 240.0f;
	njTextureShadingMode(1);
	DisplayScreenTexture(44, Texture_X, Texture_Y, Texture_Z);
	DrawBG(45, Arrow1_X, Arrow1_Y, Texture_Z, Arrow1Scale, Arrow1Scale);
	DrawBG(46, Arrow2_X, Arrow2_Y, Texture_Z, Arrow2Scale, Arrow2Scale);
	njTextureShadingMode(2);
}

void LoadTitleScreenHook(int a1)
{
	LoadPVM("AVA_BACK", &ava_back_TEXLIST);
	sub_510390(a1);
}

void FileSelectAVABACKHook(float depth)
{
	SetVtxColorA(0xFFFFFFFF);
	DrawTiledBG_AVA_BACK(depth);
}

void VtxColorHook(Uint32 color)
{
	if (disablevtxcolor == true) SetVtxColorA(0xFFFFFFFF);
	else SetVtxColorA(color);
}

void VtxColorHook_Options(Uint32 color)
{
	disablevtxcolor = false;
	SetVtxColorA(color);
}

void DrawBG_CreditsLogo(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	NJS_COLOR vtxcolor;
	int vtx;
	vtxcolor.color = 0xFFFFFFFF;
	if (y < 0.0f)
	{
		vtx = 255 + (int)(y*4.0f);
		if (vtx <= 0) vtxcolor.argb.a = 0;
		else vtxcolor.argb.a = vtx;
	}
	SetVtxColorB(vtxcolor.color);
	Direct3D_SetZFunc(7u);
	Direct3D_EnableZWrite(0);
	DrawBG(texnum, x, y, z, scaleX, scaleX);
	Direct3D_EnableZWrite(1);
	Direct3D_SetZFunc(3u);
}

void __cdecl PauseMenu_ActuallyDrawTheThings_Flip(int n, NJS_POINT2 *pos, NJS_POINT2 *scale, int colorize, int flipmode)
{
	NJD_SPRITE spriteflags = NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR;
	float pri; // [esp+0h] [ebp-24h]
	NJS_SPRITE _sp; // [esp+4h] [ebp-20h]
	if (flipmode == 1) spriteflags |= NJD_SPRITE_HFLIP;
	if (flipmode == 2) spriteflags |= NJD_SPRITE_VFLIP;
	if (flipmode == 3) spriteflags |= NJD_SPRITE_VFLIP | NJD_SPRITE_HFLIP;
	_sp.tlist = &PauseMenu_TEXLIST;
	_sp.p.x = pos->x;
	_sp.p.y = pos->y;
	_sp.p.z = -1.0001;
	_sp.sx = scale->x;
	_sp.sy = scale->y;
	pri = -1.0001;
	if (-1.0001 >= -3.0 && -1.0001 < 12048.0)
	{
		pri = -1.0001 + 22048.0;
	}
	if (colorize == 0)
	{
		_sp.tanim = &PauseMenu_TEXANIM;
		SetMaterialAndSpriteColor_Float(0.9f, 1.0f, 1.0f, 1.0f);
		njDrawSprite2D_Queue(&_sp, n, pri, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
	if (colorize == 1)
	{
		_sp.tanim = &PauseMenu_TEXANIM;
		SetMaterialAndSpriteColor_Float(0.9f, 0.0f, 0.4588f, 0.7803f);
		njDrawSprite2D_Queue(&_sp, n, pri, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
	if (colorize == 2)
	{
		_sp.tanim = &PauseMenu_TEXANIM;
		SetMaterialAndSpriteColor_Float(0.9f, 0.0f, 0, 0.3058f);
		njDrawSprite2D_Queue(&_sp, n, pri, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
	if (colorize == 3)
	{
		_sp.tanim = &PauseBar_Top;
		SetMaterialAndSpriteColor_Float(0.9f, 1.0f, 1.0f, 1.0f);
		njDrawSprite2D_Queue(&_sp, 0, pri, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
	if (colorize == 4)
	{
		_sp.tanim = &PauseBar_Bottom;
		SetMaterialAndSpriteColor_Float(0.9f, 1.0f, 1.0f, 1.0f);
		njDrawSprite2D_Queue(&_sp, 0, pri, spriteflags, QueuedModelFlagsB_SomeTextureThing);
	}
}

void DrawPauseBox_DC(int n, NJS_POINT2 *pos, NJS_POINT2 *scale)
{
	NJS_POINT2 tempps;
	NJS_POINT2 newpos;
	NJS_POINT2 scaleorig;
	scaleorig.x = scale->x;
	scaleorig.y = scale->y - 1.5f;
	newpos.x = pos->x;
	newpos.y = pos->y + 12.0f;
	NJS_POINT2 scale2;
	//Main
	PauseMenu_ActuallyDrawTheThings_Flip(8, &newpos, &scaleorig, 0, 0);
	//Top left to right
	tempps.x = newpos.x;
	tempps.y = newpos.y - 16;
	scale2.x = scale->x;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 3, 0);
	//Top left
	tempps.x = newpos.x - 16;
	tempps.y = newpos.y - 16;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 1, 0);
	//Top right
	tempps.x = newpos.x + scale->x*16.0f;
	tempps.y = newpos.y - 16;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 1, 1);
	//Bottom left to right
	tempps.x = newpos.x;
	tempps.y = newpos.y + scaleorig.y * 16;
	scale2.x = scale->x;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 4, 0);
	//Top to bottom left
	tempps.x = newpos.x - 16;
	tempps.y = newpos.y;
	scale2.x = 1.0f;
	scale2.y = scaleorig.y;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 0, 0);
	//Top to bottom right
	tempps.x = newpos.x + scale->x*16.0f;
	tempps.y = newpos.y;
	scale2.x = 1.0f;
	scale2.y = scaleorig.y;
	PauseMenu_ActuallyDrawTheThings_Flip(8, &tempps, &scale2, 0, 0);
	//Bottom left
	tempps.x = newpos.x - 16;
	tempps.y = newpos.y + scaleorig.y * 16.0f;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 2, 2);
	//Bottom right
	tempps.x = newpos.x + scale->x*16.0f;
	tempps.y = newpos.y + scaleorig.y * 16.0f;
	scale2.x = 1.0f;
	scale2.y = 1.0f;
	PauseMenu_ActuallyDrawTheThings_Flip(7, &tempps, &scale2, 2, 3);
}

void DrawSprite_Hook(NJS_SPRITE *sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags)
{
	njTextureShadingMode(1);
	njDrawSprite2D_Queue(sp, n, pri, attr, queue_flags);
	njTextureShadingMode(2);
}

void Branding_Init(const char *path, const HelperFunctions &helperFunctions)
{
	//Credits
	WriteData((float*)0x006415DA, 1.5f); //EngBG X scale
	WriteData((float*)0x006415DF, 1.5f); //EngBG Y scale
	WriteCall((void*)0x00640ACC, DrawBG_CreditsLogo);
	MainCredits.Count = 449;
	MainCredits.Entries = (CreditsEntry*)&SA1Credits;
	char pathbuf[MAX_PATH];
	f480_Fixed = 1.0f + VerticalResolution;
	f640_Fixed = 1.0f + HorizontalResolution;
	//Set PVM names
	ReplacePVM("GG_TEXLIST_US");
	ReplacePVM("ENDBG_LAST_AMY");
	ReplacePVM("ENDBG_LAST_BIG");
	ReplacePVM("ENDBG_LAST_E102");
	ReplacePVM("ENDBG_LAST_KNUCKLES");
	ReplacePVM("ENDBG_LAST_SONIC");
	ReplacePVM("ENDBG_LAST_SUPERSONIC");
	ReplacePVM("ENDBG_LAST_TAILS");
	ReplacePVM("TUTOBG_AMY");
	ReplacePVM("TUTOBG_BIG");
	ReplacePVM("TUTOBG_E102");
	ReplacePVM("TUTOBG_KNUCKLES");
	ReplacePVM("TUTOBG_SONIC");
	ReplacePVM("TUTOBG_TAILS");
	ReplacePVM("AVA_FSCMN_E");
	if (DLLLoaded_HDGUI == false)
	{
		ReplacePVM("ENDBG_AMY_0");
		ReplacePVM("ENDBG_AMY_1");
		ReplacePVM("ENDBG_AMY_2");
		ReplacePVM("ENDBG_BIG_0");
		ReplacePVM("ENDBG_BIG_1");
		ReplacePVM("ENDBG_BIG_2");
		ReplacePVM("ENDBG_E102_0");
		ReplacePVM("ENDBG_E102_1");
		ReplacePVM("ENDBG_E102_2");
		ReplacePVM("ENDBG_KNUCKLES_0");
		ReplacePVM("ENDBG_KNUCKLES_1");
		ReplacePVM("ENDBG_KNUCKLES_2");
		ReplacePVM("ENDBG_SONIC_0");
		ReplacePVM("ENDBG_SONIC_1");
		ReplacePVM("ENDBG_SONIC_2");
		ReplacePVM("ENDBG_SUPERSONIC_0");
		ReplacePVM("ENDBG_SUPERSONIC_1");
		ReplacePVM("ENDBG_SUPERSONIC_2");
		ReplacePVM("ENDBG_SUPERSONIC_3");
		ReplacePVM("ENDBG_TAILS_0");
		ReplacePVM("ENDBG_TAILS_1");
		ReplacePVM("ENDBG_TAILS_2");
		ReplacePVM("ENDBG_LOGO");
		ReplacePVM("AVA_NEW16NO");
		ReplacePVM("CON_REGULAR");
		ReplacePVM("CON_REGULAR_E");
		ReplacePVM("PRESSSTART");
		ReplacePVM("TUTOMSG_AMY_E");
		ReplacePVM("TUTOMSG_BIG_E");
		ReplacePVM("TUTOMSG_E102_E");
		ReplacePVM("TUTOMSG_KNUCKLES_E");
		ReplacePVM("TUTOMSG_SONIC_E");
		ReplacePVM("TUTOMSG_TAILS_E");
		ReplacePVM("AVA_BACK");
		ReplacePVM("AVA_CHSEL_E");
		ReplacePVM("AVA_CSR");
		ReplacePVM("AVA_DLG_E");
		ReplacePVM("AVA_EMBLEMVIEW_E");
		ReplacePVM("AVA_FILESEL_E");
		ReplacePVM("AVA_FSDLG_E");
		ReplacePVM("AVA_OPTION_E");
		ReplacePVM("AVA_SAN");
		ReplacePVM("ADV_WINDOW");
		ReplacePVM("AVA_SNDTEST_E");
		ReplacePVM("AVA_SQUARE");
		ReplacePVM("AVA_STNAM_E");
		ReplacePVM("AVA_SUUJI");
		ReplacePVM("AVA_TITLE_E");
		ReplacePVM("AVA_TRIALACTSEL_E");
		ReplacePVM("GAMEOVER_E");
		ReplacePVM("B_CHNAM_E");
		ReplacePVM("M_CHNAM");
		ReplacePVM("PRESSSTART");
		ReplacePVM("SEGALOGO_E");
		ReplacePVM("SMRYBG_AMY");
		ReplacePVM("SMRYBG_BIG");
		ReplacePVM("SMRYBG_E102");
		ReplacePVM("SMRYBG_KNUCKLES");
		ReplacePVM("SMRYBG_SONIC");
		ReplacePVM("SMRYBG_SUPERSONIC");
		ReplacePVM("SMRYBG_TAILS");
		ReplacePVM("TUTO_CMN_E");
		ReplacePVR("ABC_TXT");
		ReplacePVR("A_STAGE01_E");
		ReplacePVR("A_STAGE02_E");
		ReplacePVR("A_STAGE03_E");
		ReplacePVR("B32ASCII");
		ReplacePVR("B_STAGE01_E");
		ReplacePVR("B_STAGE02_E");
		ReplacePVR("B_STAGE03_E");
		ReplacePVR("B_STAGE04_E");
		ReplacePVR("E_STAGE01_E");
		ReplacePVR("E_STAGE02_E");
		ReplacePVR("E_STAGE03_E");
		ReplacePVR("E_STAGE04_E");
		ReplacePVR("E_STAGE05_E");
		ReplacePVR("K_STAGE01_E");
		ReplacePVR("K_STAGE02_E");
		ReplacePVR("K_STAGE03_E");
		ReplacePVR("K_STAGE04_E");
		ReplacePVR("K_STAGE05_E");
		ReplacePVR("MISSION_A_BALRING_E");
		ReplacePVR("MISSION_A_BALZERO_E");
		ReplacePVR("MISSION_A_FIN_E");
		ReplacePVR("MISSION_A_HOT_E");
		ReplacePVR("MISSION_A_TWIN_E");
		ReplacePVR("MISSION_BIG_1K_E");
		ReplacePVR("MISSION_BIG_2K_E");
		ReplacePVR("MISSION_BIG_FROG_E");
		ReplacePVR("MISSION_G_103RING_E");
		ReplacePVR("MISSION_G_103_E");
		ReplacePVR("MISSION_G_104RING_E");
		ReplacePVR("MISSION_G_104_E");
		ReplacePVR("MISSION_G_105RING_E");
		ReplacePVR("MISSION_G_105_E");
		ReplacePVR("MISSION_G_EME_E");
		ReplacePVR("MISSION_G_FIN_E");
		ReplacePVR("MISSION_G_FROGRING_E");
		ReplacePVR("MISSION_G_FROG_E");
		ReplacePVR("MISSION_G_HOT_E");
		ReplacePVR("MISSION_G_RED_E");
		ReplacePVR("MISSION_G_SONICDRING_E");
		ReplacePVR("MISSION_G_SONICD_E");
		ReplacePVR("MISSION_G_WIN_E");
		ReplacePVR("MISSION_K_1MIN_E");
		ReplacePVR("MISSION_K_2MIN_E");
		ReplacePVR("MISSION_K_3EME_E");
		ReplacePVR("MISSION_K_NOHINT_E");
		ReplacePVR("MISSION_S_BOX25MIN_E");
		ReplacePVR("MISSION_S_BOX2MIN_E");
		ReplacePVR("MISSION_S_BOX3MIN_E");
		ReplacePVR("MISSION_S_BOX45MIN_E");
		ReplacePVR("MISSION_S_BOX4MIN_E");
		ReplacePVR("MISSION_S_BOX5MIN_E");
		ReplacePVR("MISSION_S_BOX_E");
		ReplacePVR("MISSION_S_EGGC_E");
		ReplacePVR("MISSION_S_EMECASINO_E");
		ReplacePVR("MISSION_S_EMESNOW_E");
		ReplacePVR("MISSION_S_EMEWIND_E");
		ReplacePVR("MISSION_S_FEGG_E");
		ReplacePVR("MISSION_S_ISEKI_E");
		ReplacePVR("MISSION_S_RINGBOX_E");
		ReplacePVR("MISSION_S_TAILS_E");
		ReplacePVR("MISSION_T_BOX_E");
		ReplacePVR("MISSION_T_EMECASINO_E");
		ReplacePVR("MISSION_T_EMESNOW_E");
		ReplacePVR("MISSION_T_EMEWIND_E");
		ReplacePVR("MISSION_T_FASTEGG_E");
		ReplacePVR("MISSION_T_FASTSONIC_E");
		ReplacePVR("MISSION_T_MISS_E");
		ReplacePVR("MISSION_T_RINGEGG_E");
		ReplacePVR("MISSION_T_RINGSONIC_E");
		ReplacePVR("M_STAGE01_E");
		ReplacePVR("M_STAGE02_E");
		ReplacePVR("M_STAGE03_E");
		ReplacePVR("M_STAGE04_E");
		ReplacePVR("M_STAGE05_E");
		ReplacePVR("SKY_H_BAL01");
		ReplacePVR("SONIC_EMBLM01");
		ReplacePVR("SONIC_EMBLM03");
		ReplacePVR("SONIC_EMBLM04");
		ReplacePVR("SONIC_EMBLM05");
		ReplacePVR("SSTX_BODY");
		ReplacePVR("STAFFROLL_TXT");
		ReplacePVR("STG_S_LOCKMK");
		ReplacePVR("ST_016S_HPBAR");
		ReplacePVR("ST_064S_LOCKA");
		ReplacePVR("ST_064S_LOCKB");
		ReplacePVR("ST_064S_LOCKC");
		ReplacePVR("ST_064S_SCORE");
		ReplacePVR("ST_128S_HPGEJI");
		ReplacePVR("ST_STAGE01_E");
		ReplacePVR("ST_STAGE02_E");
		ReplacePVR("ST_STAGE03_E");
		ReplacePVR("ST_STAGE04_E");
		ReplacePVR("ST_STAGE05_E");
		ReplacePVR("S_STAGE01_E");
		ReplacePVR("S_STAGE02_E");
		ReplacePVR("S_STAGE03_E");
		ReplacePVR("S_STAGE04_E");
		ReplacePVR("S_STAGE05_E");
		ReplacePVR("S_STAGE06_E");
		ReplacePVR("S_STAGE07_E");
		ReplacePVR("S_STAGE08_E");
		ReplacePVR("S_STAGE09_E");
		ReplacePVR("S_STAGE10_E");
		ReplacePVR("T_EGGCARRIER_E");
		ReplacePVR("T_MISTICRUIN_E");
		ReplacePVR("T_STATIONSQUARE_E");
	}
	//File icon
	if (DLLLoaded_HDGUI == false) WriteCall((void*)0x005092A1, DrawTexture_Hook); 
	else WriteCall((void*)0x005092A1, FileIcon_Hook);
	//Various fixes already included in HD GUI
	if (DLLLoaded_HDGUI == false)
	{
		//Screen fade fixes
		WriteData((float**)0x00433385, &f480_Fixed); //Screen fade resolution
		WriteData((float**)0x004333A6, &f640_Fixed); //Screen fade resolution
		WriteData((float*)0x004333A0, -1.0f); //Screen fade for tutorials
		WriteData((float*)0x004333AE, -1.0f); //Screen fade for tutorials
		WriteCall((void*)0x0042BF52, ScreenFadeFix);
		WriteData<5>((char*)0x0040BF27, 0x90); //Disable "Now saving..."
		WriteData<5>((void*)0x0040BE0D, 0x90); //Disable "Now loading..."
		WriteData<5>((void*)0x00503438, 0x90); //Disable "Now loading..."
		WriteData<5>((void*)0x0050346D, 0x90); //Disable "Now loading..."
		//Character select screen fixes
		WriteCall((void*)0x00511AD0, RetrievePlayerSelectStuff); //Player select text in character select screen
		WriteCall((void*)0x00511C76, RetrieveBottomThingStuff); //Bottom thing in character select screen
		WriteCall((void*)0x00511B3B, RenderShittyTextures); //Render stuff that refuses to render properly otherwise
		WriteCall((void*)0x00511A8B, DisplayScreenTexture_AlwaysTop); //Move the "Select your character" text to top
		WriteData<5>((void*)0x00511C18, 0x90); //Disable ZFunc stuff to prevent character model overlap issues
		//Shadow blending fixes
		WriteCall((void*)0x00457F2F, DrawSprite_Hook);
		WriteCall((void*)0x0050B584, DrawShadow_Hook);
		WriteCall((void*)0x00431D37, DrawShadow_Hook);
		WriteCall((void*)0x00506EFF, DrawShadow_Hook);
		WriteCall((void*)0x0050D8B3, DrawShadow_Hook);
		WriteCall((void*)0x0050B61A, DrawShadow_Hook); //Main menu (trial) shadow
		WriteCall((void*)0x00508FFD, DrawTexture_Hook); //Sound test icon
		WriteCall((void*)0x00509130, DrawTexture_Hook); //Sonic icon background
		WriteCall((void*)0x00509191, DrawTexture_Hook); //Sonic icon
		WriteCall((void*)0x00509439, DrawTexture_Hook); //Languages icon
		WriteCall((void*)0x0050952F, DrawTexture_Hook); //Rumble icon
		WriteCall((void*)0x0050782A, DrawTexture_Hook); //AVA_SAN triangle shadow
	}
	//Set up normal/widescreen setting
	std::string SectionName;
	if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f) SectionName = "SA1 Logo Widescreen"; else SectionName = "SA1 Logo Normal";
	if (float(HorizontalResolution) / float(VerticalResolution) >= 2.2f) SectionName = "SA1 Logo Ultrawide";
	//Load defaults
	const IniFile *defaults = new IniFile(std::string(path) + "\\default.ini");
	RipplesOn = defaults->getBool("Branding", "RippleEffect", true);
	EnableTransition = defaults->getBool("Branding", "EnableTransition", true);
	DisableSA1TitleScreen = defaults->getBool("Branding", "DisableSA1TitleScreen", false);
	DrawOverlay = defaults->getBool("Branding", "DrawOverlay", true);
	RemoveCream = defaults->getBool("Branding", "RemoveCream", false);
	DisableFade = defaults->getBool("Branding", "DisableFade", true);
	TextOffsetX = defaults->getInt(SectionName, "CopyrightOffsetX", 0);
	TextOffsetY = defaults->getInt(SectionName, "CopyrightOffsetY", 0);
	PressStartOffsetX = defaults->getInt(SectionName, "PressStartOffsetX", 0);
	PressStartOffsetY = defaults->getInt(SectionName, "PressStartOffsetY", 0);
	SonicTeamOffsetX = defaults->getInt(SectionName, "SonicTeamOffsetX", 0);
	SonicTeamOffsetY = defaults->getInt(SectionName, "SonicTeamOffsetY", 0);
	BackgroundOffsetX = defaults->getInt(SectionName, "BackgroundOffsetX", -16);
	BackgroundOffsetY = defaults->getInt(SectionName, "BackgroundOffsetY", 0);
	BackgroundScaleX = defaults->getFloat(SectionName, "BackgroundScaleX", 1.0f);
	BackgroundScaleY = defaults->getFloat(SectionName, "BackgroundScaleY", 1.0f);
	LogoOffsetX = defaults->getInt(SectionName, "LogoOffsetX", 64);
	LogoOffsetY = defaults->getInt(SectionName, "LogoOffsetY", 220);
	LogoScaleX = defaults->getFloat(SectionName, "LogoScaleX", 1.0f);
	LogoScaleY = defaults->getFloat(SectionName, "LogoScaleY", 1.0f);
	LogoScaleXT = LogoScaleX;
	LogoScaleYT = LogoScaleY;
	delete defaults;
	//Set up settings
	const IniFile *settings = new IniFile(std::string(path) + "\\config.ini");
	if (settings->hasKeyNonEmpty("Branding", "RippleEffect")) RipplesOn = settings->getBool("Branding", "RippleEffect", true);
	if (settings->hasKeyNonEmpty("Branding", "EnableTransition")) EnableTransition = settings->getBool("Branding", "EnableTransition", true);
	if (settings->hasKeyNonEmpty("Branding", "DisableSA1TitleScreen")) DisableSA1TitleScreen = settings->getBool("Branding", "DisableSA1TitleScreen", false);
	if (settings->hasKeyNonEmpty("Branding", "DrawOverlay")) DrawOverlay = settings->getBool("Branding", "DrawOverlay", true);
	if (settings->hasKeyNonEmpty("Branding", "RemoveCream")) RemoveCream = settings->getBool("Branding", "RemoveCream", false);
	if (settings->hasKeyNonEmpty("Branding", "DisableFade")) DisableFade = settings->getBool("Branding", "DisableFade", true);
	if (settings->hasKeyNonEmpty(SectionName, "CopyrightOffsetX")) TextOffsetX = settings->getInt(SectionName, "CopyrightOffsetX", 0);
	if (settings->hasKeyNonEmpty(SectionName, "CopyrightOffsetY")) TextOffsetY = settings->getInt(SectionName, "CopyrightOffsetY", 0);
	if (settings->hasKeyNonEmpty(SectionName, "PressStartOffsetX")) PressStartOffsetX = settings->getInt(SectionName, "PressStartOffsetX", 0);
	if (settings->hasKeyNonEmpty(SectionName, "PressStartOffsetY")) PressStartOffsetY = settings->getInt(SectionName, "PressStartOffsetY", 0);
	if (settings->hasKeyNonEmpty(SectionName, "SonicTeamOffsetX")) SonicTeamOffsetX = settings->getInt(SectionName, "SonicTeamOffsetX", 0);
	if (settings->hasKeyNonEmpty(SectionName, "SonicTeamOffsetY")) SonicTeamOffsetY = settings->getInt(SectionName, "SonicTeamOffsetY", 0);
	if (settings->hasKeyNonEmpty(SectionName, "BackgroundOffsetX")) BackgroundOffsetX = settings->getInt(SectionName, "BackgroundOffsetX", -16);
	if (settings->hasKeyNonEmpty(SectionName, "BackgroundOffsetY")) BackgroundOffsetY = settings->getInt(SectionName, "BackgroundOffsetY", 0);
	if (settings->hasKeyNonEmpty(SectionName, "BackgroundScaleX")) BackgroundScaleX = settings->getFloat(SectionName, "BackgroundScaleX", 1.0f);
	if (settings->hasKeyNonEmpty(SectionName, "BackgroundScaleY")) BackgroundScaleY = settings->getFloat(SectionName, "BackgroundScaleY", 1.0f);
	if (settings->hasKeyNonEmpty(SectionName, "LogoOffsetX")) LogoOffsetX = settings->getInt(SectionName, "LogoOffsetX", 64);
	if (settings->hasKeyNonEmpty(SectionName, "LogoOffsetY")) LogoOffsetY = settings->getInt(SectionName, "LogoOffsetY", 220);
	if (settings->hasKeyNonEmpty(SectionName, "LogoScaleX")) LogoScaleX = settings->getFloat(SectionName, "LogoScaleX", 1.0f);
	if (settings->hasKeyNonEmpty(SectionName, "LogoScaleY")) LogoScaleY = settings->getFloat(SectionName, "LogoScaleY", 1.0f);
	LogoScaleXT = LogoScaleX;
	LogoScaleYT = LogoScaleY;
	delete settings;
	//Main code
	//Kill Cream
	if (RemoveCream == true) WriteData<1>((void*)0x6353A0, 0xC3u);
	//Title screen stuff
	if (DisableSA1TitleScreen == false)
	{
		//640x480 stuff
		WriteCall((void*)0x0050E4D5, DrawLogo_640);
		WriteData<5>((void*)0x0050E547, 0x90);
		WriteData<5>((void*)0x0050E58E, 0x90);
		WriteData<5>((void*)0x0050E659, 0x90);
		WriteData<5>((void*)0x0050E6F4, 0x90);
		WriteData<5>((void*)0x0050E754, 0x90);
		WriteData<5>((void*)0x0050E7B4, 0x90);
		WriteData<5>((void*)0x0050E814, 0x90);
		WriteData<5>((void*)0x0050EAB1, 0x90);
		WriteData<5>((void*)0x0050EB04, 0x90);
		WriteData<5>((void*)0x0050EB57, 0x90);
		WriteData<5>((void*)0x0050F1C5, 0x90);
		WriteData<5>((void*)0x0050F570, 0x90);
		WriteData<5>((void*)0x0050F5C1, 0x90);
		WriteData<5>((void*)0x0050F612, 0x90);
		WriteData<5>((void*)0x0050FF59, 0x90);
		//Kill titlescreen fade
		if (DisableFade == true) WriteData<5>((char*)0x0050E49B, 0x90);
		ResizeTextureList((NJS_TEXLIST*)0x010D7C80, 10);
		WriteJump((void*)0x50BA90, DrawAVA_TITLE_BACK_E_DC);
		//PVMs
		//Japanese
		GUITextures_Japanese[17].Name = "AVA_GTITLE0_S";
		GUITextures_Japanese[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_Japanese[29].Name = "AVA_TITLE_CMN_SMALLS";
		//English
		GUITextures_English[17].Name = "AVA_GTITLE0_ES";
		GUITextures_English[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_English[29].Name = "AVA_TITLE_CMN_SMALLS";
		//French
		GUITextures_French[17].Name = "AVA_GTITLE0_ES";
		GUITextures_French[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_French[29].Name = "AVA_TITLE_CMN_SMALLS";
		//Spanish
		GUITextures_Spanish[17].Name = "AVA_GTITLE0_ES";
		GUITextures_Spanish[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_Spanish[29].Name = "AVA_TITLE_CMN_SMALLS";
		//German
		GUITextures_German[17].Name = "AVA_GTITLE0_ES";
		GUITextures_German[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_German[29].Name = "AVA_TITLE_CMN_SMALLS";
		if (RipplesOn == true)
		{
			GUITextures_Japanese[18].Name = "AVA_TITLE_CMNX";
			GUITextures_English[18].Name = "AVA_TITLE_CMNX";
			GUITextures_French[18].Name = "AVA_TITLE_CMNX";
			GUITextures_Spanish[18].Name = "AVA_TITLE_CMNX";
			GUITextures_German[18].Name = "AVA_TITLE_CMNX";
		}
		else
		{
			GUITextures_Japanese[18].Name = "AVA_TITLE_CMNS";
			GUITextures_English[18].Name = "AVA_TITLE_CMNS";
			GUITextures_French[18].Name = "AVA_TITLE_CMNS";
			GUITextures_Spanish[18].Name = "AVA_TITLE_CMNS";
			GUITextures_German[18].Name = "AVA_TITLE_CMNS";
		}
		//Logo
		if (float(HorizontalResolution) / float(VerticalResolution) <= 1.3f) rewritestretch = 0.48f; //5:4
		if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f) rewritestretch = 0.667f; //16:9
		if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) rewritestretch = 0.55f; //3:2
		if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) rewritestretch = 0.6f; //16:10
		if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f)  rewritestretch = 0.9f; //Ultra wide
		if (RipplesOn == true) ResizeTextureList((NJS_TEXLIST*)0x010D7C58, 192);
		WriteData<5>((char*)0x0050E6F4, 0x90);
		WriteData<5>((char*)0x0050E8AF, 0x90);
		WriteCall((void*)0x0050E4B1, DrawLogo);
		WriteCall((void*)0x0051002B, DrawPressStart);
		//Kill other BG
		WriteData<5>((char*)0x0050E754, 0x90);
		WriteData<5>((char*)0x0050E7B4, 0x90);
		WriteData<5>((char*)0x0050E814, 0x90);
		WriteData<5>((char*)0x0050EA11, 0x90);
		WriteData<5>((char*)0x0050E99A, 0x90);
		WriteData<5>((char*)0x0050E929, 0x90);
		//Kill Sonic
		WriteData<5>((char*)0x0050EC03, 0x90);
		WriteData<5>((char*)0x0050EC6D, 0x90);
		WriteData<5>((char*)0x0050ECD7, 0x90);
		WriteData<5>((char*)0x0050ED4F, 0x90);
		WriteData<5>((char*)0x0050EDC7, 0x90);
		WriteData<5>((char*)0x0050EE31, 0x90);
		WriteData<5>((char*)0x0050EEA9, 0x90);
		WriteData<5>((char*)0x0050EF21, 0x90);
		WriteData<5>((char*)0x0050EF99, 0x90);
		WriteData<5>((char*)0x0050F003, 0x90);
		WriteData<5>((char*)0x0050F07B, 0x90);
		WriteData<5>((char*)0x0050F0F3, 0x90);
		WriteData<5>((char*)0x0050F6BA, 0x90);
		WriteData<5>((char*)0x0050F722, 0x90);
		WriteData<5>((char*)0x0050F78A, 0x90);
		WriteData<5>((char*)0x0050F800, 0x90);
		WriteData<5>((char*)0x0050F876, 0x90);
		WriteData<5>((char*)0x0050F8DE, 0x90);
		WriteData<5>((char*)0x0050F954, 0x90);
		WriteData<5>((char*)0x0050F9CA, 0x90);
		WriteData<5>((char*)0x0050FA40, 0x90);
		WriteData<5>((char*)0x0050FAA8, 0x90);
		WriteData<5>((char*)0x0050FB1E, 0x90);
		WriteData<5>((char*)0x0050FB94, 0x90);
		WriteData<5>((char*)0x0050F16B, 0x90);
		WriteData<5>((char*)0x0050FC0A, 0x90);
		//Kill Logo 1
		WriteData<5>((char*)0x0050FCAB, 0x90);
		WriteData<5>((char*)0x0050FD07, 0x90);
		WriteData<5>((char*)0x0050FD63, 0x90);
		WriteData<5>((char*)0x0050FDBF, 0x90);
		WriteData<5>((char*)0x0050FE1B, 0x90);
		WriteData<5>((char*)0x0050FE85, 0x90);
		WriteData<5>((char*)0x0050FEEF, 0x90);
		//Kill Logo 2
		WriteData<5>((char*)0x0050F1C5, 0x90);
		WriteData<5>((char*)0x0050F223, 0x90);
		WriteData<5>((char*)0x0050F281, 0x90);
		WriteData<5>((char*)0x0050F2DF, 0x90);
		WriteData<5>((char*)0x0050F33D, 0x90);
		WriteData<5>((char*)0x0050F3A9, 0x90);
		WriteData<5>((char*)0x0050F415, 0x90);
		//Kill PressEnter
		WriteData<5>((char*)0x00510085, 0x90);
		WriteData<5>((char*)0x005100EB, 0x90);
		//Various transition stuff
		BlackFadeout.color = 0x00000000;
		TitleBGTransparency.argb.r = 255;
		TitleBGTransparency.argb.g = 255;
		TitleBGTransparency.argb.b = 255;
		if (EnableTransition == true)
		{
			WriteCall((void*)0x503DD8, PlayReturnSound_EnableTransition);
			WriteCall((void*)0x50E386, PlayStartSound_EnableTransition);
			WriteCall((void*)0x50557D, FileSelectAVABACKHook);
			WriteCall((void*)0x50558D, VtxColorHook);
			WriteCall((void*)0x509829, VtxColorHook_Options);
			WriteData((void**)0x010D7B60, (void*)LoadTitleScreenHook);
		}
	}
	//Pause box stuff
	WriteCall((void*)0x004585DA, DrawPauseBox_DC);
	WriteCall((void*)0x00459085, DrawPauseBox_DC);
	WriteCall((void*)0x00458DBB, DrawPauseBox_DC);
	WriteData((float*)0x00458125, 1.0f); //Selection box B
	WriteData((float*)0x0045812A, 0.7f); //Selection box G
	WriteData((float*)0x0045812F, 0.0f); //Selection box R
}
void Branding_OnFrame()
{
	if (GameMode != GameModes_Menu && transitionmode == 2)
	{
		transitionmode = 3;
	}
	if (GameMode == GameModes_Menu && DLLLoaded_HDGUI == true)
	{
		if (Options_ArrowScale > 0.5f) Options_ArrowScaleAmount = -0.02f;
		if (Options_ArrowScale < 0.0f) Options_ArrowScaleAmount = 0.02f;
		Options_ArrowScale = Options_ArrowScale + Options_ArrowScaleAmount;
	}
	if (DisableSA1TitleScreen == false && GameState == 21)
	{
		if (titleframe == titledrawn) titleframe++;
		if (logoframe == logodrawn) logoframe++;
		if (startframe == startdrawn) startframe++;
	}
}