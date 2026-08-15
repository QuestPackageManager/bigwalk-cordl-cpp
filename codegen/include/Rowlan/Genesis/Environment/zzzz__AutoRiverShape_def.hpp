#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Environment/AutoRiverShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoRiverShape)
namespace JBooth::MicroVerseCore {
class SplinePath;
}
// Forward declare root types
namespace Rowlan::Genesis::Environment {
class AutoRiverShape;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Environment::AutoRiverShape*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Environment::AutoRiverShape*, "Rowlan.Genesis.Environment", "AutoRiverShape");
// Dependencies UnityEngine.MonoBehaviour
namespace Rowlan::Genesis::Environment {
// Is value type: false
// CS Name: Rowlan.Genesis.Environment.AutoRiverShape
class CORDL_TYPE AutoRiverShape : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field autoRefresh, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoRefresh, put=__cordl_internal_set_autoRefresh)) bool  autoRefresh;

/// @brief Field continuous, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_continuous, put=__cordl_internal_set_continuous)) bool  continuous;

/// @brief Field riverLength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_riverLength, put=__cordl_internal_set_riverLength)) int32_t  riverLength;

/// @brief Field samplingDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_samplingDistance, put=__cordl_internal_set_samplingDistance)) int32_t  samplingDistance;

/// @brief Field splinePath, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_splinePath, put=__cordl_internal_set_splinePath)) ::UnityW<::JBooth::MicroVerseCore::SplinePath>  splinePath;

static inline ::Rowlan::Genesis::Environment::AutoRiverShape* New_ctor() ;

constexpr bool const& __cordl_internal_get_autoRefresh() const;

constexpr bool& __cordl_internal_get_autoRefresh() ;

constexpr bool const& __cordl_internal_get_continuous() const;

constexpr bool& __cordl_internal_get_continuous() ;

constexpr int32_t const& __cordl_internal_get_riverLength() const;

constexpr int32_t& __cordl_internal_get_riverLength() ;

constexpr int32_t const& __cordl_internal_get_samplingDistance() const;

constexpr int32_t& __cordl_internal_get_samplingDistance() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath> const& __cordl_internal_get_splinePath() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath>& __cordl_internal_get_splinePath() ;

constexpr void __cordl_internal_set_autoRefresh(bool  value) ;

constexpr void __cordl_internal_set_continuous(bool  value) ;

constexpr void __cordl_internal_set_riverLength(int32_t  value) ;

constexpr void __cordl_internal_set_samplingDistance(int32_t  value) ;

constexpr void __cordl_internal_set_splinePath(::UnityW<::JBooth::MicroVerseCore::SplinePath>  value) ;

/// @brief Method .ctor, addr 0x181abd240, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoRiverShape() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoRiverShape", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoRiverShape(AutoRiverShape && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoRiverShape", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoRiverShape(AutoRiverShape const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20426};

/// @brief Field continuous, offset: 0x20, size: 0x1, def value: None
 bool  ___continuous;

/// @brief Field autoRefresh, offset: 0x21, size: 0x1, def value: None
 bool  ___autoRefresh;

/// @brief Field riverLength, offset: 0x24, size: 0x4, def value: None
 int32_t  ___riverLength;

/// @brief Field samplingDistance, offset: 0x28, size: 0x4, def value: None
 int32_t  ___samplingDistance;

/// @brief Field splinePath, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::SplinePath>  ___splinePath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Environment::AutoRiverShape, ___continuous) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Environment::AutoRiverShape, ___autoRefresh) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Environment::AutoRiverShape, ___riverLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Environment::AutoRiverShape, ___samplingDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Environment::AutoRiverShape, ___splinePath) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Environment::AutoRiverShape) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Environment
