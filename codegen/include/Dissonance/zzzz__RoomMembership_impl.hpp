#pragma once
// IWYU pragma private; include "Dissonance/RoomMembership.hpp"
#include "Dissonance/zzzz__RoomName_impl.hpp"
#include "Dissonance/zzzz__RoomMembership_def.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
//  Writing Method size for method: ::Dissonance::RoomMembership._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomMembership::*)(::Dissonance::RoomName, int32_t)>(&::Dissonance::RoomMembership::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805cfba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembership>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomMembership.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::RoomMembership::*)()>(&::Dissonance::RoomMembership::get_RoomName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembership>(),
                        {"get_RoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomMembership.get_RoomId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::RoomMembership::*)()>(&::Dissonance::RoomMembership::get_RoomId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembership>(),
                        {"get_RoomId", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::RoomMembership::_ctor(::Dissonance::RoomName  name, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembership>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, count);
}
inline ::StringW Dissonance::RoomMembership::get_RoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembership>(),
                        {"get_RoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint16_t Dissonance::RoomMembership::get_RoomId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomMembership>(),
                        {"get_RoomId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_name", ty: "::Dissonance::RoomName", modifiers: "", def_value: Some("{}") }, CppParam { name: "_roomId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::RoomMembership::RoomMembership(::Dissonance::RoomName  _name, uint16_t  _roomId, int32_t  Count) noexcept  {
this->_name = _name;
this->_roomId = _roomId;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::Dissonance::RoomMembership::RoomMembership()   {
}
