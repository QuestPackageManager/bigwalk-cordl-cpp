#pragma once
// IWYU pragma private; include "MA/Flora/DebugDisplayFlora.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraDebugDisplayProperties_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplayFlora)
namespace MA::Flora {
class DebugDisplayFlora_SettingsPanel;
}
namespace MA::Flora {
class DebugDisplayFlora_Strings;
}
namespace MA::Flora {
class DebugDisplayFlora___c__DisplayClass33_0;
}
namespace MA::Flora {
struct FloraDebugDisplayProperties;
}
namespace MA::Flora {
struct GPUCullingStats;
}
namespace MA::Flora {
class SettingsPanel_DebugDisplayFlora___c;
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
class Enum;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class DebugUI_EnumField;
}
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering {
class Table_DebugUI_Row;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace MA::Flora {
class DebugDisplayFlora;
}
namespace MA::Flora {
class DebugDisplayFlora_SettingsPanel;
}
namespace MA::Flora {
class DebugDisplayFlora_Strings;
}
namespace MA::Flora {
class DebugDisplayFlora___c__DisplayClass33_0;
}
namespace MA::Flora {
class SettingsPanel_DebugDisplayFlora___c;
}
// Write type traits
MARK_REF_T(::MA::Flora::DebugDisplayFlora*);
MARK_REF_T(::MA::Flora::DebugDisplayFlora_SettingsPanel*);
MARK_REF_T(::MA::Flora::DebugDisplayFlora_Strings*);
MARK_REF_T(::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*);
MARK_REF_T(::MA::Flora::SettingsPanel_DebugDisplayFlora___c*);
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugDisplayFlora*, "MA.Flora", "DebugDisplayFlora");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugDisplayFlora_SettingsPanel*, "MA.Flora", "DebugDisplayFlora/SettingsPanel");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugDisplayFlora_Strings*, "MA.Flora", "DebugDisplayFlora/Strings");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*, "MA.Flora", "DebugDisplayFlora/<>c__DisplayClass33_0");
DEFINE_IL2CPP_CLASS(::MA::Flora::SettingsPanel_DebugDisplayFlora___c*, "MA.Flora", "DebugDisplayFlora/SettingsPanel/<>c");
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugDisplayFlora/Strings
class CORDL_TYPE DebugDisplayFlora_Strings : public ::System::Object {
public:
// Declarations
/// @brief Field CullingStats, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CullingStats, put=setStaticF_CullingStats)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  CullingStats;

/// @brief Field EnableGPUChecks, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_EnableGPUChecks, put=setStaticF_EnableGPUChecks)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  EnableGPUChecks;

/// @brief Field GeneralSettingsContainerName, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GeneralSettingsContainerName, put=setStaticF_GeneralSettingsContainerName)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  GeneralSettingsContainerName;

static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_CullingStats() ;

static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_EnableGPUChecks() ;

static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_GeneralSettingsContainerName() ;

static inline void setStaticF_CullingStats(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_EnableGPUChecks(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  value) ;

static inline void setStaticF_GeneralSettingsContainerName(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayFlora_Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora_Strings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayFlora_Strings(DebugDisplayFlora_Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora_Strings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayFlora_Strings(DebugDisplayFlora_Strings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13261};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::DebugDisplayFlora_Strings) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugDisplayFlora/SettingsPanel/<>c
class CORDL_TYPE SettingsPanel_DebugDisplayFlora___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Func_1<::StringW>*  __9__19_0;

/// @brief Field <>9__19_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_1, put=setStaticF___9__19_1)) ::System::Func_1<bool>*  __9__19_1;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Func_1<bool>*  __9__24_0;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::System::Func_1<int32_t>*  __9__24_1;

/// @brief Field <>9__24_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_2, put=setStaticF___9__24_2)) ::System::Action_1<int32_t>*  __9__24_2;

/// @brief Field <>9__24_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_3, put=setStaticF___9__24_3)) ::System::Func_1<int32_t>*  __9__24_3;

/// @brief Field <>9__24_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_4, put=setStaticF___9__24_4)) ::System::Action_1<int32_t>*  __9__24_4;

/// @brief Field <>9__24_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_5, put=setStaticF___9__24_5)) ::System::Func_1<bool>*  __9__24_5;

/// @brief Field <>9__24_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_6, put=setStaticF___9__24_6)) ::System::Action_1<bool>*  __9__24_6;

/// @brief Field <>9__24_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_7, put=setStaticF___9__24_7)) ::System::Func_1<bool>*  __9__24_7;

/// @brief Field <>9__24_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_8, put=setStaticF___9__24_8)) ::System::Action_1<bool>*  __9__24_8;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Func_1<bool>*  __9__25_0;

/// @brief Field <>9__25_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_1, put=setStaticF___9__25_1)) ::System::Func_1<int32_t>*  __9__25_1;

/// @brief Field <>9__25_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_2, put=setStaticF___9__25_2)) ::System::Action_1<int32_t>*  __9__25_2;

/// @brief Field <>9__25_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_3, put=setStaticF___9__25_3)) ::System::Func_1<int32_t>*  __9__25_3;

/// @brief Field <>9__25_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_4, put=setStaticF___9__25_4)) ::System::Action_1<int32_t>*  __9__25_4;

/// @brief Field <>9__25_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_5, put=setStaticF___9__25_5)) ::System::Func_1<bool>*  __9__25_5;

/// @brief Field <>9__25_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_6, put=setStaticF___9__25_6)) ::System::Func_1<int32_t>*  __9__25_6;

/// @brief Field <>9__25_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_7, put=setStaticF___9__25_7)) ::System::Action_1<int32_t>*  __9__25_7;

/// @brief Field <>9__25_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_8, put=setStaticF___9__25_8)) ::System::Func_1<int32_t>*  __9__25_8;

/// @brief Field <>9__25_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_9, put=setStaticF___9__25_9)) ::System::Func_1<int32_t>*  __9__25_9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Func_1<bool>*  __9__26_0;

/// @brief Field <>9__26_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_1, put=setStaticF___9__26_1)) ::System::Func_1<int32_t>*  __9__26_1;

/// @brief Field <>9__26_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_2, put=setStaticF___9__26_2)) ::System::Action_1<int32_t>*  __9__26_2;

/// @brief Field <>9__26_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_3, put=setStaticF___9__26_3)) ::System::Func_1<int32_t>*  __9__26_3;

/// @brief Field <>9__26_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_4, put=setStaticF___9__26_4)) ::System::Action_1<int32_t>*  __9__26_4;

/// @brief Field <>9__26_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_5, put=setStaticF___9__26_5)) ::System::Func_1<::System::Enum*>*  __9__26_5;

/// @brief Field <>9__26_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_6, put=setStaticF___9__26_6)) ::System::Action_1<::System::Enum*>*  __9__26_6;

/// @brief Field <>9__26_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_7, put=setStaticF___9__26_7)) ::System::Func_1<float_t>*  __9__26_7;

/// @brief Field <>9__26_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_8, put=setStaticF___9__26_8)) ::System::Action_1<float_t>*  __9__26_8;

/// @brief Field <>9__26_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_9, put=setStaticF___9__26_9)) ::System::Func_1<float_t>*  __9__26_9;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::System::Func_1<bool>*  __9__27_0;

/// @brief Field <>9__27_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_1, put=setStaticF___9__27_1)) ::System::Func_1<::StringW>*  __9__27_1;

/// @brief Field <>9__27_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_10, put=setStaticF___9__27_10)) ::System::Func_1<float_t>*  __9__27_10;

/// @brief Field <>9__27_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_11, put=setStaticF___9__27_11)) ::System::Func_1<float_t>*  __9__27_11;

/// @brief Field <>9__27_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_12, put=setStaticF___9__27_12)) ::System::Func_1<float_t>*  __9__27_12;

/// @brief Field <>9__27_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_13, put=setStaticF___9__27_13)) ::System::Action_1<float_t>*  __9__27_13;

/// @brief Field <>9__27_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_14, put=setStaticF___9__27_14)) ::System::Func_1<bool>*  __9__27_14;

/// @brief Field <>9__27_15, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_15, put=setStaticF___9__27_15)) ::System::Func_1<bool>*  __9__27_15;

/// @brief Field <>9__27_16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_16, put=setStaticF___9__27_16)) ::System::Action_1<bool>*  __9__27_16;

/// @brief Field <>9__27_17, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_17, put=setStaticF___9__27_17)) ::System::Func_1<bool>*  __9__27_17;

/// @brief Field <>9__27_18, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_18, put=setStaticF___9__27_18)) ::System::Func_1<bool>*  __9__27_18;

/// @brief Field <>9__27_19, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_19, put=setStaticF___9__27_19)) ::System::Action_1<bool>*  __9__27_19;

/// @brief Field <>9__27_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_2, put=setStaticF___9__27_2)) ::System::Func_1<bool>*  __9__27_2;

/// @brief Field <>9__27_20, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_20, put=setStaticF___9__27_20)) ::System::Func_1<bool>*  __9__27_20;

/// @brief Field <>9__27_21, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_21, put=setStaticF___9__27_21)) ::System::Func_1<bool>*  __9__27_21;

/// @brief Field <>9__27_22, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_22, put=setStaticF___9__27_22)) ::System::Func_1<bool>*  __9__27_22;

/// @brief Field <>9__27_23, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_23, put=setStaticF___9__27_23)) ::System::Func_1<float_t>*  __9__27_23;

/// @brief Field <>9__27_24, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_24, put=setStaticF___9__27_24)) ::System::Func_1<float_t>*  __9__27_24;

/// @brief Field <>9__27_25, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_25, put=setStaticF___9__27_25)) ::System::Func_1<float_t>*  __9__27_25;

/// @brief Field <>9__27_26, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_26, put=setStaticF___9__27_26)) ::System::Action_1<float_t>*  __9__27_26;

/// @brief Field <>9__27_27, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_27, put=setStaticF___9__27_27)) ::System::Func_1<bool>*  __9__27_27;

/// @brief Field <>9__27_28, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_28, put=setStaticF___9__27_28)) ::System::Func_1<float_t>*  __9__27_28;

/// @brief Field <>9__27_29, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_29, put=setStaticF___9__27_29)) ::System::Func_1<float_t>*  __9__27_29;

/// @brief Field <>9__27_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_3, put=setStaticF___9__27_3)) ::System::Func_1<bool>*  __9__27_3;

/// @brief Field <>9__27_30, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_30, put=setStaticF___9__27_30)) ::System::Func_1<float_t>*  __9__27_30;

/// @brief Field <>9__27_31, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_31, put=setStaticF___9__27_31)) ::System::Action_1<float_t>*  __9__27_31;

/// @brief Field <>9__27_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_4, put=setStaticF___9__27_4)) ::System::Action_1<bool>*  __9__27_4;

/// @brief Field <>9__27_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_5, put=setStaticF___9__27_5)) ::System::Func_1<bool>*  __9__27_5;

/// @brief Field <>9__27_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_6, put=setStaticF___9__27_6)) ::System::Func_1<bool>*  __9__27_6;

/// @brief Field <>9__27_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_7, put=setStaticF___9__27_7)) ::System::Action_1<bool>*  __9__27_7;

/// @brief Field <>9__27_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_8, put=setStaticF___9__27_8)) ::System::Func_1<bool>*  __9__27_8;

/// @brief Field <>9__27_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_9, put=setStaticF___9__27_9)) ::System::Func_1<bool>*  __9__27_9;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::System::Func_1<bool>*  __9__28_0;

/// @brief Field <>9__28_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_1, put=setStaticF___9__28_1)) ::System::Func_1<::System::Object*>*  __9__28_1;

/// @brief Field <>9__28_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_2, put=setStaticF___9__28_2)) ::System::Func_1<bool>*  __9__28_2;

static inline ::MA::Flora::SettingsPanel_DebugDisplayFlora___c* New_ctor() ;

/// @brief Method <CreateCullingStats>b__28_0, addr 0x1814d8580, size 0x40, virtual false, abstract: false, final false
inline bool _CreateCullingStats_b__28_0() ;

/// @brief Method <CreateCullingStats>b__28_1, addr 0x1814d85c0, size 0x60, virtual false, abstract: false, final false
inline ::System::Object* _CreateCullingStats_b__28_1() ;

/// @brief Method <CreateCullingStats>b__28_2, addr 0x1814d8580, size 0x40, virtual false, abstract: false, final false
inline bool _CreateCullingStats_b__28_2() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_0, addr 0x1814d8620, size 0x20, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_0() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_1, addr 0x1814d8850, size 0x50, virtual false, abstract: false, final false
inline ::StringW _CreateGPUOcclusionSettings_b__27_1() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_10, addr 0x1803e0b50, size 0x10, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_10() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_11, addr 0x1802e30f0, size 0x10, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_11() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_12, addr 0x1814d8640, size 0x50, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_12() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_13, addr 0x1814d8690, size 0x60, virtual false, abstract: false, final false
inline void _CreateGPUOcclusionSettings_b__27_13(float_t  value) ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_14, addr 0x1814d86f0, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_14() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_15, addr 0x1814d8730, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_15() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_16, addr 0x1814d8770, size 0x50, virtual false, abstract: false, final false
inline void _CreateGPUOcclusionSettings_b__27_16(bool  value) ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_17, addr 0x1814d86f0, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_17() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_18, addr 0x1814d87c0, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_18() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_19, addr 0x1814d8800, size 0x50, virtual false, abstract: false, final false
inline void _CreateGPUOcclusionSettings_b__27_19(bool  value) ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_2, addr 0x1814d89c0, size 0x30, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_2() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_20, addr 0x1814d88a0, size 0x30, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_20() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_21, addr 0x1814d88a0, size 0x30, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_21() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_22, addr 0x1814d88d0, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_22() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_23, addr 0x1803e0b50, size 0x10, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_23() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_24, addr 0x1802e30f0, size 0x10, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_24() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_25, addr 0x1814d8910, size 0x50, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_25() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_26, addr 0x1814d8960, size 0x60, virtual false, abstract: false, final false
inline void _CreateGPUOcclusionSettings_b__27_26(float_t  value) ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_27, addr 0x1814d88d0, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_27() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_28, addr 0x1803e0b50, size 0x10, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_28() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_29, addr 0x1802e30f0, size 0x10, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_29() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_3, addr 0x1814d8aa0, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_3() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_30, addr 0x1814d89f0, size 0x50, virtual false, abstract: false, final false
inline float_t _CreateGPUOcclusionSettings_b__27_30() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_31, addr 0x1814d8a40, size 0x60, virtual false, abstract: false, final false
inline void _CreateGPUOcclusionSettings_b__27_31(float_t  value) ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_4, addr 0x1814d8ae0, size 0x50, virtual false, abstract: false, final false
inline void _CreateGPUOcclusionSettings_b__27_4(bool  value) ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_5, addr 0x1814d88a0, size 0x30, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_5() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_6, addr 0x1814d8b30, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_6() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_7, addr 0x1814d8b70, size 0x50, virtual false, abstract: false, final false
inline void _CreateGPUOcclusionSettings_b__27_7(bool  value) ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_8, addr 0x1814d88a0, size 0x30, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_8() ;

/// @brief Method <CreateGPUOcclusionSettings>b__27_9, addr 0x1814d88a0, size 0x30, virtual false, abstract: false, final false
inline bool _CreateGPUOcclusionSettings_b__27_9() ;

/// @brief Method <CreateGeneralSettings>b__24_0, addr 0x1814d8620, size 0x20, virtual false, abstract: false, final false
inline bool _CreateGeneralSettings_b__24_0() ;

/// @brief Method <CreateGeneralSettings>b__24_1, addr 0x1814d8bc0, size 0x40, virtual false, abstract: false, final false
inline int32_t _CreateGeneralSettings_b__24_1() ;

/// @brief Method <CreateGeneralSettings>b__24_2, addr 0x1814d8c00, size 0x50, virtual false, abstract: false, final false
inline void _CreateGeneralSettings_b__24_2(int32_t  value) ;

/// @brief Method <CreateGeneralSettings>b__24_3, addr 0x1814d8bc0, size 0x40, virtual false, abstract: false, final false
inline int32_t _CreateGeneralSettings_b__24_3() ;

/// @brief Method <CreateGeneralSettings>b__24_4, addr 0x1814d8c00, size 0x50, virtual false, abstract: false, final false
inline void _CreateGeneralSettings_b__24_4(int32_t  value) ;

/// @brief Method <CreateGeneralSettings>b__24_5, addr 0x1814d8c50, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGeneralSettings_b__24_5() ;

/// @brief Method <CreateGeneralSettings>b__24_6, addr 0x1814d8c90, size 0x50, virtual false, abstract: false, final false
inline void _CreateGeneralSettings_b__24_6(bool  value) ;

/// @brief Method <CreateGeneralSettings>b__24_7, addr 0x1814d8ce0, size 0x40, virtual false, abstract: false, final false
inline bool _CreateGeneralSettings_b__24_7() ;

/// @brief Method <CreateGeneralSettings>b__24_8, addr 0x1814d8d20, size 0x50, virtual false, abstract: false, final false
inline void _CreateGeneralSettings_b__24_8(bool  value) ;

/// @brief Method <CreateLODSettings>b__25_0, addr 0x1814d8620, size 0x20, virtual false, abstract: false, final false
inline bool _CreateLODSettings_b__25_0() ;

/// @brief Method <CreateLODSettings>b__25_1, addr 0x1814d8d70, size 0x40, virtual false, abstract: false, final false
inline int32_t _CreateLODSettings_b__25_1() ;

/// @brief Method <CreateLODSettings>b__25_2, addr 0x1814d8db0, size 0x50, virtual false, abstract: false, final false
inline void _CreateLODSettings_b__25_2(int32_t  value) ;

/// @brief Method <CreateLODSettings>b__25_3, addr 0x1814d8d70, size 0x40, virtual false, abstract: false, final false
inline int32_t _CreateLODSettings_b__25_3() ;

/// @brief Method <CreateLODSettings>b__25_4, addr 0x1814d8db0, size 0x50, virtual false, abstract: false, final false
inline void _CreateLODSettings_b__25_4(int32_t  value) ;

/// @brief Method <CreateLODSettings>b__25_5, addr 0x1814d8e00, size 0x40, virtual false, abstract: false, final false
inline bool _CreateLODSettings_b__25_5() ;

/// @brief Method <CreateLODSettings>b__25_6, addr 0x1814d8e40, size 0x40, virtual false, abstract: false, final false
inline int32_t _CreateLODSettings_b__25_6() ;

/// @brief Method <CreateLODSettings>b__25_7, addr 0x1814d8e80, size 0x50, virtual false, abstract: false, final false
inline void _CreateLODSettings_b__25_7(int32_t  value) ;

/// @brief Method <CreateLODSettings>b__25_8, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
inline int32_t _CreateLODSettings_b__25_8() ;

/// @brief Method <CreateLODSettings>b__25_9, addr 0x180feb5f0, size 0x28d50, virtual false, abstract: false, final false
inline int32_t _CreateLODSettings_b__25_9() ;

/// @brief Method <CreateSpatialHashSettings>b__26_0, addr 0x1814d8620, size 0x20, virtual false, abstract: false, final false
inline bool _CreateSpatialHashSettings_b__26_0() ;

/// @brief Method <CreateSpatialHashSettings>b__26_1, addr 0x1814d8ed0, size 0x40, virtual false, abstract: false, final false
inline int32_t _CreateSpatialHashSettings_b__26_1() ;

/// @brief Method <CreateSpatialHashSettings>b__26_2, addr 0x1814d8f10, size 0x50, virtual false, abstract: false, final false
inline void _CreateSpatialHashSettings_b__26_2(int32_t  value) ;

/// @brief Method <CreateSpatialHashSettings>b__26_3, addr 0x1814d8ed0, size 0x40, virtual false, abstract: false, final false
inline int32_t _CreateSpatialHashSettings_b__26_3() ;

/// @brief Method <CreateSpatialHashSettings>b__26_4, addr 0x1814d8f10, size 0x50, virtual false, abstract: false, final false
inline void _CreateSpatialHashSettings_b__26_4(int32_t  value) ;

/// @brief Method <CreateSpatialHashSettings>b__26_5, addr 0x1814d8f60, size 0x50, virtual false, abstract: false, final false
inline ::System::Enum* _CreateSpatialHashSettings_b__26_5() ;

/// @brief Method <CreateSpatialHashSettings>b__26_6, addr 0x1814d8fb0, size 0x70, virtual false, abstract: false, final false
inline void _CreateSpatialHashSettings_b__26_6(::System::Enum*  value) ;

/// @brief Method <CreateSpatialHashSettings>b__26_7, addr 0x1814d9020, size 0x50, virtual false, abstract: false, final false
inline float_t _CreateSpatialHashSettings_b__26_7() ;

/// @brief Method <CreateSpatialHashSettings>b__26_8, addr 0x1814d9070, size 0x60, virtual false, abstract: false, final false
inline void _CreateSpatialHashSettings_b__26_8(float_t  value) ;

/// @brief Method <CreateSpatialHashSettings>b__26_9, addr 0x1814d90d0, size 0x10, virtual false, abstract: false, final false
inline float_t _CreateSpatialHashSettings_b__26_9() ;

/// @brief Method <.ctor>b__19_0, addr 0x1814d90e0, size 0x40, virtual false, abstract: false, final false
inline ::StringW __ctor_b__19_0() ;

/// @brief Method <.ctor>b__19_1, addr 0x1814d9120, size 0x10, virtual false, abstract: false, final false
inline bool __ctor_b__19_1() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::SettingsPanel_DebugDisplayFlora___c* getStaticF___9() ;

static inline ::System::Func_1<::StringW>* getStaticF___9__19_0() ;

static inline ::System::Func_1<bool>* getStaticF___9__19_1() ;

static inline ::System::Func_1<bool>* getStaticF___9__24_0() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__24_1() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__24_2() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__24_3() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__24_4() ;

static inline ::System::Func_1<bool>* getStaticF___9__24_5() ;

static inline ::System::Action_1<bool>* getStaticF___9__24_6() ;

static inline ::System::Func_1<bool>* getStaticF___9__24_7() ;

static inline ::System::Action_1<bool>* getStaticF___9__24_8() ;

static inline ::System::Func_1<bool>* getStaticF___9__25_0() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__25_1() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__25_2() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__25_3() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__25_4() ;

static inline ::System::Func_1<bool>* getStaticF___9__25_5() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__25_6() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__25_7() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__25_8() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__25_9() ;

static inline ::System::Func_1<bool>* getStaticF___9__26_0() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__26_1() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__26_2() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__26_3() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__26_4() ;

static inline ::System::Func_1<::System::Enum*>* getStaticF___9__26_5() ;

static inline ::System::Action_1<::System::Enum*>* getStaticF___9__26_6() ;

static inline ::System::Func_1<float_t>* getStaticF___9__26_7() ;

static inline ::System::Action_1<float_t>* getStaticF___9__26_8() ;

static inline ::System::Func_1<float_t>* getStaticF___9__26_9() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_0() ;

static inline ::System::Func_1<::StringW>* getStaticF___9__27_1() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_10() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_11() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_12() ;

static inline ::System::Action_1<float_t>* getStaticF___9__27_13() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_14() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_15() ;

static inline ::System::Action_1<bool>* getStaticF___9__27_16() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_17() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_18() ;

static inline ::System::Action_1<bool>* getStaticF___9__27_19() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_2() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_20() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_21() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_22() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_23() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_24() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_25() ;

static inline ::System::Action_1<float_t>* getStaticF___9__27_26() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_27() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_28() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_29() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_3() ;

static inline ::System::Func_1<float_t>* getStaticF___9__27_30() ;

static inline ::System::Action_1<float_t>* getStaticF___9__27_31() ;

static inline ::System::Action_1<bool>* getStaticF___9__27_4() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_5() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_6() ;

static inline ::System::Action_1<bool>* getStaticF___9__27_7() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_8() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_9() ;

static inline ::System::Func_1<bool>* getStaticF___9__28_0() ;

static inline ::System::Func_1<::System::Object*>* getStaticF___9__28_1() ;

static inline ::System::Func_1<bool>* getStaticF___9__28_2() ;

static inline void setStaticF___9(::MA::Flora::SettingsPanel_DebugDisplayFlora___c*  value) ;

static inline void setStaticF___9__19_0(::System::Func_1<::StringW>*  value) ;

static inline void setStaticF___9__19_1(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__24_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__24_1(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__24_2(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__24_3(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__24_4(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__24_5(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__24_6(::System::Action_1<bool>*  value) ;

static inline void setStaticF___9__24_7(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__24_8(::System::Action_1<bool>*  value) ;

static inline void setStaticF___9__25_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__25_1(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__25_2(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__25_3(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__25_4(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__25_5(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__25_6(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__25_7(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__25_8(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__25_9(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__26_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__26_1(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__26_2(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__26_3(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__26_4(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__26_5(::System::Func_1<::System::Enum*>*  value) ;

static inline void setStaticF___9__26_6(::System::Action_1<::System::Enum*>*  value) ;

static inline void setStaticF___9__26_7(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__26_8(::System::Action_1<float_t>*  value) ;

static inline void setStaticF___9__26_9(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_1(::System::Func_1<::StringW>*  value) ;

static inline void setStaticF___9__27_10(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_11(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_12(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_13(::System::Action_1<float_t>*  value) ;

static inline void setStaticF___9__27_14(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_15(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_16(::System::Action_1<bool>*  value) ;

static inline void setStaticF___9__27_17(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_18(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_19(::System::Action_1<bool>*  value) ;

static inline void setStaticF___9__27_2(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_20(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_21(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_22(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_23(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_24(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_25(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_26(::System::Action_1<float_t>*  value) ;

static inline void setStaticF___9__27_27(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_28(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_29(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_3(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_30(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__27_31(::System::Action_1<float_t>*  value) ;

static inline void setStaticF___9__27_4(::System::Action_1<bool>*  value) ;

static inline void setStaticF___9__27_5(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_6(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_7(::System::Action_1<bool>*  value) ;

static inline void setStaticF___9__27_8(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__27_9(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__28_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__28_1(::System::Func_1<::System::Object*>*  value) ;

static inline void setStaticF___9__28_2(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPanel_DebugDisplayFlora___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayFlora___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPanel_DebugDisplayFlora___c(SettingsPanel_DebugDisplayFlora___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplayFlora___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPanel_DebugDisplayFlora___c(SettingsPanel_DebugDisplayFlora___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13262};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::SettingsPanel_DebugDisplayFlora___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies UnityEngine.GUIContent, UnityEngine.Rendering.DebugDisplaySettingsPanel`1<T>
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugDisplayFlora/SettingsPanel
class CORDL_TYPE DebugDisplayFlora_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<::MA::Flora::DebugDisplayFlora*> {
public:
// Declarations
using __c = ::MA::Flora::SettingsPanel_DebugDisplayFlora___c;

 __declspec(property(get=get_Flags)) ::UnityEngine::Rendering::DebugUI_Flags  Flags;

/// @brief Field FreezableCameraIndices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FreezableCameraIndices, put=setStaticF_FreezableCameraIndices)) ::ArrayW<int32_t>  FreezableCameraIndices;

 __declspec(property(get=get_FrozenCameraEnumIndex, put=set_FrozenCameraEnumIndex)) int32_t  FrozenCameraEnumIndex;

 __declspec(property(get=get_FrozenCameraField, put=set_FrozenCameraField)) ::UnityEngine::Rendering::DebugUI_EnumField*  FrozenCameraField;

 __declspec(property(get=get_FrozenCameraIndex, put=set_FrozenCameraIndex)) int32_t  FrozenCameraIndex;

 __declspec(property(get=get_PanelName)) ::StringW  PanelName;

/// @brief Field <FrozenCameraEnumIndex>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__FrozenCameraEnumIndex_k__BackingField, put=__cordl_internal_set__FrozenCameraEnumIndex_k__BackingField)) int32_t  _FrozenCameraEnumIndex_k__BackingField;

/// @brief Field <FrozenCameraField>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FrozenCameraField_k__BackingField, put=__cordl_internal_set__FrozenCameraField_k__BackingField)) ::UnityEngine::Rendering::DebugUI_EnumField*  _FrozenCameraField_k__BackingField;

/// @brief Field <FrozenCameraIndex>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__FrozenCameraIndex_k__BackingField, put=__cordl_internal_set__FrozenCameraIndex_k__BackingField)) int32_t  _FrozenCameraIndex_k__BackingField;

/// @brief Field m_FreezableCameraNames, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FreezableCameraNames, put=__cordl_internal_set_m_FreezableCameraNames)) ::ArrayW<::UnityEngine::GUIContent*>  m_FreezableCameraNames;

/// @brief Method CreateCullingStats, addr 0x1814d3ef0, size 0x3c0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Widget* CreateCullingStats() ;

/// @brief Method CreateGPUOcclusionSettings, addr 0x1814d42b0, size 0x1440, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Widget* CreateGPUOcclusionSettings() ;

/// @brief Method CreateGeneralSettings, addr 0x1814d56f0, size 0x610, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Widget* CreateGeneralSettings() ;

/// @brief Method CreateLODSettings, addr 0x1814d5d00, size 0x660, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Widget* CreateLODSettings() ;

/// @brief Method CreateSpatialHashSettings, addr 0x1814d6360, size 0x700, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Widget* CreateSpatialHashSettings() ;

/// @brief Method GetFrozenCameraEnumIndex, addr 0x1814d6a60, size 0x100, virtual false, abstract: false, final false
inline int32_t GetFrozenCameraEnumIndex() ;

/// @brief Method InitFrozenCameraField, addr 0x1814d6b60, size 0x390, virtual false, abstract: false, final false
inline void InitFrozenCameraField() ;

static inline ::MA::Flora::DebugDisplayFlora_SettingsPanel* New_ctor(::MA::Flora::DebugDisplayFlora*  data) ;

/// @brief Method SetFrozenCameraIndex, addr 0x1814d6ef0, size 0x140, virtual false, abstract: false, final false
inline void SetFrozenCameraIndex(int32_t  enumIndex) ;

/// @brief Method UpdateFreezableCameras, addr 0x1814d7030, size 0x180, virtual false, abstract: false, final false
inline void UpdateFreezableCameras() ;

/// @brief Method <InitFrozenCameraField>b__20_0, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t _InitFrozenCameraField_b__20_0() ;

/// @brief Method <InitFrozenCameraField>b__20_1, addr 0x1814d6ef0, size 0x140, virtual false, abstract: false, final false
inline void _InitFrozenCameraField_b__20_1(int32_t  value) ;

/// @brief Method <InitFrozenCameraField>b__20_2, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline int32_t _InitFrozenCameraField_b__20_2() ;

/// @brief Method <InitFrozenCameraField>b__20_3, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void _InitFrozenCameraField_b__20_3(int32_t  index) ;

constexpr int32_t const& __cordl_internal_get__FrozenCameraEnumIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FrozenCameraEnumIndex_k__BackingField() ;

constexpr ::UnityEngine::Rendering::DebugUI_EnumField* const& __cordl_internal_get__FrozenCameraField_k__BackingField() const;

constexpr ::UnityEngine::Rendering::DebugUI_EnumField*& __cordl_internal_get__FrozenCameraField_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FrozenCameraIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FrozenCameraIndex_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::GUIContent*> const& __cordl_internal_get_m_FreezableCameraNames() const;

constexpr ::ArrayW<::UnityEngine::GUIContent*>& __cordl_internal_get_m_FreezableCameraNames() ;

constexpr void __cordl_internal_set__FrozenCameraEnumIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FrozenCameraField_k__BackingField(::UnityEngine::Rendering::DebugUI_EnumField*  value) ;

constexpr void __cordl_internal_set__FrozenCameraIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_FreezableCameraNames(::ArrayW<::UnityEngine::GUIContent*>  value) ;

/// @brief Method .ctor, addr 0x1814d7210, size 0x360, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::DebugDisplayFlora*  data) ;

static inline ::ArrayW<int32_t> getStaticF_FreezableCameraIndices() ;

/// @brief Method get_Flags, addr 0x180308dd0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_Flags get_Flags() ;

/// @brief Method get_FrozenCameraEnumIndex, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FrozenCameraEnumIndex() ;

/// @brief Method get_FrozenCameraField, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::DebugUI_EnumField* get_FrozenCameraField() ;

/// @brief Method get_FrozenCameraIndex, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FrozenCameraIndex() ;

/// @brief Method get_PanelName, addr 0x1814d7570, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_PanelName() ;

static inline void setStaticF_FreezableCameraIndices(::ArrayW<int32_t>  value) ;

/// @brief Method set_FrozenCameraEnumIndex, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_FrozenCameraEnumIndex(int32_t  value) ;

/// @brief Method set_FrozenCameraField, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_FrozenCameraField(::UnityEngine::Rendering::DebugUI_EnumField*  value) ;

/// @brief Method set_FrozenCameraIndex, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_FrozenCameraIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayFlora_SettingsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora_SettingsPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayFlora_SettingsPanel(DebugDisplayFlora_SettingsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora_SettingsPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayFlora_SettingsPanel(DebugDisplayFlora_SettingsPanel const& ) = delete;

/// @brief Field MaxFreezableCameras offset 0xffffffff size 0x4
static constexpr int32_t  MaxFreezableCameras{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13263};

/// @brief Field <FrozenCameraField>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Rendering::DebugUI_EnumField*  ____FrozenCameraField_k__BackingField;

/// @brief Field <FrozenCameraIndex>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____FrozenCameraIndex_k__BackingField;

/// @brief Field <FrozenCameraEnumIndex>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  ____FrozenCameraEnumIndex_k__BackingField;

/// @brief Field m_FreezableCameraNames, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::GUIContent*>  ___m_FreezableCameraNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugDisplayFlora_SettingsPanel, ____FrozenCameraField_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugDisplayFlora_SettingsPanel, ____FrozenCameraIndex_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugDisplayFlora_SettingsPanel, ____FrozenCameraEnumIndex_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugDisplayFlora_SettingsPanel, ___m_FreezableCameraNames) == 0x38, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugDisplayFlora_SettingsPanel) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugDisplayFlora/<>c__DisplayClass33_0
class CORDL_TYPE DebugDisplayFlora___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field viewStatsIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_viewStatsIndex, put=__cordl_internal_set_viewStatsIndex)) int32_t  viewStatsIndex;

static inline ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <AddViewStatsDataRow>b__0, addr 0x1814d9130, size 0x50, virtual false, abstract: false, final false
inline bool _AddViewStatsDataRow_b__0() ;

/// @brief Method <AddViewStatsDataRow>b__1, addr 0x1814d9180, size 0x20, virtual false, abstract: false, final false
inline ::System::Object* _AddViewStatsDataRow_b__1() ;

/// @brief Method <AddViewStatsDataRow>b__2, addr 0x1814d91a0, size 0x40, virtual false, abstract: false, final false
inline ::System::Object* _AddViewStatsDataRow_b__2() ;

/// @brief Method <AddViewStatsDataRow>b__3, addr 0x1814d91e0, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* _AddViewStatsDataRow_b__3() ;

/// @brief Method <AddViewStatsDataRow>b__4, addr 0x1814d9210, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* _AddViewStatsDataRow_b__4() ;

constexpr int32_t const& __cordl_internal_get_viewStatsIndex() const;

constexpr int32_t& __cordl_internal_get_viewStatsIndex() ;

constexpr void __cordl_internal_set_viewStatsIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayFlora___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayFlora___c__DisplayClass33_0(DebugDisplayFlora___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayFlora___c__DisplayClass33_0(DebugDisplayFlora___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13264};

/// @brief Field viewStatsIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___viewStatsIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0, ___viewStatsIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraDebugDisplayProperties, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugDisplayFlora
class CORDL_TYPE DebugDisplayFlora : public ::System::Object {
public:
// Declarations
using SettingsPanel = ::MA::Flora::DebugDisplayFlora_SettingsPanel;

using Strings = ::MA::Flora::DebugDisplayFlora_Strings;

using __c__DisplayClass33_0 = ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0;

 __declspec(property(get=get_AreAnySettingsActive)) bool  AreAnySettingsActive;

 __declspec(property(get=get_IsLightingActive)) bool  IsLightingActive;

 __declspec(property(get=get_IsPostProcessingAllowed)) bool  IsPostProcessingAllowed;

/// @brief Field <ForceDisplay>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__ForceDisplay_k__BackingField, put=setStaticF__ForceDisplay_k__BackingField)) bool  _ForceDisplay_k__BackingField;

/// @brief Field m_FrameIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameIndex, put=__cordl_internal_set_m_FrameIndex)) int32_t  m_FrameIndex;

/// @brief Field m_LastFrozenCameraUpdateFrame, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastFrozenCameraUpdateFrame, put=__cordl_internal_set_m_LastFrozenCameraUpdateFrame)) int32_t  m_LastFrozenCameraUpdateFrame;

/// @brief Field m_Panel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Panel, put=__cordl_internal_set_m_Panel)) ::MA::Flora::DebugDisplayFlora_SettingsPanel*  m_Panel;

/// @brief Field s_CachedIndirectViewCullingStats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CachedIndirectViewCullingStats, put=setStaticF_s_CachedIndirectViewCullingStats)) ::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>*  s_CachedIndirectViewCullingStats;

/// @brief Field s_FreezableCameras, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FreezableCameras, put=setStaticF_s_FreezableCameras)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  s_FreezableCameras;

/// @brief Field s_SharedProperties, offset 0xffffffff, size 0x3c 
 __declspec(property(get=getStaticF_s_SharedProperties, put=setStaticF_s_SharedProperties)) ::MA::Flora::FloraDebugDisplayProperties  s_SharedProperties;

/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr operator  ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr operator  ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

/// @brief Method AddViewStatsDataRow, addr 0x1814c5150, size 0x340, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Table_DebugUI_Row* AddViewStatsDataRow(int32_t  viewStatsIndex) ;

/// @brief Method GetViewStats, addr 0x180974130, size 0xeb0, virtual false, abstract: false, final false
static inline ::MA::Flora::GPUCullingStats GetViewStats(int32_t  viewStatsIndex) ;

/// @brief Method GetViewStatsCount, addr 0x1814c5490, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetViewStatsCount() ;

/// @brief Method InitFreezableCameras, addr 0x1814c54e0, size 0x2e0, virtual false, abstract: false, final false
static inline bool InitFreezableCameras() ;

static inline ::MA::Flora::DebugDisplayFlora* New_ctor() ;

/// @brief Method TryGetScreenClearColor, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool TryGetScreenClearColor(::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel, addr 0x1814c57c0, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel() ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_m_FrameIndex() const;

constexpr int32_t& __cordl_internal_get_m_FrameIndex() ;

constexpr int32_t const& __cordl_internal_get_m_LastFrozenCameraUpdateFrame() const;

constexpr int32_t& __cordl_internal_get_m_LastFrozenCameraUpdateFrame() ;

constexpr ::MA::Flora::DebugDisplayFlora_SettingsPanel* const& __cordl_internal_get_m_Panel() const;

constexpr ::MA::Flora::DebugDisplayFlora_SettingsPanel*& __cordl_internal_get_m_Panel() ;

constexpr void __cordl_internal_set_m_FrameIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastFrozenCameraUpdateFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_Panel(::MA::Flora::DebugDisplayFlora_SettingsPanel*  value) ;

/// @brief Method .ctor, addr 0x1814c5910, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__ForceDisplay_k__BackingField() ;

static inline ::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>* getStaticF_s_CachedIndirectViewCullingStats() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* getStaticF_s_FreezableCameras() ;

static inline ::MA::Flora::FloraDebugDisplayProperties getStaticF_s_SharedProperties() ;

/// @brief Method get_Active, addr 0x1814c59a0, size 0x60, virtual false, abstract: false, final false
static inline bool get_Active() ;

/// @brief Method get_AreAnySettingsActive, addr 0x1814c5a00, size 0x90, virtual true, abstract: false, final true
inline bool get_AreAnySettingsActive() ;

/// @brief Method get_ForceDisplay, addr 0x1814c5a90, size 0x40, virtual false, abstract: false, final false
static inline bool get_ForceDisplay() ;

/// @brief Method get_IsLightingActive, addr 0x1814c5ad0, size 0x20, virtual true, abstract: false, final true
inline bool get_IsLightingActive() ;

/// @brief Method get_IsPostProcessingAllowed, addr 0x1814c5ad0, size 0x20, virtual true, abstract: false, final true
inline bool get_IsPostProcessingAllowed() ;

/// @brief Method get_Properties, addr 0x1814c5af0, size 0x30, virtual false, abstract: false, final false
static inline ::by_ref<::MA::Flora::FloraDebugDisplayProperties> get_Properties() ;

/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

static inline void setStaticF__ForceDisplay_k__BackingField(bool  value) ;

static inline void setStaticF_s_CachedIndirectViewCullingStats(::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>*  value) ;

static inline void setStaticF_s_FreezableCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  value) ;

static inline void setStaticF_s_SharedProperties(::MA::Flora::FloraDebugDisplayProperties  value) ;

/// @brief Method set_ForceDisplay, addr 0x1814c5b20, size 0x50, virtual false, abstract: false, final false
static inline void set_ForceDisplay(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplayFlora() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugDisplayFlora(DebugDisplayFlora && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugDisplayFlora", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugDisplayFlora(DebugDisplayFlora const& ) = delete;

/// @brief Field FPSFormatString offset 0xffffffff size 0x8
static constexpr ::ConstString  FPSFormatString{u"{0:F1}"};

/// @brief Field FormatString offset 0xffffffff size 0x8
static constexpr ::ConstString  FormatString{u"{0}"};

/// @brief Field FrozenCameraRefreshRate offset 0xffffffff size 0x4
static constexpr int32_t  FrozenCameraRefreshRate{static_cast<int32_t>(0x1e)};

/// @brief Field MSFormatString offset 0xffffffff size 0x8
static constexpr ::ConstString  MSFormatString{u"{0:F2}ms"};

/// @brief Field MaxViewCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxViewCount{static_cast<int32_t>(0x20)};

/// @brief Field PanelName offset 0xffffffff size 0x8
static constexpr ::ConstString  PanelName{u"Flora"};

/// @brief Field RefreshRate offset 0xffffffff size 0x4
static constexpr float_t  RefreshRate{static_cast<float_t>(0.2f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13265};

/// @brief Field m_Panel, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::DebugDisplayFlora_SettingsPanel*  ___m_Panel;

/// @brief Field m_FrameIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_FrameIndex;

/// @brief Field m_LastFrozenCameraUpdateFrame, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_LastFrozenCameraUpdateFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugDisplayFlora, ___m_Panel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugDisplayFlora, ___m_FrameIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugDisplayFlora, ___m_LastFrozenCameraUpdateFrame) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugDisplayFlora) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
