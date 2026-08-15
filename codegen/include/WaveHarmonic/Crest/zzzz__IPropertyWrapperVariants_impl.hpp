#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IPropertyWrapperVariants.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapperVariants_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IPropertyWrapper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IPropertyWrapperVariants.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::IPropertyWrapperVariants::*)(::by_ref<::UnityEngine::Rendering::LocalKeyword>, bool)>(&::WaveHarmonic::Crest::IPropertyWrapperVariants::SetKeyword)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IPropertyWrapperVariants*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IPropertyWrapperVariants*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::IPropertyWrapperVariants::SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IPropertyWrapperVariants*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, value);
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr  WaveHarmonic::Crest::IPropertyWrapperVariants::operator ::WaveHarmonic::Crest::IPropertyWrapper*() noexcept {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* WaveHarmonic::Crest::IPropertyWrapperVariants::i___WaveHarmonic__Crest__IPropertyWrapper() noexcept {
return static_cast<::WaveHarmonic::Crest::IPropertyWrapper*>(static_cast<void*>(this));
}
