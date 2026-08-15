#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColliderHelpers)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderHelpers;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColliderHelpers*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColliderHelpers*, "", "ColliderHelpers");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColliderHelpers
class CORDL_TYPE ColliderHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method GetLowestPointOnColliders, addr 0x18037c560, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetLowestPointOnColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderHelpers(ColliderHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderHelpers(ColliderHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5568};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColliderHelpers) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
