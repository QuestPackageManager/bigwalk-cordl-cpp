#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/RegisterPlayersOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RegisterPlayersOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RegisterPlayersOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>)>(&::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804f1130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>"
constexpr  Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>* Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__RegisterPlayersOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::RegisterPlayersOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlayersToRegister", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlayersToRegisterCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::RegisterPlayersOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_PlayersToRegister, uint32_t  m_PlayersToRegisterCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionName = m_SessionName;
this->m_PlayersToRegister = m_PlayersToRegister;
this->m_PlayersToRegisterCount = m_PlayersToRegisterCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::RegisterPlayersOptionsInternal::RegisterPlayersOptionsInternal()   {
}
