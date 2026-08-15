#pragma once
// IWYU pragma private; include "Rewired/HardwareControllerMapIdentifier.hpp"
#include "Rewired/zzzz__InputPlatform_impl.hpp"
#include "Rewired/zzzz__InputSource_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_def.hpp"
#include "Rewired/zzzz__InputPlatform_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::HardwareControllerMapIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HardwareControllerMapIdentifier::*)(::System::Guid, ::Rewired::InputSource, ::Rewired::InputPlatform, int32_t)>(&::Rewired::HardwareControllerMapIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181843290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMapIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::Rewired::InputPlatform>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareControllerMapIdentifier.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::HardwareControllerMapIdentifier, ::Rewired::HardwareControllerMapIdentifier)>(&::Rewired::HardwareControllerMapIdentifier::Matches)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181843220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMapIdentifier>(),
                        {"Matches", {}, {::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::HardwareControllerMapIdentifier::_ctor(::System::Guid  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::InputPlatform  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMapIdentifier>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::Rewired::InputPlatform>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::HardwareControllerMapIdentifier::Matches(::Rewired::HardwareControllerMapIdentifier  a, ::Rewired::HardwareControllerMapIdentifier  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareControllerMapIdentifier>(),
                        {"Matches", {}, {::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputSource", ty: "::Rewired::InputSource", modifiers: "", def_value: Some("{}") }, CppParam { name: "actualInputPlatform", ty: "::Rewired::InputPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "variantIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HardwareControllerMapIdentifier::HardwareControllerMapIdentifier(::System::Guid  guid, ::Rewired::InputSource  inputSource, ::Rewired::InputPlatform  actualInputPlatform, int32_t  variantIndex) noexcept  {
this->guid = guid;
this->inputSource = inputSource;
this->actualInputPlatform = actualInputPlatform;
this->variantIndex = variantIndex;
}
// Ctor Parameters []
constexpr ::Rewired::HardwareControllerMapIdentifier::HardwareControllerMapIdentifier()   {
}
