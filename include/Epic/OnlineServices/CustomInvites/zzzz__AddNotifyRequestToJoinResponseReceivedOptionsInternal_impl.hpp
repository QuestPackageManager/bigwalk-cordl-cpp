#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/AddNotifyRequestToJoinResponseReceivedOptionsInternal.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyRequestToJoinResponseReceivedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AddNotifyRequestToJoinResponseReceivedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>)>(&::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::*)()>(&::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>"
constexpr  Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>* Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__CustomInvites__AddNotifyRequestToJoinResponseReceivedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::AddNotifyRequestToJoinResponseReceivedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::AddNotifyRequestToJoinResponseReceivedOptionsInternal::AddNotifyRequestToJoinResponseReceivedOptionsInternal()   {
}
