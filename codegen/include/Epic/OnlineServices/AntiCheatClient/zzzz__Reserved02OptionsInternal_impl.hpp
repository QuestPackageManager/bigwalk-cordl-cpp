#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/Reserved02OptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__Reserved02OptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__Reserved02Options_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>)>(&::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::Set)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180533690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18050bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>"
constexpr  Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>* Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__Reserved02Options_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved1", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved4", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::Reserved02OptionsInternal(int32_t  m_ApiVersion, int64_t  m_Reserved1, uint32_t  m_Reserved2, uint32_t  m_Reserved3, ::System::IntPtr  m_Reserved4) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Reserved1 = m_Reserved1;
this->m_Reserved2 = m_Reserved2;
this->m_Reserved3 = m_Reserved3;
this->m_Reserved4 = m_Reserved4;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::Reserved02OptionsInternal::Reserved02OptionsInternal()   {
}
