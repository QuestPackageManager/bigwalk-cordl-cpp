#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetHostAddressOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetHostAddressOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetHostAddressOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>)>(&::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>"
constexpr  Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>* Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionModificationSetHostAddressOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HostAddress", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::SessionModificationSetHostAddressOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_HostAddress) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_HostAddress = m_HostAddress;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptionsInternal::SessionModificationSetHostAddressOptionsInternal()   {
}
