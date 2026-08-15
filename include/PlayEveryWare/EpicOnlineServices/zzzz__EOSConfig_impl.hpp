#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSConfig.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Config_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSConfig_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__InitializeThreadAffinity_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSConfig_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SandboxDeploymentOverride_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSConfig___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig___c.__cctor_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::EOSConfig* (::PlayEveryWare::EpicOnlineServices::EOSConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSConfig___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180548d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>(),
                        {"<.cctor>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSConfig___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::EOSConfig___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::EOSConfig___c* PlayEveryWare::EpicOnlineServices::EOSConfig___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSConfig___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSConfig* PlayEveryWare::EpicOnlineServices::EOSConfig___c::__cctor_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>(),
                        {"<.cctor>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSConfig___c* PlayEveryWare::EpicOnlineServices::EOSConfig___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSConfig___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSConfig___c::EOSConfig___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSConfig::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180538010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig.NeedsMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSConfig::NeedsMigration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig.EnsureConfigFileExistsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::PlayEveryWare::EpicOnlineServices::EOSConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSConfig::EnsureConfigFileExistsAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180534640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig.SetDeployment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSConfig::*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSConfig::SetDeployment)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180537ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {"SetDeployment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig.TryGetDeployment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*, ::StringW, ::by_ref<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>)>(&::PlayEveryWare::EpicOnlineServices::EOSConfig::TryGetDeployment)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180537ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {"TryGetDeployment", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSConfig.ConfigureOverrideThreadAffinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSConfig::*)(::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>)>(&::PlayEveryWare::EpicOnlineServices::EOSConfig::ConfigureOverrideThreadAffinity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180537c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {"ConfigureOverrideThreadAffinity", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_productName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productName;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_productName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productName;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_productName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productName = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_productVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productVersion;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_productVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productVersion;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_productVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productVersion = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_productID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_productID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productID;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_productID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_sandboxID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_sandboxID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxID;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_sandboxID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sandboxID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_deploymentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploymentID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_deploymentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploymentID;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_deploymentID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deploymentID = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_sandboxDeploymentOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxDeploymentOverrides;
}
constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>* const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_sandboxDeploymentOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxDeploymentOverrides;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_sandboxDeploymentOverrides(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sandboxDeploymentOverrides = value;
}
constexpr bool& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_isServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isServer;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_isServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isServer;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_isServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isServer = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_clientSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSecret;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_clientSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSecret;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_clientSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSecret = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_clientID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_clientID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientID;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_clientID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_encryptionKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptionKey;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_encryptionKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptionKey;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_encryptionKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encryptionKey = value;
}
constexpr ::System::Action*& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_GenerateKeyButtonAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateKeyButtonAction;
}
constexpr ::System::Action* const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_GenerateKeyButtonAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateKeyButtonAction;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_GenerateKeyButtonAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenerateKeyButtonAction = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_platformOptionsFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformOptionsFlags;
}
constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_platformOptionsFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformOptionsFlags;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_platformOptionsFlags(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformOptionsFlags = value;
}
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_authScopeOptionsFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authScopeOptionsFlags;
}
constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_authScopeOptionsFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authScopeOptionsFlags;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_authScopeOptionsFlags(::Epic::OnlineServices::Auth::AuthScopeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authScopeOptionsFlags = value;
}
constexpr uint32_t& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_tickBudgetInMilliseconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickBudgetInMilliseconds;
}
constexpr uint32_t const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_tickBudgetInMilliseconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickBudgetInMilliseconds;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_tickBudgetInMilliseconds(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickBudgetInMilliseconds = value;
}
constexpr double_t& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_taskNetworkTimeoutSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskNetworkTimeoutSeconds;
}
constexpr double_t const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_taskNetworkTimeoutSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskNetworkTimeoutSeconds;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_taskNetworkTimeoutSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taskNetworkTimeoutSeconds = value;
}
constexpr ::System::Nullable_1<uint64_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_networkWork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_networkWork;
}
constexpr ::System::Nullable_1<uint64_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_networkWork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_networkWork;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_ThreadAffinity_networkWork(::System::Nullable_1<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadAffinity_networkWork = value;
}
constexpr ::System::Nullable_1<uint64_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_storageIO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_storageIO;
}
constexpr ::System::Nullable_1<uint64_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_storageIO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_storageIO;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_ThreadAffinity_storageIO(::System::Nullable_1<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadAffinity_storageIO = value;
}
constexpr ::System::Nullable_1<uint64_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_webSocketIO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_webSocketIO;
}
constexpr ::System::Nullable_1<uint64_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_webSocketIO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_webSocketIO;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_ThreadAffinity_webSocketIO(::System::Nullable_1<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadAffinity_webSocketIO = value;
}
constexpr ::System::Nullable_1<uint64_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_P2PIO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_P2PIO;
}
constexpr ::System::Nullable_1<uint64_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_P2PIO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_P2PIO;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_ThreadAffinity_P2PIO(::System::Nullable_1<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadAffinity_P2PIO = value;
}
constexpr ::System::Nullable_1<uint64_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_HTTPRequestIO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_HTTPRequestIO;
}
constexpr ::System::Nullable_1<uint64_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_HTTPRequestIO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_HTTPRequestIO;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_ThreadAffinity_HTTPRequestIO(::System::Nullable_1<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadAffinity_HTTPRequestIO = value;
}
constexpr ::System::Nullable_1<uint64_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_RTCIO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_RTCIO;
}
constexpr ::System::Nullable_1<uint64_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_ThreadAffinity_RTCIO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadAffinity_RTCIO;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_ThreadAffinity_RTCIO(::System::Nullable_1<uint64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadAffinity_RTCIO = value;
}
constexpr bool& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_alwaysSendInputToOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysSendInputToOverlay;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_alwaysSendInputToOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysSendInputToOverlay;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_alwaysSendInputToOverlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysSendInputToOverlay = value;
}
constexpr ::System::Nullable_1<float_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_initialButtonDelayForOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialButtonDelayForOverlay;
}
constexpr ::System::Nullable_1<float_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_initialButtonDelayForOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialButtonDelayForOverlay;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_initialButtonDelayForOverlay(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialButtonDelayForOverlay = value;
}
constexpr ::System::Nullable_1<float_t>& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_repeatButtonDelayForOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatButtonDelayForOverlay;
}
constexpr ::System::Nullable_1<float_t> const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_repeatButtonDelayForOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatButtonDelayForOverlay;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_repeatButtonDelayForOverlay(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatButtonDelayForOverlay = value;
}
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_toggleFriendsButtonCombination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleFriendsButtonCombination;
}
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags const& PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_get_toggleFriendsButtonCombination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleFriendsButtonCombination;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSConfig::__cordl_internal_set_toggleFriendsButtonCombination(::Epic::OnlineServices::UI::InputStateButtonFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleFriendsButtonCombination = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSConfig::NeedsMigration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* PlayEveryWare::EpicOnlineServices::EOSConfig::EnsureConfigFileExistsAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSConfig::SetDeployment(::StringW  launcherSandboxId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {"SetDeployment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, launcherSandboxId);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSConfig::TryGetDeployment(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  deploymentOverrides, ::StringW  sandboxId, ::by_ref<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>  deploymentOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {"TryGetDeployment", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deploymentOverrides, sandboxId, deploymentOverride);
}
inline void PlayEveryWare::EpicOnlineServices::EOSConfig::ConfigureOverrideThreadAffinity(::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  affinity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSConfig*>(),
                        {"ConfigureOverrideThreadAffinity", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, affinity);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSConfig* PlayEveryWare::EpicOnlineServices::EOSConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSConfig*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSConfig::EOSConfig()   {
}
