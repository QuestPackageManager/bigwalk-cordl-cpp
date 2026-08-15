#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/IngestData.hpp"
#include "Epic/OnlineServices/Stats/zzzz__IngestData_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestData.get_StatName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Stats::IngestData::*)()>(&::Epic::OnlineServices::Stats::IngestData::get_StatName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"get_StatName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestData.set_StatName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::IngestData::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Stats::IngestData::set_StatName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"set_StatName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestData.get_IngestAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Stats::IngestData::*)()>(&::Epic::OnlineServices::Stats::IngestData::get_IngestAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"get_IngestAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestData.set_IngestAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::IngestData::*)(int32_t)>(&::Epic::OnlineServices::Stats::IngestData::set_IngestAmount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"set_IngestAmount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Stats::IngestData::get_StatName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"get_StatName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Stats::IngestData::set_StatName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"set_StatName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::Stats::IngestData::get_IngestAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"get_IngestAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Stats::IngestData::set_IngestAmount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestData>(),
                        {"set_IngestAmount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_StatName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IngestAmount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Stats::IngestData::IngestData(::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField, int32_t  _IngestAmount_k__BackingField) noexcept  {
this->_StatName_k__BackingField = _StatName_k__BackingField;
this->_IngestAmount_k__BackingField = _IngestAmount_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::IngestData::IngestData()   {
}
