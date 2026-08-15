#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetRawRichTextOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetRawRichTextOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetRawRichTextOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>)>(&::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::*)()>(&::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>* Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__PresenceModificationSetRawRichTextOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RichText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::PresenceModificationSetRawRichTextOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_RichText) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_RichText = m_RichText;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptionsInternal::PresenceModificationSetRawRichTextOptionsInternal()   {
}
