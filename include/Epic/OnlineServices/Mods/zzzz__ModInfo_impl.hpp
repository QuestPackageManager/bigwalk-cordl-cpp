#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModInfo.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModInfo_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModInfo.get_Mods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier> (::Epic::OnlineServices::Mods::ModInfo::*)()>(&::Epic::OnlineServices::Mods::ModInfo::get_Mods)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"get_Mods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModInfo.set_Mods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModInfo::*)(::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier>)>(&::Epic::OnlineServices::Mods::ModInfo::set_Mods)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"set_Mods", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModInfo.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::ModEnumerationType (::Epic::OnlineServices::Mods::ModInfo::*)()>(&::Epic::OnlineServices::Mods::ModInfo::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModInfo.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModInfo::*)(::Epic::OnlineServices::Mods::ModEnumerationType)>(&::Epic::OnlineServices::Mods::ModInfo::set_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::Mods::ModEnumerationType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier> Epic::OnlineServices::Mods::ModInfo::get_Mods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"get_Mods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::ModInfo::set_Mods(::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"set_Mods", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Mods::ModEnumerationType Epic::OnlineServices::Mods::ModInfo::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::ModEnumerationType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::ModInfo::set_Type(::Epic::OnlineServices::Mods::ModEnumerationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModInfo>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::Mods::ModEnumerationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Mods_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::ModInfo::ModInfo(::ArrayW<::Epic::OnlineServices::Mods::ModIdentifier>  _Mods_k__BackingField, ::Epic::OnlineServices::Mods::ModEnumerationType  _Type_k__BackingField) noexcept  {
this->_Mods_k__BackingField = _Mods_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::ModInfo::ModInfo()   {
}
