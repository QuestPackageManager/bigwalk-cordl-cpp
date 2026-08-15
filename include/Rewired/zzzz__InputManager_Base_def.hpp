#pragma once
// IWYU pragma private; include "Rewired/InputManager_Base.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__ScriptingAPILevel_def.hpp"
#include "Rewired/Platforms/zzzz__ScriptingBackend_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "Rewired/Utils/zzzz__UnityTools_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager_Base)
namespace Rewired::Config {
struct UpdateLoopSetting;
}
namespace Rewired::Data {
class ConfigVars;
}
namespace Rewired::Data {
class ControllerDataFiles;
}
namespace Rewired::Data {
class UserData;
}
namespace Rewired::Platforms {
struct EditorPlatform;
}
namespace Rewired::Platforms {
struct Platform;
}
namespace Rewired::Utils::Interfaces {
class IExternalTools;
}
namespace Rewired::Utils {
struct UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj;
}
namespace Rewired {
struct InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk;
}
namespace Rewired {
struct InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK;
}
namespace Rewired {
class InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Rewired {
struct InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk;
}
namespace Rewired {
class InputManager_Base;
}
namespace Rewired {
class InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA;
}
namespace Rewired {
struct InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK;
}
// Write type traits
MARK_VAL_T(::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk);
MARK_REF_T(::Rewired::InputManager_Base*);
MARK_REF_T(::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*);
MARK_VAL_T(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK);
DEFINE_IL2CPP_CLASS(::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk, "Rewired", "InputManager_Base/LKDBpcjkHdeGcSOOudAQsdoQJFvk");
DEFINE_IL2CPP_CLASS(::Rewired::InputManager_Base*, "Rewired", "InputManager_Base");
DEFINE_IL2CPP_CLASS(::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*, "Rewired", "InputManager_Base/pkJdeJjVFYNSRZWZwlvrncCszHrEA");
DEFINE_IL2CPP_CLASS(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK, "Rewired", "InputManager_Base/bNLQCfEdFBnhyaWgEhnweLQGFlVK");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputManager_Base/LKDBpcjkHdeGcSOOudAQsdoQJFvk
struct CORDL_TYPE InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk_Unwrapped
enum struct __InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk_Unwrapped : int32_t {
__E_Initialization = static_cast<int32_t>(0x0),
__E_Update = static_cast<int32_t>(0x1),
__E_Destroy = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk_Unwrapped () const noexcept {
return static_cast<__InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk(int32_t  value__) noexcept;

/// @brief Field Destroy value: I32(2)
static ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk const Destroy;

/// @brief Field Initialization value: I32(0)
static ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk const Initialization;

/// @brief Field Update value: I32(1)
static ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1978};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Platforms.EditorPlatform, Rewired.Platforms.Platform, Rewired.Platforms.WebplayerPlatform
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputManager_Base/bNLQCfEdFBnhyaWgEhnweLQGFlVK
struct CORDL_TYPE InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK() ;

// Ctor Parameters [CppParam { name: "tQZTFrKtpEfsLaIrHyTmHiCZYEXu", ty: "::Rewired::Platforms::Platform", modifiers: "", def_value: None }, CppParam { name: "qRWoVmSQINKzQxFAkVhjERezLpiK", ty: "::Rewired::Platforms::EditorPlatform", modifiers: "", def_value: None }, CppParam { name: "wMgHpPInWtROVjFUzxoJZXWqAANw", ty: "::Rewired::Platforms::WebplayerPlatform", modifiers: "", def_value: None }]
constexpr InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK(::Rewired::Platforms::Platform  tQZTFrKtpEfsLaIrHyTmHiCZYEXu, ::Rewired::Platforms::EditorPlatform  qRWoVmSQINKzQxFAkVhjERezLpiK, ::Rewired::Platforms::WebplayerPlatform  wMgHpPInWtROVjFUzxoJZXWqAANw) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1979};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field tQZTFrKtpEfsLaIrHyTmHiCZYEXu, offset: 0x0, size: 0x4, def value: None
 ::Rewired::Platforms::Platform  tQZTFrKtpEfsLaIrHyTmHiCZYEXu;

/// @brief Field qRWoVmSQINKzQxFAkVhjERezLpiK, offset: 0x4, size: 0x4, def value: None
 ::Rewired::Platforms::EditorPlatform  qRWoVmSQINKzQxFAkVhjERezLpiK;

/// @brief Field wMgHpPInWtROVjFUzxoJZXWqAANw, offset: 0x8, size: 0x4, def value: None
 ::Rewired::Platforms::WebplayerPlatform  wMgHpPInWtROVjFUzxoJZXWqAANw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK, tQZTFrKtpEfsLaIrHyTmHiCZYEXu) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK, qRWoVmSQINKzQxFAkVhjERezLpiK) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK, wMgHpPInWtROVjFUzxoJZXWqAANw) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK) == 0xc, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.UnityTools::LpYYlrQWsVFMrljjfmaCuXMaWQj, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputManager_Base/pkJdeJjVFYNSRZWZwlvrncCszHrEA
