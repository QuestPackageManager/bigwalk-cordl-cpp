#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenObserveManager)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Shipmates::Utils {
class OpenObserveContext;
}
namespace Shipmates::Utils {
struct OpenObserveManager__UploadPayload_d__10;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Shipmates::Utils {
class OpenObserveManager;
}
namespace Shipmates::Utils {
struct OpenObserveManager__UploadPayload_d__10;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::OpenObserveManager*);
MARK_VAL_T(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveManager*, "Shipmates.Utils", "OpenObserveManager");
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, "Shipmates.Utils", "OpenObserveManager/<UploadPayload>d__10");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UnityAsyncExtensions::UnityWebRequestAsyncOperationAwaiter
namespace Shipmates::Utils {
// Is value type: true
// CS Name: Shipmates.Utils.OpenObserveManager/<UploadPayload>d__10
struct CORDL_TYPE OpenObserveManager__UploadPayload_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181aceb00, size 0x5d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveManager__UploadPayload_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveManager>", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr OpenObserveManager__UploadPayload_d__10(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveManager>  __4__this, ::StringW  payload, int32_t  _i_5__2, ::UnityEngine::Networking::UnityWebRequest*  _request_5__3, ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21063};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Shipmates::Utils::OpenObserveManager>  __4__this;

/// @brief Field payload, offset: 0x28, size: 0x8, def value: None
 ::StringW  payload;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <request>5__3, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _request_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, payload) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, _i_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, _request_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10) == 0x60, "Size mismatch!");

} // namespace end def Shipmates::Utils
// Dependencies UnityEngine.MonoBehaviour
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.OpenObserveManager
class CORDL_TYPE OpenObserveManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UploadPayload_d__10 = ::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10;

 __declspec(property(get=get_Context)) ::Shipmates::Utils::OpenObserveContext*  Context;

/// @brief Field _base64Credentials, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__base64Credentials, put=__cordl_internal_set__base64Credentials)) ::StringW  _base64Credentials;

/// @brief Field _currentOpenObserveContext, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentOpenObserveContext, put=__cordl_internal_set__currentOpenObserveContext)) ::Shipmates::Utils::OpenObserveContext*  _currentOpenObserveContext;

/// @brief Field _fullBulkUploadUrl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullBulkUploadUrl, put=__cordl_internal_set__fullBulkUploadUrl)) ::StringW  _fullBulkUploadUrl;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Shipmates::Utils::OpenObserveManager>  _instance;

/// @brief Field _token, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__token, put=__cordl_internal_set__token)) ::StringW  _token;

/// @brief Field _uploadUrl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploadUrl, put=__cordl_internal_set__uploadUrl)) ::StringW  _uploadUrl;

/// @brief Method Awake, addr 0x181accc30, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Shipmates::Utils::OpenObserveManager* New_ctor() ;

/// @brief Method SetLogContext, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void SetLogContext(::Shipmates::Utils::OpenObserveContext*  openObserveContext) ;

/// @brief Method UploadPayload, addr 0x181acccd0, size 0x1a0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> UploadPayload(::StringW  payload) ;

constexpr ::StringW const& __cordl_internal_get__base64Credentials() const;

constexpr ::StringW& __cordl_internal_get__base64Credentials() ;

constexpr ::Shipmates::Utils::OpenObserveContext* const& __cordl_internal_get__currentOpenObserveContext() const;

constexpr ::Shipmates::Utils::OpenObserveContext*& __cordl_internal_get__currentOpenObserveContext() ;

constexpr ::StringW const& __cordl_internal_get__fullBulkUploadUrl() const;

constexpr ::StringW& __cordl_internal_get__fullBulkUploadUrl() ;

constexpr ::StringW const& __cordl_internal_get__token() const;

constexpr ::StringW& __cordl_internal_get__token() ;

constexpr ::StringW const& __cordl_internal_get__uploadUrl() const;

constexpr ::StringW& __cordl_internal_get__uploadUrl() ;

constexpr void __cordl_internal_set__base64Credentials(::StringW  value) ;

constexpr void __cordl_internal_set__currentOpenObserveContext(::Shipmates::Utils::OpenObserveContext*  value) ;

constexpr void __cordl_internal_set__fullBulkUploadUrl(::StringW  value) ;

constexpr void __cordl_internal_set__token(::StringW  value) ;

constexpr void __cordl_internal_set__uploadUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Shipmates::Utils::OpenObserveManager> getStaticF__instance() ;

/// @brief Method get_Context, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Shipmates::Utils::OpenObserveContext* get_Context() ;

/// @brief Method get_Instance, addr 0x181acce70, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Shipmates::Utils::OpenObserveManager> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::Shipmates::Utils::OpenObserveManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenObserveManager(OpenObserveManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenObserveManager(OpenObserveManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21064};

/// @brief Field _uploadUrl, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____uploadUrl;

/// @brief Field _token, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____token;

/// @brief Field _fullBulkUploadUrl, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____fullBulkUploadUrl;

/// @brief Field _base64Credentials, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____base64Credentials;

/// @brief Field _currentOpenObserveContext, offset: 0x40, size: 0x8, def value: None
 ::Shipmates::Utils::OpenObserveContext*  ____currentOpenObserveContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveManager, ____uploadUrl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager, ____token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager, ____fullBulkUploadUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager, ____base64Credentials) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveManager, ____currentOpenObserveContext) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveManager) == 0x48, "Size mismatch!");

} // namespace end def Shipmates::Utils
