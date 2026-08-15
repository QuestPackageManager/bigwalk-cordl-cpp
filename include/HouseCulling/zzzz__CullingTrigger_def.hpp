#pragma once
// IWYU pragma private; include "HouseCulling/CullingTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CullingTrigger)
namespace HouseCulling {
class CullingRegion;
}
// Forward declare root types
namespace HouseCulling {
class CullingTrigger;
}
// Write type traits
MARK_REF_T(::HouseCulling::CullingTrigger*);
DEFINE_IL2CPP_CLASS(::HouseCulling::CullingTrigger*, "HouseCulling", "CullingTrigger");
// Dependencies HouseCulling.CullingRegion, UnityEngine.MonoBehaviour
namespace HouseCulling {
// Is value type: false
// CS Name: HouseCulling.CullingTrigger
class CORDL_TYPE CullingTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field priority, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

/// @brief Field region, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_region, put=__cordl_internal_set_region)) ::UnityW<::HouseCulling::CullingRegion>  region;

/// @brief Field regions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_regions, put=__cordl_internal_set_regions)) ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  regions;

static inline ::HouseCulling::CullingTrigger* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr ::UnityW<::HouseCulling::CullingRegion> const& __cordl_internal_get_region() const;

constexpr ::UnityW<::HouseCulling::CullingRegion>& __cordl_internal_get_region() ;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>> const& __cordl_internal_get_regions() const;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>& __cordl_internal_get_regions() ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

constexpr void __cordl_internal_set_region(::UnityW<::HouseCulling::CullingRegion>  value) ;

constexpr void __cordl_internal_set_regions(::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingTrigger(CullingTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingTrigger(CullingTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5787};

/// @brief Field region, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HouseCulling::CullingRegion>  ___region;

/// @brief Field regions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  ___regions;

/// @brief Field priority, offset: 0x30, size: 0x4, def value: None
 int32_t  ___priority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseCulling::CullingTrigger, ___region) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingTrigger, ___regions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingTrigger, ___priority) == 0x30, "Offset mismatch!");

static_assert(sizeof(::HouseCulling::CullingTrigger) == 0x38, "Size mismatch!");

} // namespace end def HouseCulling
