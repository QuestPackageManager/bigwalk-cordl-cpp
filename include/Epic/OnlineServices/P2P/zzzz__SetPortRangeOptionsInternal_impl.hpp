#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPortRangeOptionsInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPortRangeOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPortRangeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>)>(&::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180533b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPortRangeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>"
constexpr  Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>* Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SetPortRangeOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPortRangeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxAdditionalPortsToTry", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::SetPortRangeOptionsInternal(int32_t  m_ApiVersion, uint16_t  m_Port, uint16_t  m_MaxAdditionalPortsToTry) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Port = m_Port;
this->m_MaxAdditionalPortsToTry = m_MaxAdditionalPortsToTry;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SetPortRangeOptionsInternal::SetPortRangeOptionsInternal()   {
}
