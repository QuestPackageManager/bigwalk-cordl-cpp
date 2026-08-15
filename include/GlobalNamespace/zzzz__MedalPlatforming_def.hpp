#pragma once
// IWYU pragma private; include "GlobalNamespace/MedalPlatforming.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "HouseHouse/Medal/zzzz__MedalType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MedalPlatforming)
namespace GlobalNamespace {
class StickyPlatform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MedalPlatforming;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MedalPlatforming*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MedalPlatforming*, "", "MedalPlatforming");
// Dependencies HouseHouse.Medal.MedalType, PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MedalPlatforming
class CORDL_TYPE MedalPlatforming : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field medalType, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_medalType, put=__cordl_internal_set_medalType)) ::HouseHouse::Medal::MedalType  medalType;

/// @brief Field peckStateFilter, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_peckStateFilter, put=__cordl_internal_set_peckStateFilter)) ::GlobalNamespace::PeckStateFilter  peckStateFilter;

/// @brief Field peckSystemReference, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field stickyPlatforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickyPlatforms, put=__cordl_internal_set_stickyPlatforms)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>*  stickyPlatforms;

static inline ::GlobalNamespace::MedalPlatforming* New_ctor() ;

/// @brief Method OnDisable, addr 0x180424b30, size 0x170, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180424ca0, size 0x160, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x180424e00, size 0x60, virtual false, abstract: false, final false
inline void OnEnter() ;

constexpr ::HouseHouse::Medal::MedalType const& __cordl_internal_get_medalType() const;

constexpr ::HouseHouse::Medal::MedalType& __cordl_internal_get_medalType() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_peckStateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_peckStateFilter() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>* const& __cordl_internal_get_stickyPlatforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>*& __cordl_internal_get_stickyPlatforms() ;

constexpr void __cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value) ;

constexpr void __cordl_internal_set_peckStateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_stickyPlatforms(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MedalPlatforming() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MedalPlatforming", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MedalPlatforming(MedalPlatforming && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MedalPlatforming", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MedalPlatforming(MedalPlatforming const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5213};

/// @brief Field stickyPlatforms, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StickyPlatform>>*  ___stickyPlatforms;

/// @brief Field peckSystemReference, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field peckStateFilter, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___peckStateFilter;

/// @brief Field medalType, offset: 0x60, size: 0x4, def value: None
 ::HouseHouse::Medal::MedalType  ___medalType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MedalPlatforming, ___stickyPlatforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MedalPlatforming, ___peckSystemReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MedalPlatforming, ___peckStateFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MedalPlatforming, ___medalType) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MedalPlatforming) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
