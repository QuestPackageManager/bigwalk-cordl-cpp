#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/AddNotifyCustomInviteRejectedOptionsInternal.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyCustomInviteRejectedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyCustomInviteRejectedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>)>(&::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::*)()>(&::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>"
constexpr  Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>* Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__CustomInvites__AddNotifyCustomInviteRejectedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::AddNotifyCustomInviteRejectedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteRejectedOptionsInternal::AddNotifyCustomInviteRejectedOptionsInternal()   {
}
