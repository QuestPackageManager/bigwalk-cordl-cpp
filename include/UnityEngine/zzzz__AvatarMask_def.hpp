#pragma once
// IWYU pragma private; include "UnityEngine/AvatarMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AvatarMask)
// Forward declare root types
namespace UnityEngine {
class AvatarMask;
}
// Write type traits
MARK_REF_T(::UnityEngine::AvatarMask*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AvatarMask*, "UnityEngine", "AvatarMask");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AvatarMask
class CORDL_TYPE AvatarMask : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method Internal_Create, addr 0x182236ed0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::AvatarMask*  self) ;

static inline ::UnityEngine::AvatarMask* New_ctor() ;

/// @brief Method .ctor, addr 0x182236ed0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AvatarMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarMask(AvatarMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarMask(AvatarMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19921};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AvatarMask) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
