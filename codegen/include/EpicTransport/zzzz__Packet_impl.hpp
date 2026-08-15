#pragma once
// IWYU pragma private; include "EpicTransport/Packet.hpp"
#include "EpicTransport/zzzz__Packet_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::EpicTransport::Packet.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::EpicTransport::Packet::*)()>(&::EpicTransport::Packet::get_size)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181589a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Packet>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Packet.ToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::EpicTransport::Packet::*)()>(&::EpicTransport::Packet::ToBytes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815899a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Packet>(),
                        {"ToBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Packet.FromBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Packet::*)(::System::ArraySegment_1<uint8_t>)>(&::EpicTransport::Packet::FromBytes)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1815896d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Packet>(),
                        {"FromBytes", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t EpicTransport::Packet::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Packet>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t> EpicTransport::Packet::ToBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Packet>(),
                        {"ToBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline void EpicTransport::Packet::FromBytes(::System::ArraySegment_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Packet>(),
                        {"FromBytes", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fragment", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "moreFragments", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::EpicTransport::Packet::Packet(int32_t  id, int32_t  fragment, bool  moreFragments, ::ArrayW<uint8_t>  data) noexcept  {
this->id = id;
this->fragment = fragment;
this->moreFragments = moreFragments;
this->data = data;
}
// Ctor Parameters []
constexpr ::EpicTransport::Packet::Packet()   {
}
