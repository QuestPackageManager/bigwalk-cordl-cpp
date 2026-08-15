#pragma once
// IWYU pragma private; include "UnityEngine/Splines/GetPosition.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/Splines/zzzz__GetPosition_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::GetPosition.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::GetPosition::*)(int32_t)>(&::UnityEngine::Splines::GetPosition::Execute)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18217ace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::GetPosition>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::GetPosition::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::GetPosition>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  UnityEngine::Splines::GetPosition::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Splines::GetPosition::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Spline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}") }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::GetPosition::GetPosition(::UnityEngine::Splines::NativeSpline  Spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Positions) noexcept  {
this->Spline = Spline;
this->Positions = Positions;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::GetPosition::GetPosition()   {
}
