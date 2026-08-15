#pragma once
// IWYU pragma private; include "MA/Flora/UnityExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityExtensions)
namespace MA::Flora {
template<typename T>
struct EntityObjectRef_1;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace MA::Flora {
class UnityExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::UnityExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::UnityExtensions*, "MA.Flora", "UnityExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.UnityExtensions
class CORDL_TYPE UnityExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::MA::Flora::EntityObjectRef_1<T> As(::UnityEngine::EntityId  entityId) ;

/// @brief Method IsValid, addr 0x181513390, size 0x10, virtual false, abstract: false, final false
static inline bool IsValid(::UnityEngine::EntityId  entityId) ;

/// @brief Method ToObject, addr 0x1815133a0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> ToObject(::UnityEngine::EntityId  entityId) ;

/// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ToObject(::UnityEngine::EntityId  entityId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityExtensions(UnityExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityExtensions(UnityExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::UnityExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
