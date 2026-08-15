#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/UnityWebRequestResultExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestResultExtensions)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class UnityWebRequestResultExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions*, "Cysharp.Threading.Tasks.Internal", "UnityWebRequestResultExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.UnityWebRequestResultExtensions
class CORDL_TYPE UnityWebRequestResultExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method IsError, addr 0x181e88c00, size 0x40, virtual false, abstract: false, final false
static inline bool IsError(::UnityEngine::Networking::UnityWebRequest*  unityWebRequest) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestResultExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestResultExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestResultExtensions(UnityWebRequestResultExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestResultExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestResultExtensions(UnityWebRequestResultExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14746};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::UnityWebRequestResultExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
