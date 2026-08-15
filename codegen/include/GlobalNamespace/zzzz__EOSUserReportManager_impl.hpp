#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSUserReportManager.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EOSUserReportManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformInterface_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__ReportsInterface_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__SendPlayerBehaviorReportCompleteCallbackInfo_def.hpp"
#include "GlobalNamespace/zzzz__EOSUserReportManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EOSUserReportManager_UserReportingContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSUserReportManager_UserReportingContext::*)()>(&::GlobalNamespace::EOSUserReportManager_UserReportingContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager_UserReportingContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EOSUserReportManager_UserReportingContext::__cordl_internal_get_UserDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserDisplayName;
}
constexpr ::StringW const& GlobalNamespace::EOSUserReportManager_UserReportingContext::__cordl_internal_get_UserDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserDisplayName;
}
constexpr void GlobalNamespace::EOSUserReportManager_UserReportingContext::__cordl_internal_set_UserDisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserDisplayName = value;
}
inline void GlobalNamespace::EOSUserReportManager_UserReportingContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager_UserReportingContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EOSUserReportManager_UserReportingContext* GlobalNamespace::EOSUserReportManager_UserReportingContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSUserReportManager_UserReportingContext*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSUserReportManager_UserReportingContext::EOSUserReportManager_UserReportingContext()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::*)()>(&::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0._ReportUser_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::*)(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo>)>(&::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::_ReportUser_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ace2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0*>(),
                        {"<ReportUser>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>*& GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::__cordl_internal_get_completionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>* const& GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::__cordl_internal_get_completionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr void GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::__cordl_internal_set_completionSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completionSource = value;
}
inline void GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::_ReportUser_b__0(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0*>(),
                        {"<ReportUser>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0* GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0::EOSUserReportManager___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSUserReportManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSUserReportManager::*)()>(&::GlobalNamespace::EOSUserReportManager::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acb370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSUserReportManager.ReportUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::GlobalNamespace::EOSUserReportManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::EOSUserReportManager::ReportUser)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181acb3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager*>(),
                        {"ReportUser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSUserReportManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSUserReportManager::*)()>(&::GlobalNamespace::EOSUserReportManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Platform::PlatformInterface*& GlobalNamespace::EOSUserReportManager::__cordl_internal_get_platformInterface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformInterface;
}
constexpr ::Epic::OnlineServices::Platform::PlatformInterface* const& GlobalNamespace::EOSUserReportManager::__cordl_internal_get_platformInterface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformInterface;
}
constexpr void GlobalNamespace::EOSUserReportManager::__cordl_internal_set_platformInterface(::Epic::OnlineServices::Platform::PlatformInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformInterface = value;
}
constexpr ::Epic::OnlineServices::Reports::ReportsInterface*& GlobalNamespace::EOSUserReportManager::__cordl_internal_get_reportsInterface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportsInterface;
}
constexpr ::Epic::OnlineServices::Reports::ReportsInterface* const& GlobalNamespace::EOSUserReportManager::__cordl_internal_get_reportsInterface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportsInterface;
}
constexpr void GlobalNamespace::EOSUserReportManager::__cordl_internal_set_reportsInterface(::Epic::OnlineServices::Reports::ReportsInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportsInterface = value;
}
inline void GlobalNamespace::EOSUserReportManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> GlobalNamespace::EOSUserReportManager::ReportUser(::StringW  eosUserId, ::StringW  userDisplayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager*>(),
                        {"ReportUser", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method, eosUserId, userDisplayName);
}
inline void GlobalNamespace::EOSUserReportManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSUserReportManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EOSUserReportManager* GlobalNamespace::EOSUserReportManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSUserReportManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSUserReportManager::EOSUserReportManager()   {
}
