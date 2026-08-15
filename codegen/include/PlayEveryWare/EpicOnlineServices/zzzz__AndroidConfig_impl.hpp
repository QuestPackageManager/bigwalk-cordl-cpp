#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/AndroidConfig.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__AndroidConfig_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__AndroidConfig_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AndroidConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::AndroidConfig___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c.__cctor_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::AndroidConfig* (::PlayEveryWare::EpicOnlineServices::AndroidConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::AndroidConfig___c::__cctor_b__2_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180548ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>(),
                        {"<.cctor>b__2_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::AndroidConfig___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c* PlayEveryWare::EpicOnlineServices::AndroidConfig___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::AndroidConfig___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig* PlayEveryWare::EpicOnlineServices::AndroidConfig___c::__cctor_b__2_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>(),
                        {"<.cctor>b__2_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::AndroidConfig*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c* PlayEveryWare::EpicOnlineServices::AndroidConfig___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::AndroidConfig___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::AndroidConfig___c::AndroidConfig___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AndroidConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AndroidConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::AndroidConfig::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805348d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::AndroidConfig::__cordl_internal_get_GoogleLoginClientID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleLoginClientID;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::AndroidConfig::__cordl_internal_get_GoogleLoginClientID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleLoginClientID;
}
constexpr void PlayEveryWare::EpicOnlineServices::AndroidConfig::__cordl_internal_set_GoogleLoginClientID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleLoginClientID = value;
}
constexpr ::StringW& PlayEveryWare::EpicOnlineServices::AndroidConfig::__cordl_internal_get_GoogleLoginNonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleLoginNonce;
}
constexpr ::StringW const& PlayEveryWare::EpicOnlineServices::AndroidConfig::__cordl_internal_get_GoogleLoginNonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleLoginNonce;
}
constexpr void PlayEveryWare::EpicOnlineServices::AndroidConfig::__cordl_internal_set_GoogleLoginNonce(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleLoginNonce = value;
}
inline void PlayEveryWare::EpicOnlineServices::AndroidConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::AndroidConfig* PlayEveryWare::EpicOnlineServices::AndroidConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::AndroidConfig*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::AndroidConfig::AndroidConfig()   {
}
