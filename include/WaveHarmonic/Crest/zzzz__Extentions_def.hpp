#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Extentions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Extentions)
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class Extentions;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Extentions*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Extentions*, "WaveHarmonic.Crest", "Extentions");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Extentions
class CORDL_TYPE Extentions : public ::System::Object {
public:
// Declarations
/// @brief Method Manage, addr 0x182567800, size 0x40, virtual false, abstract: false, final false
static inline void Manage(::UnityEngine::Component*  owner, ::UnityEngine::GameObject*  object) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extentions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extentions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extentions(Extentions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extentions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extentions(Extentions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Extentions) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
