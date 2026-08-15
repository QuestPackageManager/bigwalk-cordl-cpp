#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/SetClientDetailsOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientFlags_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientInput_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__SetClientDetailsOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientFlags_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientInput_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions.get_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::get_ClientHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"get_ClientHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions.set_ClientHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::set_ClientHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions.get_ClientFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags (::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::get_ClientFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"get_ClientFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions.set_ClientFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags)>(&::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::set_ClientFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"set_ClientFlags", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions.get_ClientInputMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput (::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::get_ClientInputMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"get_ClientInputMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions.set_ClientInputMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::*)(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput)>(&::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::set_ClientInputMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"set_ClientInputMethod", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::get_ClientHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"get_ClientHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::set_ClientHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"set_ClientHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::get_ClientFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"get_ClientFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::set_ClientFlags(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"set_ClientFlags", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::get_ClientInputMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"get_ClientInputMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::set_ClientInputMethod(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>(),
                        {"set_ClientInputMethod", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientFlags_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClientInputMethod_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::SetClientDetailsOptions(::System::IntPtr  _ClientHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientFlags  _ClientFlags_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  _ClientInputMethod_k__BackingField) noexcept  {
this->_ClientHandle_k__BackingField = _ClientHandle_k__BackingField;
this->_ClientFlags_k__BackingField = _ClientFlags_k__BackingField;
this->_ClientInputMethod_k__BackingField = _ClientInputMethod_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions::SetClientDetailsOptions()   {
}
