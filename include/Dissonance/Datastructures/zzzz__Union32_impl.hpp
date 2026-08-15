#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/Union32.hpp"
#include "Dissonance/Datastructures/zzzz__Union32_def.hpp"
//  Writing Method size for method: ::Dissonance::Datastructures::Union32.get_UInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Datastructures::Union32::*)()>(&::Dissonance::Datastructures::Union32::get_UInt32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"get_UInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union32.set_UInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::Union32::*)(uint32_t)>(&::Dissonance::Datastructures::Union32::set_UInt32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"set_UInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union32.SetBytesFromNetworkOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::Union32::*)(uint8_t, uint8_t, uint8_t, uint8_t)>(&::Dissonance::Datastructures::Union32::SetBytesFromNetworkOrder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ed780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"SetBytesFromNetworkOrder", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::Union32.GetBytesInNetworkOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::Union32::*)(::by_ref<uint8_t>, ::by_ref<uint8_t>, ::by_ref<uint8_t>, ::by_ref<uint8_t>)>(&::Dissonance::Datastructures::Union32::GetBytesInNetworkOrder)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ed740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"GetBytesInNetworkOrder", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Dissonance::Datastructures::Union32::__cordl_internal_get__uint()  {
return this->____uint;
}
constexpr uint32_t const& Dissonance::Datastructures::Union32::__cordl_internal_get__uint() const {
return this->____uint;
}
constexpr void Dissonance::Datastructures::Union32::__cordl_internal_set__uint(uint32_t  value)  {
this->____uint = value;
}
constexpr uint8_t& Dissonance::Datastructures::Union32::__cordl_internal_get__byte1()  {
return this->____byte1;
}
constexpr uint8_t const& Dissonance::Datastructures::Union32::__cordl_internal_get__byte1() const {
return this->____byte1;
}
constexpr void Dissonance::Datastructures::Union32::__cordl_internal_set__byte1(uint8_t  value)  {
this->____byte1 = value;
}
constexpr uint8_t& Dissonance::Datastructures::Union32::__cordl_internal_get__byte2()  {
return this->____byte2;
}
constexpr uint8_t const& Dissonance::Datastructures::Union32::__cordl_internal_get__byte2() const {
return this->____byte2;
}
constexpr void Dissonance::Datastructures::Union32::__cordl_internal_set__byte2(uint8_t  value)  {
this->____byte2 = value;
}
constexpr uint8_t& Dissonance::Datastructures::Union32::__cordl_internal_get__byte3()  {
return this->____byte3;
}
constexpr uint8_t const& Dissonance::Datastructures::Union32::__cordl_internal_get__byte3() const {
return this->____byte3;
}
constexpr void Dissonance::Datastructures::Union32::__cordl_internal_set__byte3(uint8_t  value)  {
this->____byte3 = value;
}
constexpr uint8_t& Dissonance::Datastructures::Union32::__cordl_internal_get__byte4()  {
return this->____byte4;
}
constexpr uint8_t const& Dissonance::Datastructures::Union32::__cordl_internal_get__byte4() const {
return this->____byte4;
}
constexpr void Dissonance::Datastructures::Union32::__cordl_internal_set__byte4(uint8_t  value)  {
this->____byte4 = value;
}
inline uint32_t Dissonance::Datastructures::Union32::get_UInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"get_UInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Dissonance::Datastructures::Union32::set_UInt32(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"set_UInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Dissonance::Datastructures::Union32::SetBytesFromNetworkOrder(uint8_t  b1, uint8_t  b2, uint8_t  b3, uint8_t  b4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"SetBytesFromNetworkOrder", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, b1, b2, b3, b4);
}
inline void Dissonance::Datastructures::Union32::GetBytesInNetworkOrder(::by_ref<uint8_t>  b1, ::by_ref<uint8_t>  b2, ::by_ref<uint8_t>  b3, ::by_ref<uint8_t>  b4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::Union32>(),
                        {"GetBytesInNetworkOrder", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, b1, b2, b3, b4);
}
// Ctor Parameters [CppParam { name: "_uint", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte1", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte2", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte3", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte4", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Datastructures::Union32::Union32(uint32_t  _uint, uint8_t  _byte1, uint8_t  _byte2, uint8_t  _byte3, uint8_t  _byte4) noexcept  {
this->_uint = _uint;
this->_byte1 = _byte1;
this->_byte2 = _byte2;
this->_byte3 = _byte3;
this->_byte4 = _byte4;
}
// Ctor Parameters []
constexpr ::Dissonance::Datastructures::Union32::Union32()   {
}
