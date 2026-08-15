#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogMessageInternal.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessageInternal_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessage_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessageInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LogMessageInternal::*)(::by_ref<::Epic::OnlineServices::Logging::LogMessage>)>(&::Epic::OnlineServices::Logging::LogMessageInternal::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18050c030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessage>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Logging::LogMessageInternal::Get(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessageInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessage>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>"
constexpr  Epic::OnlineServices::Logging::LogMessageInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>* Epic::OnlineServices::Logging::LogMessageInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Logging__LogMessage_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Logging::LogMessage>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Category", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Message", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Level", ty: "::Epic::OnlineServices::Logging::LogLevel", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Logging::LogMessageInternal::LogMessageInternal(::System::IntPtr  m_Category, ::System::IntPtr  m_Message, ::Epic::OnlineServices::Logging::LogLevel  m_Level) noexcept  {
this->m_Category = m_Category;
this->m_Message = m_Message;
this->m_Level = m_Level;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Logging::LogMessageInternal::LogMessageInternal()   {
}
