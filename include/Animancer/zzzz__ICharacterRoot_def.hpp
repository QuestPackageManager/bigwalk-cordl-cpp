#pragma once
// IWYU pragma private; include "Animancer/ICharacterRoot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICharacterRoot)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer {
class ICharacterRoot;
}
// Write type traits
MARK_REF_T(::Animancer::ICharacterRoot*);
DEFINE_IL2CPP_CLASS(::Animancer::ICharacterRoot*, "Animancer", "ICharacterRoot");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ICharacterRoot
class CORDL_TYPE ICharacterRoot {
public:
// Declarations
 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method get_transform, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

// Ctor Parameters [CppParam { name: "", ty: "ICharacterRoot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICharacterRoot(ICharacterRoot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
