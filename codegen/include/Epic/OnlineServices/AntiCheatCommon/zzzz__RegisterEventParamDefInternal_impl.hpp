#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/RegisterEventParamDefInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventParamDefInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__RegisterEventParamDef_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>)>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::Set)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18052b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804ff400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>"
constexpr  Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>* Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__RegisterEventParamDef_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ParamName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParamType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::RegisterEventParamDefInternal(::System::IntPtr  m_ParamName, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamType) noexcept  {
this->m_ParamName = m_ParamName;
this->m_ParamType = m_ParamType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDefInternal::RegisterEventParamDefInternal()   {
}
