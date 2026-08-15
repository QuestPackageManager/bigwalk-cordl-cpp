#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/InstallModOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__InstallModOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__InstallModOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::InstallModOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::InstallModOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>)>(&::Epic::OnlineServices::Mods::InstallModOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805052f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::InstallModOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::InstallModOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::InstallModOptionsInternal::*)()>(&::Epic::OnlineServices::Mods::InstallModOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::InstallModOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Mods::InstallModOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::InstallModOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Mods::InstallModOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::InstallModOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>"
constexpr  Epic::OnlineServices::Mods::InstallModOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>* Epic::OnlineServices::Mods::InstallModOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Mods__InstallModOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Mods::InstallModOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Mods::InstallModOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Mods::InstallModOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Mod", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemoveAfterExit", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::InstallModOptionsInternal::InstallModOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Mod, int32_t  m_RemoveAfterExit) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Mod = m_Mod;
this->m_RemoveAfterExit = m_RemoveAfterExit;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::InstallModOptionsInternal::InstallModOptionsInternal()   {
}
