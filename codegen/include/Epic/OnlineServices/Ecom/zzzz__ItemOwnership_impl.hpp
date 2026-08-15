#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/ItemOwnership.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OwnershipStatus_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__ItemOwnership_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OwnershipStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::ItemOwnership.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::ItemOwnership::*)()>(&::Epic::OnlineServices::Ecom::ItemOwnership::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::ItemOwnership.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::ItemOwnership::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::ItemOwnership::set_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"set_Id", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::ItemOwnership.get_OwnershipStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OwnershipStatus (::Epic::OnlineServices::Ecom::ItemOwnership::*)()>(&::Epic::OnlineServices::Ecom::ItemOwnership::get_OwnershipStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"get_OwnershipStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::ItemOwnership.set_OwnershipStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::ItemOwnership::*)(::Epic::OnlineServices::Ecom::OwnershipStatus)>(&::Epic::OnlineServices::Ecom::ItemOwnership::set_OwnershipStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"set_OwnershipStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Ecom::OwnershipStatus>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::ItemOwnership::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::ItemOwnership::set_Id(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"set_Id", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Ecom::OwnershipStatus Epic::OnlineServices::Ecom::ItemOwnership::get_OwnershipStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"get_OwnershipStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OwnershipStatus>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::ItemOwnership::set_OwnershipStatus(::Epic::OnlineServices::Ecom::OwnershipStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::ItemOwnership>(),
                        {"set_OwnershipStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Ecom::OwnershipStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Id_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OwnershipStatus_k__BackingField", ty: "::Epic::OnlineServices::Ecom::OwnershipStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::ItemOwnership::ItemOwnership(::Epic::OnlineServices::Utf8String*  _Id_k__BackingField, ::Epic::OnlineServices::Ecom::OwnershipStatus  _OwnershipStatus_k__BackingField) noexcept  {
this->_Id_k__BackingField = _Id_k__BackingField;
this->_OwnershipStatus_k__BackingField = _OwnershipStatus_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::ItemOwnership::ItemOwnership()   {
}
