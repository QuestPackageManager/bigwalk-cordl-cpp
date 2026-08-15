#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/AddNotifyJoinGameAcceptedOptionsInternal.hpp"
#include "Epic/OnlineServices/Presence/zzzz__AddNotifyJoinGameAcceptedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__AddNotifyJoinGameAcceptedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>)>(&::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::*)()>(&::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>"
constexpr  Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>* Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__AddNotifyJoinGameAcceptedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::AddNotifyJoinGameAcceptedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptionsInternal::AddNotifyJoinGameAcceptedOptionsInternal()   {
}
