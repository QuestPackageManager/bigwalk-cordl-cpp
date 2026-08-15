#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/Union16.hpp"
#include "Dissonance/Datastructures/zzzz__Union16_def.hpp"
//  Writing Method size for method: ::Dissonance::Datastructures::Union16.get_UInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Datastructures::Union16::*)()>(&::Dissonance::Datastructures::Union16::get_UInt16)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"get_UInt16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union16.set_UInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::Union16::*)(uint16_t)>(&::Dissonance::Datastructures::Union16::set_UInt16)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"set_UInt16", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union16.get_LSB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Dissonance::Datastructures::Union16::*)()>(&::Dissonance::Datastructures::Union16::get_LSB)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"get_LSB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union16.set_LSB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::Union16::*)(uint8_t)>(&::Dissonance::Datastructures::Union16::set_LSB)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"set_LSB", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union16.get_MSB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Dissonance::Datastructures::Union16::*)()>(&::Dissonance::Datastructures::Union16::get_MSB)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"get_MSB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union16.set_MSB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::Union16::*)(uint8_t)>(&::Dissonance::Datastructures::Union16::set_MSB)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"set_MSB", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& Dissonance::Datastructures::Union16::__cordl_internal_get__ushort()  {
return this->____ushort;
}
constexpr uint16_t const& Dissonance::Datastructures::Union16::__cordl_internal_get__ushort() const {
return this->____ushort;
}
constexpr void Dissonance::Datastructures::Union16::__cordl_internal_set__ushort(uint16_t  value)  {
this->____ushort = value;
}
constexpr uint8_t& Dissonance::Datastructures::Union16::__cordl_internal_get__byte1()  {
return this->____byte1;
}
constexpr uint8_t const& Dissonance::Datastructures::Union16::__cordl_internal_get__byte1() const {
return this->____byte1;
}
constexpr void Dissonance::Datastructures::Union16::__cordl_internal_set__byte1(uint8_t  value)  {
this->____byte1 = value;
}
constexpr uint8_t& Dissonance::Datastructures::Union16::__cordl_internal_get__byte2()  {
return this->____byte2;
}
constexpr uint8_t const& Dissonance::Datastructures::Union16::__cordl_internal_get__byte2() const {
return this->____byte2;
}
constexpr void Dissonance::Datastructures::Union16::__cordl_internal_set__byte2(uint8_t  value)  {
this->____byte2 = value;
}
inline uint16_t Dissonance::Datastructures::Union16::get_UInt16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"get_UInt16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline void Dissonance::Datastructures::Union16::set_UInt16(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"set_UInt16", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Dissonance::Datastructures::Union16::get_LSB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"get_LSB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Dissonance::Datastructures::Union16::set_LSB(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"set_LSB", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Dissonance::Datastructures::Union16::get_MSB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"get_MSB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Dissonance::Datastructures::Union16::set_MSB(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union16>(),
                        {"set_MSB", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ushort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte1", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte2", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Datastructures::Union16::Union16(uint16_t  _ushort, uint8_t  _byte1, uint8_t  _byte2) noexcept  {
this->_ushort = _ushort;
this->_byte1 = _byte1;
this->_byte2 = _byte2;
}
// Ctor Parameters []
constexpr ::Dissonance::Datastructures::Union16::Union16()   {
}
