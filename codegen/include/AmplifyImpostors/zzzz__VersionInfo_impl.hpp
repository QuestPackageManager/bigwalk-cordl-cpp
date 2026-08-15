#pragma once
// IWYU pragma private; include "AmplifyImpostors/VersionInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__VersionInfo_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::VersionInfo.StaticToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::AmplifyImpostors::VersionInfo::StaticToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802dc260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {"StaticToString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::VersionInfo.get_FullNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::AmplifyImpostors::VersionInfo::get_FullNumber)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802dc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {"get_FullNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::VersionInfo.get_FullLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::AmplifyImpostors::VersionInfo::get_FullLabel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802dc330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {"get_FullLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::VersionInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::VersionInfo::*)()>(&::AmplifyImpostors::VersionInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void AmplifyImpostors::VersionInfo::setStaticF_Revision(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "Revision", ::AmplifyImpostors::VersionInfo*>(std::forward<uint8_t>(value));
}
inline uint8_t AmplifyImpostors::VersionInfo::getStaticF_Revision()  {
return ::cordl_internals::getStaticField<uint8_t, "Revision", ::AmplifyImpostors::VersionInfo*>();
}
inline ::StringW AmplifyImpostors::VersionInfo::StaticToString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {"StaticToString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t AmplifyImpostors::VersionInfo::get_FullNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {"get_FullNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW AmplifyImpostors::VersionInfo::get_FullLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {"get_FullLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void AmplifyImpostors::VersionInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::VersionInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::AmplifyImpostors::VersionInfo* AmplifyImpostors::VersionInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::VersionInfo*>());
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::VersionInfo::VersionInfo()   {
}
