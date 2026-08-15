#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CreateUserOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CreateUserOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CreateUserOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>)>(&::Epic::OnlineServices::Connect::CreateUserOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CreateUserOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CreateUserOptionsInternal::*)()>(&::Epic::OnlineServices::Connect::CreateUserOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::CreateUserOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Connect::CreateUserOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>"
constexpr  Epic::OnlineServices::Connect::CreateUserOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>* Epic::OnlineServices::Connect::CreateUserOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Connect__CreateUserOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Connect::CreateUserOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Connect::CreateUserOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Connect::CreateUserOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContinuanceToken", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::CreateUserOptionsInternal::CreateUserOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ContinuanceToken) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ContinuanceToken = m_ContinuanceToken;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::CreateUserOptionsInternal::CreateUserOptionsInternal()   {
}
