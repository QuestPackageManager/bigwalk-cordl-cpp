#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CopyActiveSessionHandleOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopyActiveSessionHandleOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CopyActiveSessionHandleOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>)>(&::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804d7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804d7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>"
constexpr  Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>* Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__CopyActiveSessionHandleOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::CopyActiveSessionHandleOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionName = m_SessionName;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptionsInternal::CopyActiveSessionHandleOptionsInternal()   {
}
