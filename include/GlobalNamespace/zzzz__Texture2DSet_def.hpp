#pragma once
// IWYU pragma private; include "GlobalNamespace/Texture2DSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AbstractObjectSet_1_def.hpp"
CORDL_MODULE_EXPORT(Texture2DSet)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class Texture2DSet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Texture2DSet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Texture2DSet*, "", "Texture2DSet");
// Dependencies AbstractObjectSet`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: Texture2DSet
class CORDL_TYPE Texture2DSet : public ::GlobalNamespace::AbstractObjectSet_1<::UnityW<::UnityEngine::Texture2D>> {
public:
// Declarations
static inline ::GlobalNamespace::Texture2DSet* New_ctor() ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2DSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2DSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2DSet(Texture2DSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2DSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2DSet(Texture2DSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Texture2DSet) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
