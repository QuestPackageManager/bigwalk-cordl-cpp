#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogRelease.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogRelease_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogRelease.get_CompatibleAppIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Utf8String*> (::Epic::OnlineServices::Ecom::CatalogRelease::*)()>(&::Epic::OnlineServices::Ecom::CatalogRelease::get_CompatibleAppIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"get_CompatibleAppIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogRelease.set_CompatibleAppIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogRelease::*)(::ArrayW<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Ecom::CatalogRelease::set_CompatibleAppIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"set_CompatibleAppIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogRelease.get_CompatiblePlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Utf8String*> (::Epic::OnlineServices::Ecom::CatalogRelease::*)()>(&::Epic::OnlineServices::Ecom::CatalogRelease::get_CompatiblePlatforms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"get_CompatiblePlatforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogRelease.set_CompatiblePlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogRelease::*)(::ArrayW<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Ecom::CatalogRelease::set_CompatiblePlatforms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"set_CompatiblePlatforms", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogRelease.get_ReleaseNote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogRelease::*)()>(&::Epic::OnlineServices::Ecom::CatalogRelease::get_ReleaseNote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"get_ReleaseNote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogRelease.set_ReleaseNote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogRelease::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogRelease::set_ReleaseNote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"set_ReleaseNote", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> Epic::OnlineServices::Ecom::CatalogRelease::get_CompatibleAppIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"get_CompatibleAppIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Utf8String*>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogRelease::set_CompatibleAppIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"set_CompatibleAppIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> Epic::OnlineServices::Ecom::CatalogRelease::get_CompatiblePlatforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"get_CompatiblePlatforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Utf8String*>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogRelease::set_CompatiblePlatforms(::ArrayW<::Epic::OnlineServices::Utf8String*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"set_CompatiblePlatforms", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogRelease::get_ReleaseNote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"get_ReleaseNote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogRelease::set_ReleaseNote(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogRelease>(),
                        {"set_ReleaseNote", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_CompatibleAppIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CompatiblePlatforms_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReleaseNote_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CatalogRelease::CatalogRelease(::ArrayW<::Epic::OnlineServices::Utf8String*>  _CompatibleAppIds_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _CompatiblePlatforms_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ReleaseNote_k__BackingField) noexcept  {
this->_CompatibleAppIds_k__BackingField = _CompatibleAppIds_k__BackingField;
this->_CompatiblePlatforms_k__BackingField = _CompatiblePlatforms_k__BackingField;
this->_ReleaseNote_k__BackingField = _ReleaseNote_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CatalogRelease::CatalogRelease()   {
}
