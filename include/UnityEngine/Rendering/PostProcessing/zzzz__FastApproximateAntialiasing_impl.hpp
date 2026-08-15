#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/FastApproximateAntialiasing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FastApproximateAntialiasing_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::__cordl_internal_get_fastMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastMode;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::__cordl_internal_get_fastMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastMode;
}
constexpr void UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::__cordl_internal_set_fastMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastMode = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::__cordl_internal_get_keepAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepAlpha;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::__cordl_internal_get_keepAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepAlpha;
}
constexpr void UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::__cordl_internal_set_keepAlpha(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepAlpha = value;
}
inline void UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing* UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing::FastApproximateAntialiasing()   {
}
