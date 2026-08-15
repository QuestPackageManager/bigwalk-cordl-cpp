#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CheckoutOptions.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutEntry_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutOrientation_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutEntry_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutOrientation_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Ecom::CheckoutOptions::*)()>(&::Epic::OnlineServices::Ecom::CheckoutOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CheckoutOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Ecom::CheckoutOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.get_OverrideCatalogNamespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CheckoutOptions::*)()>(&::Epic::OnlineServices::Ecom::CheckoutOptions::get_OverrideCatalogNamespace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_OverrideCatalogNamespace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.set_OverrideCatalogNamespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CheckoutOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CheckoutOptions::set_OverrideCatalogNamespace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_OverrideCatalogNamespace", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry> (::Epic::OnlineServices::Ecom::CheckoutOptions::*)()>(&::Epic::OnlineServices::Ecom::CheckoutOptions::get_Entries)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.set_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CheckoutOptions::*)(::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>)>(&::Epic::OnlineServices::Ecom::CheckoutOptions::set_Entries)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_Entries", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.get_PreferredOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::CheckoutOrientation (::Epic::OnlineServices::Ecom::CheckoutOptions::*)()>(&::Epic::OnlineServices::Ecom::CheckoutOptions::get_PreferredOrientation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_PreferredOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CheckoutOptions.set_PreferredOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CheckoutOptions::*)(::Epic::OnlineServices::Ecom::CheckoutOrientation)>(&::Epic::OnlineServices::Ecom::CheckoutOptions::set_PreferredOrientation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_PreferredOrientation", {}, {::i2c::type_of<::Epic::OnlineServices::Ecom::CheckoutOrientation>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Ecom::CheckoutOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CheckoutOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CheckoutOptions::get_OverrideCatalogNamespace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_OverrideCatalogNamespace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CheckoutOptions::set_OverrideCatalogNamespace(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_OverrideCatalogNamespace", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry> Epic::OnlineServices::Ecom::CheckoutOptions::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CheckoutOptions::set_Entries(::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_Entries", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Ecom::CheckoutOrientation Epic::OnlineServices::Ecom::CheckoutOptions::get_PreferredOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"get_PreferredOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::CheckoutOrientation>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CheckoutOptions::set_PreferredOrientation(::Epic::OnlineServices::Ecom::CheckoutOrientation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CheckoutOptions>(),
                        {"set_PreferredOrientation", {}, {::i2c::type_of<::Epic::OnlineServices::Ecom::CheckoutOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OverrideCatalogNamespace_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Entries_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PreferredOrientation_k__BackingField", ty: "::Epic::OnlineServices::Ecom::CheckoutOrientation", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CheckoutOptions::CheckoutOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OverrideCatalogNamespace_k__BackingField, ::ArrayW<::Epic::OnlineServices::Ecom::CheckoutEntry>  _Entries_k__BackingField, ::Epic::OnlineServices::Ecom::CheckoutOrientation  _PreferredOrientation_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_OverrideCatalogNamespace_k__BackingField = _OverrideCatalogNamespace_k__BackingField;
this->_Entries_k__BackingField = _Entries_k__BackingField;
this->_PreferredOrientation_k__BackingField = _PreferredOrientation_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CheckoutOptions::CheckoutOptions()   {
}
