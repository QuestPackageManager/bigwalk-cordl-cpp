#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectBrandishMoment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectBrandishMoment)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectBrandishMoment_MomentSetting;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectBrandishMoment;
}
namespace GlobalNamespace {
struct PeckEffectBrandishMoment_MomentSetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectBrandishMoment*);
MARK_VAL_T(::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectBrandishMoment*, "", "PeckEffectBrandishMoment");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting, "", "PeckEffectBrandishMoment/MomentSetting");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectBrandishMoment/MomentSetting
struct CORDL_TYPE PeckEffectBrandishMoment_MomentSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectBrandishMoment_MomentSetting() ;

// Ctor Parameters [CppParam { name: "fire", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectBrandishMoment_MomentSetting(bool  fire, int32_t  id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field fire, offset: 0x0, size: 0x1, def value: None
 bool  fire;

/// @brief Field id, offset: 0x4, size: 0x4, def value: None
 int32_t  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting, fire) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting, id) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectBrandishMoment::MomentSetting, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectBrandishMoment
class CORDL_TYPE PeckEffectBrandishMoment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MomentSetting = ::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting;

/// @brief Field momentSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_momentSettings, put=__cordl_internal_set_momentSettings)) ::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting>  momentSettings;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180448840, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectBrandishMoment* New_ctor() ;

/// @brief Method Peck, addr 0x1804488e0, size 0x110, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting> const& __cordl_internal_get_momentSettings() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting>& __cordl_internal_get_momentSettings() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_momentSettings(::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectBrandishMoment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectBrandishMoment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectBrandishMoment(PeckEffectBrandishMoment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectBrandishMoment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectBrandishMoment(PeckEffectBrandishMoment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5371};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field momentSettings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectBrandishMoment_MomentSetting>  ___momentSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectBrandishMoment, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectBrandishMoment, ___momentSettings) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectBrandishMoment) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
