#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSProjectManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginCallbackInfo_impl.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_impl.hpp"
#include "Steamworks/zzzz__HAuthTicket_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EOSProjectManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateDeviceIdCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__DeleteDeviceIdCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnDeleteDeviceIdCallback_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "GlobalNamespace/zzzz__EOSProjectManager_def.hpp"
#include "GlobalNamespace/zzzz__EOSProjectPlatform_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSManager_def.hpp"
#include "Shipmate/Porting/zzzz__BaseAuthValues_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__GetAuthSessionTicketResponse_t_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c::*)()>(&::GlobalNamespace::EOSProjectManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c._Setup_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSProjectManager___c::*)()>(&::GlobalNamespace::EOSProjectManager___c::_Setup_b__21_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038e2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {"<Setup>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c._ReconnectAndRecoverLobby_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSProjectManager___c::*)()>(&::GlobalNamespace::EOSProjectManager___c::_ReconnectAndRecoverLobby_b__25_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18038e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {"<ReconnectAndRecoverLobby>b__25_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c._WipeDeviceId_b__35_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c::*)(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>)>(&::GlobalNamespace::EOSProjectManager___c::_WipeDeviceId_b__35_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18038e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {"<WipeDeviceId>b__35_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSProjectManager___c::setStaticF___9(::GlobalNamespace::EOSProjectManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::EOSProjectManager___c*, "<>9", ::GlobalNamespace::EOSProjectManager___c*>(std::forward<::GlobalNamespace::EOSProjectManager___c*>(value));
}
inline ::GlobalNamespace::EOSProjectManager___c* GlobalNamespace::EOSProjectManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::EOSProjectManager___c*, "<>9", ::GlobalNamespace::EOSProjectManager___c*>();
}
inline void GlobalNamespace::EOSProjectManager___c::setStaticF___9__21_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__21_0", ::GlobalNamespace::EOSProjectManager___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::EOSProjectManager___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__21_0", ::GlobalNamespace::EOSProjectManager___c*>();
}
inline void GlobalNamespace::EOSProjectManager___c::setStaticF___9__25_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__25_0", ::GlobalNamespace::EOSProjectManager___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::EOSProjectManager___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__25_0", ::GlobalNamespace::EOSProjectManager___c*>();
}
inline void GlobalNamespace::EOSProjectManager___c::setStaticF___9__35_0(::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*, "<>9__35_0", ::GlobalNamespace::EOSProjectManager___c*>(std::forward<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*>(value));
}
inline ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback* GlobalNamespace::EOSProjectManager___c::getStaticF___9__35_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*, "<>9__35_0", ::GlobalNamespace::EOSProjectManager___c*>();
}
inline void GlobalNamespace::EOSProjectManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EOSProjectManager___c::_Setup_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {"<Setup>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EOSProjectManager___c::_ReconnectAndRecoverLobby_b__25_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {"<ReconnectAndRecoverLobby>b__25_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager___c::_WipeDeviceId_b__35_0(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c*>(),
                        {"<WipeDeviceId>b__35_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSProjectManager___c* GlobalNamespace::EOSProjectManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSProjectManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager___c::EOSProjectManager___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::*)()>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0._EOSDeviceConnect_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::*)(::Epic::OnlineServices::Connect::LoginCallbackInfo)>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::_EOSDeviceConnect_b__0)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18038e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*>(),
                        {"<EOSDeviceConnect>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::_EOSDeviceConnect_b__0(::Epic::OnlineServices::Connect::LoginCallbackInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*>(),
                        {"<EOSDeviceConnect>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0* GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0::EOSProjectManager___c__DisplayClass34_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::*)()>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1._EOSDeviceConnect_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::*)(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>)>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::_EOSDeviceConnect_b__1)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18038e5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1*>(),
                        {"<EOSDeviceConnect>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Connect::LoginCallbackInfo& GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr ::Epic::OnlineServices::Connect::LoginCallbackInfo const& GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::__cordl_internal_set_info(::Epic::OnlineServices::Connect::LoginCallbackInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___info = value;
}
constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*& GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0* const& GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::_EOSDeviceConnect_b__1(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1*>(),
                        {"<EOSDeviceConnect>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1* GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1::EOSProjectManager___c__DisplayClass34_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::*)()>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0._EOSLogin_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::*)(::Epic::OnlineServices::Connect::LoginCallbackInfo)>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::_EOSLogin_b__0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18038e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*>(),
                        {"<EOSLogin>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0._EOSLogin_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::*)(::Epic::OnlineServices::Connect::CreateUserCallbackInfo)>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::_EOSLogin_b__1)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18038e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*>(),
                        {"<EOSLogin>b__1", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::ExternalCredentialType& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_credType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___credType;
}
constexpr ::Epic::OnlineServices::ExternalCredentialType const& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_credType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___credType;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_set_credType(::Epic::OnlineServices::ExternalCredentialType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___credType = value;
}
constexpr ::StringW& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::StringW const& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_set_token(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr ::StringW& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::StringW& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_additionalToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalToken;
}
constexpr ::StringW const& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get_additionalToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalToken;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_set_additionalToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additionalToken = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* const& GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::__cordl_internal_set___9__1(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::_EOSLogin_b__0(::Epic::OnlineServices::Connect::LoginCallbackInfo  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*>(),
                        {"<EOSLogin>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::_EOSLogin_b__1(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  create)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*>(),
                        {"<EOSLogin>b__1", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, create);
}
inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0* GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0::EOSProjectManager___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::*)()>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0._EOSDevLogin_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::*)(::Epic::OnlineServices::Auth::LoginCallbackInfo)>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::_EOSDevLogin_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18038e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0*>(),
                        {"<EOSDevLogin>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::__cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::_EOSDevLogin_b__0(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0*>(),
                        {"<EOSDevLogin>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginInfo);
}
inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0* GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0::EOSProjectManager___c__DisplayClass38_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::*)()>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0._StartEpicConnectLoginWithRetry_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::*)(::Epic::OnlineServices::Connect::LoginCallbackInfo)>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::_StartEpicConnectLoginWithRetry_b__0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18038ea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*>(),
                        {"<StartEpicConnectLoginWithRetry>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0._StartEpicConnectLoginWithRetry_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::*)(::Epic::OnlineServices::Connect::CreateUserCallbackInfo)>(&::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::_StartEpicConnectLoginWithRetry_b__1)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18038eb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*>(),
                        {"<StartEpicConnectLoginWithRetry>b__1", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::EpicAccountId*& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get_localUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserId;
}
constexpr ::Epic::OnlineServices::EpicAccountId* const& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get_localUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserId;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_set_localUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localUserId = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* const& GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::__cordl_internal_set___9__1(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::_StartEpicConnectLoginWithRetry_b__0(::Epic::OnlineServices::Connect::LoginCallbackInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*>(),
                        {"<StartEpicConnectLoginWithRetry>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::_StartEpicConnectLoginWithRetry_b__1(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  create)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*>(),
                        {"<StartEpicConnectLoginWithRetry>b__1", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, create);
}
inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0* GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0::EOSProjectManager___c__DisplayClass39_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::*)()>(&::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x18038a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::EOSProjectManager__AuthenticateUser_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22::EOSProjectManager__AuthenticateUser_d__22()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__Connect_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__Connect_d__20::*)()>(&::GlobalNamespace::EOSProjectManager__Connect_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x18038a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Connect_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__Connect_d__20.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__Connect_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSProjectManager__Connect_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Connect_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSProjectManager__Connect_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Connect_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager__Connect_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Connect_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSProjectManager__Connect_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSProjectManager__Connect_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipWarnings", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSProjectManager__Connect_d__20::EOSProjectManager__Connect_d__20(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, bool  skipWarnings, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->skipWarnings = skipWarnings;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager__Connect_d__20::EOSProjectManager__Connect_d__20()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::*)()>(&::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18038af70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Shipmate::Porting::BaseAuthValues*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Shipmate::Porting::BaseAuthValues*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::*)()>(&::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x18038b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ticketData_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ticketSize_5__3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::Steamworks::HAuthTicket>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::EOSProjectManager__GetSteamAuthToken_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::ArrayW<uint8_t>  _ticketData_5__2, uint32_t  _ticketSize_5__3, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::Steamworks::HAuthTicket>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->_ticketData_5__2 = _ticketData_5__2;
this->_ticketSize_5__3 = _ticketSize_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27::EOSProjectManager__GetSteamAuthToken_d__27()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::*)()>(&::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x18038ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::EOSProjectManager__ReconnectAndRecoverLobby_d__25(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<int32_t>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25::EOSProjectManager__ReconnectAndRecoverLobby_d__25()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__Setup_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__Setup_d__21::*)()>(&::GlobalNamespace::EOSProjectManager__Setup_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x18038db50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Setup_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager__Setup_d__21.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager__Setup_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSProjectManager__Setup_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Setup_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSProjectManager__Setup_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Setup_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager__Setup_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager__Setup_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSProjectManager__Setup_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSProjectManager__Setup_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSProjectManager__Setup_d__21::EOSProjectManager__Setup_d__21(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager__Setup_d__21::EOSProjectManager__Setup_d__21()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EOSProjectManager> (*)()>(&::GlobalNamespace::EOSProjectManager::get_Instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18035c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::get_IsConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037dcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.get_IsOnRejoinCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::get_IsOnRejoinCooldown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18037dd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_IsOnRejoinCooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.get_CurrentConnectTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask> (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::get_CurrentConnectTask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18037dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_CurrentConnectTask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.SetCurrentConnectTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)(::Cysharp::Threading::Tasks::UniTask)>(&::GlobalNamespace::EOSProjectManager::SetCurrentConnectTask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18037d890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"SetCurrentConnectTask", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037ce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18037da30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSProjectManager::*)(bool)>(&::GlobalNamespace::EOSProjectManager::Connect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18037cf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Connect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::Setup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.AuthenticateUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSProjectManager::*)(bool)>(&::GlobalNamespace::EOSProjectManager::AuthenticateUser)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037cdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"AuthenticateUser", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.IsUserAlreadyLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::IsUserAlreadyLogin)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18037d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"IsUserAlreadyLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.ReconnectAndRecoverLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::ReconnectAndRecoverLobby)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18037d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"ReconnectAndRecoverLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.GetPS5AndSwitch2AuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)()>(&::GlobalNamespace::EOSProjectManager::GetPS5AndSwitch2AuthToken)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"GetPS5AndSwitch2AuthToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.GetSteamAuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)()>(&::GlobalNamespace::EOSProjectManager::GetSteamAuthToken)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18037d680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"GetSteamAuthToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.CleanupUserLoginToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::EOSProjectManager::CleanupUserLoginToken)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18037cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"CleanupUserLoginToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.GetAuthSessionTicketResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)(::Steamworks::GetAuthSessionTicketResponse_t)>(&::GlobalNamespace::EOSProjectManager::GetAuthSessionTicketResponse)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18037d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"GetAuthSessionTicketResponse", {}, {::i2c::type_of<::Steamworks::GetAuthSessionTicketResponse_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.ClearSetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::ClearSetUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18037cf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"ClearSetUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.DoDeviceTokenConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::DoDeviceTokenConnect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18037cfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"DoDeviceTokenConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.EOSDeviceConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)(::StringW)>(&::GlobalNamespace::EOSProjectManager::EOSDeviceConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18037d300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSDeviceConnect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.WipeDeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::WipeDeviceId)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18037db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"WipeDeviceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.EOSConnectLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSProjectManager::*)(::Epic::OnlineServices::ExternalCredentialType, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::EOSProjectManager::EOSConnectLogin)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18037d040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSConnectLogin", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.EOSLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)(::Epic::OnlineServices::ExternalCredentialType, ::StringW, ::StringW, ::StringW, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*)>(&::GlobalNamespace::EOSProjectManager::EOSLogin)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18037d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSLogin", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.EOSDevLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::EOSDevLogin)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18037d0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSDevLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager.StartEpicConnectLoginWithRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)(::Epic::OnlineServices::EpicAccountId*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*)>(&::GlobalNamespace::EOSProjectManager::StartEpicConnectLoginWithRetry)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18037d970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"StartEpicConnectLoginWithRetry", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSProjectManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSProjectManager::*)()>(&::GlobalNamespace::EOSProjectManager::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18037dc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EOSProjectManager::__cordl_internal_get_devAuthToolCredentialName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devAuthToolCredentialName;
}
constexpr ::StringW const& GlobalNamespace::EOSProjectManager::__cordl_internal_get_devAuthToolCredentialName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devAuthToolCredentialName;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set_devAuthToolCredentialName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devAuthToolCredentialName = value;
}
constexpr ::GlobalNamespace::EOSProjectPlatform*& GlobalNamespace::EOSProjectManager::__cordl_internal_get__platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platform;
}
constexpr ::GlobalNamespace::EOSProjectPlatform* const& GlobalNamespace::EOSProjectManager::__cordl_internal_get__platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platform;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set__platform(::GlobalNamespace::EOSProjectPlatform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____platform = value;
}
constexpr bool& GlobalNamespace::EOSProjectManager::__cordl_internal_get__wasSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSetup;
}
constexpr bool const& GlobalNamespace::EOSProjectManager::__cordl_internal_get__wasSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSetup;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set__wasSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasSetup = value;
}
constexpr float_t& GlobalNamespace::EOSProjectManager::__cordl_internal_get_startedRejoiningCooldownAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startedRejoiningCooldownAt;
}
constexpr float_t const& GlobalNamespace::EOSProjectManager::__cordl_internal_get_startedRejoiningCooldownAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startedRejoiningCooldownAt;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set_startedRejoiningCooldownAt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startedRejoiningCooldownAt = value;
}
constexpr ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>& GlobalNamespace::EOSProjectManager::__cordl_internal_get__currentConnectTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentConnectTask;
}
constexpr ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask> const& GlobalNamespace::EOSProjectManager::__cordl_internal_get__currentConnectTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentConnectTask;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set__currentConnectTask(::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentConnectTask = value;
}
constexpr bool& GlobalNamespace::EOSProjectManager::__cordl_internal_get_alreadyRecovering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alreadyRecovering;
}
constexpr bool const& GlobalNamespace::EOSProjectManager::__cordl_internal_get_alreadyRecovering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alreadyRecovering;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set_alreadyRecovering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alreadyRecovering = value;
}
constexpr bool& GlobalNamespace::EOSProjectManager::__cordl_internal_get__triedDeviceCreate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triedDeviceCreate;
}
constexpr bool const& GlobalNamespace::EOSProjectManager::__cordl_internal_get__triedDeviceCreate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triedDeviceCreate;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set__triedDeviceCreate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triedDeviceCreate = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& GlobalNamespace::EOSProjectManager::__cordl_internal_get__deviceTokenConnectTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceTokenConnectTask;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& GlobalNamespace::EOSProjectManager::__cordl_internal_get__deviceTokenConnectTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceTokenConnectTask;
}
constexpr void GlobalNamespace::EOSProjectManager::__cordl_internal_set__deviceTokenConnectTask(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deviceTokenConnectTask = value;
}
inline void GlobalNamespace::EOSProjectManager::setStaticF__instance(::UnityW<::GlobalNamespace::EOSProjectManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::EOSProjectManager>, "_instance", ::GlobalNamespace::EOSProjectManager*>(std::forward<::UnityW<::GlobalNamespace::EOSProjectManager>>(value));
}
inline ::UnityW<::GlobalNamespace::EOSProjectManager> GlobalNamespace::EOSProjectManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::EOSProjectManager>, "_instance", ::GlobalNamespace::EOSProjectManager*>();
}
inline void GlobalNamespace::EOSProjectManager::setStaticF__sessionAuthCallback(::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*  value)  {
::cordl_internals::setStaticField<::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*, "_sessionAuthCallback", ::GlobalNamespace::EOSProjectManager*>(std::forward<::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*>(value));
}
inline ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>* GlobalNamespace::EOSProjectManager::getStaticF__sessionAuthCallback()  {
return ::cordl_internals::getStaticField<::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*, "_sessionAuthCallback", ::GlobalNamespace::EOSProjectManager*>();
}
inline void GlobalNamespace::EOSProjectManager::setStaticF__sessionAuthTicketTask(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>*, "_sessionAuthTicketTask", ::GlobalNamespace::EOSProjectManager*>(std::forward<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>*>(value));
}
inline ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>* GlobalNamespace::EOSProjectManager::getStaticF__sessionAuthTicketTask()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>*, "_sessionAuthTicketTask", ::GlobalNamespace::EOSProjectManager*>();
}
inline void GlobalNamespace::EOSProjectManager::setStaticF__currentAuthTicket(::System::Nullable_1<::Steamworks::HAuthTicket>  value)  {
::cordl_internals::setStaticField<::System::Nullable_1<::Steamworks::HAuthTicket>, "_currentAuthTicket", ::GlobalNamespace::EOSProjectManager*>(std::forward<::System::Nullable_1<::Steamworks::HAuthTicket>>(value));
}
inline ::System::Nullable_1<::Steamworks::HAuthTicket> GlobalNamespace::EOSProjectManager::getStaticF__currentAuthTicket()  {
return ::cordl_internals::getStaticField<::System::Nullable_1<::Steamworks::HAuthTicket>, "_currentAuthTicket", ::GlobalNamespace::EOSProjectManager*>();
}
inline ::UnityW<::GlobalNamespace::EOSProjectManager> GlobalNamespace::EOSProjectManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EOSProjectManager>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::EOSProjectManager::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EOSProjectManager::get_IsOnRejoinCooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_IsOnRejoinCooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask> GlobalNamespace::EOSProjectManager::get_CurrentConnectTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"get_CurrentConnectTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager::SetCurrentConnectTask(::Cysharp::Threading::Tasks::UniTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"SetCurrentConnectTask", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline void GlobalNamespace::EOSProjectManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSProjectManager::Connect(bool  skipWarnings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Connect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, skipWarnings);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSProjectManager::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSProjectManager::AuthenticateUser(bool  skipUpsell)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"AuthenticateUser", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, skipUpsell);
}
inline bool GlobalNamespace::EOSProjectManager::IsUserAlreadyLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"IsUserAlreadyLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSProjectManager::ReconnectAndRecoverLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"ReconnectAndRecoverLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::EOSProjectManager::GetPS5AndSwitch2AuthToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"GetPS5AndSwitch2AuthToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::EOSProjectManager::GetSteamAuthToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"GetSteamAuthToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager::CleanupUserLoginToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"CleanupUserLoginToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager::GetAuthSessionTicketResponse(::Steamworks::GetAuthSessionTicketResponse_t  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"GetAuthSessionTicketResponse", {}, {::i2c::type_of<::Steamworks::GetAuthSessionTicketResponse_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
inline void GlobalNamespace::EOSProjectManager::ClearSetUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"ClearSetUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSProjectManager::DoDeviceTokenConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"DoDeviceTokenConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager::EOSDeviceConnect(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSDeviceConnect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName);
}
inline void GlobalNamespace::EOSProjectManager::WipeDeviceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"WipeDeviceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSProjectManager::EOSConnectLogin(::Epic::OnlineServices::ExternalCredentialType  credType, ::StringW  token, ::StringW  displayName, ::StringW  additionalToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSConnectLogin", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, credType, token, displayName, additionalToken);
}
inline void GlobalNamespace::EOSProjectManager::EOSLogin(::Epic::OnlineServices::ExternalCredentialType  credType, ::StringW  token, ::StringW  displayName, ::StringW  additionalToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSLogin", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credType, token, displayName, additionalToken, tcs);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSProjectManager::EOSDevLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"EOSDevLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void GlobalNamespace::EOSProjectManager::StartEpicConnectLoginWithRetry(::Epic::OnlineServices::EpicAccountId*  localUserId, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {"StartEpicConnectLoginWithRetry", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localUserId, tcs);
}
inline void GlobalNamespace::EOSProjectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSProjectManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EOSProjectManager* GlobalNamespace::EOSProjectManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSProjectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSProjectManager::EOSProjectManager()   {
}