class CORDL_TYPE InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA : public ::System::Object {
public:
// Declarations
/// @brief Field QRzbyugyjJVRQccKVmajjjbQhjIjA, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_QRzbyugyjJVRQccKVmajjjbQhjIjA, put=__cordl_internal_set_QRzbyugyjJVRQccKVmajjjbQhjIjA)) ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj  QRzbyugyjJVRQccKVmajjjbQhjIjA;

/// @brief Field atFViIsrUeBWrJJhasrmezOvjjok, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_atFViIsrUeBWrJJhasrmezOvjjok, put=__cordl_internal_set_atFViIsrUeBWrJJhasrmezOvjjok)) ::StringW  atFViIsrUeBWrJJhasrmezOvjjok;

/// @brief Field hvKmfmPYkfUwOskJnXDtYFgqksFP, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hvKmfmPYkfUwOskJnXDtYFgqksFP, put=__cordl_internal_set_hvKmfmPYkfUwOskJnXDtYFgqksFP)) ::UnityW<::Rewired::InputManager_Base>  hvKmfmPYkfUwOskJnXDtYFgqksFP;

static inline ::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA* New_ctor() ;

/// @brief Method SbrIDCVfjCSNuMZywNcSDKQEqTkX, addr 0x1804e6790, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj SbrIDCVfjCSNuMZywNcSDKQEqTkX() ;

constexpr ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj const& __cordl_internal_get_QRzbyugyjJVRQccKVmajjjbQhjIjA() const;

constexpr ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj& __cordl_internal_get_QRzbyugyjJVRQccKVmajjjbQhjIjA() ;

constexpr ::StringW const& __cordl_internal_get_atFViIsrUeBWrJJhasrmezOvjjok() const;

constexpr ::StringW& __cordl_internal_get_atFViIsrUeBWrJJhasrmezOvjjok() ;

constexpr ::UnityW<::Rewired::InputManager_Base> const& __cordl_internal_get_hvKmfmPYkfUwOskJnXDtYFgqksFP() const;

constexpr ::UnityW<::Rewired::InputManager_Base>& __cordl_internal_get_hvKmfmPYkfUwOskJnXDtYFgqksFP() ;

constexpr void __cordl_internal_set_QRzbyugyjJVRQccKVmajjjbQhjIjA(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj  value) ;

constexpr void __cordl_internal_set_atFViIsrUeBWrJJhasrmezOvjjok(::StringW  value) ;

constexpr void __cordl_internal_set_hvKmfmPYkfUwOskJnXDtYFgqksFP(::UnityW<::Rewired::InputManager_Base>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method tdttgEAQwLgRpjqsYyuygHLpsUKEA, addr 0x18196e100, size 0xc0, virtual false, abstract: false, final false
inline void tdttgEAQwLgRpjqsYyuygHLpsUKEA(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA(InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA(InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1980};

/// @brief Field hvKmfmPYkfUwOskJnXDtYFgqksFP, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Rewired::InputManager_Base>  ___hvKmfmPYkfUwOskJnXDtYFgqksFP;

/// @brief Field QRzbyugyjJVRQccKVmajjjbQhjIjA, offset: 0x18, size: 0x28, def value: None
 ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj  ___QRzbyugyjJVRQccKVmajjjbQhjIjA;

/// @brief Field atFViIsrUeBWrJJhasrmezOvjjok, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___atFViIsrUeBWrJJhasrmezOvjjok;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA, ___hvKmfmPYkfUwOskJnXDtYFgqksFP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA, ___QRzbyugyjJVRQccKVmajjjbQhjIjA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA, ___atFViIsrUeBWrJJhasrmezOvjjok) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA) == 0x48, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Platforms.EditorPlatform, Rewired.Platforms.Platform, Rewired.Platforms.ScriptingAPILevel, Rewired.Platforms.ScriptingBackend, Rewired.Platforms.WebplayerPlatform, UnityEngine.MonoBehaviour
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputManager_Base
class CORDL_TYPE InputManager_Base : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LKDBpcjkHdeGcSOOudAQsdoQJFvk = ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk;

using bNLQCfEdFBnhyaWgEhnweLQGFlVK = ::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK;

using pkJdeJjVFYNSRZWZwlvrncCszHrEA = ::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA;

/// @brief Field JEXkNwlDQBkZWSQhjuVDAQjAxZwA, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_JEXkNwlDQBkZWSQhjuVDAQjAxZwA, put=__cordl_internal_set_JEXkNwlDQBkZWSQhjuVDAQjAxZwA)) bool  JEXkNwlDQBkZWSQhjuVDAQjAxZwA;

/// @brief Field TSngeUkRfxRCDKonlipVlAVyIGjSA, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_TSngeUkRfxRCDKonlipVlAVyIGjSA, put=__cordl_internal_set_TSngeUkRfxRCDKonlipVlAVyIGjSA)) bool  TSngeUkRfxRCDKonlipVlAVyIGjSA;

/// @brief Field _controllerDataFiles, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerDataFiles, put=__cordl_internal_set__controllerDataFiles)) ::UnityW<::Rewired::Data::ControllerDataFiles>  _controllerDataFiles;

/// @brief Field _detectedPlatformInEditor, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__detectedPlatformInEditor, put=__cordl_internal_set__detectedPlatformInEditor)) bool  _detectedPlatformInEditor;

/// @brief Field _dontDestroyOnLoad, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__dontDestroyOnLoad, put=__cordl_internal_set__dontDestroyOnLoad)) bool  _dontDestroyOnLoad;

/// @brief Field _userData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__userData, put=__cordl_internal_set__userData)) ::Rewired::Data::UserData*  _userData;

 __declspec(property(get=get_dataFiles, put=set_dataFiles)) ::UnityW<::Rewired::Data::ControllerDataFiles>  dataFiles;

/// @brief Field editorPlatform, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_editorPlatform, put=__cordl_internal_set_editorPlatform)) ::Rewired::Platforms::EditorPlatform  editorPlatform;

/// @brief Field ibRDxZjJNRfvTjLlFapqOIdyLbWg, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_ibRDxZjJNRfvTjLlFapqOIdyLbWg, put=__cordl_internal_set_ibRDxZjJNRfvTjLlFapqOIdyLbWg)) bool  ibRDxZjJNRfvTjLlFapqOIdyLbWg;

/// @brief Field isCompiling, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCompiling, put=__cordl_internal_set_isCompiling)) bool  isCompiling;

/// @brief Field isEditor, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEditor, put=__cordl_internal_set_isEditor)) bool  isEditor;

 __declspec(property(get=get_isRunningInEditMode)) bool  isRunningInEditMode;

/// @brief Field platform, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::Rewired::Platforms::Platform  platform;

 __declspec(property(get=get_runInEditMode, put=set_runInEditMode)) bool  runInEditMode;

/// @brief Field scriptingAPILevel, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_scriptingAPILevel, put=__cordl_internal_set_scriptingAPILevel)) ::Rewired::Platforms::ScriptingAPILevel  scriptingAPILevel;

/// @brief Field scriptingBackend, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scriptingBackend, put=__cordl_internal_set_scriptingBackend)) ::Rewired::Platforms::ScriptingBackend  scriptingBackend;

 __declspec(property(get=get_userData, put=set_userData)) ::Rewired::Data::UserData*  userData;

/// @brief Field webplayerPlatform, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_webplayerPlatform, put=__cordl_internal_set_webplayerPlatform)) ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform;

/// @brief Field ztQftwyUUjLrbRIRQWPwpZMOYdpI, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_ztQftwyUUjLrbRIRQWPwpZMOYdpI, put=__cordl_internal_set_ztQftwyUUjLrbRIRQWPwpZMOYdpI)) bool  ztQftwyUUjLrbRIRQWPwpZMOYdpI;

/// @brief Method Awake, addr 0x18195f2b0, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckRecompile, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CheckRecompile() ;

/// @brief Method DetectPlatform, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DetectPlatform() ;

/// @brief Method DoUpdate, addr 0x18195f310, size 0x150, virtual false, abstract: false, final false
inline void DoUpdate(::Rewired::UpdateLoopType  updateLoopType, ::Rewired::Config::UpdateLoopSetting  updateLoopSettingBit) ;

/// @brief Method DontDestroyOnLoad, addr 0x18195f460, size 0x60, virtual false, abstract: false, final false
inline void DontDestroyOnLoad() ;

/// @brief Method FixedUpdate, addr 0x18195f4c0, size 0x70, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetEditorPlatform, addr 0x18195f530, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Platforms::EditorPlatform GetEditorPlatform() ;

/// @brief Method GetExternalTools, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IExternalTools* GetExternalTools() ;

/// @brief Method GetSupportedEditModeControllerTypes, addr 0x18195f580, size 0xb0, virtual false, abstract: false, final false
inline void GetSupportedEditModeControllerTypes(::by_ref<bool>  keyboardSupported, ::by_ref<bool>  mouseSupported, ::by_ref<bool>  joystickSupported) ;

/// @brief Method IRFbyUCEOgXyDJXDymDWnplbTRuNA, addr 0x180511530, size 0x10, virtual false, abstract: false, final false
inline void IRFbyUCEOgXyDJXDymDWnplbTRuNA(::Rewired::Platforms::Platform  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IsEditModeSupported, addr 0x18195f630, size 0xd0, virtual false, abstract: false, final false
inline bool IsEditModeSupported() ;

/// @brief Method LTqIJVUazuDyfhaOlNHlxPjwZyFP, addr 0x18195f700, size 0x120, virtual false, abstract: false, final false
inline void LTqIJVUazuDyfhaOlNHlxPjwZyFP(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::StringW>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method LateUpdate, addr 0x18195f820, size 0x80, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Rewired::InputManager_Base* New_ctor() ;

/// @brief Method NieYkMXPIoqwumNrdnIuswMkCEEj, addr 0x18195f8a0, size 0xc0, virtual false, abstract: false, final false
inline ::StringW NieYkMXPIoqwumNrdnIuswMkCEEj() ;

/// @brief Method OnApplicationFocus, addr 0x18195f960, size 0x40, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  isFocused) ;

/// @brief Method OnApplicationPause, addr 0x18195f9a0, size 0x40, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  isPaused) ;

/// @brief Method OnDeinitialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeinitialized() ;

/// @brief Method OnDestroy, addr 0x18195f9e0, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18195f9f0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18195fa40, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGUIUpdate, addr 0x18195fad0, size 0x70, virtual false, abstract: false, final false
inline void OnGUIUpdate() ;

/// @brief Method OnInitialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnInitialized() ;

/// @brief Method OnSceneLoaded, addr 0x18195fb40, size 0x60, virtual false, abstract: false, final false
inline void OnSceneLoaded() ;

/// @brief Method RecompileEnd, addr 0x18195fba0, size 0x30, virtual false, abstract: false, final false
inline void RecompileEnd() ;

/// @brief Method RecompileStart, addr 0x18195fbd0, size 0x30, virtual false, abstract: false, final false
inline void RecompileStart() ;

/// @brief Method ResetAll, addr 0x18195fc00, size 0x50, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method Start, addr 0x18195fc50, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryStartRunInEditMode, addr 0x18195fcb0, size 0x340, virtual false, abstract: false, final false
inline void TryStartRunInEditMode() ;

/// @brief Method TryStopRunInEditMode, addr 0x18195fff0, size 0x80, virtual false, abstract: false, final false
inline void TryStopRunInEditMode() ;

/// @brief Method Update, addr 0x181960070, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WwPPqWwIBzvIlccDkseItKfZJUbW, addr 0x1819600e0, size 0x650, virtual false, abstract: false, final false
inline void WwPPqWwIBzvIlccDkseItKfZJUbW() ;

constexpr bool const& __cordl_internal_get_JEXkNwlDQBkZWSQhjuVDAQjAxZwA() const;

constexpr bool& __cordl_internal_get_JEXkNwlDQBkZWSQhjuVDAQjAxZwA() ;

constexpr bool const& __cordl_internal_get_TSngeUkRfxRCDKonlipVlAVyIGjSA() const;

constexpr bool& __cordl_internal_get_TSngeUkRfxRCDKonlipVlAVyIGjSA() ;

constexpr ::UnityW<::Rewired::Data::ControllerDataFiles> const& __cordl_internal_get__controllerDataFiles() const;

constexpr ::UnityW<::Rewired::Data::ControllerDataFiles>& __cordl_internal_get__controllerDataFiles() ;

constexpr bool const& __cordl_internal_get__detectedPlatformInEditor() const;

constexpr bool& __cordl_internal_get__detectedPlatformInEditor() ;

constexpr bool const& __cordl_internal_get__dontDestroyOnLoad() const;

constexpr bool& __cordl_internal_get__dontDestroyOnLoad() ;

constexpr ::Rewired::Data::UserData* const& __cordl_internal_get__userData() const;

constexpr ::Rewired::Data::UserData*& __cordl_internal_get__userData() ;

constexpr ::Rewired::Platforms::EditorPlatform const& __cordl_internal_get_editorPlatform() const;

constexpr ::Rewired::Platforms::EditorPlatform& __cordl_internal_get_editorPlatform() ;

constexpr bool const& __cordl_internal_get_ibRDxZjJNRfvTjLlFapqOIdyLbWg() const;

constexpr bool& __cordl_internal_get_ibRDxZjJNRfvTjLlFapqOIdyLbWg() ;

constexpr bool const& __cordl_internal_get_isCompiling() const;

constexpr bool& __cordl_internal_get_isCompiling() ;

constexpr bool const& __cordl_internal_get_isEditor() const;

constexpr bool& __cordl_internal_get_isEditor() ;

constexpr ::Rewired::Platforms::Platform const& __cordl_internal_get_platform() const;

constexpr ::Rewired::Platforms::Platform& __cordl_internal_get_platform() ;

constexpr ::Rewired::Platforms::ScriptingAPILevel const& __cordl_internal_get_scriptingAPILevel() const;

constexpr ::Rewired::Platforms::ScriptingAPILevel& __cordl_internal_get_scriptingAPILevel() ;

constexpr ::Rewired::Platforms::ScriptingBackend const& __cordl_internal_get_scriptingBackend() const;

constexpr ::Rewired::Platforms::ScriptingBackend& __cordl_internal_get_scriptingBackend() ;

constexpr ::Rewired::Platforms::WebplayerPlatform const& __cordl_internal_get_webplayerPlatform() const;

constexpr ::Rewired::Platforms::WebplayerPlatform& __cordl_internal_get_webplayerPlatform() ;

constexpr bool const& __cordl_internal_get_ztQftwyUUjLrbRIRQWPwpZMOYdpI() const;

constexpr bool& __cordl_internal_get_ztQftwyUUjLrbRIRQWPwpZMOYdpI() ;

constexpr void __cordl_internal_set_JEXkNwlDQBkZWSQhjuVDAQjAxZwA(bool  value) ;

constexpr void __cordl_internal_set_TSngeUkRfxRCDKonlipVlAVyIGjSA(bool  value) ;

constexpr void __cordl_internal_set__controllerDataFiles(::UnityW<::Rewired::Data::ControllerDataFiles>  value) ;

constexpr void __cordl_internal_set__detectedPlatformInEditor(bool  value) ;

constexpr void __cordl_internal_set__dontDestroyOnLoad(bool  value) ;

constexpr void __cordl_internal_set__userData(::Rewired::Data::UserData*  value) ;

constexpr void __cordl_internal_set_editorPlatform(::Rewired::Platforms::EditorPlatform  value) ;

constexpr void __cordl_internal_set_ibRDxZjJNRfvTjLlFapqOIdyLbWg(bool  value) ;

constexpr void __cordl_internal_set_isCompiling(bool  value) ;

constexpr void __cordl_internal_set_isEditor(bool  value) ;

constexpr void __cordl_internal_set_platform(::Rewired::Platforms::Platform  value) ;

constexpr void __cordl_internal_set_scriptingAPILevel(::Rewired::Platforms::ScriptingAPILevel  value) ;

constexpr void __cordl_internal_set_scriptingBackend(::Rewired::Platforms::ScriptingBackend  value) ;

constexpr void __cordl_internal_set_webplayerPlatform(::Rewired::Platforms::WebplayerPlatform  value) ;

constexpr void __cordl_internal_set_ztQftwyUUjLrbRIRQWPwpZMOYdpI(bool  value) ;

/// @brief Method .ctor, addr 0x181960730, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method aSTMBOCOWEBHcKnJqlHzDFDQQOMAb, addr 0x181960790, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> aSTMBOCOWEBHcKnJqlHzDFDQQOMAb() ;

/// @brief Method dJfYNxmAjBbSgyBWymeOPkLyxbEK, addr 0x181960890, size 0x1e0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>* dJfYNxmAjBbSgyBWymeOPkLyxbEK() ;

/// @brief Method get_dataFiles, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::Data::ControllerDataFiles> get_dataFiles() ;

/// @brief Method get_isRunningInEditMode, addr 0x181960a70, size 0x80, virtual false, abstract: false, final false
inline bool get_isRunningInEditMode() ;

/// @brief Method get_runInEditMode, addr 0x181960af0, size 0x30, virtual false, abstract: false, final false
inline bool get_runInEditMode() ;

/// @brief Method get_userData, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::UserData* get_userData() ;

/// @brief Method iKjFDKcJYaIJGHyZizoEQMSeeIgy, addr 0x181960b20, size 0xc0, virtual false, abstract: false, final false
inline ::StringW iKjFDKcJYaIJGHyZizoEQMSeeIgy() ;

/// @brief Method lHDDHwtsMwlrjsjPcfRSMPljOuHm, addr 0x181960be0, size 0x100, virtual false, abstract: false, final false
inline void lHDDHwtsMwlrjsjPcfRSMPljOuHm(::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::System::Exception*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method oQcYCZfPwdFxrNJmyyNhxlnzjjRhA, addr 0x181960ce0, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>* oQcYCZfPwdFxrNJmyyNhxlnzjjRhA() ;

/// @brief Method set_dataFiles, addr 0x181960e90, size 0x90, virtual false, abstract: false, final false
inline void set_dataFiles(::Rewired::Data::ControllerDataFiles*  value) ;

/// @brief Method set_runInEditMode, addr 0x181960f20, size 0xf0, virtual false, abstract: false, final false
inline void set_runInEditMode(bool  value) ;

/// @brief Method set_userData, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_userData(::Rewired::Data::UserData*  value) ;

/// @brief Method tOHauqCUkDLfzpYixoidQBZRjYEgb, addr 0x181961010, size 0x30, virtual false, abstract: false, final false
inline bool tOHauqCUkDLfzpYixoidQBZRjYEgb() ;

/// @brief Method tRjNTRojUzcwliMbpWCbfObBNsLKA, addr 0x181961040, size 0x50, virtual false, abstract: false, final false
inline bool tRjNTRojUzcwliMbpWCbfObBNsLKA() ;

/// @brief Method tdHYZJkNBWlVfUgihFvLdeydHzPV, addr 0x181961090, size 0x60, virtual false, abstract: false, final false
inline ::System::Object* tdHYZJkNBWlVfUgihFvLdeydHzPV(::Rewired::Data::ConfigVars*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method yKyxtYwSxXojrPtOUDhWCerdobwh, addr 0x1819610f0, size 0xc0, virtual false, abstract: false, final false
inline bool yKyxtYwSxXojrPtOUDhWCerdobwh() ;

/// @brief Method zAKgyaFTCelqXUJQDIZahYgFyrte, addr 0x1819611b0, size 0xd0, virtual false, abstract: false, final false
inline void zAKgyaFTCelqXUJQDIZahYgFyrte(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zYJfbfiWjiUZopPTZfAjxkkdiFMR, addr 0x181961280, size 0x70, virtual false, abstract: false, final false
inline bool zYJfbfiWjiUZopPTZfAjxkkdiFMR(::System::Reflection::Assembly*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_Base() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager_Base", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager_Base(InputManager_Base && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager_Base", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager_Base(InputManager_Base const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1981};

/// @brief Field _dontDestroyOnLoad, offset: 0x20, size: 0x1, def value: None
 bool  ____dontDestroyOnLoad;

/// @brief Field _userData, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Data::UserData*  ____userData;

/// @brief Field _controllerDataFiles, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Rewired::Data::ControllerDataFiles>  ____controllerDataFiles;

/// @brief Field isCompiling, offset: 0x38, size: 0x1, def value: None
 bool  ___isCompiling;

/// @brief Field ztQftwyUUjLrbRIRQWPwpZMOYdpI, offset: 0x39, size: 0x1, def value: None
 bool  ___ztQftwyUUjLrbRIRQWPwpZMOYdpI;

/// @brief Field JEXkNwlDQBkZWSQhjuVDAQjAxZwA, offset: 0x3a, size: 0x1, def value: None
 bool  ___JEXkNwlDQBkZWSQhjuVDAQjAxZwA;

/// @brief Field editorPlatform, offset: 0x3c, size: 0x4, def value: None
 ::Rewired::Platforms::EditorPlatform  ___editorPlatform;

/// @brief Field platform, offset: 0x40, size: 0x4, def value: None
 ::Rewired::Platforms::Platform  ___platform;

/// @brief Field webplayerPlatform, offset: 0x44, size: 0x4, def value: None
 ::Rewired::Platforms::WebplayerPlatform  ___webplayerPlatform;

/// @brief Field isEditor, offset: 0x48, size: 0x1, def value: None
 bool  ___isEditor;

/// @brief Field _detectedPlatformInEditor, offset: 0x49, size: 0x1, def value: None
 bool  ____detectedPlatformInEditor;

/// @brief Field scriptingBackend, offset: 0x4c, size: 0x4, def value: None
 ::Rewired::Platforms::ScriptingBackend  ___scriptingBackend;

/// @brief Field scriptingAPILevel, offset: 0x50, size: 0x4, def value: None
 ::Rewired::Platforms::ScriptingAPILevel  ___scriptingAPILevel;

/// @brief Field TSngeUkRfxRCDKonlipVlAVyIGjSA, offset: 0x54, size: 0x1, def value: None
 bool  ___TSngeUkRfxRCDKonlipVlAVyIGjSA;

/// @brief Field ibRDxZjJNRfvTjLlFapqOIdyLbWg, offset: 0x55, size: 0x1, def value: None
 bool  ___ibRDxZjJNRfvTjLlFapqOIdyLbWg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManager_Base, ____dontDestroyOnLoad) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ____userData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ____controllerDataFiles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___isCompiling) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___ztQftwyUUjLrbRIRQWPwpZMOYdpI) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___JEXkNwlDQBkZWSQhjuVDAQjAxZwA) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___editorPlatform) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___platform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___webplayerPlatform) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___isEditor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ____detectedPlatformInEditor) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___scriptingBackend) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___scriptingAPILevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___TSngeUkRfxRCDKonlipVlAVyIGjSA) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManager_Base, ___ibRDxZjJNRfvTjLlFapqOIdyLbWg) == 0x55, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManager_Base) == 0x58, "Size mismatch!");

} // namespace end def Rewired
