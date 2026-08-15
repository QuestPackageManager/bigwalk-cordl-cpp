#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventParamPair.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValue_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPair_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogEventParamPairParamValue_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair.get_ParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::get_ParamValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>(),
                        {"get_ParamValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair.set_ParamValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::*)(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue)>(&::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::set_ParamValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>(),
                        {"set_ParamValue", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::get_ParamValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>(),
                        {"get_ParamValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::set_ParamValue(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair>(),
                        {"set_ParamValue", {}, {::i2c::type_of<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ParamValue_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::LogEventParamPair(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue  _ParamValue_k__BackingField) noexcept  {
this->_ParamValue_k__BackingField = _ParamValue_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair::LogEventParamPair()   {
}
