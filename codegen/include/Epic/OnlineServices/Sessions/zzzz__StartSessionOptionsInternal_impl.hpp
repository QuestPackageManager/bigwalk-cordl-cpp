#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/StartSessionOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__StartSessionOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__StartSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::StartSessionOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::StartSessionOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>)>(&::Epic::OnlineServices::Sessions::StartSessionOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::StartSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::StartSessionOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::StartSessionOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::StartSessionOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::StartSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::StartSessionOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::StartSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::StartSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::StartSessionOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::StartSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::StartSessionOptions>"
constexpr  Epic::OnlineServices::Sessions::StartSessionOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::StartSessionOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::StartSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::StartSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::StartSessionOptions>* Epic::OnlineServices::Sessions::StartSessionOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__StartSessionOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::StartSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::StartSessionOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::StartSessionOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::StartSessionOptionsInternal::StartSessionOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionName = m_SessionName;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::StartSessionOptionsInternal::StartSessionOptionsInternal()   {
}
