#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardRequestedCallbackInfo.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardType_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardType_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnScreenKeyboardType (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::*)(::Epic::OnlineServices::UI::OnScreenKeyboardType)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::set_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::UI::OnScreenKeyboardType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::*)()>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::UI::OnScreenKeyboardType Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnScreenKeyboardType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::set_Type(::Epic::OnlineServices::UI::OnScreenKeyboardType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::UI::OnScreenKeyboardType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::OnScreenKeyboardRequestedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::UI::OnScreenKeyboardType  _Type_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo::OnScreenKeyboardRequestedCallbackInfo()   {
}
