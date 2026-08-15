#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/SandboxIdItemOwnership.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__SandboxIdItemOwnership_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::SandboxIdItemOwnership.get_SandboxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::*)()>(&::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::get_SandboxId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"get_SandboxId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::SandboxIdItemOwnership.set_SandboxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::set_SandboxId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"set_SandboxId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::SandboxIdItemOwnership.get_OwnedCatalogItemIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Utf8String*> (::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::*)()>(&::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::get_OwnedCatalogItemIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"get_OwnedCatalogItemIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::SandboxIdItemOwnership.set_OwnedCatalogItemIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::*)(::ArrayW<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::set_OwnedCatalogItemIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"set_OwnedCatalogItemIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::SandboxIdItemOwnership::get_SandboxId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"get_SandboxId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::SandboxIdItemOwnership::set_SandboxId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"set_SandboxId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> Epic::OnlineServices::Ecom::SandboxIdItemOwnership::get_OwnedCatalogItemIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"get_OwnedCatalogItemIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Utf8String*>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::SandboxIdItemOwnership::set_OwnedCatalogItemIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>(),
                        {"set_OwnedCatalogItemIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_SandboxId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OwnedCatalogItemIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::SandboxIdItemOwnership(::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _OwnedCatalogItemIds_k__BackingField) noexcept  {
this->_SandboxId_k__BackingField = _SandboxId_k__BackingField;
this->_OwnedCatalogItemIds_k__BackingField = _OwnedCatalogItemIds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::SandboxIdItemOwnership::SandboxIdItemOwnership()   {
}
