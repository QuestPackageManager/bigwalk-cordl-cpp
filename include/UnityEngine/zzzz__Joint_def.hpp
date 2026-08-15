#pragma once
// IWYU pragma private; include "UnityEngine/Joint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(Joint)
// Forward declare root types
namespace UnityEngine {
class Joint;
}
// Write type traits
MARK_REF_T(::UnityEngine::Joint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Joint*, "UnityEngine", "Joint");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Joint
class CORDL_TYPE Joint : public ::UnityEngine::Component {
public:
// Declarations
static inline ::UnityEngine::Joint* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Joint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Joint(Joint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Joint(Joint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Joint) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
