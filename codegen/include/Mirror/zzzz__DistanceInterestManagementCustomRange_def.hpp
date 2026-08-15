#pragma once
// IWYU pragma private; include "Mirror/DistanceInterestManagementCustomRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DistanceInterestManagementCustomRange)
// Forward declare root types
namespace Mirror {
class DistanceInterestManagementCustomRange;
}
// Write type traits
MARK_REF_T(::Mirror::DistanceInterestManagementCustomRange*);
DEFINE_IL2CPP_CLASS(::Mirror::DistanceInterestManagementCustomRange*, "Mirror", "DistanceInterestManagementCustomRange");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.DistanceInterestManagementCustomRange
class CORDL_TYPE DistanceInterestManagementCustomRange : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field visRange, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_visRange, put=__cordl_internal_set_visRange)) int32_t  visRange;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::DistanceInterestManagementCustomRange* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_visRange() const;

constexpr int32_t& __cordl_internal_get_visRange() ;

constexpr void __cordl_internal_set_visRange(int32_t  value) ;

/// @brief Method .ctor, addr 0x181517e00, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistanceInterestManagementCustomRange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistanceInterestManagementCustomRange", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DistanceInterestManagementCustomRange(DistanceInterestManagementCustomRange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistanceInterestManagementCustomRange", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistanceInterestManagementCustomRange(DistanceInterestManagementCustomRange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19226};

/// @brief Field visRange, offset: 0x68, size: 0x4, def value: None
 int32_t  ___visRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::DistanceInterestManagementCustomRange, ___visRange) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Mirror::DistanceInterestManagementCustomRange) == 0x70, "Size mismatch!");

} // namespace end def Mirror
