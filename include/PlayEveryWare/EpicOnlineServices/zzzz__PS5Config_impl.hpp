#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PS5Config.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PS5Config_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PS5Config_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PS5Config___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::PS5Config___c::*)()>(&::PlayEveryWare::EpicOnlineServices::PS5Config___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PS5Config___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::PS5Config* (::PlayEveryWare::EpicOnlineServices::PS5Config___c::*)()>(&::PlayEveryWare::EpicOnlineServices::PS5Config___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180548f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::PS5Config___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::PS5Config___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::PS5Config___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::PS5Config___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::PS5Config___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::PS5Config___c* PlayEveryWare::EpicOnlineServices::PS5Config___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::PS5Config___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::PS5Config___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::PS5Config___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::PS5Config* PlayEveryWare::EpicOnlineServices::PS5Config___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::PS5Config*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::PS5Config___c* PlayEveryWare::EpicOnlineServices::PS5Config___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::PS5Config___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PS5Config___c::PS5Config___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PS5Config.InitializationRoutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::PS5Config::InitializationRoutine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805423a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config*>(),
                        {"InitializationRoutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PS5Config._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::PS5Config::*)()>(&::PlayEveryWare::EpicOnlineServices::PS5Config::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180542550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PS5Config.GetDefaultIntegratedPlatformManagementFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags (::PlayEveryWare::EpicOnlineServices::PS5Config::*)()>(&::PlayEveryWare::EpicOnlineServices::PS5Config::GetDefaultIntegratedPlatformManagementFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180542390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config*>(), 12}
                ));
    return ___internal_method;
  }
};
constexpr bool& PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_get_IsPSPlusRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPSPlusRequired;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_get_IsPSPlusRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPSPlusRequired;
}
constexpr void PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_set_IsPSPlusRequired(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPSPlusRequired = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_get_clientID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_get_clientID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientID;
}
constexpr void PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_set_clientID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_get_clientSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSecret;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_get_clientSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSecret;
}
constexpr void PlayEveryWare::EpicOnlineServices::PS5Config::__cordl_internal_set_clientSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSecret = value;
}
inline void PlayEveryWare::EpicOnlineServices::PS5Config::InitializationRoutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config*>(),
                        {"InitializationRoutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::PS5Config::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags PlayEveryWare::EpicOnlineServices::PS5Config::GetDefaultIntegratedPlatformManagementFlags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PS5Config*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::PS5Config* PlayEveryWare::EpicOnlineServices::PS5Config::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::PS5Config*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PS5Config::PS5Config()   {
}
