#pragma once
// IWYU pragma private; include "Dissonance/RoomIdConversion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__RoomIdConversion_def.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
//  Writing Method size for method: ::Dissonance::RoomIdConversion.ToRoomId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::StringW)>(&::Dissonance::RoomIdConversion::ToRoomId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cfaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomIdConversion*>(),
                        {"ToRoomId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomIdConversion.ToRoomId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::Dissonance::RoomName)>(&::Dissonance::RoomIdConversion::ToRoomId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cfaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomIdConversion*>(),
                        {"ToRoomId", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomIdConversion.Hash16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::StringW)>(&::Dissonance::RoomIdConversion::Hash16)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cfa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomIdConversion*>(),
                        {"Hash16", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline uint16_t Dissonance::RoomIdConversion::ToRoomId(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomIdConversion*>(),
                        {"ToRoomId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, name);
}
inline uint16_t Dissonance::RoomIdConversion::ToRoomId(::Dissonance::RoomName  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomIdConversion*>(),
                        {"ToRoomId", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, name);
}
inline uint16_t Dissonance::RoomIdConversion::Hash16(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomIdConversion*>(),
                        {"Hash16", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, str);
}
// Ctor Parameters []
constexpr ::Dissonance::RoomIdConversion::RoomIdConversion()   {
}
