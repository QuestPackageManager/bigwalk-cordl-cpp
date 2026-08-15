#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropHomeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PeckEffectPropHomeSettings)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectPropHomeSettings_PropHomeSetting;
}
namespace GlobalNamespace {
class PropHomeBlock;
}
namespace GlobalNamespace {
class PropHome;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectPropHomeSettings;
}
namespace GlobalNamespace {
struct PeckEffectPropHomeSettings_PropHomeSetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectPropHomeSettings*);
MARK_VAL_T(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPropHomeSettings*, "", "PeckEffectPropHomeSettings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting, "", "PeckEffectPropHomeSettings/PropHomeSetting");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectPropHomeSettings/PropHomeSetting
struct CORDL_TYPE PeckEffectPropHomeSettings_PropHomeSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPropHomeSettings_PropHomeSetting() ;

// Ctor Parameters [CppParam { name: "blockPlacingMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockPlacingValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockGrabbingMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blockGrabbingValue", ty: "bool", modifiers: "", def_value: None }]
constexpr PeckEffectPropHomeSettings_PropHomeSetting(bool  blockPlacingMask, bool  blockPlacingValue, bool  blockGrabbingMask, bool  blockGrabbingValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5403};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field blockPlacingMask, offset: 0x0, size: 0x1, def value: None
 bool  blockPlacingMask;

/// @brief Field blockPlacingValue, offset: 0x1, size: 0x1, def value: None
 bool  blockPlacingValue;

/// @brief Field blockGrabbingMask, offset: 0x2, size: 0x1, def value: None
 bool  blockGrabbingMask;

/// @brief Field blockGrabbingValue, offset: 0x3, size: 0x1, def value: None
 bool  blockGrabbingValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting, blockPlacingMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting, blockPlacingValue) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting, blockGrabbingMask) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting, blockGrabbingValue) == 0x3, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectPropHomeSettings::PropHomeSetting, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPropHomeSettings
class CORDL_TYPE PeckEffectPropHomeSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PropHomeSetting = ::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting;

/// @brief Field propHome, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHome, put=__cordl_internal_set_propHome)) ::UnityW<::GlobalNamespace::PropHome>  propHome;

/// @brief Field propHomeBlock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHomeBlock, put=__cordl_internal_set_propHomeBlock)) ::UnityW<::GlobalNamespace::PropHomeBlock>  propHomeBlock;

/// @brief Field settingsPerState, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsPerState, put=__cordl_internal_set_settingsPerState)) ::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>  settingsPerState;

/// @brief Field systemReference, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Apply, addr 0x18044bed0, size 0x40, virtual false, abstract: false, final false
inline void Apply(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting  setting, ::GlobalNamespace::PropHome*  propHome) ;

/// @brief Method Awake, addr 0x18044bf10, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectPropHomeSettings* New_ctor() ;

/// @brief Method OnPeck, addr 0x18044bfb0, size 0x110, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_propHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_propHome() ;

constexpr ::UnityW<::GlobalNamespace::PropHomeBlock> const& __cordl_internal_get_propHomeBlock() const;

constexpr ::UnityW<::GlobalNamespace::PropHomeBlock>& __cordl_internal_get_propHomeBlock() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting> const& __cordl_internal_get_settingsPerState() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>& __cordl_internal_get_settingsPerState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_propHomeBlock(::UnityW<::GlobalNamespace::PropHomeBlock>  value) ;

constexpr void __cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPropHomeSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropHomeSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPropHomeSettings(PeckEffectPropHomeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropHomeSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPropHomeSettings(PeckEffectPropHomeSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5404};

/// @brief Field propHome, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___propHome;

/// @brief Field propHomeBlock, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHomeBlock>  ___propHomeBlock;

/// @brief Field systemReference, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field settingsPerState, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>  ___settingsPerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings, ___propHome) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings, ___propHomeBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings, ___systemReference) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropHomeSettings, ___settingsPerState) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPropHomeSettings) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
