#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/RegisterEventOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18052b780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>"
constexpr  Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>* Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__RegisterEventOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EventId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EventName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EventType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParamDefsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParamDefs", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::RegisterEventOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_EventId, ::System::IntPtr  m_EventName, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType  m_EventType, uint32_t  m_ParamDefsCount, ::System::IntPtr  m_ParamDefs) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_EventId = m_EventId;
this->m_EventName = m_EventName;
this->m_EventType = m_EventType;
this->m_ParamDefsCount = m_ParamDefsCount;
this->m_ParamDefs = m_ParamDefs;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptionsInternal::RegisterEventOptionsInternal()   {
}
