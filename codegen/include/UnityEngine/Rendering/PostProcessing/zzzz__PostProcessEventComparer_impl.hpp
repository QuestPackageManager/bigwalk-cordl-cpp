#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEventComparer.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEventComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEvent, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent)>(&::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::Equals)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x180e6e4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEvent)>(&::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::Equals(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  x, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x, y);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::GetHashCode(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>"
constexpr  UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>*()  {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>* UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Rendering__PostProcessing__PostProcessEvent_()  {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer::PostProcessEventComparer()   {
}
