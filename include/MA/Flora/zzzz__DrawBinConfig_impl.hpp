#pragma once
// IWYU pragma private; include "MA/Flora/DrawBinConfig.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawBinConfig.get_VisibilityConfigCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawBinConfig::*)()>(&::MA::Flora::DrawBinConfig::get_VisibilityConfigCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814ba660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawBinConfig>(),
                        {"get_VisibilityConfigCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::DrawBinConfig::get_VisibilityConfigCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawBinConfig>(),
                        {"get_VisibilityConfigCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "SplitCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportsCrossFade", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportsMotionCheck", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawBinConfig::DrawBinConfig(int32_t  SplitCount, bool  SupportsCrossFade, bool  SupportsMotionCheck) noexcept  {
this->SplitCount = SplitCount;
this->SupportsCrossFade = SupportsCrossFade;
this->SupportsMotionCheck = SupportsMotionCheck;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawBinConfig::DrawBinConfig()   {
}
