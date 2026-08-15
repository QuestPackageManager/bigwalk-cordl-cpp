#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnDropHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnDropHandler)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDropHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnDropHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnDropHandler
class CORDL_TYPE IAsyncOnDropHandler {
public:
// Declarations
/// @brief Method OnDropAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> OnDropAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnDropHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnDropHandler(IAsyncOnDropHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
