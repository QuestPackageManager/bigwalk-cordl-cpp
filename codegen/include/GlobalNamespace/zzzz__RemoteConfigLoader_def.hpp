#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteConfigLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteConfigLoader)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
struct RemoteConfigLoader__LoadAsync_d__1;
}
namespace GlobalNamespace {
class RemoteConfig;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class RemoteConfigLoader;
}
namespace GlobalNamespace {
struct RemoteConfigLoader__LoadAsync_d__1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RemoteConfigLoader*);
MARK_VAL_T(::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RemoteConfigLoader*, "", "RemoteConfigLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1, "", "RemoteConfigLoader/<LoadAsync>d__1");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UnityAsyncExtensions::UnityWebRequestAsyncOperationAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: RemoteConfigLoader/<LoadAsync>d__1
struct CORDL_TYPE RemoteConfigLoader__LoadAsync_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157c100, size 0x4e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigLoader__LoadAsync_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::RemoteConfig*>", modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter", modifiers: "", def_value: None }]
constexpr RemoteConfigLoader__LoadAsync_d__1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::RemoteConfig*>  __t__builder, ::UnityEngine::Networking::UnityWebRequest*  _request_5__2, ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::RemoteConfig*>  __t__builder;

/// @brief Field <request>5__2, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1, _request_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RemoteConfigLoader
class CORDL_TYPE RemoteConfigLoader : public ::System::Object {
public:
// Declarations
using _LoadAsync_d__1 = ::GlobalNamespace::RemoteConfigLoader__LoadAsync_d__1;

/// @brief Method LoadAsync, addr 0x181575b70, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::GlobalNamespace::RemoteConfig*> LoadAsync() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfigLoader(RemoteConfigLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfigLoader(RemoteConfigLoader const& ) = delete;

/// @brief Field Url offset 0xffffffff size 0x8
static constexpr ::ConstString  Url{u"https://bigwalk-configs.sfo3.digitaloceanspaces.com/Title_Settings.json"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RemoteConfigLoader) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
