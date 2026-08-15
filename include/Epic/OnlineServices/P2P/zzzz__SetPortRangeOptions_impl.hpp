#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPortRangeOptions.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPortRangeOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPortRangeOptions.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Epic::OnlineServices::P2P::SetPortRangeOptions::*)()>(&::Epic::OnlineServices::P2P::SetPortRangeOptions::get_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"get_Port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPortRangeOptions.set_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPortRangeOptions::*)(uint16_t)>(&::Epic::OnlineServices::P2P::SetPortRangeOptions::set_Port)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPortRangeOptions.get_MaxAdditionalPortsToTry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Epic::OnlineServices::P2P::SetPortRangeOptions::*)()>(&::Epic::OnlineServices::P2P::SetPortRangeOptions::get_MaxAdditionalPortsToTry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"get_MaxAdditionalPortsToTry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPortRangeOptions.set_MaxAdditionalPortsToTry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPortRangeOptions::*)(uint16_t)>(&::Epic::OnlineServices::P2P::SetPortRangeOptions::set_MaxAdditionalPortsToTry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"set_MaxAdditionalPortsToTry", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint16_t Epic::OnlineServices::P2P::SetPortRangeOptions::get_Port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"get_Port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SetPortRangeOptions::set_Port(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"set_Port", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint16_t Epic::OnlineServices::P2P::SetPortRangeOptions::get_MaxAdditionalPortsToTry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"get_MaxAdditionalPortsToTry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SetPortRangeOptions::set_MaxAdditionalPortsToTry(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptions>(),
                        {"set_MaxAdditionalPortsToTry", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Port_k__BackingField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MaxAdditionalPortsToTry_k__BackingField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SetPortRangeOptions::SetPortRangeOptions(uint16_t  _Port_k__BackingField, uint16_t  _MaxAdditionalPortsToTry_k__BackingField) noexcept  {
this->_Port_k__BackingField = _Port_k__BackingField;
this->_MaxAdditionalPortsToTry_k__BackingField = _MaxAdditionalPortsToTry_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SetPortRangeOptions::SetPortRangeOptions()   {
}
