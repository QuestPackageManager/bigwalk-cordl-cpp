#pragma once
// IWYU pragma private; include "GlobalNamespace/NjfbMymByPLVTYMvBdPCxViiaBEt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NjfbMymByPLVTYMvBdPCxViiaBEt)
// Forward declare root types
namespace GlobalNamespace {
struct NjfbMymByPLVTYMvBdPCxViiaBEt;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt, "", "NjfbMymByPLVTYMvBdPCxViiaBEt");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NjfbMymByPLVTYMvBdPCxViiaBEt
struct CORDL_TYPE NjfbMymByPLVTYMvBdPCxViiaBEt {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __NjfbMymByPLVTYMvBdPCxViiaBEt_Unwrapped
enum struct __NjfbMymByPLVTYMvBdPCxViiaBEt_Unwrapped : int16_t {
__E_Unknown = static_cast<int16_t>(0x0),
__E_Adpcm = static_cast<int16_t>(0x2),
__E_IeeeFloat = static_cast<int16_t>(0x3),
__E_Vselp = static_cast<int16_t>(0x4),
__E_IbmCvsd = static_cast<int16_t>(0x5),
__E_Alaw = static_cast<int16_t>(0x6),
__E_Mulaw = static_cast<int16_t>(0x7),
__E_Dts = static_cast<int16_t>(0x8),
__E_Drm = static_cast<int16_t>(0x9),
__E_Wmavoice9 = static_cast<int16_t>(0xa),
__E_Wmavoice10 = static_cast<int16_t>(0xb),
__E_OkiAdpcm = static_cast<int16_t>(0x10),
__E_DviAdpcm = static_cast<int16_t>(0x11),
__E_ImaAdpcm = static_cast<int16_t>(0x11),
__E_MediaspaceAdpcm = static_cast<int16_t>(0x12),
__E_SierraAdpcm = static_cast<int16_t>(0x13),
__E_G723Adpcm = static_cast<int16_t>(0x14),
__E_Digistd = static_cast<int16_t>(0x15),
__E_Digifix = static_cast<int16_t>(0x16),
__E_DialogicOkiAdpcm = static_cast<int16_t>(0x17),
__E_MediavisionAdpcm = static_cast<int16_t>(0x18),
__E_CuCodec = static_cast<int16_t>(0x19),
__E_HpDynVoice = static_cast<int16_t>(0x1a),
__E_YamahaAdpcm = static_cast<int16_t>(0x20),
__E_Sonarc = static_cast<int16_t>(0x21),
__E_DspgroupTruespeech = static_cast<int16_t>(0x22),
__E_Echosc1 = static_cast<int16_t>(0x23),
__E_AudiofileAf36 = static_cast<int16_t>(0x24),
__E_Aptx = static_cast<int16_t>(0x25),
__E_AudiofileAf10 = static_cast<int16_t>(0x26),
__E_Prosody1612 = static_cast<int16_t>(0x27),
__E_Lrc = static_cast<int16_t>(0x28),
__E_DolbyAc2 = static_cast<int16_t>(0x30),
__E_DefaultGsm610 = static_cast<int16_t>(0x31),
__E_Msnaudio = static_cast<int16_t>(0x32),
__E_AntexAdpcme = static_cast<int16_t>(0x33),
__E_ControlResVqlpc = static_cast<int16_t>(0x34),
__E_Digireal = static_cast<int16_t>(0x35),
__E_Digiadpcm = static_cast<int16_t>(0x36),
__E_ControlResCr10 = static_cast<int16_t>(0x37),
__E_NmsVbxadpcm = static_cast<int16_t>(0x38),
__E_CsImaadpcm = static_cast<int16_t>(0x39),
__E_Echosc3 = static_cast<int16_t>(0x3a),
__E_RockwellAdpcm = static_cast<int16_t>(0x3b),
__E_RockwellDigitalk = static_cast<int16_t>(0x3c),
__E_Xebec = static_cast<int16_t>(0x3d),
__E_G721Adpcm = static_cast<int16_t>(0x40),
__E_G728Celp = static_cast<int16_t>(0x41),
__E_Msg723 = static_cast<int16_t>(0x42),
__E_IntelG7231 = static_cast<int16_t>(0x43),
__E_IntelG729 = static_cast<int16_t>(0x44),
__E_SharpG726 = static_cast<int16_t>(0x45),
__E_Mpeg = static_cast<int16_t>(0x50),
__E_Rt24 = static_cast<int16_t>(0x52),
__E_Pac = static_cast<int16_t>(0x53),
__E_Mpeglayer3 = static_cast<int16_t>(0x55),
__E_LucentG723 = static_cast<int16_t>(0x59),
__E_Cirrus = static_cast<int16_t>(0x60),
__E_Espcm = static_cast<int16_t>(0x61),
__E_Voxware = static_cast<int16_t>(0x62),
__E_CanopusAtrac = static_cast<int16_t>(0x63),
__E_G726Adpcm = static_cast<int16_t>(0x64),
__E_G722Adpcm = static_cast<int16_t>(0x65),
__E_Dsat = static_cast<int16_t>(0x66),
__E_DsatDisplay = static_cast<int16_t>(0x67),
__E_VoxwareByteAligned = static_cast<int16_t>(0x69),
__E_VoxwareAc8 = static_cast<int16_t>(0x70),
__E_VoxwareAc10 = static_cast<int16_t>(0x71),
__E_VoxwareAc16 = static_cast<int16_t>(0x72),
__E_VoxwareAc20 = static_cast<int16_t>(0x73),
__E_VoxwareRt24 = static_cast<int16_t>(0x74),
__E_VoxwareRt29 = static_cast<int16_t>(0x75),
__E_VoxwareRt29hw = static_cast<int16_t>(0x76),
__E_VoxwareVr12 = static_cast<int16_t>(0x77),
__E_VoxwareVr18 = static_cast<int16_t>(0x78),
__E_VoxwareTq40 = static_cast<int16_t>(0x79),
__E_VoxwareSc3 = static_cast<int16_t>(0x7a),
__E_VoxwareSc31 = static_cast<int16_t>(0x7b),
__E_Softsound = static_cast<int16_t>(0x80),
__E_VoxwareTq60 = static_cast<int16_t>(0x81),
__E_Msrt24 = static_cast<int16_t>(0x82),
__E_G729A = static_cast<int16_t>(0x83),
__E_MviMvi2 = static_cast<int16_t>(0x84),
__E_DfG726 = static_cast<int16_t>(0x85),
__E_DfGsm610 = static_cast<int16_t>(0x86),
__E_Isiaudio = static_cast<int16_t>(0x88),
__E_Onlive = static_cast<int16_t>(0x89),
__E_MultitudeFtSx20 = static_cast<int16_t>(0x8a),
__E_InfocomItsG721Adpcm = static_cast<int16_t>(0x8b),
__E_ConvediaG729 = static_cast<int16_t>(0x8c),
__E_Congruency = static_cast<int16_t>(0x8d),
__E_Sbc24 = static_cast<int16_t>(0x91),
__E_DolbyAc3Spdif = static_cast<int16_t>(0x92),
__E_MediasonicG723 = static_cast<int16_t>(0x93),
__E_Prosody8kbps = static_cast<int16_t>(0x94),
__E_ZyxelAdpcm = static_cast<int16_t>(0x97),
__E_PhilipsLpcbb = static_cast<int16_t>(0x98),
__E_Packed = static_cast<int16_t>(0x99),
__E_MaldenPhonytalk = static_cast<int16_t>(0xa0),
__E_RacalRecorderGsm = static_cast<int16_t>(0xa1),
__E_RacalRecorderG720A = static_cast<int16_t>(0xa2),
__E_RacalRecorderG7231 = static_cast<int16_t>(0xa3),
__E_RacalRecorderTetraAcelp = static_cast<int16_t>(0xa4),
__E_NecAac = static_cast<int16_t>(0xb0),
__E_RawAac1 = static_cast<int16_t>(0xff),
__E_RhetorexAdpcm = static_cast<int16_t>(0x100),
__E_Irat = static_cast<int16_t>(0x101),
__E_VivoG723 = static_cast<int16_t>(0x111),
__E_VivoSiren = static_cast<int16_t>(0x112),
__E_PhilipsCelp = static_cast<int16_t>(0x120),
__E_PhilipsGrundig = static_cast<int16_t>(0x121),
__E_DigitalG723 = static_cast<int16_t>(0x123),
__E_SanyoLdAdpcm = static_cast<int16_t>(0x125),
__E_SiprolabAceplnet = static_cast<int16_t>(0x130),
__E_SiprolabAcelp4800 = static_cast<int16_t>(0x131),
__E_SiprolabAcelp8v3 = static_cast<int16_t>(0x132),
__E_SiprolabG729 = static_cast<int16_t>(0x133),
__E_SiprolabG729A = static_cast<int16_t>(0x134),
__E_SiprolabKelvin = static_cast<int16_t>(0x135),
__E_VoiceageAmr = static_cast<int16_t>(0x136),
__E_G726ADPCM = static_cast<int16_t>(0x140),
__E_DictaphoneCelp68 = static_cast<int16_t>(0x141),
__E_DictaphoneCelp54 = static_cast<int16_t>(0x142),
__E_QualcommPurevoice = static_cast<int16_t>(0x150),
__E_QualcommHalfrate = static_cast<int16_t>(0x151),
__E_Tubgsm = static_cast<int16_t>(0x155),
__E_Msaudio1 = static_cast<int16_t>(0x160),
__E_Wmaudio2 = static_cast<int16_t>(0x161),
__E_Wmaudio3 = static_cast<int16_t>(0x162),
__E_WmaudioLossless = static_cast<int16_t>(0x163),
__E_Wmaspdif = static_cast<int16_t>(0x164),
__E_UnisysNapAdpcm = static_cast<int16_t>(0x170),
__E_UnisysNapUlaw = static_cast<int16_t>(0x171),
__E_UnisysNapAlaw = static_cast<int16_t>(0x172),
__E_UnisysNap16k = static_cast<int16_t>(0x173),
__E_SycomAcmSyc008 = static_cast<int16_t>(0x174),
__E_SycomAcmSyc701G726L = static_cast<int16_t>(0x175),
__E_SycomAcmSyc701Celp54 = static_cast<int16_t>(0x176),
__E_SycomAcmSyc701Celp68 = static_cast<int16_t>(0x177),
__E_KnowledgeAdventureAdpcm = static_cast<int16_t>(0x178),
__E_FraunhoferIisMpeg2Aac = static_cast<int16_t>(0x180),
__E_DtsDs = static_cast<int16_t>(0x190),
__E_CreativeAdpcm = static_cast<int16_t>(0x200),
__E_CreativeFastspeech8 = static_cast<int16_t>(0x202),
__E_CreativeFastspeech10 = static_cast<int16_t>(0x203),
__E_UherAdpcm = static_cast<int16_t>(0x210),
__E_UleadDvAudio = static_cast<int16_t>(0x215),
__E_UleadDvAudio1 = static_cast<int16_t>(0x216),
__E_Quarterdeck = static_cast<int16_t>(0x220),
__E_IlinkVc = static_cast<int16_t>(0x230),
__E_RawSport = static_cast<int16_t>(0x240),
__E_EsstAc3 = static_cast<int16_t>(0x241),
__E_GenericPassthru = static_cast<int16_t>(0x249),
__E_IpiHsx = static_cast<int16_t>(0x250),
__E_IpiRpelp = static_cast<int16_t>(0x251),
__E_Cs2 = static_cast<int16_t>(0x260),
__E_SonyScx = static_cast<int16_t>(0x270),
__E_SonyScy = static_cast<int16_t>(0x271),
__E_SonyAtrac3 = static_cast<int16_t>(0x272),
__E_SonySpc = static_cast<int16_t>(0x273),
__E_TelumAudio = static_cast<int16_t>(0x280),
__E_TelumIaAudio = static_cast<int16_t>(0x281),
__E_NorcomVoiceSystemsAdpcm = static_cast<int16_t>(0x285),
__E_FmTownsSnd = static_cast<int16_t>(0x300),
__E_Micronas = static_cast<int16_t>(0x350),
__E_MicronasCelp833 = static_cast<int16_t>(0x351),
__E_BtvDigital = static_cast<int16_t>(0x400),
__E_IntelMusicCoder = static_cast<int16_t>(0x401),
__E_IndeoAudio = static_cast<int16_t>(0x402),
__E_QdesignMusic = static_cast<int16_t>(0x450),
__E_On2Vp7Audio = static_cast<int16_t>(0x500),
__E_On2Vp6Audio = static_cast<int16_t>(0x501),
__E_VmeVmpcm = static_cast<int16_t>(0x680),
__E_Tpc = static_cast<int16_t>(0x681),
__E_LightwaveLossless = static_cast<int16_t>(0x8ae),
__E_Oligsm = static_cast<int16_t>(0x1000),
__E_Oliadpcm = static_cast<int16_t>(0x1001),
__E_Olicelp = static_cast<int16_t>(0x1002),
__E_Olisbc = static_cast<int16_t>(0x1003),
__E_Oliopr = static_cast<int16_t>(0x1004),
__E_LhCodec = static_cast<int16_t>(0x1100),
__E_LhCodecCelp = static_cast<int16_t>(0x1101),
__E_LhCodecSbc8 = static_cast<int16_t>(0x1102),
__E_LhCodecSbc12 = static_cast<int16_t>(0x1103),
__E_LhCodecSbc16 = static_cast<int16_t>(0x1104),
__E_Norris = static_cast<int16_t>(0x1400),
__E_Isiaudio2 = static_cast<int16_t>(0x1401),
__E_SoundspaceMusicompress = static_cast<int16_t>(0x1500),
__E_MpegAdtsAac = static_cast<int16_t>(0x1600),
__E_MpegRawAac = static_cast<int16_t>(0x1601),
__E_MpegLoas = static_cast<int16_t>(0x1602),
__E_NokiaMpegAdtsAac = static_cast<int16_t>(0x1608),
__E_NokiaMpegRawAac = static_cast<int16_t>(0x1609),
__E_VodafoneMpegAdtsAac = static_cast<int16_t>(0x160a),
__E_VodafoneMpegRawAac = static_cast<int16_t>(0x160b),
__E_MpegHeaac = static_cast<int16_t>(0x1610),
__E_VoxwareRt24Speech = static_cast<int16_t>(0x181c),
__E_SonicfoundryLossless = static_cast<int16_t>(0x1971),
__E_InningsTelecomAdpcm = static_cast<int16_t>(0x1979),
__E_LucentSx8300p = static_cast<int16_t>(0x1c07),
__E_LucentSx5363s = static_cast<int16_t>(0x1c0c),
__E_Cuseeme = static_cast<int16_t>(0x1f03),
__E_NtcsoftAlf2cmAcm = static_cast<int16_t>(0x1fc4),
__E_Dvm = static_cast<int16_t>(0x2000),
__E_Dts2 = static_cast<int16_t>(0x2001),
__E_Makeavis = static_cast<int16_t>(0x3313),
__E_DivioMpeg4Aac = static_cast<int16_t>(0x4143),
__E_NokiaAdaptiveMultirate = static_cast<int16_t>(0x4201),
__E_DivioG726 = static_cast<int16_t>(0x4243),
__E_LeadSpeech = static_cast<int16_t>(0x434c),
__E_LeadVorbis = static_cast<int16_t>(0x564c),
__E_WavpackAudio = static_cast<int16_t>(0x5756),
__E_OggVorbisMode1 = static_cast<int16_t>(0x674f),
__E_OggVorbisMode2 = static_cast<int16_t>(0x6750),
__E_OggVorbisMode3 = static_cast<int16_t>(0x6751),
__E_OggVorbisMode1Plus = static_cast<int16_t>(0x676f),
__E_OggVorbisMode2Plus = static_cast<int16_t>(0x6770),
__E_OggVorbisMode3Plus = static_cast<int16_t>(0x6771),
__E_Tag3COMNbx = static_cast<int16_t>(0x7000),
__E_FaadAac = static_cast<int16_t>(0x706d),
__E_GsmAmrCbr = static_cast<int16_t>(0x7a21),
__E_GsmAmrVbrSid = static_cast<int16_t>(0x7a22),
__E_ComverseInfosysG7231 = static_cast<int16_t>(0xa100),
__E_ComverseInfosysAvqsbc = static_cast<int16_t>(0xa101),
__E_ComverseInfosysSbc = static_cast<int16_t>(0xa102),
__E_SymbolG729A = static_cast<int16_t>(0xa103),
__E_VoiceageAmrWb = static_cast<int16_t>(0xa104),
__E_IngenientG726 = static_cast<int16_t>(0xa105),
__E_Mpeg4Aac = static_cast<int16_t>(0xa106),
__E_EncoreG726 = static_cast<int16_t>(0xa107),
__E_ZollAsao = static_cast<int16_t>(0xa108),
__E_SpeexVoice = static_cast<int16_t>(0xa109),
__E_VianixMasc = static_cast<int16_t>(0xa10a),
__E_Wm9SpectrumAnalyzer = static_cast<int16_t>(0xa10b),
__E_WmfSpectrumAnayzer = static_cast<int16_t>(0xa10c),
__E_Gsm610 = static_cast<int16_t>(0xa10d),
__E_Gsm620 = static_cast<int16_t>(0xa10e),
__E_Gsm660 = static_cast<int16_t>(0xa10f),
__E_Gsm690 = static_cast<int16_t>(0xa110),
__E_GsmAdaptiveMultirateWb = static_cast<int16_t>(0xa111),
__E_PolycomG722 = static_cast<int16_t>(0xa112),
__E_PolycomG728 = static_cast<int16_t>(0xa113),
__E_PolycomG729A = static_cast<int16_t>(0xa114),
__E_PolycomSiren = static_cast<int16_t>(0xa115),
__E_GlobalIpIlbc = static_cast<int16_t>(0xa116),
__E_RadiotimeTimeShiftRadio = static_cast<int16_t>(0xa117),
__E_NiceAca = static_cast<int16_t>(0xa118),
__E_NiceAdpcm = static_cast<int16_t>(0xa119),
__E_VocordG721 = static_cast<int16_t>(0xa11a),
__E_VocordG726 = static_cast<int16_t>(0xa11b),
__E_VocordG7221 = static_cast<int16_t>(0xa11c),
__E_VocordG728 = static_cast<int16_t>(0xa11d),
__E_VocordG729 = static_cast<int16_t>(0xa11e),
__E_VocordG729A = static_cast<int16_t>(0xa11f),
__E_VocordG7231 = static_cast<int16_t>(0xa120),
__E_VocordLbc = static_cast<int16_t>(0xa121),
__E_NiceG728 = static_cast<int16_t>(0xa122),
__E_FraceTelecomG729 = static_cast<int16_t>(0xa123),
__E_Codian = static_cast<int16_t>(0xa124),
__E_Flac = static_cast<int16_t>(0xf1ac),
__E_Extensible = static_cast<int16_t>(0xfffe),
__E_Development = static_cast<int16_t>(0xffff),
__E_Pcm = static_cast<int16_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NjfbMymByPLVTYMvBdPCxViiaBEt_Unwrapped () const noexcept {
return static_cast<__NjfbMymByPLVTYMvBdPCxViiaBEt_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NjfbMymByPLVTYMvBdPCxViiaBEt() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr NjfbMymByPLVTYMvBdPCxViiaBEt(int16_t  value__) noexcept;

/// @brief Field Adpcm value: I16(2)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Adpcm;

/// @brief Field Alaw value: I16(6)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Alaw;

/// @brief Field AntexAdpcme value: I16(51)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const AntexAdpcme;

/// @brief Field Aptx value: I16(37)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Aptx;

/// @brief Field AudiofileAf10 value: I16(38)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const AudiofileAf10;

/// @brief Field AudiofileAf36 value: I16(36)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const AudiofileAf36;

/// @brief Field BtvDigital value: I16(1024)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const BtvDigital;

/// @brief Field CanopusAtrac value: I16(99)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const CanopusAtrac;

/// @brief Field Cirrus value: I16(96)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Cirrus;

/// @brief Field Codian value: I16(-24284)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Codian;

/// @brief Field ComverseInfosysAvqsbc value: I16(-24319)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ComverseInfosysAvqsbc;

/// @brief Field ComverseInfosysG7231 value: I16(-24320)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ComverseInfosysG7231;

/// @brief Field ComverseInfosysSbc value: I16(-24318)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ComverseInfosysSbc;

/// @brief Field Congruency value: I16(141)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Congruency;

/// @brief Field ControlResCr10 value: I16(55)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ControlResCr10;

/// @brief Field ControlResVqlpc value: I16(52)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ControlResVqlpc;

/// @brief Field ConvediaG729 value: I16(140)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ConvediaG729;

/// @brief Field CreativeAdpcm value: I16(512)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const CreativeAdpcm;

/// @brief Field CreativeFastspeech10 value: I16(515)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const CreativeFastspeech10;

/// @brief Field CreativeFastspeech8 value: I16(514)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const CreativeFastspeech8;

/// @brief Field Cs2 value: I16(608)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Cs2;

/// @brief Field CsImaadpcm value: I16(57)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const CsImaadpcm;

/// @brief Field CuCodec value: I16(25)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const CuCodec;

/// @brief Field Cuseeme value: I16(7939)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Cuseeme;

/// @brief Field DefaultGsm610 value: I16(49)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DefaultGsm610;

/// @brief Field Development value: I16(-1)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Development;

/// @brief Field DfG726 value: I16(133)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DfG726;

/// @brief Field DfGsm610 value: I16(134)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DfGsm610;

/// @brief Field DialogicOkiAdpcm value: I16(23)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DialogicOkiAdpcm;

/// @brief Field DictaphoneCelp54 value: I16(322)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DictaphoneCelp54;

/// @brief Field DictaphoneCelp68 value: I16(321)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DictaphoneCelp68;

/// @brief Field Digiadpcm value: I16(54)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Digiadpcm;

/// @brief Field Digifix value: I16(22)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Digifix;

/// @brief Field Digireal value: I16(53)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Digireal;

/// @brief Field Digistd value: I16(21)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Digistd;

/// @brief Field DigitalG723 value: I16(291)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DigitalG723;

/// @brief Field DivioG726 value: I16(16963)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DivioG726;

/// @brief Field DivioMpeg4Aac value: I16(16707)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DivioMpeg4Aac;

/// @brief Field DolbyAc2 value: I16(48)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DolbyAc2;

/// @brief Field DolbyAc3Spdif value: I16(146)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DolbyAc3Spdif;

/// @brief Field Drm value: I16(9)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Drm;

/// @brief Field Dsat value: I16(102)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Dsat;

/// @brief Field DsatDisplay value: I16(103)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DsatDisplay;

/// @brief Field DspgroupTruespeech value: I16(34)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DspgroupTruespeech;

/// @brief Field Dts value: I16(8)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Dts;

/// @brief Field Dts2 value: I16(8193)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Dts2;

/// @brief Field DtsDs value: I16(400)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DtsDs;

/// @brief Field DviAdpcm value: I16(17)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const DviAdpcm;

/// @brief Field Dvm value: I16(8192)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Dvm;

/// @brief Field Echosc1 value: I16(35)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Echosc1;

/// @brief Field Echosc3 value: I16(58)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Echosc3;

/// @brief Field EncoreG726 value: I16(-24313)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const EncoreG726;

/// @brief Field Espcm value: I16(97)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Espcm;

/// @brief Field EsstAc3 value: I16(577)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const EsstAc3;

/// @brief Field Extensible value: I16(-2)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Extensible;

/// @brief Field FaadAac value: I16(28781)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const FaadAac;

/// @brief Field Flac value: I16(-3668)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Flac;

/// @brief Field FmTownsSnd value: I16(768)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const FmTownsSnd;

/// @brief Field FraceTelecomG729 value: I16(-24285)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const FraceTelecomG729;

/// @brief Field FraunhoferIisMpeg2Aac value: I16(384)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const FraunhoferIisMpeg2Aac;

/// @brief Field G721Adpcm value: I16(64)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const G721Adpcm;

/// @brief Field G722Adpcm value: I16(101)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const G722Adpcm;

/// @brief Field G723Adpcm value: I16(20)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const G723Adpcm;

/// @brief Field G726ADPCM value: I16(320)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const G726ADPCM;

/// @brief Field G726Adpcm value: I16(100)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const G726Adpcm;

/// @brief Field G728Celp value: I16(65)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const G728Celp;

/// @brief Field G729A value: I16(131)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const G729A;

/// @brief Field GenericPassthru value: I16(585)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const GenericPassthru;

/// @brief Field GlobalIpIlbc value: I16(-24298)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const GlobalIpIlbc;

/// @brief Field Gsm610 value: I16(-24307)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Gsm610;

/// @brief Field Gsm620 value: I16(-24306)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Gsm620;

/// @brief Field Gsm660 value: I16(-24305)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Gsm660;

/// @brief Field Gsm690 value: I16(-24304)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Gsm690;

/// @brief Field GsmAdaptiveMultirateWb value: I16(-24303)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const GsmAdaptiveMultirateWb;

/// @brief Field GsmAmrCbr value: I16(31265)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const GsmAmrCbr;

/// @brief Field GsmAmrVbrSid value: I16(31266)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const GsmAmrVbrSid;

/// @brief Field HpDynVoice value: I16(26)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const HpDynVoice;

/// @brief Field IbmCvsd value: I16(5)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IbmCvsd;

/// @brief Field IeeeFloat value: I16(3)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IeeeFloat;

/// @brief Field IlinkVc value: I16(560)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IlinkVc;

/// @brief Field ImaAdpcm value: I16(17)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ImaAdpcm;

/// @brief Field IndeoAudio value: I16(1026)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IndeoAudio;

/// @brief Field InfocomItsG721Adpcm value: I16(139)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const InfocomItsG721Adpcm;

/// @brief Field IngenientG726 value: I16(-24315)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IngenientG726;

/// @brief Field InningsTelecomAdpcm value: I16(6521)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const InningsTelecomAdpcm;

/// @brief Field IntelG7231 value: I16(67)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IntelG7231;

/// @brief Field IntelG729 value: I16(68)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IntelG729;

/// @brief Field IntelMusicCoder value: I16(1025)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IntelMusicCoder;

/// @brief Field IpiHsx value: I16(592)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IpiHsx;

/// @brief Field IpiRpelp value: I16(593)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const IpiRpelp;

/// @brief Field Irat value: I16(257)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Irat;

/// @brief Field Isiaudio value: I16(136)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Isiaudio;

/// @brief Field Isiaudio2 value: I16(5121)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Isiaudio2;

/// @brief Field KnowledgeAdventureAdpcm value: I16(376)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const KnowledgeAdventureAdpcm;

/// @brief Field LeadSpeech value: I16(17228)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LeadSpeech;

/// @brief Field LeadVorbis value: I16(22092)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LeadVorbis;

/// @brief Field LhCodec value: I16(4352)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LhCodec;

/// @brief Field LhCodecCelp value: I16(4353)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LhCodecCelp;

/// @brief Field LhCodecSbc12 value: I16(4355)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LhCodecSbc12;

/// @brief Field LhCodecSbc16 value: I16(4356)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LhCodecSbc16;

/// @brief Field LhCodecSbc8 value: I16(4354)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LhCodecSbc8;

/// @brief Field LightwaveLossless value: I16(2222)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LightwaveLossless;

/// @brief Field Lrc value: I16(40)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Lrc;

/// @brief Field LucentG723 value: I16(89)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LucentG723;

/// @brief Field LucentSx5363s value: I16(7180)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LucentSx5363s;

/// @brief Field LucentSx8300p value: I16(7175)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const LucentSx8300p;

/// @brief Field Makeavis value: I16(13075)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Makeavis;

/// @brief Field MaldenPhonytalk value: I16(160)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MaldenPhonytalk;

/// @brief Field MediasonicG723 value: I16(147)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MediasonicG723;

/// @brief Field MediaspaceAdpcm value: I16(18)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MediaspaceAdpcm;

/// @brief Field MediavisionAdpcm value: I16(24)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MediavisionAdpcm;

/// @brief Field Micronas value: I16(848)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Micronas;

/// @brief Field MicronasCelp833 value: I16(849)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MicronasCelp833;

/// @brief Field Mpeg value: I16(80)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Mpeg;

/// @brief Field Mpeg4Aac value: I16(-24314)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Mpeg4Aac;

/// @brief Field MpegAdtsAac value: I16(5632)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MpegAdtsAac;

/// @brief Field MpegHeaac value: I16(5648)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MpegHeaac;

/// @brief Field MpegLoas value: I16(5634)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MpegLoas;

/// @brief Field MpegRawAac value: I16(5633)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MpegRawAac;

/// @brief Field Mpeglayer3 value: I16(85)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Mpeglayer3;

/// @brief Field Msaudio1 value: I16(352)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Msaudio1;

/// @brief Field Msg723 value: I16(66)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Msg723;

/// @brief Field Msnaudio value: I16(50)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Msnaudio;

/// @brief Field Msrt24 value: I16(130)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Msrt24;

/// @brief Field Mulaw value: I16(7)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Mulaw;

/// @brief Field MultitudeFtSx20 value: I16(138)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MultitudeFtSx20;

/// @brief Field MviMvi2 value: I16(132)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const MviMvi2;

/// @brief Field NecAac value: I16(176)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NecAac;

/// @brief Field NiceAca value: I16(-24296)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NiceAca;

/// @brief Field NiceAdpcm value: I16(-24295)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NiceAdpcm;

/// @brief Field NiceG728 value: I16(-24286)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NiceG728;

/// @brief Field NmsVbxadpcm value: I16(56)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NmsVbxadpcm;

/// @brief Field NokiaAdaptiveMultirate value: I16(16897)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NokiaAdaptiveMultirate;

/// @brief Field NokiaMpegAdtsAac value: I16(5640)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NokiaMpegAdtsAac;

/// @brief Field NokiaMpegRawAac value: I16(5641)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NokiaMpegRawAac;

/// @brief Field NorcomVoiceSystemsAdpcm value: I16(645)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NorcomVoiceSystemsAdpcm;

/// @brief Field Norris value: I16(5120)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Norris;

/// @brief Field NtcsoftAlf2cmAcm value: I16(8132)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const NtcsoftAlf2cmAcm;

/// @brief Field OggVorbisMode1 value: I16(26447)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const OggVorbisMode1;

/// @brief Field OggVorbisMode1Plus value: I16(26479)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const OggVorbisMode1Plus;

/// @brief Field OggVorbisMode2 value: I16(26448)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const OggVorbisMode2;

/// @brief Field OggVorbisMode2Plus value: I16(26480)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const OggVorbisMode2Plus;

/// @brief Field OggVorbisMode3 value: I16(26449)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const OggVorbisMode3;

/// @brief Field OggVorbisMode3Plus value: I16(26481)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const OggVorbisMode3Plus;

/// @brief Field OkiAdpcm value: I16(16)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const OkiAdpcm;

/// @brief Field Oliadpcm value: I16(4097)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Oliadpcm;

/// @brief Field Olicelp value: I16(4098)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Olicelp;

/// @brief Field Oligsm value: I16(4096)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Oligsm;

/// @brief Field Oliopr value: I16(4100)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Oliopr;

/// @brief Field Olisbc value: I16(4099)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Olisbc;

/// @brief Field On2Vp6Audio value: I16(1281)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const On2Vp6Audio;

/// @brief Field On2Vp7Audio value: I16(1280)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const On2Vp7Audio;

/// @brief Field Onlive value: I16(137)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Onlive;

/// @brief Field Pac value: I16(83)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Pac;

/// @brief Field Packed value: I16(153)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Packed;

/// @brief Field Pcm value: I16(1)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Pcm;

/// @brief Field PhilipsCelp value: I16(288)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const PhilipsCelp;

/// @brief Field PhilipsGrundig value: I16(289)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const PhilipsGrundig;

/// @brief Field PhilipsLpcbb value: I16(152)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const PhilipsLpcbb;

/// @brief Field PolycomG722 value: I16(-24302)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const PolycomG722;

/// @brief Field PolycomG728 value: I16(-24301)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const PolycomG728;

/// @brief Field PolycomG729A value: I16(-24300)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const PolycomG729A;

/// @brief Field PolycomSiren value: I16(-24299)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const PolycomSiren;

/// @brief Field Prosody1612 value: I16(39)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Prosody1612;

/// @brief Field Prosody8kbps value: I16(148)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Prosody8kbps;

/// @brief Field QdesignMusic value: I16(1104)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const QdesignMusic;

/// @brief Field QualcommHalfrate value: I16(337)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const QualcommHalfrate;

/// @brief Field QualcommPurevoice value: I16(336)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const QualcommPurevoice;

/// @brief Field Quarterdeck value: I16(544)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Quarterdeck;

/// @brief Field RacalRecorderG720A value: I16(162)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RacalRecorderG720A;

/// @brief Field RacalRecorderG7231 value: I16(163)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RacalRecorderG7231;

/// @brief Field RacalRecorderGsm value: I16(161)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RacalRecorderGsm;

/// @brief Field RacalRecorderTetraAcelp value: I16(164)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RacalRecorderTetraAcelp;

/// @brief Field RadiotimeTimeShiftRadio value: I16(-24297)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RadiotimeTimeShiftRadio;

/// @brief Field RawAac1 value: I16(255)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RawAac1;

/// @brief Field RawSport value: I16(576)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RawSport;

/// @brief Field RhetorexAdpcm value: I16(256)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RhetorexAdpcm;

/// @brief Field RockwellAdpcm value: I16(59)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RockwellAdpcm;

/// @brief Field RockwellDigitalk value: I16(60)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const RockwellDigitalk;

/// @brief Field Rt24 value: I16(82)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Rt24;

/// @brief Field SanyoLdAdpcm value: I16(293)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SanyoLdAdpcm;

/// @brief Field Sbc24 value: I16(145)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Sbc24;

/// @brief Field SharpG726 value: I16(69)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SharpG726;

/// @brief Field SierraAdpcm value: I16(19)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SierraAdpcm;

/// @brief Field SiprolabAcelp4800 value: I16(305)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SiprolabAcelp4800;

/// @brief Field SiprolabAcelp8v3 value: I16(306)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SiprolabAcelp8v3;

/// @brief Field SiprolabAceplnet value: I16(304)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SiprolabAceplnet;

/// @brief Field SiprolabG729 value: I16(307)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SiprolabG729;

/// @brief Field SiprolabG729A value: I16(308)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SiprolabG729A;

/// @brief Field SiprolabKelvin value: I16(309)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SiprolabKelvin;

/// @brief Field Softsound value: I16(128)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Softsound;

/// @brief Field Sonarc value: I16(33)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Sonarc;

/// @brief Field SonicfoundryLossless value: I16(6513)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SonicfoundryLossless;

/// @brief Field SonyAtrac3 value: I16(626)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SonyAtrac3;

/// @brief Field SonyScx value: I16(624)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SonyScx;

/// @brief Field SonyScy value: I16(625)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SonyScy;

/// @brief Field SonySpc value: I16(627)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SonySpc;

/// @brief Field SoundspaceMusicompress value: I16(5376)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SoundspaceMusicompress;

/// @brief Field SpeexVoice value: I16(-24311)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SpeexVoice;

/// @brief Field SycomAcmSyc008 value: I16(372)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SycomAcmSyc008;

/// @brief Field SycomAcmSyc701Celp54 value: I16(374)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SycomAcmSyc701Celp54;

/// @brief Field SycomAcmSyc701Celp68 value: I16(375)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SycomAcmSyc701Celp68;

/// @brief Field SycomAcmSyc701G726L value: I16(373)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SycomAcmSyc701G726L;

/// @brief Field SymbolG729A value: I16(-24317)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const SymbolG729A;

/// @brief Field Tag3COMNbx value: I16(28672)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Tag3COMNbx;

/// @brief Field TelumAudio value: I16(640)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const TelumAudio;

/// @brief Field TelumIaAudio value: I16(641)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const TelumIaAudio;

/// @brief Field Tpc value: I16(1665)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Tpc;

/// @brief Field Tubgsm value: I16(341)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Tubgsm;

/// @brief Field UherAdpcm value: I16(528)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const UherAdpcm;

/// @brief Field UleadDvAudio value: I16(533)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const UleadDvAudio;

/// @brief Field UleadDvAudio1 value: I16(534)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const UleadDvAudio1;

/// @brief Field UnisysNap16k value: I16(371)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const UnisysNap16k;

/// @brief Field UnisysNapAdpcm value: I16(368)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const UnisysNapAdpcm;

/// @brief Field UnisysNapAlaw value: I16(370)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const UnisysNapAlaw;

/// @brief Field UnisysNapUlaw value: I16(369)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const UnisysNapUlaw;

/// @brief Field Unknown value: I16(0)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Unknown;

/// @brief Field VianixMasc value: I16(-24310)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VianixMasc;

/// @brief Field VivoG723 value: I16(273)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VivoG723;

/// @brief Field VivoSiren value: I16(274)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VivoSiren;

/// @brief Field VmeVmpcm value: I16(1664)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VmeVmpcm;

/// @brief Field VocordG721 value: I16(-24294)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordG721;

/// @brief Field VocordG7221 value: I16(-24292)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordG7221;

/// @brief Field VocordG7231 value: I16(-24288)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordG7231;

/// @brief Field VocordG726 value: I16(-24293)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordG726;

/// @brief Field VocordG728 value: I16(-24291)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordG728;

/// @brief Field VocordG729 value: I16(-24290)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordG729;

/// @brief Field VocordG729A value: I16(-24289)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordG729A;

/// @brief Field VocordLbc value: I16(-24287)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VocordLbc;

/// @brief Field VodafoneMpegAdtsAac value: I16(5642)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VodafoneMpegAdtsAac;

/// @brief Field VodafoneMpegRawAac value: I16(5643)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VodafoneMpegRawAac;

/// @brief Field VoiceageAmr value: I16(310)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoiceageAmr;

/// @brief Field VoiceageAmrWb value: I16(-24316)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoiceageAmrWb;

/// @brief Field Voxware value: I16(98)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Voxware;

/// @brief Field VoxwareAc10 value: I16(113)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareAc10;

/// @brief Field VoxwareAc16 value: I16(114)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareAc16;

/// @brief Field VoxwareAc20 value: I16(115)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareAc20;

/// @brief Field VoxwareAc8 value: I16(112)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareAc8;

/// @brief Field VoxwareByteAligned value: I16(105)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareByteAligned;

/// @brief Field VoxwareRt24 value: I16(116)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareRt24;

/// @brief Field VoxwareRt24Speech value: I16(6172)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareRt24Speech;

/// @brief Field VoxwareRt29 value: I16(117)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareRt29;

/// @brief Field VoxwareRt29hw value: I16(118)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareRt29hw;

/// @brief Field VoxwareSc3 value: I16(122)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareSc3;

/// @brief Field VoxwareSc31 value: I16(123)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareSc31;

/// @brief Field VoxwareTq40 value: I16(121)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareTq40;

/// @brief Field VoxwareTq60 value: I16(129)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareTq60;

/// @brief Field VoxwareVr12 value: I16(119)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareVr12;

/// @brief Field VoxwareVr18 value: I16(120)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const VoxwareVr18;

/// @brief Field Vselp value: I16(4)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Vselp;

/// @brief Field WavpackAudio value: I16(22358)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const WavpackAudio;

/// @brief Field Wm9SpectrumAnalyzer value: I16(-24309)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Wm9SpectrumAnalyzer;

/// @brief Field Wmaspdif value: I16(356)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Wmaspdif;

/// @brief Field Wmaudio2 value: I16(353)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Wmaudio2;

/// @brief Field Wmaudio3 value: I16(354)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Wmaudio3;

/// @brief Field WmaudioLossless value: I16(355)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const WmaudioLossless;

/// @brief Field Wmavoice10 value: I16(11)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Wmavoice10;

/// @brief Field Wmavoice9 value: I16(10)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Wmavoice9;

/// @brief Field WmfSpectrumAnayzer value: I16(-24308)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const WmfSpectrumAnayzer;

/// @brief Field Xebec value: I16(61)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const Xebec;

/// @brief Field YamahaAdpcm value: I16(32)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const YamahaAdpcm;

/// @brief Field ZollAsao value: I16(-24312)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ZollAsao;

/// @brief Field ZyxelAdpcm value: I16(151)
static ::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt const ZyxelAdpcm;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NjfbMymByPLVTYMvBdPCxViiaBEt) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
