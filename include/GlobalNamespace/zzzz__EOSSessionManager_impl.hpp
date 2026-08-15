#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSSessionManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EOSSessionManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__DestroySessionCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__EndSessionCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnDestroySessionCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetails_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchFindCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearch_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionsInterface_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__UpdateSessionCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "GlobalNamespace/zzzz__EOSSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__HouseSessionInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::*)()>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0._CreateSession_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::*)(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::_CreateSession_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18157d080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0*>(),
                        {"<CreateSession>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::__cordl_internal_get_gameCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameCode;
}
constexpr ::StringW const& GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::__cordl_internal_get_gameCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameCode;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::__cordl_internal_set_gameCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameCode = value;
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::_CreateSession_b__0(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0*>(),
                        {"<CreateSession>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0* GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0::EOSSessionManager___c__DisplayClass24_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::*)()>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0._FindFriendsSessions_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::_FindFriendsSessions_b__0)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18157d170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*>(),
                        {"<FindFriendsSessions>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get_results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>* const& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get_results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_set_results(::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___results = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::_FindFriendsSessions_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*>(),
                        {"<FindFriendsSessions>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0* GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0::EOSSessionManager___c__DisplayClass27_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::*)()>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0._FindAllPublicSessions_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::_FindAllPublicSessions_b__0)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18157d170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*>(),
                        {"<FindAllPublicSessions>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get_results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>* const& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get_results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_set_results(::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___results = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::_FindAllPublicSessions_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*>(),
                        {"<FindAllPublicSessions>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0* GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0::EOSSessionManager___c__DisplayClass28_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::*)()>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0._FindSessionAndConnectByCode_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::_FindSessionAndConnectByCode_b__0)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18157d390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0*>(),
                        {"<FindSessionAndConnectByCode>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::__cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::_FindSessionAndConnectByCode_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0*>(),
                        {"<FindSessionAndConnectByCode>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0* GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0::EOSSessionManager___c__DisplayClass29_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::*)()>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0._IsSessionExistByCode_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::_IsSessionExistByCode_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18157d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*>(),
                        {"<IsSessionExistByCode>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
constexpr bool& GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr bool const& GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::__cordl_internal_set_result(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::_IsSessionExistByCode_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*>(),
                        {"<IsSessionExistByCode>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0* GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0::EOSSessionManager___c__DisplayClass30_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::*)()>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0._IsSessionExistByUser_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::_IsSessionExistByUser_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18157d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*>(),
                        {"<IsSessionExistByUser>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
constexpr bool& GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr bool const& GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::__cordl_internal_set_result(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::_IsSessionExistByUser_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*>(),
                        {"<IsSessionExistByUser>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0* GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0::EOSSessionManager___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::*)()>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0._DestroySession_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::*)(::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::_DestroySession_b__0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18157d890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*>(),
                        {"<DestroySession>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0._DestroySession_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::*)(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo>)>(&::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::_DestroySession_b__1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18157da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*>(),
                        {"<DestroySession>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Sessions::SessionsInterface*& GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_get_sessions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessions;
}
constexpr ::Epic::OnlineServices::Sessions::SessionsInterface* const& GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_get_sessions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessions;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_set_sessions(::Epic::OnlineServices::Sessions::SessionsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessions = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*& GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::Epic::OnlineServices::Sessions::OnDestroySessionCallback* const& GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::__cordl_internal_set___9__1(::Epic::OnlineServices::Sessions::OnDestroySessionCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::_DestroySession_b__0(::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfo>  endInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*>(),
                        {"<DestroySession>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endInfo);
}
inline void GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::_DestroySession_b__1(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*>(),
                        {"<DestroySession>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0* GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0::EOSSessionManager___c__DisplayClass32_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::*)()>(&::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1815771e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "userID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "crossPlay", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::EOSSessionManager__CreateSessionIfNotCreated_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, ::StringW  userID, ::StringW  playerName, ::StringW  worldName, bool  crossPlay, ::StringW  platform, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->userID = userID;
this->playerName = playerName;
this->worldName = worldName;
this->crossPlay = crossPlay;
this->platform = platform;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26::EOSSessionManager__CreateSessionIfNotCreated_d__26()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::*)()>(&::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x181578370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::EOSSessionManager__FindAllPublicSessions_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28::EOSSessionManager__FindAllPublicSessions_d__28()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::*)()>(&::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x181578b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "friendCodes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::EOSSessionManager__FindFriendsSessions_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, ::System::Collections::Generic::List_1<::StringW>*  friendCodes, ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->friendCodes = friendCodes;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27::EOSSessionManager__FindFriendsSessions_d__27()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::*)()>(&::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x18157a580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_attempts_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_codeGenerated_5__3", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_potentialCode_5__4", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::EOSSessionManager__GenerateGameCode_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, int32_t  _attempts_5__2, bool  _codeGenerated_5__3, ::StringW  _potentialCode_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_attempts_5__2 = _attempts_5__2;
this->_codeGenerated_5__3 = _codeGenerated_5__3;
this->_potentialCode_5__4 = _potentialCode_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22::EOSSessionManager__GenerateGameCode_d__22()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::*)()>(&::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x18157b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::EOSSessionManager__IsSessionExistByCode_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  code, ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->code = code;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30::EOSSessionManager__IsSessionExistByCode_d__30()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::*)()>(&::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x18157b780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "user", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::EOSSessionManager__IsSessionExistByUser_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  user, ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->user = user;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31::EOSSessionManager__IsSessionExistByUser_d__31()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EOSSessionManager> (*)()>(&::GlobalNamespace::EOSSessionManager::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181574860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.get_CurrentSessionCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::get_CurrentSessionCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"get_CurrentSessionCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.get_SessionHostId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::get_SessionHostId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"get_SessionHostId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181572ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815745b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.GenerateGameCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::GenerateGameCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181574400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"GenerateGameCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.GenerateCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::GenerateCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18156f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"GenerateCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.CreateSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)(::StringW, ::StringW, ::StringW, bool, ::StringW)>(&::GlobalNamespace::EOSSessionManager::CreateSession)> {
  constexpr static std::size_t size = 0xea0;
  constexpr static std::size_t addrs = 0x181572f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"CreateSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.ClearCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::ClearCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181572bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"ClearCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.CreateSessionIfNotCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)(::StringW, ::StringW, ::StringW, bool, ::StringW)>(&::GlobalNamespace::EOSSessionManager::CreateSessionIfNotCreated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181572e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"CreateSessionIfNotCreated", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.FindFriendsSessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>* (::GlobalNamespace::EOSSessionManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::EOSSessionManager::FindFriendsSessions)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181574010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"FindFriendsSessions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.FindAllPublicSessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>* (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::FindAllPublicSessions)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181573f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"FindAllPublicSessions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.FindSessionAndConnectByCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)(::StringW)>(&::GlobalNamespace::EOSSessionManager::FindSessionAndConnectByCode)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1815740d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"FindSessionAndConnectByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.IsSessionExistByCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::EOSSessionManager::*)(::StringW)>(&::GlobalNamespace::EOSSessionManager::IsSessionExistByCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181574490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"IsSessionExistByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.IsSessionExistByUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::EOSSessionManager::*)(::StringW)>(&::GlobalNamespace::EOSSessionManager::IsSessionExistByUser)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181574520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"IsSessionExistByUser", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.DestroySession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::DestroySession)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181573e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"DestroySession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.ConvertToHouseSessionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HouseSessionInfo* (::GlobalNamespace::EOSSessionManager::*)(::Epic::OnlineServices::Sessions::SessionDetails*, ::Epic::OnlineServices::Sessions::SessionDetailsInfo)>(&::GlobalNamespace::EOSSessionManager::ConvertToHouseSessionInfo)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181572c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"ConvertToHouseSessionInfo", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetails*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.TryGetStringAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Epic::OnlineServices::Sessions::SessionDetails*, ::StringW)>(&::GlobalNamespace::EOSSessionManager::TryGetStringAttribute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181574760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"TryGetStringAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager.TryGetBoolAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (*)(::Epic::OnlineServices::Sessions::SessionDetails*, ::StringW)>(&::GlobalNamespace::EOSSessionManager::TryGetBoolAttribute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181574670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"TryGetBoolAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSSessionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSSessionManager::*)()>(&::GlobalNamespace::EOSSessionManager::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181570450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EOSSessionManager::__cordl_internal_get_hostingSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostingSession;
}
constexpr bool const& GlobalNamespace::EOSSessionManager::__cordl_internal_get_hostingSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostingSession;
}
constexpr void GlobalNamespace::EOSSessionManager::__cordl_internal_set_hostingSession(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostingSession = value;
}
constexpr ::StringW& GlobalNamespace::EOSSessionManager::__cordl_internal_get_currentSessionCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSessionCode;
}
constexpr ::StringW const& GlobalNamespace::EOSSessionManager::__cordl_internal_get_currentSessionCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSessionCode;
}
constexpr void GlobalNamespace::EOSSessionManager::__cordl_internal_set_currentSessionCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSessionCode = value;
}
constexpr ::System::Action*& GlobalNamespace::EOSSessionManager::__cordl_internal_get_onSessionCodeCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSessionCodeCreated;
}
constexpr ::System::Action* const& GlobalNamespace::EOSSessionManager::__cordl_internal_get_onSessionCodeCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSessionCodeCreated;
}
constexpr void GlobalNamespace::EOSSessionManager::__cordl_internal_set_onSessionCodeCreated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSessionCodeCreated = value;
}
constexpr ::System::Action_1<::Epic::OnlineServices::Result>*& GlobalNamespace::EOSSessionManager::__cordl_internal_get_onSessionFoundRequestResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSessionFoundRequestResponse;
}
constexpr ::System::Action_1<::Epic::OnlineServices::Result>* const& GlobalNamespace::EOSSessionManager::__cordl_internal_get_onSessionFoundRequestResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSessionFoundRequestResponse;
}
constexpr void GlobalNamespace::EOSSessionManager::__cordl_internal_set_onSessionFoundRequestResponse(::System::Action_1<::Epic::OnlineServices::Result>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSessionFoundRequestResponse = value;
}
constexpr ::System::Action*& GlobalNamespace::EOSSessionManager::__cordl_internal_get_OnSessionDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionDisconnect;
}
constexpr ::System::Action* const& GlobalNamespace::EOSSessionManager::__cordl_internal_get_OnSessionDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionDisconnect;
}
constexpr void GlobalNamespace::EOSSessionManager::__cordl_internal_set_OnSessionDisconnect(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSessionDisconnect = value;
}
constexpr ::Epic::OnlineServices::ProductUserId*& GlobalNamespace::EOSSessionManager::__cordl_internal_get_sessionHostId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionHostId;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& GlobalNamespace::EOSSessionManager::__cordl_internal_get_sessionHostId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionHostId;
}
constexpr void GlobalNamespace::EOSSessionManager::__cordl_internal_set_sessionHostId(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionHostId = value;
}
inline void GlobalNamespace::EOSSessionManager::setStaticF_instance(::UnityW<::GlobalNamespace::EOSSessionManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::EOSSessionManager>, "instance", ::GlobalNamespace::EOSSessionManager*>(std::forward<::UnityW<::GlobalNamespace::EOSSessionManager>>(value));
}
inline ::UnityW<::GlobalNamespace::EOSSessionManager> GlobalNamespace::EOSSessionManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::EOSSessionManager>, "instance", ::GlobalNamespace::EOSSessionManager*>();
}
inline ::UnityW<::GlobalNamespace::EOSSessionManager> GlobalNamespace::EOSSessionManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EOSSessionManager>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::EOSSessionManager::get_CurrentSessionCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"get_CurrentSessionCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Epic::OnlineServices::ProductUserId* GlobalNamespace::EOSSessionManager::get_SessionHostId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"get_SessionHostId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSSessionManager::GenerateGameCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"GenerateGameCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::ArrayW<char16_t> GlobalNamespace::EOSSessionManager::GenerateCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"GenerateCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager::CreateSession(::StringW  userID, ::StringW  playerName, ::StringW  worldName, bool  crossPlay, ::StringW  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"CreateSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userID, playerName, worldName, crossPlay, platform);
}
inline void GlobalNamespace::EOSSessionManager::ClearCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"ClearCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager::CreateSessionIfNotCreated(::StringW  userID, ::StringW  playerName, ::StringW  worldName, bool  crossPlay, ::StringW  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"CreateSessionIfNotCreated", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userID, playerName, worldName, crossPlay, platform);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>* GlobalNamespace::EOSSessionManager::FindFriendsSessions(::System::Collections::Generic::List_1<::StringW>*  friendCodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"FindFriendsSessions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>*>(this, ___internal_method, friendCodes);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>* GlobalNamespace::EOSSessionManager::FindAllPublicSessions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"FindAllPublicSessions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::EOSSessionManager::FindSessionAndConnectByCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"FindSessionAndConnectByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::EOSSessionManager::IsSessionExistByCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"IsSessionExistByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, code);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::EOSSessionManager::IsSessionExistByUser(::StringW  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"IsSessionExistByUser", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, user);
}
inline void GlobalNamespace::EOSSessionManager::DestroySession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"DestroySession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseSessionInfo* GlobalNamespace::EOSSessionManager::ConvertToHouseSessionInfo(::Epic::OnlineServices::Sessions::SessionDetails*  details, ::Epic::OnlineServices::Sessions::SessionDetailsInfo  sessionDetailsInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"ConvertToHouseSessionInfo", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetails*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetailsInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HouseSessionInfo*>(this, ___internal_method, details, sessionDetailsInfo);
}
inline ::StringW GlobalNamespace::EOSSessionManager::TryGetStringAttribute(::Epic::OnlineServices::Sessions::SessionDetails*  details, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"TryGetStringAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, details, key);
}
inline ::System::Nullable_1<bool> GlobalNamespace::EOSSessionManager::TryGetBoolAttribute(::Epic::OnlineServices::Sessions::SessionDetails*  details, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {"TryGetBoolAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(nullptr, ___internal_method, details, key);
}
inline void GlobalNamespace::EOSSessionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSSessionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EOSSessionManager* GlobalNamespace::EOSSessionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSSessionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSSessionManager::EOSSessionManager()   {
}
