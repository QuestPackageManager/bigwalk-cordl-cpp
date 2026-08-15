#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetMaxPlayersOptionsInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetMaxPlayersOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetMaxPlayersOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>)>(&::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>"
constexpr  Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>* Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__SessionModificationSetMaxPlayersOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxPlayers", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::SessionModificationSetMaxPlayersOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_MaxPlayers) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_MaxPlayers = m_MaxPlayers;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptionsInternal::SessionModificationSetMaxPlayersOptionsInternal()   {
}
