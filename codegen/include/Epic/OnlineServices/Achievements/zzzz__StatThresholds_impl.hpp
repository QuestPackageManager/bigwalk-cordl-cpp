#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/StatThresholds.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__StatThresholds_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::StatThresholds.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Achievements::StatThresholds::*)()>(&::Epic::OnlineServices::Achievements::StatThresholds::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::StatThresholds.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::StatThresholds::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Achievements::StatThresholds::set_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"set_Name", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::StatThresholds.get_Threshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Achievements::StatThresholds::*)()>(&::Epic::OnlineServices::Achievements::StatThresholds::get_Threshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"get_Threshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::StatThresholds.set_Threshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::StatThresholds::*)(int32_t)>(&::Epic::OnlineServices::Achievements::StatThresholds::set_Threshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"set_Threshold", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Achievements::StatThresholds::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::StatThresholds::set_Name(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"set_Name", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::Achievements::StatThresholds::get_Threshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"get_Threshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::StatThresholds::set_Threshold(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholds>(),
                        {"set_Threshold", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Threshold_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::StatThresholds::StatThresholds(::Epic::OnlineServices::Utf8String*  _Name_k__BackingField, int32_t  _Threshold_k__BackingField) noexcept  {
this->_Name_k__BackingField = _Name_k__BackingField;
this->_Threshold_k__BackingField = _Threshold_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::StatThresholds::StatThresholds()   {
}
