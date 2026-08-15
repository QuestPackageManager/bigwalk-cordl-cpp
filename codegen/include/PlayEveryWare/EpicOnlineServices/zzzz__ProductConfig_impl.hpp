#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ProductConfig.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Config_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ProductConfig_def.hpp"
#include "PlayEveryWare/Common/zzzz__Named_1_def.hpp"
#include "PlayEveryWare/Common/zzzz__SetOfNamed_1_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSClientCredentials_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ProductConfig_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ProductionEnvironments_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SandboxDeploymentOverride_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::*)(::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*& PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::__cordl_internal_get_PlatformConfigsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformConfigsUpdated;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>* const& PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::__cordl_internal_get_PlatformConfigsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformConfigsUpdated;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::__cordl_internal_set_PlatformConfigsUpdated(::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlatformConfigsUpdated = value;
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::_ctor(::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  platformConfigsUpdated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platformConfigsUpdated);
}
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs* PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::New_ctor(::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  platformConfigsUpdated)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>(platformConfigsUpdated));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs::ProductConfig_PlatformConfigsUpdatedEventArgs()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c.__cctor_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig* (::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::__cctor_b__9_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180549000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>(),
                        {"<.cctor>b__9_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c* PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig* PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::__cctor_b__9_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>(),
                        {"<.cctor>b__9_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c* PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c::PreviousEOSConfig_ProductConfig___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180541a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_productName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productName;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_productName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productName;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_productName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productName = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_productVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productVersion;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_productVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productVersion;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_productVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productVersion = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_productID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_productID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productID;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_productID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productID = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_sandboxDeploymentOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxDeploymentOverrides;
}
constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>* const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_sandboxDeploymentOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxDeploymentOverrides;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_sandboxDeploymentOverrides(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sandboxDeploymentOverrides = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_sandboxID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_sandboxID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sandboxID;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_sandboxID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sandboxID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_deploymentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploymentID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_deploymentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deploymentID;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_deploymentID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deploymentID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_clientSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSecret;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_clientSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSecret;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_clientSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSecret = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_clientID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_clientID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientID;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_clientID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_encryptionKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptionKey;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_get_encryptionKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptionKey;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::__cordl_internal_set_encryptionKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encryptionKey = value;
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig* PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig::ProductConfig_PreviousEOSConfig()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductConfig___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig___c.__cctor_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::ProductConfig* (::PlayEveryWare::EpicOnlineServices::ProductConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductConfig___c::__cctor_b__15_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180548dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>(),
                        {"<.cctor>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::ProductConfig___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::ProductConfig___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig___c* PlayEveryWare::EpicOnlineServices::ProductConfig___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig* PlayEveryWare::EpicOnlineServices::ProductConfig___c::__cctor_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>(),
                        {"<.cctor>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig___c* PlayEveryWare::EpicOnlineServices::ProductConfig___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ProductConfig___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ProductConfig___c::ProductConfig___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.add_DeploymentsUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::add_DeploymentsUpdatedEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180545e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"add_DeploymentsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.remove_DeploymentsUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::remove_DeploymentsUpdatedEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180545fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"remove_DeploymentsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.add_ClientCredentialsUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::add_ClientCredentialsUpdatedEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180545d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"add_ClientCredentialsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.remove_ClientCredentialsUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::remove_ClientCredentialsUpdatedEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180545f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"remove_ClientCredentialsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.NeedsMigration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::NeedsMigration)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180545920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180545cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.OnReadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::OnReadCompleted)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180545a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.TryGetFirstCompleteNamedClientCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)(::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*>)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::TryGetFirstCompleteNamedClientCredentials)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180545b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"TryGetFirstCompleteNamedClientCredentials", {}, {::i2c::type_of<::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.MigrateProductNameVersionAndId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateProductNameVersionAndId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180545500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateProductNameVersionAndId", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.MigrateClientCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateClientCredentials)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180545160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateClientCredentials", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.MigrateSandboxAndDeployment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateSandboxAndDeployment)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805457d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateSandboxAndDeployment", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.MigrateSandboxAndDeploymentOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*)>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateSandboxAndDeploymentOverrides)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180545580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateSandboxAndDeploymentOverrides", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ProductConfig.MigrateConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ProductConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateConfig)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180545240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_ProductName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductName;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_ProductName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductName;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set_ProductName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProductName = value;
}
constexpr ::System::Guid& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_ProductId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductId;
}
constexpr ::System::Guid const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_ProductId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductId;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set_ProductId(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProductId = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_ProductVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductVersion;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_ProductVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProductVersion;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set_ProductVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProductVersion = value;
}
constexpr bool& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get__configImported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configImported;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get__configImported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configImported;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set__configImported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configImported = value;
}
constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_Clients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clients;
}
constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>* const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_Clients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Clients;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set_Clients(::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Clients = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_Environments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environments;
}
constexpr ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments* const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get_Environments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environments;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set_Environments(::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Environments = value;
}
constexpr bool& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get__deploymentDefinedWhenLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deploymentDefinedWhenLoaded;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get__deploymentDefinedWhenLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deploymentDefinedWhenLoaded;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set__deploymentDefinedWhenLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deploymentDefinedWhenLoaded = value;
}
constexpr bool& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get__clientCredentialsDefinedWhenLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCredentialsDefinedWhenLoaded;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_get__clientCredentialsDefinedWhenLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCredentialsDefinedWhenLoaded;
}
constexpr void PlayEveryWare::EpicOnlineServices::ProductConfig::__cordl_internal_set__clientCredentialsDefinedWhenLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientCredentialsDefinedWhenLoaded = value;
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::setStaticF_DeploymentsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*, "DeploymentsUpdatedEvent", ::PlayEveryWare::EpicOnlineServices::ProductConfig*>(std::forward<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>* PlayEveryWare::EpicOnlineServices::ProductConfig::getStaticF_DeploymentsUpdatedEvent()  {
return ::cordl_internals::getStaticField<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*, "DeploymentsUpdatedEvent", ::PlayEveryWare::EpicOnlineServices::ProductConfig*>();
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::setStaticF_ClientCredentialsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*, "ClientCredentialsUpdatedEvent", ::PlayEveryWare::EpicOnlineServices::ProductConfig*>(std::forward<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>* PlayEveryWare::EpicOnlineServices::ProductConfig::getStaticF_ClientCredentialsUpdatedEvent()  {
return ::cordl_internals::getStaticField<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*, "ClientCredentialsUpdatedEvent", ::PlayEveryWare::EpicOnlineServices::ProductConfig*>();
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::add_DeploymentsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"add_DeploymentsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::remove_DeploymentsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"remove_DeploymentsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::add_ClientCredentialsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"add_ClientCredentialsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::remove_ClientCredentialsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"remove_ClientCredentialsUpdatedEvent", {}, {::i2c::type_of<::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayEveryWare::EpicOnlineServices::ProductConfig::NeedsMigration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::OnReadCompleted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::ProductConfig::TryGetFirstCompleteNamedClientCredentials(::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*>  credentials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"TryGetFirstCompleteNamedClientCredentials", {}, {::i2c::type_of<::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, credentials);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateProductNameVersionAndId(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateProductNameVersionAndId", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateClientCredentials(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateClientCredentials", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateSandboxAndDeployment(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateSandboxAndDeployment", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateSandboxAndDeploymentOverrides(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(),
                        {"MigrateSandboxAndDeploymentOverrides", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void PlayEveryWare::EpicOnlineServices::ProductConfig::MigrateConfig()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ProductConfig*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig* PlayEveryWare::EpicOnlineServices::ProductConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ProductConfig*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ProductConfig::ProductConfig()   {
}
