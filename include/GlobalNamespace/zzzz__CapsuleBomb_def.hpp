#pragma once
// IWYU pragma private; include "GlobalNamespace/CapsuleBomb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CapsuleBomb)
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class CapsuleBomb;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CapsuleBomb*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CapsuleBomb*, "", "CapsuleBomb");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CapsuleBomb
class CORDL_TYPE CapsuleBomb : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inputSystem, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_inputSystem, put=__cordl_internal_set_inputSystem)) ::GlobalNamespace::PeckSystemReference  inputSystem;

/// @brief Field mineSystem, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mineSystem, put=__cordl_internal_set_mineSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  mineSystem;

static inline ::GlobalNamespace::CapsuleBomb* New_ctor() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_inputSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_inputSystem() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_mineSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_mineSystem() ;

constexpr void __cordl_internal_set_inputSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_mineSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapsuleBomb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapsuleBomb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CapsuleBomb(CapsuleBomb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleBomb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapsuleBomb(CapsuleBomb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5028};

/// @brief Field inputSystem, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___inputSystem;

/// @brief Field mineSystem, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___mineSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CapsuleBomb, ___inputSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CapsuleBomb, ___mineSystem) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CapsuleBomb) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
