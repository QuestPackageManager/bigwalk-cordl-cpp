#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectMaterialProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectMaterialProperty)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectMaterialProperty_PresetName;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectMaterialProperty_PresetName;
}
namespace GlobalNamespace {
class PeckEffectMaterialProperty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectMaterialProperty_PresetName);
MARK_REF_T(::GlobalNamespace::PeckEffectMaterialProperty*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectMaterialProperty_PresetName, "", "PeckEffectMaterialProperty/PresetName");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectMaterialProperty*, "", "PeckEffectMaterialProperty");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectMaterialProperty/PresetName
struct CORDL_TYPE PeckEffectMaterialProperty_PresetName {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectMaterialProperty_PresetName_Unwrapped
enum struct __PeckEffectMaterialProperty_PresetName_Unwrapped : int32_t {
__E_Custom = static_cast<int32_t>(0x0),
__E_EmissiveMask0 = static_cast<int32_t>(0xa),
__E_EmissiveMask1 = static_cast<int32_t>(0xb),
__E_EmissiveMask2 = static_cast<int32_t>(0xc),
__E_EmissiveMask3 = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectMaterialProperty_PresetName_Unwrapped () const noexcept {
return static_cast<__PeckEffectMaterialProperty_PresetName_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectMaterialProperty_PresetName() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectMaterialProperty_PresetName(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(0)
static ::GlobalNamespace::PeckEffectMaterialProperty_PresetName const Custom;

/// @brief Field EmissiveMask0 value: I32(10)
static ::GlobalNamespace::PeckEffectMaterialProperty_PresetName const EmissiveMask0;

/// @brief Field EmissiveMask1 value: I32(11)
static ::GlobalNamespace::PeckEffectMaterialProperty_PresetName const EmissiveMask1;

/// @brief Field EmissiveMask2 value: I32(12)
static ::GlobalNamespace::PeckEffectMaterialProperty_PresetName const EmissiveMask2;

/// @brief Field EmissiveMask3 value: I32(13)
static ::GlobalNamespace::PeckEffectMaterialProperty_PresetName const EmissiveMask3;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5392};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty_PresetName, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectMaterialProperty_PresetName) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectMaterialProperty::PresetName, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectMaterialProperty
class CORDL_TYPE PeckEffectMaterialProperty : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PresetName = ::GlobalNamespace::PeckEffectMaterialProperty_PresetName;

/// @brief Field customName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_customName, put=__cordl_internal_set_customName)) ::StringW  customName;

/// @brief Field floatsPerState, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_floatsPerState, put=__cordl_internal_set_floatsPerState)) ::ArrayW<float_t>  floatsPerState;

/// @brief Field isGlobal, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGlobal, put=__cordl_internal_set_isGlobal)) bool  isGlobal;

/// @brief Field logVerbose, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field presetName, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_presetName, put=__cordl_internal_set_presetName)) ::GlobalNamespace::PeckEffectMaterialProperty_PresetName  presetName;

/// @brief Field propertyBlockHelper, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelper, put=__cordl_internal_set_propertyBlockHelper)) ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x18044a340, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectMaterialProperty* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18044a3e0, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Peck, addr 0x18044a400, size 0x10, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetEffect, addr 0x18044a410, size 0x160, virtual false, abstract: false, final false
inline void SetEffect(int32_t  state) ;

constexpr ::StringW const& __cordl_internal_get_customName() const;

constexpr ::StringW& __cordl_internal_get_customName() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_floatsPerState() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_floatsPerState() ;

constexpr bool const& __cordl_internal_get_isGlobal() const;

constexpr bool& __cordl_internal_get_isGlobal() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName const& __cordl_internal_get_presetName() const;

constexpr ::GlobalNamespace::PeckEffectMaterialProperty_PresetName& __cordl_internal_get_presetName() ;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& __cordl_internal_get_propertyBlockHelper() const;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& __cordl_internal_get_propertyBlockHelper() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_customName(::StringW  value) ;

constexpr void __cordl_internal_set_floatsPerState(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_isGlobal(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_presetName(::GlobalNamespace::PeckEffectMaterialProperty_PresetName  value) ;

constexpr void __cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectMaterialProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectMaterialProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectMaterialProperty(PeckEffectMaterialProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectMaterialProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectMaterialProperty(PeckEffectMaterialProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5393};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field propertyBlockHelper, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  ___propertyBlockHelper;

/// @brief Field isGlobal, offset: 0x50, size: 0x1, def value: None
 bool  ___isGlobal;

/// @brief Field presetName, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::PeckEffectMaterialProperty_PresetName  ___presetName;

/// @brief Field customName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___customName;

/// @brief Field floatsPerState, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ___floatsPerState;

/// @brief Field logVerbose, offset: 0x68, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty, ___propertyBlockHelper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty, ___isGlobal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty, ___presetName) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty, ___customName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty, ___floatsPerState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMaterialProperty, ___logVerbose) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectMaterialProperty) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
