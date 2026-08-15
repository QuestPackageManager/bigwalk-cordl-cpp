#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckSystemBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PeckSystemBlock)
// Forward declare root types
namespace GlobalNamespace {
class PeckSystemBlock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckSystemBlock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckSystemBlock*, "", "PeckSystemBlock");
// Dependencies TrackedPeckState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckSystemBlock
class CORDL_TYPE PeckSystemBlock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field systems, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_systems, put=__cordl_internal_set_systems)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  systems;

static inline ::GlobalNamespace::PeckSystemBlock* New_ctor() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& __cordl_internal_get_systems() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& __cordl_internal_get_systems() ;

constexpr void __cordl_internal_set_systems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckSystemBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckSystemBlock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckSystemBlock(PeckSystemBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckSystemBlock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckSystemBlock(PeckSystemBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5429};

/// @brief Field systems, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  ___systems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckSystemBlock, ___systems) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckSystemBlock) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
