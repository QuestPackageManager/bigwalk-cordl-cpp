#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AddNotifyLoginStatusChangedOptionsInternal.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AddNotifyLoginStatusChangedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AddNotifyLoginStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>)>(&::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::*)()>(&::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>"
constexpr  Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>* Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Auth__AddNotifyLoginStatusChangedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::AddNotifyLoginStatusChangedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptionsInternal::AddNotifyLoginStatusChangedOptionsInternal()   {
}
