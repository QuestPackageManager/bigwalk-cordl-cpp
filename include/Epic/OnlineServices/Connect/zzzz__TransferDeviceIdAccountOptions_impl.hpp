#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/TransferDeviceIdAccountOptions.hpp"
#include "Epic/OnlineServices/Connect/zzzz__TransferDeviceIdAccountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions.get_PrimaryLocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::*)()>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::get_PrimaryLocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"get_PrimaryLocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions.set_PrimaryLocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::set_PrimaryLocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"set_PrimaryLocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions.get_LocalDeviceUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::*)()>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::get_LocalDeviceUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"get_LocalDeviceUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions.set_LocalDeviceUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::set_LocalDeviceUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"set_LocalDeviceUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions.get_ProductUserIdToPreserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::*)()>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::get_ProductUserIdToPreserve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"get_ProductUserIdToPreserve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions.set_ProductUserIdToPreserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::set_ProductUserIdToPreserve)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"set_ProductUserIdToPreserve", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::get_PrimaryLocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"get_PrimaryLocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::set_PrimaryLocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"set_PrimaryLocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::get_LocalDeviceUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"get_LocalDeviceUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::set_LocalDeviceUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"set_LocalDeviceUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::get_ProductUserIdToPreserve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"get_ProductUserIdToPreserve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::set_ProductUserIdToPreserve(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(),
                        {"set_ProductUserIdToPreserve", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PrimaryLocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalDeviceUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProductUserIdToPreserve_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::TransferDeviceIdAccountOptions(::Epic::OnlineServices::ProductUserId*  _PrimaryLocalUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalDeviceUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ProductUserIdToPreserve_k__BackingField) noexcept  {
this->_PrimaryLocalUserId_k__BackingField = _PrimaryLocalUserId_k__BackingField;
this->_LocalDeviceUserId_k__BackingField = _LocalDeviceUserId_k__BackingField;
this->_ProductUserIdToPreserve_k__BackingField = _ProductUserIdToPreserve_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions::TransferDeviceIdAccountOptions()   {
}
