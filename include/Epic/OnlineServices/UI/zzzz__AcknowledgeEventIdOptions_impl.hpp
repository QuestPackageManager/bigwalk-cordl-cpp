#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/AcknowledgeEventIdOptions.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__AcknowledgeEventIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions.get_UiEventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::*)()>(&::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::get_UiEventId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"get_UiEventId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions.set_UiEventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::*)(uint64_t)>(&::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::set_UiEventId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"set_UiEventId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::*)()>(&::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::get_Result)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::set_Result)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"set_Result", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t Epic::OnlineServices::UI::AcknowledgeEventIdOptions::get_UiEventId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"get_UiEventId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::AcknowledgeEventIdOptions::set_UiEventId(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"set_UiEventId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UI::AcknowledgeEventIdOptions::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::AcknowledgeEventIdOptions::set_Result(::Epic::OnlineServices::Result  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>(),
                        {"set_Result", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_UiEventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Result_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::AcknowledgeEventIdOptions(uint64_t  _UiEventId_k__BackingField, ::Epic::OnlineServices::Result  _Result_k__BackingField) noexcept  {
this->_UiEventId_k__BackingField = _UiEventId_k__BackingField;
this->_Result_k__BackingField = _Result_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions::AcknowledgeEventIdOptions()   {
}
