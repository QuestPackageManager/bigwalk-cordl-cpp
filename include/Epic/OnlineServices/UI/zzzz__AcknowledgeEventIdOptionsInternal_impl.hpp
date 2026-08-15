#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/AcknowledgeEventIdOptionsInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__AcknowledgeEventIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__AcknowledgeEventIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>)>(&::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804bdb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::*)()>(&::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>"
constexpr  Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>* Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__AcknowledgeEventIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::AcknowledgeEventIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Result", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::AcknowledgeEventIdOptionsInternal(int32_t  m_ApiVersion, uint64_t  m_UiEventId, ::Epic::OnlineServices::Result  m_Result) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UiEventId = m_UiEventId;
this->m_Result = m_Result;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::AcknowledgeEventIdOptionsInternal::AcknowledgeEventIdOptionsInternal()   {
}
