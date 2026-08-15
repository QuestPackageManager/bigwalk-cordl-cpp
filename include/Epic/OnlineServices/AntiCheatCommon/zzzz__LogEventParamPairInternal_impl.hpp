#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPairInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonEventParamType_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValueInternal_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPair_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::Set)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180524be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180524bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>* Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogEventParamPair_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ParamValueType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParamValue", ty: "::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::LogEventParamPairInternal(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType  m_ParamValueType, ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal  m_ParamValue) noexcept  {
this->m_ParamValueType = m_ParamValueType;
this->m_ParamValue = m_ParamValue;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal::LogEventParamPairInternal()   {
}
