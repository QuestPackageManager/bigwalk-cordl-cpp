#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsAttribute.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsAttribute_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsAttribute.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> (::Epic::OnlineServices::Sessions::SessionDetailsAttribute::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsAttribute::get_Data)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsAttribute.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsAttribute::*)(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>)>(&::Epic::OnlineServices::Sessions::SessionDetailsAttribute::set_Data)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804e6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsAttribute.get_AdvertisementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType (::Epic::OnlineServices::Sessions::SessionDetailsAttribute::*)()>(&::Epic::OnlineServices::Sessions::SessionDetailsAttribute::get_AdvertisementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"get_AdvertisementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsAttribute.set_AdvertisementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsAttribute::*)(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType)>(&::Epic::OnlineServices::Sessions::SessionDetailsAttribute::set_AdvertisementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"set_AdvertisementType", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> Epic::OnlineServices::Sessions::SessionDetailsAttribute::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsAttribute::set_Data(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType Epic::OnlineServices::Sessions::SessionDetailsAttribute::get_AdvertisementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"get_AdvertisementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetailsAttribute::set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>(),
                        {"set_AdvertisementType", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Data_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AdvertisementType_k__BackingField", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsAttribute::SessionDetailsAttribute(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _Data_k__BackingField, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  _AdvertisementType_k__BackingField) noexcept  {
this->_Data_k__BackingField = _Data_k__BackingField;
this->_AdvertisementType_k__BackingField = _AdvertisementType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsAttribute::SessionDetailsAttribute()   {
}
