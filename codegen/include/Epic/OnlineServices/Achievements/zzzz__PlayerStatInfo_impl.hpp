#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/PlayerStatInfo.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__PlayerStatInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerStatInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Achievements::PlayerStatInfo::*)()>(&::Epic::OnlineServices::Achievements::PlayerStatInfo::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerStatInfo.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::PlayerStatInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Achievements::PlayerStatInfo::set_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"set_Name", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerStatInfo.get_CurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Achievements::PlayerStatInfo::*)()>(&::Epic::OnlineServices::Achievements::PlayerStatInfo::get_CurrentValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"get_CurrentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerStatInfo.set_CurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::PlayerStatInfo::*)(int32_t)>(&::Epic::OnlineServices::Achievements::PlayerStatInfo::set_CurrentValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"set_CurrentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerStatInfo.get_ThresholdValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Achievements::PlayerStatInfo::*)()>(&::Epic::OnlineServices::Achievements::PlayerStatInfo::get_ThresholdValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"get_ThresholdValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerStatInfo.set_ThresholdValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::PlayerStatInfo::*)(int32_t)>(&::Epic::OnlineServices::Achievements::PlayerStatInfo::set_ThresholdValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"set_ThresholdValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Achievements::PlayerStatInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::PlayerStatInfo::set_Name(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"set_Name", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::Achievements::PlayerStatInfo::get_CurrentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"get_CurrentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::PlayerStatInfo::set_CurrentValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"set_CurrentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::Achievements::PlayerStatInfo::get_ThresholdValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"get_ThresholdValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::PlayerStatInfo::set_ThresholdValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfo>(),
                        {"set_ThresholdValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ThresholdValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::PlayerStatInfo::PlayerStatInfo(::Epic::OnlineServices::Utf8String*  _Name_k__BackingField, int32_t  _CurrentValue_k__BackingField, int32_t  _ThresholdValue_k__BackingField) noexcept  {
this->_Name_k__BackingField = _Name_k__BackingField;
this->_CurrentValue_k__BackingField = _CurrentValue_k__BackingField;
this->_ThresholdValue_k__BackingField = _ThresholdValue_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::PlayerStatInfo::PlayerStatInfo()   {
}
