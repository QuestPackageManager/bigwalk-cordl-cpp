#pragma once
// IWYU pragma private; include "Rewired/Utils/UnityTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__ScriptingAPILevel_def.hpp"
#include "Rewired/Platforms/zzzz__ScriptingBackend_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTools)
namespace GlobalNamespace {
struct UwgmyYuPJEgSIFfrbQnGaDeecOoF;
}
namespace Rewired::Interfaces {
class IAndroidFallbackPlatformHelper;
}
namespace Rewired::Platforms {
struct EditorPlatform;
}
namespace Rewired::Platforms {
struct Platform;
}
namespace Rewired::Platforms {
struct ScriptingAPILevel;
}
namespace Rewired::Platforms {
struct ScriptingBackend;
}
namespace Rewired::Platforms {
struct WebplayerPlatform;
}
namespace Rewired::Utils::Interfaces {
class IExternalTools;
}
namespace Rewired::Utils {
struct UnityTools_GetComponentFlags;
}
namespace Rewired::Utils {
struct UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj;
}
namespace Rewired::Utils {
class UnityTools_UnityVersionClass;
}
namespace Rewired::Utils {
struct UnityTools_UnityVersion;
}
namespace Rewired::Utils {
struct UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi;
}
namespace Rewired {
struct ButtonStateFlags;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::Utils {
struct UnityTools_GetComponentFlags;
}
namespace Rewired::Utils {
struct UnityTools_UnityVersion;
}
namespace Rewired::Utils {
struct UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi;
}
namespace Rewired::Utils {
class UnityTools;
}
namespace Rewired::Utils {
class UnityTools_UnityVersionClass;
}
namespace Rewired::Utils {
struct UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::UnityTools_GetComponentFlags);
MARK_VAL_T(::Rewired::Utils::UnityTools_UnityVersion);
MARK_VAL_T(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi);
MARK_REF_T(::Rewired::Utils::UnityTools*);
MARK_REF_T(::Rewired::Utils::UnityTools_UnityVersionClass*);
MARK_VAL_T(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::UnityTools_GetComponentFlags, "Rewired.Utils", "UnityTools/GetComponentFlags");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::UnityTools_UnityVersion, "Rewired.Utils", "UnityTools/UnityVersion");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi, "Rewired.Utils", "UnityTools/UnityVersionClass/tSBgjBnFQqqiPXLacFbtvAfiHlNi");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::UnityTools*, "Rewired.Utils", "UnityTools");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::UnityTools_UnityVersionClass*, "Rewired.Utils", "UnityTools/UnityVersionClass");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, "Rewired.Utils", "UnityTools/LpYYlrQWsVFMrljjfmaCuXMaWQj");
// Dependencies Rewired.Platforms.EditorPlatform, Rewired.Platforms.Platform, Rewired.Platforms.ScriptingAPILevel, Rewired.Platforms.ScriptingBackend, Rewired.Platforms.WebplayerPlatform
namespace Rewired::Utils {
// Is value type: true
// CS Name: Rewired.Utils.UnityTools/LpYYlrQWsVFMrljjfmaCuXMaWQj
struct CORDL_TYPE UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj {
public:
// Declarations
/// @brief Method .ctor, addr 0x1819309d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Platform  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::Platform  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Platforms::EditorPlatform  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Platforms::WebplayerPlatform  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Platforms::ScriptingBackend  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Platforms::ScriptingAPILevel  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Utils::Interfaces::IExternalTools*  _cordl_fixed_empty_name_whitespace_param_7) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj() ;

// Ctor Parameters [CppParam { name: "eoBcGZeGDVEVjtMxnUSRUmFgpBDS", ty: "::Rewired::Platforms::Platform", modifiers: "", def_value: None }, CppParam { name: "SzUfiJYnokwRCEZJFiGBMJwDslFj", ty: "::Rewired::Platforms::Platform", modifiers: "", def_value: None }, CppParam { name: "KxcvsazCCoRJfKlMzPIOvHKYfVud", ty: "::Rewired::Platforms::EditorPlatform", modifiers: "", def_value: None }, CppParam { name: "FBPUYoSuSPraVyNbaxJBEaldggVM", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beNwFGMmApnKbHdNtQvyvqArvADR", ty: "::Rewired::Platforms::WebplayerPlatform", modifiers: "", def_value: None }, CppParam { name: "XuEtZulklbKWEUWmtumdOqnjIGGAA", ty: "::Rewired::Platforms::ScriptingBackend", modifiers: "", def_value: None }, CppParam { name: "CGyVZxmzagUBqoTvChWxwhQRFsdx", ty: "::Rewired::Platforms::ScriptingAPILevel", modifiers: "", def_value: None }, CppParam { name: "LJucddBvhVVOyzaKEfcKDkvWWCVB", ty: "::Rewired::Utils::Interfaces::IExternalTools*", modifiers: "", def_value: None }]
constexpr UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj(::Rewired::Platforms::Platform  eoBcGZeGDVEVjtMxnUSRUmFgpBDS, ::Rewired::Platforms::Platform  SzUfiJYnokwRCEZJFiGBMJwDslFj, ::Rewired::Platforms::EditorPlatform  KxcvsazCCoRJfKlMzPIOvHKYfVud, bool  FBPUYoSuSPraVyNbaxJBEaldggVM, ::Rewired::Platforms::WebplayerPlatform  beNwFGMmApnKbHdNtQvyvqArvADR, ::Rewired::Platforms::ScriptingBackend  XuEtZulklbKWEUWmtumdOqnjIGGAA, ::Rewired::Platforms::ScriptingAPILevel  CGyVZxmzagUBqoTvChWxwhQRFsdx, ::Rewired::Utils::Interfaces::IExternalTools*  LJucddBvhVVOyzaKEfcKDkvWWCVB) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2928};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field eoBcGZeGDVEVjtMxnUSRUmFgpBDS, offset: 0x0, size: 0x4, def value: None
 ::Rewired::Platforms::Platform  eoBcGZeGDVEVjtMxnUSRUmFgpBDS;

/// @brief Field SzUfiJYnokwRCEZJFiGBMJwDslFj, offset: 0x4, size: 0x4, def value: None
 ::Rewired::Platforms::Platform  SzUfiJYnokwRCEZJFiGBMJwDslFj;

/// @brief Field KxcvsazCCoRJfKlMzPIOvHKYfVud, offset: 0x8, size: 0x4, def value: None
 ::Rewired::Platforms::EditorPlatform  KxcvsazCCoRJfKlMzPIOvHKYfVud;

/// @brief Field FBPUYoSuSPraVyNbaxJBEaldggVM, offset: 0xc, size: 0x1, def value: None
 bool  FBPUYoSuSPraVyNbaxJBEaldggVM;

/// @brief Field beNwFGMmApnKbHdNtQvyvqArvADR, offset: 0x10, size: 0x4, def value: None
 ::Rewired::Platforms::WebplayerPlatform  beNwFGMmApnKbHdNtQvyvqArvADR;

/// @brief Field XuEtZulklbKWEUWmtumdOqnjIGGAA, offset: 0x14, size: 0x4, def value: None
 ::Rewired::Platforms::ScriptingBackend  XuEtZulklbKWEUWmtumdOqnjIGGAA;

/// @brief Field CGyVZxmzagUBqoTvChWxwhQRFsdx, offset: 0x18, size: 0x4, def value: None
 ::Rewired::Platforms::ScriptingAPILevel  CGyVZxmzagUBqoTvChWxwhQRFsdx;

/// @brief Field LJucddBvhVVOyzaKEfcKDkvWWCVB, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Utils::Interfaces::IExternalTools*  LJucddBvhVVOyzaKEfcKDkvWWCVB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, eoBcGZeGDVEVjtMxnUSRUmFgpBDS) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, SzUfiJYnokwRCEZJFiGBMJwDslFj) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, KxcvsazCCoRJfKlMzPIOvHKYfVud) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, FBPUYoSuSPraVyNbaxJBEaldggVM) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, beNwFGMmApnKbHdNtQvyvqArvADR) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, XuEtZulklbKWEUWmtumdOqnjIGGAA) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, CGyVZxmzagUBqoTvChWxwhQRFsdx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj, LJucddBvhVVOyzaKEfcKDkvWWCVB) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils
// Dependencies 
namespace Rewired::Utils {
// Is value type: true
// CS Name: Rewired.Utils.UnityTools/UnityVersion
struct CORDL_TYPE UnityTools_UnityVersion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityTools_UnityVersion_Unwrapped
enum struct __UnityTools_UnityVersion_Unwrapped : int32_t {
__E_UNITY_2_6 = static_cast<int32_t>(0x0),
__E_UNITY_2_6_1 = static_cast<int32_t>(0x1),
__E_UNITY_3_0 = static_cast<int32_t>(0x2),
__E_UNITY_3_0_0 = static_cast<int32_t>(0x3),
__E_UNITY_3_1 = static_cast<int32_t>(0x4),
__E_UNITY_3_2 = static_cast<int32_t>(0x5),
__E_UNITY_3_3 = static_cast<int32_t>(0x6),
__E_UNITY_3_4 = static_cast<int32_t>(0x7),
__E_UNITY_3_5 = static_cast<int32_t>(0x8),
__E_UNITY_3_5_2 = static_cast<int32_t>(0x9),
__E_UNITY_3_5_7 = static_cast<int32_t>(0xa),
__E_UNITY_3_MAX = static_cast<int32_t>(0xb),
__E_UNITY_4_0 = static_cast<int32_t>(0xc),
__E_UNITY_4_0_1 = static_cast<int32_t>(0xd),
__E_UNITY_4_1 = static_cast<int32_t>(0xe),
__E_UNITY_4_2 = static_cast<int32_t>(0xf),
__E_UNITY_4_3 = static_cast<int32_t>(0x10),
__E_UNITY_4_4 = static_cast<int32_t>(0x11),
__E_UNITY_4_5 = static_cast<int32_t>(0x12),
__E_UNITY_4_6 = static_cast<int32_t>(0x13),
__E_UNITY_4_6_3p1 = static_cast<int32_t>(0x14),
__E_UNITY_4_6_3p1Plus = static_cast<int32_t>(0x15),
__E_UNITY_4_7 = static_cast<int32_t>(0x16),
__E_UNITY_4_8 = static_cast<int32_t>(0x17),
__E_UNITY_4_9 = static_cast<int32_t>(0x18),
__E_UNITY_4_MAX = static_cast<int32_t>(0x19),
__E_UNITY_5_0 = static_cast<int32_t>(0x1a),
__E_UNITY_5_0_0p1 = static_cast<int32_t>(0x1b),
__E_UNITY_5_0_0p1Plus = static_cast<int32_t>(0x1c),
__E_UNITY_5_0_1 = static_cast<int32_t>(0x1d),
__E_UNITY_5_0_2 = static_cast<int32_t>(0x1e),
__E_UNITY_5_1 = static_cast<int32_t>(0x1f),
__E_UNITY_5_2 = static_cast<int32_t>(0x20),
__E_UNITY_5_3 = static_cast<int32_t>(0x21),
__E_UNITY_5_4 = static_cast<int32_t>(0x22),
__E_UNITY_5_5 = static_cast<int32_t>(0x23),
__E_UNITY_5_6 = static_cast<int32_t>(0x24),
__E_UNITY_5_7 = static_cast<int32_t>(0x25),
__E_UNITY_5_8 = static_cast<int32_t>(0x26),
__E_UNITY_5_9 = static_cast<int32_t>(0x27),
__E_UNITY_5_MAX = static_cast<int32_t>(0x28),
__E_UNITY_2017_0 = static_cast<int32_t>(0x29),
__E_UNITY_2017_1 = static_cast<int32_t>(0x2a),
__E_UNITY_2017_2 = static_cast<int32_t>(0x2b),
__E_UNITY_2017_3 = static_cast<int32_t>(0x2c),
__E_UNITY_2017_4 = static_cast<int32_t>(0x2d),
__E_UNITY_2017_5 = static_cast<int32_t>(0x2e),
__E_UNITY_2017_6 = static_cast<int32_t>(0x2f),
__E_UNITY_2017_7 = static_cast<int32_t>(0x30),
__E_UNITY_2017_8 = static_cast<int32_t>(0x31),
__E_UNITY_2017_9 = static_cast<int32_t>(0x32),
__E_UNITY_2017_MAX = static_cast<int32_t>(0x33),
__E_UNITY_2018_0 = static_cast<int32_t>(0x34),
__E_UNITY_2018_1 = static_cast<int32_t>(0x35),
__E_UNITY_2018_2 = static_cast<int32_t>(0x36),
__E_UNITY_2018_3 = static_cast<int32_t>(0x37),
__E_UNITY_2018_4 = static_cast<int32_t>(0x38),
__E_UNITY_2018_5 = static_cast<int32_t>(0x39),
__E_UNITY_2018_6 = static_cast<int32_t>(0x3a),
__E_UNITY_2018_7 = static_cast<int32_t>(0x3b),
__E_UNITY_2018_8 = static_cast<int32_t>(0x3c),
__E_UNITY_2018_9 = static_cast<int32_t>(0x3d),
__E_UNITY_2018_MAX = static_cast<int32_t>(0x3e),
__E_UNITY_2019_0 = static_cast<int32_t>(0x3f),
__E_UNITY_2019_1 = static_cast<int32_t>(0x40),
__E_UNITY_2019_2 = static_cast<int32_t>(0x41),
__E_UNITY_2019_3 = static_cast<int32_t>(0x42),
__E_UNITY_2019_4 = static_cast<int32_t>(0x43),
__E_UNITY_2019_5 = static_cast<int32_t>(0x44),
__E_UNITY_2019_6 = static_cast<int32_t>(0x45),
__E_UNITY_2019_7 = static_cast<int32_t>(0x46),
__E_UNITY_2019_8 = static_cast<int32_t>(0x47),
__E_UNITY_2019_9 = static_cast<int32_t>(0x48),
__E_UNITY_2019_MAX = static_cast<int32_t>(0x49),
__E_UNITY_2020_0 = static_cast<int32_t>(0x4a),
__E_UNITY_2020_1 = static_cast<int32_t>(0x4b),
__E_UNITY_2020_2 = static_cast<int32_t>(0x4c),
__E_UNITY_2020_3 = static_cast<int32_t>(0x4d),
__E_UNITY_2020_4 = static_cast<int32_t>(0x4e),
__E_UNITY_2020_5 = static_cast<int32_t>(0x4f),
__E_UNITY_2020_6 = static_cast<int32_t>(0x50),
__E_UNITY_2020_7 = static_cast<int32_t>(0x51),
__E_UNITY_2020_8 = static_cast<int32_t>(0x52),
__E_UNITY_2020_9 = static_cast<int32_t>(0x53),
__E_UNITY_2020_MAX = static_cast<int32_t>(0x54),
__E_UNITY_2021_0 = static_cast<int32_t>(0x55),
__E_UNITY_2021_1 = static_cast<int32_t>(0x56),
__E_UNITY_2021_2 = static_cast<int32_t>(0x57),
__E_UNITY_2021_3 = static_cast<int32_t>(0x58),
__E_UNITY_2021_4 = static_cast<int32_t>(0x59),
__E_UNITY_2021_5 = static_cast<int32_t>(0x5a),
__E_UNITY_2021_6 = static_cast<int32_t>(0x5b),
__E_UNITY_2021_7 = static_cast<int32_t>(0x5c),
__E_UNITY_2021_8 = static_cast<int32_t>(0x5d),
__E_UNITY_2021_9 = static_cast<int32_t>(0x5e),
__E_UNITY_2021_MAX = static_cast<int32_t>(0x5f),
__E_UNITY_2022_0 = static_cast<int32_t>(0x60),
__E_UNITY_2022_1 = static_cast<int32_t>(0x61),
__E_UNITY_2022_2 = static_cast<int32_t>(0x62),
__E_UNITY_2022_3 = static_cast<int32_t>(0x63),
__E_UNITY_2022_4 = static_cast<int32_t>(0x64),
__E_UNITY_2022_5 = static_cast<int32_t>(0x65),
__E_UNITY_2022_6 = static_cast<int32_t>(0x66),
__E_UNITY_2022_7 = static_cast<int32_t>(0x67),
__E_UNITY_2022_8 = static_cast<int32_t>(0x68),
__E_UNITY_2022_9 = static_cast<int32_t>(0x69),
__E_UNITY_2022_MAX = static_cast<int32_t>(0x6a),
__E_UNITY_2023_0 = static_cast<int32_t>(0x6b),
__E_UNITY_2023_1 = static_cast<int32_t>(0x6c),
__E_UNITY_2023_2 = static_cast<int32_t>(0x6d),
__E_UNITY_2023_3 = static_cast<int32_t>(0x6e),
__E_UNITY_2023_4 = static_cast<int32_t>(0x6f),
__E_UNITY_2023_5 = static_cast<int32_t>(0x70),
__E_UNITY_2023_6 = static_cast<int32_t>(0x71),
__E_UNITY_2023_7 = static_cast<int32_t>(0x72),
__E_UNITY_2023_8 = static_cast<int32_t>(0x73),
__E_UNITY_2023_9 = static_cast<int32_t>(0x74),
__E_UNITY_2023_MAX = static_cast<int32_t>(0x75),
__E_UNITY_6000_0 = static_cast<int32_t>(0x76),
__E_UNITY_6000_1 = static_cast<int32_t>(0x77),
__E_UNITY_6000_2 = static_cast<int32_t>(0x78),
__E_UNITY_6000_3 = static_cast<int32_t>(0x79),
__E_UNITY_6000_4 = static_cast<int32_t>(0x7a),
__E_UNITY_6000_5 = static_cast<int32_t>(0x7b),
__E_UNITY_6000_6 = static_cast<int32_t>(0x7c),
__E_UNITY_6000_7 = static_cast<int32_t>(0x7d),
__E_UNITY_6000_8 = static_cast<int32_t>(0x7e),
__E_UNITY_6000_9 = static_cast<int32_t>(0x7f),
__E_UNITY_6000_MAX = static_cast<int32_t>(0x80),
__E_UNITY_7000_0 = static_cast<int32_t>(0x81),
__E_UNITY_7000_1 = static_cast<int32_t>(0x82),
__E_UNITY_7000_2 = static_cast<int32_t>(0x83),
__E_UNITY_7000_3 = static_cast<int32_t>(0x84),
__E_UNITY_7000_4 = static_cast<int32_t>(0x85),
__E_UNITY_7000_5 = static_cast<int32_t>(0x86),
__E_UNITY_7000_6 = static_cast<int32_t>(0x87),
__E_UNITY_7000_7 = static_cast<int32_t>(0x88),
__E_UNITY_7000_8 = static_cast<int32_t>(0x89),
__E_UNITY_7000_9 = static_cast<int32_t>(0x8a),
__E_UNITY_7000_MAX = static_cast<int32_t>(0x8b),
__E_UNITY_8000_0 = static_cast<int32_t>(0x8c),
__E_UNITY_8000_1 = static_cast<int32_t>(0x8d),
__E_UNITY_8000_2 = static_cast<int32_t>(0x8e),
__E_UNITY_8000_3 = static_cast<int32_t>(0x8f),
__E_UNITY_8000_4 = static_cast<int32_t>(0x90),
__E_UNITY_8000_5 = static_cast<int32_t>(0x91),
__E_UNITY_8000_6 = static_cast<int32_t>(0x92),
__E_UNITY_8000_7 = static_cast<int32_t>(0x93),
__E_UNITY_8000_8 = static_cast<int32_t>(0x94),
__E_UNITY_8000_9 = static_cast<int32_t>(0x95),
__E_UNITY_8000_MAX = static_cast<int32_t>(0x96),
__E_UNITY_9000_0 = static_cast<int32_t>(0x97),
__E_UNITY_9000_1 = static_cast<int32_t>(0x98),
__E_UNITY_9000_2 = static_cast<int32_t>(0x99),
__E_UNITY_9000_3 = static_cast<int32_t>(0x9a),
__E_UNITY_9000_4 = static_cast<int32_t>(0x9b),
__E_UNITY_9000_5 = static_cast<int32_t>(0x9c),
__E_UNITY_9000_6 = static_cast<int32_t>(0x9d),
__E_UNITY_9000_7 = static_cast<int32_t>(0x9e),
__E_UNITY_9000_8 = static_cast<int32_t>(0x9f),
__E_UNITY_9000_9 = static_cast<int32_t>(0xa0),
__E_UNITY_9000_MAX = static_cast<int32_t>(0xa1),
__E_Unknown = static_cast<int32_t>(0x3e8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityTools_UnityVersion_Unwrapped () const noexcept {
return static_cast<__UnityTools_UnityVersion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityTools_UnityVersion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityTools_UnityVersion(int32_t  value__) noexcept;

/// @brief Field UNITY_2017_0 value: I32(41)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_0;

/// @brief Field UNITY_2017_1 value: I32(42)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_1;

/// @brief Field UNITY_2017_2 value: I32(43)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_2;

/// @brief Field UNITY_2017_3 value: I32(44)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_3;

/// @brief Field UNITY_2017_4 value: I32(45)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_4;

/// @brief Field UNITY_2017_5 value: I32(46)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_5;

/// @brief Field UNITY_2017_6 value: I32(47)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_6;

/// @brief Field UNITY_2017_7 value: I32(48)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_7;

/// @brief Field UNITY_2017_8 value: I32(49)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_8;

/// @brief Field UNITY_2017_9 value: I32(50)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_9;

/// @brief Field UNITY_2017_MAX value: I32(51)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2017_MAX;

/// @brief Field UNITY_2018_0 value: I32(52)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_0;

/// @brief Field UNITY_2018_1 value: I32(53)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_1;

/// @brief Field UNITY_2018_2 value: I32(54)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_2;

/// @brief Field UNITY_2018_3 value: I32(55)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_3;

/// @brief Field UNITY_2018_4 value: I32(56)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_4;

/// @brief Field UNITY_2018_5 value: I32(57)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_5;

/// @brief Field UNITY_2018_6 value: I32(58)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_6;

/// @brief Field UNITY_2018_7 value: I32(59)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_7;

/// @brief Field UNITY_2018_8 value: I32(60)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_8;

/// @brief Field UNITY_2018_9 value: I32(61)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_9;

/// @brief Field UNITY_2018_MAX value: I32(62)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2018_MAX;

/// @brief Field UNITY_2019_0 value: I32(63)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_0;

/// @brief Field UNITY_2019_1 value: I32(64)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_1;

/// @brief Field UNITY_2019_2 value: I32(65)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_2;

/// @brief Field UNITY_2019_3 value: I32(66)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_3;

/// @brief Field UNITY_2019_4 value: I32(67)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_4;

/// @brief Field UNITY_2019_5 value: I32(68)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_5;

/// @brief Field UNITY_2019_6 value: I32(69)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_6;

/// @brief Field UNITY_2019_7 value: I32(70)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_7;

/// @brief Field UNITY_2019_8 value: I32(71)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_8;

/// @brief Field UNITY_2019_9 value: I32(72)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_9;

/// @brief Field UNITY_2019_MAX value: I32(73)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2019_MAX;

/// @brief Field UNITY_2020_0 value: I32(74)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_0;

/// @brief Field UNITY_2020_1 value: I32(75)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_1;

/// @brief Field UNITY_2020_2 value: I32(76)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_2;

/// @brief Field UNITY_2020_3 value: I32(77)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_3;

/// @brief Field UNITY_2020_4 value: I32(78)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_4;

/// @brief Field UNITY_2020_5 value: I32(79)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_5;

/// @brief Field UNITY_2020_6 value: I32(80)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_6;

/// @brief Field UNITY_2020_7 value: I32(81)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_7;

/// @brief Field UNITY_2020_8 value: I32(82)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_8;

/// @brief Field UNITY_2020_9 value: I32(83)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_9;

/// @brief Field UNITY_2020_MAX value: I32(84)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2020_MAX;

/// @brief Field UNITY_2021_0 value: I32(85)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_0;

/// @brief Field UNITY_2021_1 value: I32(86)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_1;

/// @brief Field UNITY_2021_2 value: I32(87)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_2;

/// @brief Field UNITY_2021_3 value: I32(88)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_3;

/// @brief Field UNITY_2021_4 value: I32(89)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_4;

/// @brief Field UNITY_2021_5 value: I32(90)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_5;

/// @brief Field UNITY_2021_6 value: I32(91)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_6;

/// @brief Field UNITY_2021_7 value: I32(92)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_7;

/// @brief Field UNITY_2021_8 value: I32(93)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_8;

/// @brief Field UNITY_2021_9 value: I32(94)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_9;

/// @brief Field UNITY_2021_MAX value: I32(95)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2021_MAX;

/// @brief Field UNITY_2022_0 value: I32(96)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_0;

/// @brief Field UNITY_2022_1 value: I32(97)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_1;

/// @brief Field UNITY_2022_2 value: I32(98)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_2;

/// @brief Field UNITY_2022_3 value: I32(99)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_3;

/// @brief Field UNITY_2022_4 value: I32(100)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_4;

/// @brief Field UNITY_2022_5 value: I32(101)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_5;

/// @brief Field UNITY_2022_6 value: I32(102)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_6;

/// @brief Field UNITY_2022_7 value: I32(103)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_7;

/// @brief Field UNITY_2022_8 value: I32(104)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_8;

/// @brief Field UNITY_2022_9 value: I32(105)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_9;

/// @brief Field UNITY_2022_MAX value: I32(106)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2022_MAX;

/// @brief Field UNITY_2023_0 value: I32(107)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_0;

/// @brief Field UNITY_2023_1 value: I32(108)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_1;

/// @brief Field UNITY_2023_2 value: I32(109)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_2;

/// @brief Field UNITY_2023_3 value: I32(110)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_3;

/// @brief Field UNITY_2023_4 value: I32(111)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_4;

/// @brief Field UNITY_2023_5 value: I32(112)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_5;

/// @brief Field UNITY_2023_6 value: I32(113)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_6;

/// @brief Field UNITY_2023_7 value: I32(114)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_7;

/// @brief Field UNITY_2023_8 value: I32(115)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_8;

/// @brief Field UNITY_2023_9 value: I32(116)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_9;

/// @brief Field UNITY_2023_MAX value: I32(117)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2023_MAX;

/// @brief Field UNITY_2_6 value: I32(0)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2_6;

/// @brief Field UNITY_2_6_1 value: I32(1)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_2_6_1;

/// @brief Field UNITY_3_0 value: I32(2)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_0;

/// @brief Field UNITY_3_0_0 value: I32(3)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_0_0;

/// @brief Field UNITY_3_1 value: I32(4)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_1;

/// @brief Field UNITY_3_2 value: I32(5)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_2;

/// @brief Field UNITY_3_3 value: I32(6)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_3;

/// @brief Field UNITY_3_4 value: I32(7)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_4;

/// @brief Field UNITY_3_5 value: I32(8)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_5;

/// @brief Field UNITY_3_5_2 value: I32(9)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_5_2;

/// @brief Field UNITY_3_5_7 value: I32(10)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_5_7;

/// @brief Field UNITY_3_MAX value: I32(11)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_3_MAX;

/// @brief Field UNITY_4_0 value: I32(12)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_0;

/// @brief Field UNITY_4_0_1 value: I32(13)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_0_1;

/// @brief Field UNITY_4_1 value: I32(14)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_1;

/// @brief Field UNITY_4_2 value: I32(15)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_2;

/// @brief Field UNITY_4_3 value: I32(16)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_3;

/// @brief Field UNITY_4_4 value: I32(17)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_4;

/// @brief Field UNITY_4_5 value: I32(18)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_5;

/// @brief Field UNITY_4_6 value: I32(19)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_6;

/// @brief Field UNITY_4_6_3p1 value: I32(20)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_6_3p1;

/// @brief Field UNITY_4_6_3p1Plus value: I32(21)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_6_3p1Plus;

/// @brief Field UNITY_4_7 value: I32(22)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_7;

/// @brief Field UNITY_4_8 value: I32(23)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_8;

/// @brief Field UNITY_4_9 value: I32(24)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_9;

/// @brief Field UNITY_4_MAX value: I32(25)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_4_MAX;

/// @brief Field UNITY_5_0 value: I32(26)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_0;

/// @brief Field UNITY_5_0_0p1 value: I32(27)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_0_0p1;

/// @brief Field UNITY_5_0_0p1Plus value: I32(28)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_0_0p1Plus;

/// @brief Field UNITY_5_0_1 value: I32(29)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_0_1;

/// @brief Field UNITY_5_0_2 value: I32(30)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_0_2;

/// @brief Field UNITY_5_1 value: I32(31)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_1;

/// @brief Field UNITY_5_2 value: I32(32)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_2;

/// @brief Field UNITY_5_3 value: I32(33)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_3;

/// @brief Field UNITY_5_4 value: I32(34)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_4;

/// @brief Field UNITY_5_5 value: I32(35)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_5;

/// @brief Field UNITY_5_6 value: I32(36)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_6;

/// @brief Field UNITY_5_7 value: I32(37)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_7;

/// @brief Field UNITY_5_8 value: I32(38)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_8;

/// @brief Field UNITY_5_9 value: I32(39)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_9;

/// @brief Field UNITY_5_MAX value: I32(40)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_5_MAX;

/// @brief Field UNITY_6000_0 value: I32(118)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_0;

/// @brief Field UNITY_6000_1 value: I32(119)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_1;

/// @brief Field UNITY_6000_2 value: I32(120)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_2;

/// @brief Field UNITY_6000_3 value: I32(121)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_3;

/// @brief Field UNITY_6000_4 value: I32(122)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_4;

/// @brief Field UNITY_6000_5 value: I32(123)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_5;

/// @brief Field UNITY_6000_6 value: I32(124)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_6;

/// @brief Field UNITY_6000_7 value: I32(125)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_7;

/// @brief Field UNITY_6000_8 value: I32(126)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_8;

/// @brief Field UNITY_6000_9 value: I32(127)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_9;

/// @brief Field UNITY_6000_MAX value: I32(128)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_6000_MAX;

/// @brief Field UNITY_7000_0 value: I32(129)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_0;

/// @brief Field UNITY_7000_1 value: I32(130)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_1;

/// @brief Field UNITY_7000_2 value: I32(131)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_2;

/// @brief Field UNITY_7000_3 value: I32(132)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_3;

/// @brief Field UNITY_7000_4 value: I32(133)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_4;

/// @brief Field UNITY_7000_5 value: I32(134)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_5;

/// @brief Field UNITY_7000_6 value: I32(135)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_6;

/// @brief Field UNITY_7000_7 value: I32(136)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_7;

/// @brief Field UNITY_7000_8 value: I32(137)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_8;

/// @brief Field UNITY_7000_9 value: I32(138)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_9;

/// @brief Field UNITY_7000_MAX value: I32(139)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_7000_MAX;

/// @brief Field UNITY_8000_0 value: I32(140)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_0;

/// @brief Field UNITY_8000_1 value: I32(141)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_1;

/// @brief Field UNITY_8000_2 value: I32(142)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_2;

/// @brief Field UNITY_8000_3 value: I32(143)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_3;

/// @brief Field UNITY_8000_4 value: I32(144)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_4;

/// @brief Field UNITY_8000_5 value: I32(145)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_5;

/// @brief Field UNITY_8000_6 value: I32(146)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_6;

/// @brief Field UNITY_8000_7 value: I32(147)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_7;

/// @brief Field UNITY_8000_8 value: I32(148)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_8;

/// @brief Field UNITY_8000_9 value: I32(149)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_9;

/// @brief Field UNITY_8000_MAX value: I32(150)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_8000_MAX;

/// @brief Field UNITY_9000_0 value: I32(151)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_0;

/// @brief Field UNITY_9000_1 value: I32(152)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_1;

/// @brief Field UNITY_9000_2 value: I32(153)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_2;

/// @brief Field UNITY_9000_3 value: I32(154)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_3;

/// @brief Field UNITY_9000_4 value: I32(155)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_4;

/// @brief Field UNITY_9000_5 value: I32(156)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_5;

/// @brief Field UNITY_9000_6 value: I32(157)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_6;

/// @brief Field UNITY_9000_7 value: I32(158)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_7;

/// @brief Field UNITY_9000_8 value: I32(159)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_8;

/// @brief Field UNITY_9000_9 value: I32(160)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_9;

/// @brief Field UNITY_9000_MAX value: I32(161)
static ::Rewired::Utils::UnityTools_UnityVersion const UNITY_9000_MAX;

/// @brief Field Unknown value: I32(1000)
static ::Rewired::Utils::UnityTools_UnityVersion const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::UnityTools_UnityVersion, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::UnityTools_UnityVersion) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils
// Dependencies 
namespace Rewired::Utils {
// Is value type: true
// CS Name: Rewired.Utils.UnityTools/GetComponentFlags
struct CORDL_TYPE UnityTools_GetComponentFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityTools_GetComponentFlags_Unwrapped
enum struct __UnityTools_GetComponentFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SkipInactiveGameObjectRelatives = static_cast<int32_t>(0x1),
__E_SkipDisabledComponents = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityTools_GetComponentFlags_Unwrapped () const noexcept {
return static_cast<__UnityTools_GetComponentFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityTools_GetComponentFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityTools_GetComponentFlags(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::Utils::UnityTools_GetComponentFlags const None;

/// @brief Field SkipDisabledComponents value: I32(2)
static ::Rewired::Utils::UnityTools_GetComponentFlags const SkipDisabledComponents;

/// @brief Field SkipInactiveGameObjectRelatives value: I32(1)
static ::Rewired::Utils::UnityTools_GetComponentFlags const SkipInactiveGameObjectRelatives;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::UnityTools_GetComponentFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::UnityTools_GetComponentFlags) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils
// Dependencies 
namespace Rewired::Utils {
// Is value type: true
// CS Name: Rewired.Utils.UnityTools/UnityVersionClass/tSBgjBnFQqqiPXLacFbtvAfiHlNi
struct CORDL_TYPE UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi_Unwrapped
enum struct __UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Beta = static_cast<int32_t>(0x1),
__E_Patch = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi_Unwrapped () const noexcept {
return static_cast<__UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi(int32_t  value__) noexcept;

/// @brief Field Beta value: I32(1)
static ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi const Beta;

/// @brief Field Normal value: I32(0)
static ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi const Normal;

/// @brief Field Patch value: I32(2)
static ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi const Patch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils
// Dependencies Rewired.Utils.UnityTools::UnityVersionClass::tSBgjBnFQqqiPXLacFbtvAfiHlNi, System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.UnityTools/UnityVersionClass
class CORDL_TYPE UnityTools_UnityVersionClass : public ::System::Object {
public:
// Declarations
using tSBgjBnFQqqiPXLacFbtvAfiHlNi = ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi;

/// @brief Field build, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_build, put=__cordl_internal_set_build)) int32_t  build;

/// @brief Field maintenance, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_maintenance, put=__cordl_internal_set_maintenance)) int32_t  maintenance;

/// @brief Field major, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_major, put=__cordl_internal_set_major)) int32_t  major;

/// @brief Field minor, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_minor, put=__cordl_internal_set_minor)) int32_t  minor;

/// @brief Field type, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  type;

/// @brief Method Comparison, addr 0x181943210, size 0x130, virtual false, abstract: false, final false
static inline int32_t Comparison(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b) ;

/// @brief Method Equals, addr 0x181943340, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x1815f4340, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValidVersionString, addr 0x1819433d0, size 0x120, virtual false, abstract: false, final false
static inline bool IsValidVersionString(::StringW  versionString) ;

static inline ::Rewired::Utils::UnityTools_UnityVersionClass* New_ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ToString, addr 0x1819434f0, size 0x150, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_build() const;

constexpr int32_t& __cordl_internal_get_build() ;

constexpr int32_t const& __cordl_internal_get_maintenance() const;

constexpr int32_t& __cordl_internal_get_maintenance() ;

constexpr int32_t const& __cordl_internal_get_major() const;

constexpr int32_t& __cordl_internal_get_major() ;

constexpr int32_t const& __cordl_internal_get_minor() const;

constexpr int32_t& __cordl_internal_get_minor() ;

constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi const& __cordl_internal_get_type() const;

constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_build(int32_t  value) ;

constexpr void __cordl_internal_set_maintenance(int32_t  value) ;

constexpr void __cordl_internal_set_major(int32_t  value) ;

constexpr void __cordl_internal_set_minor(int32_t  value) ;

constexpr void __cordl_internal_set_type(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  value) ;

/// @brief Method .ctor, addr 0x181943640, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method op_Equality, addr 0x181943810, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b) ;

/// @brief Method op_GreaterThan, addr 0x181943850, size 0x20, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x181943830, size 0x20, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b) ;

/// @brief Method op_Inequality, addr 0x181943870, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b) ;

/// @brief Method op_LessThan, addr 0x1819438b0, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThan(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b) ;

/// @brief Method op_LessThanOrEqual, addr 0x181943890, size 0x20, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b) ;

/// @brief Method otABaOmDhJexybezgUgTiXQUZuPS, addr 0x1819438d0, size 0x40, virtual false, abstract: false, final false
static inline int32_t otABaOmDhJexybezgUgTiXQUZuPS(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method vnWBZnCMEDcEKkHKtJUPYtwWjSMcA, addr 0x181943910, size 0x50, virtual false, abstract: false, final false
inline ::StringW vnWBZnCMEDcEKkHKtJUPYtwWjSMcA(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTools_UnityVersionClass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTools_UnityVersionClass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTools_UnityVersionClass(UnityTools_UnityVersionClass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTools_UnityVersionClass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTools_UnityVersionClass(UnityTools_UnityVersionClass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2932};

/// @brief Field major, offset: 0x10, size: 0x4, def value: None
 int32_t  ___major;

/// @brief Field minor, offset: 0x14, size: 0x4, def value: None
 int32_t  ___minor;

/// @brief Field maintenance, offset: 0x18, size: 0x4, def value: None
 int32_t  ___maintenance;

/// @brief Field type, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  ___type;

/// @brief Field build, offset: 0x20, size: 0x4, def value: None
 int32_t  ___build;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::UnityTools_UnityVersionClass, ___major) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_UnityVersionClass, ___minor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_UnityVersionClass, ___maintenance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_UnityVersionClass, ___type) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::UnityTools_UnityVersionClass, ___build) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::UnityTools_UnityVersionClass) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils
// Dependencies Rewired.Platforms.EditorPlatform, Rewired.Platforms.Platform, Rewired.Platforms.ScriptingAPILevel, Rewired.Platforms.ScriptingBackend, Rewired.Platforms.WebplayerPlatform, Rewired.Utils.UnityTools::UnityVersion, System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.UnityTools
class CORDL_TYPE UnityTools : public ::System::Object {
public:
// Declarations
using GetComponentFlags = ::Rewired::Utils::UnityTools_GetComponentFlags;

using LpYYlrQWsVFMrljjfmaCuXMaWQj = ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj;

using UnityVersion = ::Rewired::Utils::UnityTools_UnityVersion;

using UnityVersionClass = ::Rewired::Utils::UnityTools_UnityVersionClass;

/// @brief Field AglikHjmTOisAUfmokUJCruERkgyA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AglikHjmTOisAUfmokUJCruERkgyA, put=setStaticF_AglikHjmTOisAUfmokUJCruERkgyA)) ::Rewired::Platforms::ScriptingAPILevel  AglikHjmTOisAUfmokUJCruERkgyA;

/// @brief Field CIyOpxFeimZPRQDQdSHFCIGvCHxhA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CIyOpxFeimZPRQDQdSHFCIGvCHxhA, put=setStaticF_CIyOpxFeimZPRQDQdSHFCIGvCHxhA)) ::Rewired::Interfaces::IAndroidFallbackPlatformHelper*  CIyOpxFeimZPRQDQdSHFCIGvCHxhA;

/// @brief Field DCOFmwDjShWExbmQIXOhowVuhrKP, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DCOFmwDjShWExbmQIXOhowVuhrKP, put=setStaticF_DCOFmwDjShWExbmQIXOhowVuhrKP)) bool  DCOFmwDjShWExbmQIXOhowVuhrKP;

/// @brief Field INsApxjzvoobXlhRtgZBwFYkoNjJ, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_INsApxjzvoobXlhRtgZBwFYkoNjJ, put=setStaticF_INsApxjzvoobXlhRtgZBwFYkoNjJ)) bool  INsApxjzvoobXlhRtgZBwFYkoNjJ;

/// @brief Field JZEEjoJOuJfnoEjqOeBEYsxrjcnN, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_JZEEjoJOuJfnoEjqOeBEYsxrjcnN, put=setStaticF_JZEEjoJOuJfnoEjqOeBEYsxrjcnN)) ::Rewired::Platforms::ScriptingBackend  JZEEjoJOuJfnoEjqOeBEYsxrjcnN;

/// @brief Field KLPiPeZnCgnZiePzhcDgqrdpPedn, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_KLPiPeZnCgnZiePzhcDgqrdpPedn, put=setStaticF_KLPiPeZnCgnZiePzhcDgqrdpPedn)) ::Rewired::Platforms::Platform  KLPiPeZnCgnZiePzhcDgqrdpPedn;

/// @brief Field NsQnvTPEDsUYBQgbKNmWgjRuLTKc, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_NsQnvTPEDsUYBQgbKNmWgjRuLTKc, put=setStaticF_NsQnvTPEDsUYBQgbKNmWgjRuLTKc)) bool  NsQnvTPEDsUYBQgbKNmWgjRuLTKc;

/// @brief Field UZWyZCVCpdLUEwqepArqGAVlstfBA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UZWyZCVCpdLUEwqepArqGAVlstfBA, put=setStaticF_UZWyZCVCpdLUEwqepArqGAVlstfBA)) ::Rewired::Platforms::EditorPlatform  UZWyZCVCpdLUEwqepArqGAVlstfBA;

/// @brief Field XyPgRQIUlragbwjPHgJwzBbpjbbf, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_XyPgRQIUlragbwjPHgJwzBbpjbbf, put=setStaticF_XyPgRQIUlragbwjPHgJwzBbpjbbf)) bool  XyPgRQIUlragbwjPHgJwzBbpjbbf;

/// @brief Field YLKdpFBLarbrbJvXUyflQcKePoswA, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_YLKdpFBLarbrbJvXUyflQcKePoswA, put=setStaticF_YLKdpFBLarbrbJvXUyflQcKePoswA)) bool  YLKdpFBLarbrbJvXUyflQcKePoswA;

/// @brief Field ZHgjDGoKWlMgzMdZQsSdyHTJregP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ZHgjDGoKWlMgzMdZQsSdyHTJregP, put=setStaticF_ZHgjDGoKWlMgzMdZQsSdyHTJregP)) ::Rewired::Utils::UnityTools_UnityVersionClass*  ZHgjDGoKWlMgzMdZQsSdyHTJregP;

/// @brief Field agaCPsndihvwUCXLqNIUcDGUgHhp, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_agaCPsndihvwUCXLqNIUcDGUgHhp, put=setStaticF_agaCPsndihvwUCXLqNIUcDGUgHhp)) bool  agaCPsndihvwUCXLqNIUcDGUgHhp;

/// @brief Field fcnKoaswaaKBecvHdQHXLfPlqGmX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_fcnKoaswaaKBecvHdQHXLfPlqGmX, put=setStaticF_fcnKoaswaaKBecvHdQHXLfPlqGmX)) ::Rewired::Platforms::WebplayerPlatform  fcnKoaswaaKBecvHdQHXLfPlqGmX;

/// @brief Field ktlEJLroTySytIwVTogCKnAvGwxJ, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ktlEJLroTySytIwVTogCKnAvGwxJ, put=setStaticF_ktlEJLroTySytIwVTogCKnAvGwxJ)) bool  ktlEJLroTySytIwVTogCKnAvGwxJ;

/// @brief Field kvfDppkhtoFEIIadCayMkCnGWwBtc, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kvfDppkhtoFEIIadCayMkCnGWwBtc, put=setStaticF_kvfDppkhtoFEIIadCayMkCnGWwBtc)) ::StringW  kvfDppkhtoFEIIadCayMkCnGWwBtc;

/// @brief Field lzQFuZbObvrlHQHwmVaBGJCeCCiJA, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_lzQFuZbObvrlHQHwmVaBGJCeCCiJA, put=setStaticF_lzQFuZbObvrlHQHwmVaBGJCeCCiJA)) bool  lzQFuZbObvrlHQHwmVaBGJCeCCiJA;

/// @brief Field qZfApbzuluDbBfUVgSVSnYHoDhXH, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_qZfApbzuluDbBfUVgSVSnYHoDhXH, put=setStaticF_qZfApbzuluDbBfUVgSVSnYHoDhXH)) bool  qZfApbzuluDbBfUVgSVSnYHoDhXH;

/// @brief Field rzxSPEHBsLraakLAbClZfCbVpwDiA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rzxSPEHBsLraakLAbClZfCbVpwDiA, put=setStaticF_rzxSPEHBsLraakLAbClZfCbVpwDiA)) ::Rewired::Utils::Interfaces::IExternalTools*  rzxSPEHBsLraakLAbClZfCbVpwDiA;

/// @brief Field tJdZHgHBcVAbwzgUaEXJhKoedfxX, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_tJdZHgHBcVAbwzgUaEXJhKoedfxX, put=setStaticF_tJdZHgHBcVAbwzgUaEXJhKoedfxX)) bool  tJdZHgHBcVAbwzgUaEXJhKoedfxX;

/// @brief Field uUhgwQhiaKwKWmnFkEqjprualqbTA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_uUhgwQhiaKwKWmnFkEqjprualqbTA, put=setStaticF_uUhgwQhiaKwKWmnFkEqjprualqbTA)) ::Rewired::Utils::UnityTools_UnityVersion  uUhgwQhiaKwKWmnFkEqjprualqbTA;

/// @brief Field vSaehEGkdzplLtwppLHfJCUfqlmn, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vSaehEGkdzplLtwppLHfJCUfqlmn, put=setStaticF_vSaehEGkdzplLtwppLHfJCUfqlmn)) ::StringW  vSaehEGkdzplLtwppLHfJCUfqlmn;

/// @brief Field xRrnrVsRuqSRaLnRRasCGlaZHfdgA, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_xRrnrVsRuqSRaLnRRasCGlaZHfdgA, put=setStaticF_xRrnrVsRuqSRaLnRRasCGlaZHfdgA)) bool  xRrnrVsRuqSRaLnRRasCGlaZHfdgA;

/// @brief Method Copy, addr 0x18193d7e0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* Copy(::UnityEngine::AnimationCurve*  orig) ;

/// @brief Method DebugDrawCross, addr 0x18193d890, size 0x2a0, virtual false, abstract: false, final false
static inline void DebugDrawCross(::UnityEngine::Vector3  position, float_t  length, ::UnityEngine::Color  color) ;

/// @brief Method DebugDrawCross, addr 0x18193db30, size 0x2d0, virtual false, abstract: false, final false
static inline void DebugDrawCross(::UnityEngine::Vector3  position, float_t  length, ::UnityEngine::Color  color, float_t  duration) ;

/// @brief Method DetermineWebplayerPlatformType, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::WebplayerPlatform DetermineWebplayerPlatformType(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::EditorPlatform  editorPlatform) ;

/// @brief Method EnzbqvIEZHQYhntLWeuRLpmQJBqqA, addr 0x18193de00, size 0x60, virtual false, abstract: false, final false
static inline void EnzbqvIEZHQYhntLWeuRLpmQJBqqA() ;

/// @brief Method FindGameObjectInChildren, addr 0x18193de60, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> FindGameObjectInChildren(::UnityEngine::GameObject*  gameObject, ::StringW  name) ;

/// @brief Method FindGameObjectInChildren, addr 0x18193dee0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> FindGameObjectInChildren(::UnityEngine::Transform*  transform, ::StringW  name) ;

/// @brief Method FindTransformInChildren, addr 0x18193e030, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindTransformInChildren(::UnityEngine::GameObject*  gameObject, ::StringW  name) ;

/// @brief Method FindTransformInChildren, addr 0x18193df50, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindTransformInChildren(::UnityEngine::Transform*  transform, ::StringW  name) ;

/// @brief Method ForEachComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponent(::UnityEngine::Component*  component, ::System::Action_1<T>*  delegate) ;

/// @brief Method ForEachComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponent(::UnityEngine::Component*  component, ::System::Action_1<T>*  delegate, bool  includeChildren) ;

/// @brief Method ForEachComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponent(::UnityEngine::GameObject*  gameObject, ::System::Action_1<T>*  delegate) ;

/// @brief Method ForEachComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponent(::UnityEngine::GameObject*  gameObject, ::System::Action_1<T>*  delegate, bool  includeChildren) ;

/// @brief Method ForEachComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponent(::UnityEngine::Transform*  transform, ::System::Action_1<T>*  delegate) ;

/// @brief Method ForEachComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponent(::UnityEngine::Transform*  transform, ::System::Action_1<T>*  delegate, bool  includeChildren) ;

/// @brief Method ForEachComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponentInChildren(::UnityEngine::Component*  component, ::System::Action_1<T>*  delegate) ;

/// @brief Method ForEachComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponentInChildren(::UnityEngine::GameObject*  gameObject, ::System::Action_1<T>*  delegate) ;

/// @brief Method ForEachComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForEachComponentInChildren(::UnityEngine::Transform*  transform, ::System::Action_1<T>*  delegate) ;

/// @brief Method GaqDlBnZncUOMUIsSkusCdFeESFkA, addr 0x18193e090, size 0x150, virtual false, abstract: false, final false
static inline bool GaqDlBnZncUOMUIsSkusCdFeESFkA() ;

/// @brief Method GetComponent, addr 0x18193e7d0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponent(::UnityEngine::Component*  component, ::System::Type*  type) ;

/// @brief Method GetComponent, addr 0x18193e5e0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponent(::UnityEngine::Component*  component, ::System::Type*  type, bool  includeDisabledComponents) ;

/// @brief Method GetComponent, addr 0x18193e830, size 0x160, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponent(::UnityEngine::GameObject*  gameObject, ::System::Type*  type) ;

/// @brief Method GetComponent, addr 0x18193e650, size 0x180, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponent(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, bool  includeDisabledComponents) ;

/// @brief Method GetComponent, addr 0x18193e7d0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponent(::UnityEngine::Transform*  transform, ::System::Type*  type) ;

/// @brief Method GetComponent, addr 0x18193e5e0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponent(::UnityEngine::Transform*  transform, ::System::Type*  type, bool  includeDisabledComponents) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponent(::UnityEngine::Component*  component) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponent(::UnityEngine::Component*  component, bool  includeDisabledComponents) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponent(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponent(::UnityEngine::GameObject*  gameObject, bool  includeDisabledComponents) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponent(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponent(::UnityEngine::Transform*  transform, bool  includeDisabledComponents) ;

/// @brief Method GetComponentInChildren, addr 0x18193e250, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::UnityEngine::Component*  component, ::System::Type*  type) ;

/// @brief Method GetComponentInChildren, addr 0x18193e310, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::UnityEngine::Component*  component, ::System::Type*  type, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInChildren, addr 0x18193e2b0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::UnityEngine::GameObject*  gameObject, ::System::Type*  type) ;

/// @brief Method GetComponentInChildren, addr 0x18193e1e0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInChildren, addr 0x18193e380, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::UnityEngine::Transform*  transform, ::System::Type*  type) ;

/// @brief Method GetComponentInChildren, addr 0x18193e470, size 0x170, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::UnityEngine::Transform*  transform, ::System::Type*  type, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInChildren(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInChildren(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInChildren(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInParents(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInParents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInParents(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentInSelfOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrChildren(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentInSelfOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInSelfOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrChildren(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentInSelfOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInSelfOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrChildren(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentInSelfOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentInSelfOrParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrParents(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentInSelfOrParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrParents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentInSelfOrParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInSelfOrParents(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponents, addr 0x18193f790, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponents(::UnityEngine::Component*  component, ::System::Type*  type) ;

/// @brief Method GetComponents, addr 0x18193f700, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponents(::UnityEngine::Component*  component, ::System::Type*  type, bool  includeDisabledComponents) ;

/// @brief Method GetComponents, addr 0x18193fab0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Type*  type) ;

/// @brief Method GetComponents, addr 0x18193fb40, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, bool  includeDisabledComponents) ;

/// @brief Method GetComponents, addr 0x18193f790, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponents(::UnityEngine::Transform*  transform, ::System::Type*  type) ;

/// @brief Method GetComponents, addr 0x18193f700, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponents(::UnityEngine::Transform*  transform, ::System::Type*  type, bool  includeDisabledComponents) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponents(::UnityEngine::Component*  component) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponents(::UnityEngine::Component*  component, bool  includeDisabledComponents) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponents(::UnityEngine::GameObject*  gameObject, bool  includeDisabledComponents) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponents(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponents(::UnityEngine::Transform*  transform, bool  includeDisabledComponents) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponents(::UnityEngine::Component*  component, bool  includeDisabledComponents, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x18193f620, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetComponents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x18193fc10, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetComponents(::UnityEngine::Component*  component, ::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponents(::UnityEngine::GameObject*  gameObject, bool  includeDisabledComponents, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x18193f870, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x18193f470, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponents(::UnityEngine::Transform*  transform, bool  includeDisabledComponents, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x18193f690, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetComponents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponents, addr 0x18193fa20, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetComponents(::UnityEngine::Transform*  transform, ::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x18193ebe0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponentsInChildren(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentsInChildren, addr 0x18193eab0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponentsInChildren(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentsInChildren, addr 0x18193ec30, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponentsInChildren(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildren(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildren(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildren(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x18193e990, size 0x120, virtual false, abstract: false, final false
static inline int32_t GetComponentsInChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x18193ecf0, size 0x120, virtual false, abstract: false, final false
static inline int32_t GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x18193eb00, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetComponentsInChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInParents, addr 0x18193ef90, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponentsInParents(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentsInParents, addr 0x18193ee10, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponentsInParents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentsInParents, addr 0x18193ee60, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* GetComponentsInParents(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInParents(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInParents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInParents(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentsInParents, addr 0x18193f110, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetComponentsInParents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInParents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInParents, addr 0x18193efe0, size 0x130, virtual false, abstract: false, final false
static inline int32_t GetComponentsInParents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInParents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInParents, addr 0x18193ef20, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetComponentsInParents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInParents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInSelfAndChildren(::UnityEngine::Component*  component) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x18193f180, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x18193f400, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x18193f1f0, size 0x210, virtual false, abstract: false, final false
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append) ;

/// @brief Method GetComponentsInSelfAndChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append) ;

/// @brief Method GetCurrentPlatformResourecesDLLPaths, addr 0x18193fca0, size 0x110, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* GetCurrentPlatformResourecesDLLPaths() ;

/// @brief Method GetUnityInputAxisName, addr 0x18193fe20, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetUnityInputAxisName(int32_t  unityJoystickIndex, int32_t  axisIndex) ;

/// @brief Method GetUnityInputAxisNameByJoystickId, addr 0x18193fdb0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetUnityInputAxisNameByJoystickId(int32_t  unityJoystickId, int32_t  axisIndex) ;

/// @brief Method GetUnityInputButtonName, addr 0x18193fee0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW GetUnityInputButtonName(int32_t  unityJoystickIndex, int32_t  buttonIndex) ;

/// @brief Method GetUnityInputButtonNameByJoystickId, addr 0x18193fe90, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetUnityInputButtonNameByJoystickId(int32_t  unityJoystickId, int32_t  buttonIndex) ;

/// @brief Method Instantiate, addr 0x18193ff40, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Instantiate, addr 0x18193ff90, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method IsActiveAndEnabled, addr 0x18193ffe0, size 0xd0, virtual false, abstract: false, final false
static inline bool IsActiveAndEnabled(::UnityEngine::Component*  component) ;

/// @brief Method IsEnabled, addr 0x1819400b0, size 0xa0, virtual false, abstract: false, final false
static inline bool IsEnabled(::UnityEngine::Component*  component) ;

/// @brief Method IsNullOrDestroyed, addr 0x1808f96b0, size 0x1a50, virtual false, abstract: false, final false
static inline bool IsNullOrDestroyed(::System::Object*  object) ;

/// @brief Method IsNullOrDestroyed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsNullOrDestroyed(T  object) ;

/// @brief Method IsObjectInScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsObjectInScene(T  object) ;

/// @brief Method IsUnityVersionInRange, addr 0x181940150, size 0x240, virtual false, abstract: false, final false
static inline bool IsUnityVersionInRange(::StringW  minVersionStr, ::StringW  maxVersionStr) ;

/// @brief Method IsValidUnityJoystickName, addr 0x181940390, size 0xe0, virtual false, abstract: false, final false
static inline bool IsValidUnityJoystickName(::StringW  name) ;

/// @brief Method LAnBUsAuhZgGyEOLXhzqjnnTATWlA, addr 0x181940470, size 0xd0, virtual false, abstract: false, final false
static inline bool LAnBUsAuhZgGyEOLXhzqjnnTATWlA(::StringW  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method NiktslXGoqfLHkOYrhCVywWbpiux, addr 0x181940540, size 0xe0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::UnityTools_UnityVersion NiktslXGoqfLHkOYrhCVywWbpiux(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RWWwOmxlyoJXOaRjpWHBhAsgLrNh, addr 0x181940620, size 0x170, virtual false, abstract: false, final false
static inline void RWWwOmxlyoJXOaRjpWHBhAsgLrNh() ;

/// @brief Method TransformDirection, addr 0x181940880, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to) ;

/// @brief Method TransformDirection, addr 0x181940790, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Vector3  direction) ;

/// @brief Method TransformPoint, addr 0x181940a60, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to) ;

/// @brief Method TransformPoint, addr 0x181940970, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Vector3  point) ;

/// @brief Method TransformRect, addr 0x181940b50, size 0x2d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect TransformRect(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Rect  rect) ;

/// @brief Method TransformVector, addr 0x181940e20, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to) ;

/// @brief Method TransformVector, addr 0x181940fb0, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Vector3  vector) ;

/// @brief Method UpNqDZUFCdERcqqmOTVGiVdoxVsL, addr 0x181941140, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ButtonStateFlags UpNqDZUFCdERcqqmOTVGiVdoxVsL(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aBlRVhonicQEiqyerYCNTbygKolj, addr 0x1819411d0, size 0xe0, virtual false, abstract: false, final false
static inline ::Rewired::Utils::UnityTools_UnityVersion aBlRVhonicQEiqyerYCNTbygKolj(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method acFriRFiEwQsVEWppYQVsZLPzIrI, addr 0x1819412b0, size 0x70, virtual false, abstract: false, final false
static inline ::System::Type* acFriRFiEwQsVEWppYQVsZLPzIrI(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method czojIValaFRLiQVBqmmeCjxmlBQj, addr 0x181941320, size 0x1380, virtual false, abstract: false, final false
static inline ::Rewired::Utils::UnityTools_UnityVersion czojIValaFRLiQVBqmmeCjxmlBQj(::StringW  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Platforms::ScriptingAPILevel getStaticF_AglikHjmTOisAUfmokUJCruERkgyA() ;

static inline ::Rewired::Interfaces::IAndroidFallbackPlatformHelper* getStaticF_CIyOpxFeimZPRQDQdSHFCIGvCHxhA() ;

static inline bool getStaticF_DCOFmwDjShWExbmQIXOhowVuhrKP() ;

static inline bool getStaticF_INsApxjzvoobXlhRtgZBwFYkoNjJ() ;

static inline ::Rewired::Platforms::ScriptingBackend getStaticF_JZEEjoJOuJfnoEjqOeBEYsxrjcnN() ;

static inline ::Rewired::Platforms::Platform getStaticF_KLPiPeZnCgnZiePzhcDgqrdpPedn() ;

static inline bool getStaticF_NsQnvTPEDsUYBQgbKNmWgjRuLTKc() ;

static inline ::Rewired::Platforms::EditorPlatform getStaticF_UZWyZCVCpdLUEwqepArqGAVlstfBA() ;

static inline bool getStaticF_XyPgRQIUlragbwjPHgJwzBbpjbbf() ;

static inline bool getStaticF_YLKdpFBLarbrbJvXUyflQcKePoswA() ;

static inline ::Rewired::Utils::UnityTools_UnityVersionClass* getStaticF_ZHgjDGoKWlMgzMdZQsSdyHTJregP() ;

static inline bool getStaticF_agaCPsndihvwUCXLqNIUcDGUgHhp() ;

static inline ::Rewired::Platforms::WebplayerPlatform getStaticF_fcnKoaswaaKBecvHdQHXLfPlqGmX() ;

static inline bool getStaticF_ktlEJLroTySytIwVTogCKnAvGwxJ() ;

static inline ::StringW getStaticF_kvfDppkhtoFEIIadCayMkCnGWwBtc() ;

static inline bool getStaticF_lzQFuZbObvrlHQHwmVaBGJCeCCiJA() ;

static inline bool getStaticF_qZfApbzuluDbBfUVgSVSnYHoDhXH() ;

static inline ::Rewired::Utils::Interfaces::IExternalTools* getStaticF_rzxSPEHBsLraakLAbClZfCbVpwDiA() ;

static inline bool getStaticF_tJdZHgHBcVAbwzgUaEXJhKoedfxX() ;

static inline ::Rewired::Utils::UnityTools_UnityVersion getStaticF_uUhgwQhiaKwKWmnFkEqjprualqbTA() ;

static inline ::StringW getStaticF_vSaehEGkdzplLtwppLHfJCUfqlmn() ;

static inline bool getStaticF_xRrnrVsRuqSRaLnRRasCGlaZHfdgA() ;

/// @brief Method get_editorPlatform, addr 0x181942710, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::EditorPlatform get_editorPlatform() ;

/// @brief Method get_editorPlatformMatchesBuildPlatform, addr 0x1819426a0, size 0x70, virtual false, abstract: false, final false
static inline bool get_editorPlatformMatchesBuildPlatform() ;

/// @brief Method get_effectivePlatform, addr 0x181942740, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::Platform get_effectivePlatform() ;

/// @brief Method get_externalTools, addr 0x1819427b0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Interfaces::IExternalTools* get_externalTools() ;

/// @brief Method get_isAndroidPlatform, addr 0x1819427e0, size 0x50, virtual false, abstract: false, final false
static inline bool get_isAndroidPlatform() ;

/// @brief Method get_isDebugBuild, addr 0x181942830, size 0x30, virtual false, abstract: false, final false
static inline bool get_isDebugBuild() ;

/// @brief Method get_isEditor, addr 0x181942860, size 0x30, virtual false, abstract: false, final false
static inline bool get_isEditor() ;

/// @brief Method get_isIOSPlatform, addr 0x181942890, size 0x40, virtual false, abstract: false, final false
static inline bool get_isIOSPlatform() ;

/// @brief Method get_isInitialized, addr 0x1819428d0, size 0x20, virtual false, abstract: false, final false
static inline bool get_isInitialized() ;

/// @brief Method get_isPlaying, addr 0x1819428f0, size 0x20, virtual false, abstract: false, final false
static inline bool get_isPlaying() ;

/// @brief Method get_isStandalonePlatform, addr 0x181942910, size 0x50, virtual false, abstract: false, final false
static inline bool get_isStandalonePlatform() ;

/// @brief Method get_isSupportedVersion3, addr 0x181942960, size 0x30, virtual false, abstract: false, final false
static inline bool get_isSupportedVersion3() ;

/// @brief Method get_isSupportedVersion4, addr 0x181942990, size 0x30, virtual false, abstract: false, final false
static inline bool get_isSupportedVersion4() ;

/// @brief Method get_logToDebugLog, addr 0x1819429c0, size 0xb0, virtual false, abstract: false, final false
static inline bool get_logToDebugLog() ;

/// @brief Method get_platform, addr 0x181942a70, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::Platform get_platform() ;

/// @brief Method get_scriptingAPILevel, addr 0x181942aa0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::ScriptingAPILevel get_scriptingAPILevel() ;

/// @brief Method get_scriptingBackend, addr 0x181942ac0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::ScriptingBackend get_scriptingBackend() ;

/// @brief Method get_supports2DColliders, addr 0x181942ae0, size 0x30, virtual false, abstract: false, final false
static inline bool get_supports2DColliders() ;

/// @brief Method get_supportsNestedPrefabs, addr 0x181942b10, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsNestedPrefabs() ;

/// @brief Method get_supportsPhysicalKeys, addr 0x181942b40, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsPhysicalKeys() ;

/// @brief Method get_supportsSortingLayers, addr 0x181942ae0, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsSortingLayers() ;

/// @brief Method get_supportsTouchControls, addr 0x181942b70, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsTouchControls() ;

/// @brief Method get_supportsUnityUI, addr 0x181942bd0, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsUnityUI() ;

/// @brief Method get_supportsUnityUIGraphicRaycastTarget, addr 0x181942ba0, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsUnityUIGraphicRaycastTarget() ;

/// @brief Method get_supportsWindowsAppStore, addr 0x181942c00, size 0x40, virtual false, abstract: false, final false
static inline bool get_supportsWindowsAppStore() ;

/// @brief Method get_supportsWindowsUWP, addr 0x181942ba0, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsWindowsUWP() ;

/// @brief Method get_supportsWindowsUWP_IL2CPP, addr 0x181942c40, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsWindowsUWP_IL2CPP() ;

/// @brief Method get_supportsXboxOne, addr 0x181942c70, size 0x30, virtual false, abstract: false, final false
static inline bool get_supportsXboxOne() ;

/// @brief Method get_unityVersion, addr 0x181942d10, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::UnityTools_UnityVersion get_unityVersion() ;

/// @brief Method get_unityVersionObj, addr 0x181942ca0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::UnityTools_UnityVersionClass* get_unityVersionObj() ;

/// @brief Method get_unityVersionString, addr 0x181942cd0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_unityVersionString() ;

/// @brief Method get_webplayerPlatform, addr 0x181942d40, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::WebplayerPlatform get_webplayerPlatform() ;

/// @brief Method get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull, addr 0x181942d70, size 0x30, virtual false, abstract: false, final false
static inline bool get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull() ;

/// @brief Method get_windowsStandalone_supportsRawInputForwarding, addr 0x181942da0, size 0x30, virtual false, abstract: false, final false
static inline bool get_windowsStandalone_supportsRawInputForwarding() ;

/// @brief Method hYZyUEgcAEBKYMmGRSFeJWwyDbQi, addr 0x181942dd0, size 0x10, virtual false, abstract: false, final false
static inline bool hYZyUEgcAEBKYMmGRSFeJWwyDbQi() ;

/// @brief Method hgEyUgkuECCCGcpZMHqxUibYaAZX, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
static inline  hgEyUgkuECCCGcpZMHqxUibYaAZX(  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method lVBOXYWbvFetWdJqutDAJWPcTQDM, addr 0x181942de0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Interfaces::IAndroidFallbackPlatformHelper* lVBOXYWbvFetWdJqutDAJWPcTQDM() ;

/// @brief Method lzgEIwerDsVUUbjluNONuBhVyoWn, addr 0x181942e00, size 0x30, virtual false, abstract: false, final false
static inline void lzgEIwerDsVUUbjluNONuBhVyoWn(::Rewired::Interfaces::IAndroidFallbackPlatformHelper*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method odHhbxEOCYeHPDOjTYfgIdMyHoKFA, addr 0x181942e30, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ButtonStateFlags odHhbxEOCYeHPDOjTYfgIdMyHoKFA(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF_AglikHjmTOisAUfmokUJCruERkgyA(::Rewired::Platforms::ScriptingAPILevel  value) ;

static inline void setStaticF_CIyOpxFeimZPRQDQdSHFCIGvCHxhA(::Rewired::Interfaces::IAndroidFallbackPlatformHelper*  value) ;

static inline void setStaticF_DCOFmwDjShWExbmQIXOhowVuhrKP(bool  value) ;

static inline void setStaticF_INsApxjzvoobXlhRtgZBwFYkoNjJ(bool  value) ;

static inline void setStaticF_JZEEjoJOuJfnoEjqOeBEYsxrjcnN(::Rewired::Platforms::ScriptingBackend  value) ;

static inline void setStaticF_KLPiPeZnCgnZiePzhcDgqrdpPedn(::Rewired::Platforms::Platform  value) ;

static inline void setStaticF_NsQnvTPEDsUYBQgbKNmWgjRuLTKc(bool  value) ;

static inline void setStaticF_UZWyZCVCpdLUEwqepArqGAVlstfBA(::Rewired::Platforms::EditorPlatform  value) ;

static inline void setStaticF_XyPgRQIUlragbwjPHgJwzBbpjbbf(bool  value) ;

static inline void setStaticF_YLKdpFBLarbrbJvXUyflQcKePoswA(bool  value) ;

static inline void setStaticF_ZHgjDGoKWlMgzMdZQsSdyHTJregP(::Rewired::Utils::UnityTools_UnityVersionClass*  value) ;

static inline void setStaticF_agaCPsndihvwUCXLqNIUcDGUgHhp(bool  value) ;

static inline void setStaticF_fcnKoaswaaKBecvHdQHXLfPlqGmX(::Rewired::Platforms::WebplayerPlatform  value) ;

static inline void setStaticF_ktlEJLroTySytIwVTogCKnAvGwxJ(bool  value) ;

static inline void setStaticF_kvfDppkhtoFEIIadCayMkCnGWwBtc(::StringW  value) ;

static inline void setStaticF_lzQFuZbObvrlHQHwmVaBGJCeCCiJA(bool  value) ;

static inline void setStaticF_qZfApbzuluDbBfUVgSVSnYHoDhXH(bool  value) ;

static inline void setStaticF_rzxSPEHBsLraakLAbClZfCbVpwDiA(::Rewired::Utils::Interfaces::IExternalTools*  value) ;

static inline void setStaticF_tJdZHgHBcVAbwzgUaEXJhKoedfxX(bool  value) ;

static inline void setStaticF_uUhgwQhiaKwKWmnFkEqjprualqbTA(::Rewired::Utils::UnityTools_UnityVersion  value) ;

static inline void setStaticF_vSaehEGkdzplLtwppLHfJCUfqlmn(::StringW  value) ;

static inline void setStaticF_xRrnrVsRuqSRaLnRRasCGlaZHfdgA(bool  value) ;

/// @brief Method teBryrkDbxKezlrbaBhbzpVLbaWL, addr 0x181942e90, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Type* teBryrkDbxKezlrbaBhbzpVLbaWL(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method yczdFfdNBfiXfvlUkYSlsDxSiSQTA, addr 0x181942f40, size 0x2d0, virtual false, abstract: false, final false
static inline void yczdFfdNBfiXfvlUkYSlsDxSiSQTA(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTools(UnityTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTools(UnityTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2933};

/// @brief Field ctLpchExytJeRKRvJpwsihUNgLXw value: I32(26)
static ::Rewired::Utils::UnityTools_UnityVersion const ctLpchExytJeRKRvJpwsihUNgLXw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::UnityTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
