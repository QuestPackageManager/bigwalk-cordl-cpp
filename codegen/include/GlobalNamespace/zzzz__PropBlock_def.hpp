#pragma once
// IWYU pragma private; include "GlobalNamespace/PropBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PropBlock)
// Forward declare root types
namespace GlobalNamespace {
class PropBlock;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropBlock*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropBlock*, "", "PropBlock");
// Dependencies Prop, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropBlock
class CORDL_TYPE PropBlock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field props, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_props, put=__cordl_internal_set_props)) ::ArrayW<::UnityW<::GlobalNamespace::Prop>>  props;

static inline ::GlobalNamespace::PropBlock* New_ctor() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>> const& __cordl_internal_get_props() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>>& __cordl_internal_get_props() ;

constexpr void __cordl_internal_set_props(::ArrayW<::UnityW<::GlobalNamespace::Prop>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropBlock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropBlock(PropBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropBlock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropBlock(PropBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5576};

/// @brief Field props, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::Prop>>  ___props;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropBlock, ___props) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropBlock) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
