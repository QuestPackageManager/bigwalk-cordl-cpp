#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveContext_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::*)()>(&::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x181aceb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_request_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::OpenObserveManager__UploadPayload_d__10(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveManager>  __4__this, ::StringW  payload, int32_t  _i_5__2, ::UnityEngine::Networking::UnityWebRequest*  _request_5__3, ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->payload = payload;
this->_i_5__2 = _i_5__2;
this->_request_5__3 = _request_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveManager__UploadPayload_d__10::OpenObserveManager__UploadPayload_d__10()   {
}
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Shipmates::Utils::OpenObserveManager> (*)()>(&::Shipmates::Utils::OpenObserveManager::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveManager::*)()>(&::Shipmates::Utils::OpenObserveManager::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181accc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager.SetLogContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveManager::*)(::Shipmates::Utils::OpenObserveContext*)>(&::Shipmates::Utils::OpenObserveManager::SetLogContext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"SetLogContext", {}, {::i2c::type_of<::Shipmates::Utils::OpenObserveContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager.UploadPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Shipmates::Utils::OpenObserveManager::*)(::StringW)>(&::Shipmates::Utils::OpenObserveManager::UploadPayload)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181acccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"UploadPayload", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::Utils::OpenObserveContext* (::Shipmates::Utils::OpenObserveManager::*)()>(&::Shipmates::Utils::OpenObserveManager::get_Context)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveManager::*)()>(&::Shipmates::Utils::OpenObserveManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__uploadUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadUrl;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__uploadUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadUrl;
}
constexpr void Shipmates::Utils::OpenObserveManager::__cordl_internal_set__uploadUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploadUrl = value;
}
constexpr ::StringW& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr void Shipmates::Utils::OpenObserveManager::__cordl_internal_set__token(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____token = value;
}
constexpr ::StringW& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__fullBulkUploadUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullBulkUploadUrl;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__fullBulkUploadUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullBulkUploadUrl;
}
constexpr void Shipmates::Utils::OpenObserveManager::__cordl_internal_set__fullBulkUploadUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fullBulkUploadUrl = value;
}
constexpr ::StringW& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__base64Credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base64Credentials;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__base64Credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base64Credentials;
}
constexpr void Shipmates::Utils::OpenObserveManager::__cordl_internal_set__base64Credentials(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____base64Credentials = value;
}
constexpr ::Shipmates::Utils::OpenObserveContext*& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__currentOpenObserveContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentOpenObserveContext;
}
constexpr ::Shipmates::Utils::OpenObserveContext* const& Shipmates::Utils::OpenObserveManager::__cordl_internal_get__currentOpenObserveContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentOpenObserveContext;
}
constexpr void Shipmates::Utils::OpenObserveManager::__cordl_internal_set__currentOpenObserveContext(::Shipmates::Utils::OpenObserveContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentOpenObserveContext = value;
}
inline void Shipmates::Utils::OpenObserveManager::setStaticF__instance(::UnityW<::Shipmates::Utils::OpenObserveManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Shipmates::Utils::OpenObserveManager>, "_instance", ::Shipmates::Utils::OpenObserveManager*>(std::forward<::UnityW<::Shipmates::Utils::OpenObserveManager>>(value));
}
inline ::UnityW<::Shipmates::Utils::OpenObserveManager> Shipmates::Utils::OpenObserveManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Shipmates::Utils::OpenObserveManager>, "_instance", ::Shipmates::Utils::OpenObserveManager*>();
}
inline ::UnityW<::Shipmates::Utils::OpenObserveManager> Shipmates::Utils::OpenObserveManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Shipmates::Utils::OpenObserveManager>>(nullptr, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveManager::SetLogContext(::Shipmates::Utils::OpenObserveContext*  openObserveContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"SetLogContext", {}, {::i2c::type_of<::Shipmates::Utils::OpenObserveContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openObserveContext);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Shipmates::Utils::OpenObserveManager::UploadPayload(::StringW  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"UploadPayload", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method, payload);
}
inline ::Shipmates::Utils::OpenObserveContext* Shipmates::Utils::OpenObserveManager::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::Utils::OpenObserveContext*>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::Utils::OpenObserveManager* Shipmates::Utils::OpenObserveManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::OpenObserveManager*>());
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveManager::OpenObserveManager()   {
}
