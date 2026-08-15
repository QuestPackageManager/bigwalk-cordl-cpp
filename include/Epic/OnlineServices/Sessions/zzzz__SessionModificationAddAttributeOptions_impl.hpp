#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationAddAttributeOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationAddAttributeOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions.get_SessionAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> (::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::get_SessionAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"get_SessionAttribute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions.set_SessionAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>)>(&::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::set_SessionAttribute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804e6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"set_SessionAttribute", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions.get_AdvertisementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType (::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::get_AdvertisementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"get_AdvertisementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions.set_AdvertisementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::*)(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType)>(&::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::set_AdvertisementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"set_AdvertisementType", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::get_SessionAttribute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"get_SessionAttribute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::set_SessionAttribute(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"set_SessionAttribute", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::get_AdvertisementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"get_AdvertisementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>(),
                        {"set_AdvertisementType", {}, {::i2c::type_of<::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SessionAttribute_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AdvertisementType_k__BackingField", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::SessionModificationAddAttributeOptions(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _SessionAttribute_k__BackingField, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  _AdvertisementType_k__BackingField) noexcept  {
this->_SessionAttribute_k__BackingField = _SessionAttribute_k__BackingField;
this->_AdvertisementType_k__BackingField = _AdvertisementType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions::SessionModificationAddAttributeOptions()   {
}
