#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyProductUserExternalAccountByIndexOptions.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::*)()>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions.get_ExternalAccountInfoIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::*)()>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::get_ExternalAccountInfoIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"get_ExternalAccountInfoIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions.set_ExternalAccountInfoIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::set_ExternalAccountInfoIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"set_ExternalAccountInfoIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::get_ExternalAccountInfoIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"get_ExternalAccountInfoIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::set_ExternalAccountInfoIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>(),
                        {"set_ExternalAccountInfoIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ExternalAccountInfoIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::CopyProductUserExternalAccountByIndexOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, uint32_t  _ExternalAccountInfoIndex_k__BackingField) noexcept  {
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
this->_ExternalAccountInfoIndex_k__BackingField = _ExternalAccountInfoIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions::CopyProductUserExternalAccountByIndexOptions()   {
}
