#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/IAsyncOnRenderImageHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOnRenderImageHandler)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnRenderImageHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*, "Cysharp.Threading.Tasks.Triggers", "IAsyncOnRenderImageHandler");
// Dependencies 
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.IAsyncOnRenderImageHandler
class CORDL_TYPE IAsyncOnRenderImageHandler {
public:
// Declarations
/// @brief Method OnRenderImageAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> OnRenderImageAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOnRenderImageHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOnRenderImageHandler(IAsyncOnRenderImageHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
