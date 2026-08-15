#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsHelper)
namespace GlobalNamespace {
struct LocalizedText_DisplayType;
}
namespace GlobalNamespace {
struct SettingsType;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SettingsHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsHelper*, "", "SettingsHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsHelper
class CORDL_TYPE SettingsHelper : public ::System::Object {
public:
// Declarations
/// @brief Field onCrossplayChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onCrossplayChanged, put=setStaticF_onCrossplayChanged)) ::System::Action_1<int32_t>*  onCrossplayChanged;

/// @brief Field onQualityLevelChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onQualityLevelChanged, put=setStaticF_onQualityLevelChanged)) ::System::Action_1<int32_t>*  onQualityLevelChanged;

/// @brief Method GetArrayLabelValue, addr 0x180399310, size 0x380, virtual false, abstract: false, final false
static inline ::StringW GetArrayLabelValue(::GlobalNamespace::SettingsType  settingsType, int32_t  value, ::by_ref<::GlobalNamespace::LocalizedText_DisplayType>  displayType) ;

/// @brief Method GetDefaultQualityLevel, addr 0x180399690, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetDefaultQualityLevel() ;

/// @brief Method GetDefaultRenderScaleValue, addr 0x180399700, size 0x100, virtual false, abstract: false, final false
static inline int32_t GetDefaultRenderScaleValue() ;

/// @brief Method GetQualityLevel, addr 0x180399800, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetQualityLevel() ;

/// @brief Method IsQualityLevelPS5, addr 0x180399810, size 0x10, virtual false, abstract: false, final false
static inline bool IsQualityLevelPS5(int32_t  level) ;

/// @brief Method IsQualityLevelSwitch2, addr 0x180399820, size 0x10, virtual false, abstract: false, final false
static inline bool IsQualityLevelSwitch2(int32_t  level) ;

/// @brief Method IsSteamDeck, addr 0x180399830, size 0x30, virtual false, abstract: false, final false
static inline bool IsSteamDeck() ;

static inline ::System::Action_1<int32_t>* getStaticF_onCrossplayChanged() ;

static inline ::System::Action_1<int32_t>* getStaticF_onQualityLevelChanged() ;

/// @brief Method get_armsIsAToggle, addr 0x180399860, size 0x30, virtual false, abstract: false, final false
static inline bool get_armsIsAToggle() ;

/// @brief Method get_crossPlayModeActive, addr 0x180399890, size 0x20, virtual false, abstract: false, final false
static inline bool get_crossPlayModeActive() ;

/// @brief Method get_crouchIsAToggle, addr 0x1803998b0, size 0x30, virtual false, abstract: false, final false
static inline bool get_crouchIsAToggle() ;

/// @brief Method get_hudIsHidden, addr 0x1803998e0, size 0x30, virtual false, abstract: false, final false
static inline bool get_hudIsHidden() ;

/// @brief Method get_invertLookScalar, addr 0x180399910, size 0x50, virtual false, abstract: false, final false
static inline float_t get_invertLookScalar() ;

/// @brief Method get_lookSpeedScalar, addr 0x180399960, size 0x40, virtual false, abstract: false, final false
static inline float_t get_lookSpeedScalar() ;

/// @brief Method get_pushToTalkModeActive, addr 0x1803999a0, size 0x30, virtual false, abstract: false, final false
static inline bool get_pushToTalkModeActive() ;

static inline void setStaticF_onCrossplayChanged(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_onQualityLevelChanged(::System::Action_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsHelper(SettingsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsHelper(SettingsHelper const& ) = delete;

/// @brief Field PS5QualityLevel offset 0xffffffff size 0x4
static constexpr int32_t  PS5QualityLevel{static_cast<int32_t>(0x7)};

/// @brief Field Switch2QualityLevel offset 0xffffffff size 0x4
static constexpr int32_t  Switch2QualityLevel{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5611};

/// @brief Field maxFov offset 0xffffffff size 0x4
static constexpr int32_t  maxFov{static_cast<int32_t>(0x5a)};

/// @brief Field minFov offset 0xffffffff size 0x4
static constexpr int32_t  minFov{static_cast<int32_t>(0x2d)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SettingsHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
