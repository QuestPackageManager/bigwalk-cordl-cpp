#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IAxisCalibrationIndexMap.hpp"
#include "Rewired/Interfaces/zzzz__IAxisCalibrationIndexMap_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IAxisCalibrationIndexMap.GetMappedAxisIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Interfaces::IAxisCalibrationIndexMap::*)(int32_t)>(&::Rewired::Interfaces::IAxisCalibrationIndexMap::GetMappedAxisIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(), 0}
                ));
    return ___internal_method;
  }
};
inline int32_t Rewired::Interfaces::IAxisCalibrationIndexMap::GetMappedAxisIndex(int32_t  axisIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, axisIndex);
}
