#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteSnapGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(RemoteSnapGroup)
// Forward declare root types
namespace GlobalNamespace {
class RemoteSnapGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RemoteSnapGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RemoteSnapGroup*, "", "RemoteSnapGroup");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: RemoteSnapGroup
class CORDL_TYPE RemoteSnapGroup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::GlobalNamespace::RemoteSnapGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteSnapGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteSnapGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteSnapGroup(RemoteSnapGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteSnapGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteSnapGroup(RemoteSnapGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4929};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RemoteSnapGroup) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
