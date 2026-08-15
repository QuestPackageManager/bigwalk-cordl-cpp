#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightProbes.add_lightProbesUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::add_lightProbesUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182251110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"add_lightProbesUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.remove_lightProbesUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::LightProbes::remove_lightProbesUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822511a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"remove_lightProbesUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallLightProbesUpdatedFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallLightProbesUpdatedFunction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182251080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallLightProbesUpdatedFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallTetrahedralizationCompletedFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822510e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallTetrahedralizationCompletedFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallNeedsRetetrahedralizationFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822510b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallNeedsRetetrahedralizationFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetInterpolatedProbe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Renderer*, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(&::UnityEngine::LightProbes::GetInterpolatedProbe)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182251050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"GetInterpolatedProbe", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::LightProbes::GetCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182251030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"GetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.GetInterpolatedProbe_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>)>(&::UnityEngine::LightProbes::GetInterpolatedProbe_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182251040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"GetInterpolatedProbe_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbes::setStaticF_lightProbesUpdated(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "lightProbesUpdated", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_lightProbesUpdated()  {
return ::cordl_internals::getStaticField<::System::Action*, "lightProbesUpdated", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::setStaticF_tetrahedralizationCompleted(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "tetrahedralizationCompleted", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_tetrahedralizationCompleted()  {
return ::cordl_internals::getStaticField<::System::Action*, "tetrahedralizationCompleted", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::setStaticF_needsRetetrahedralization(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "needsRetetrahedralization", ::UnityEngine::LightProbes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_needsRetetrahedralization()  {
return ::cordl_internals::getStaticField<::System::Action*, "needsRetetrahedralization", ::UnityEngine::LightProbes*>();
}
inline void UnityEngine::LightProbes::add_lightProbesUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"add_lightProbesUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::remove_lightProbesUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"remove_lightProbesUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightProbes::Internal_CallLightProbesUpdatedFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallLightProbesUpdatedFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallTetrahedralizationCompletedFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"Internal_CallNeedsRetetrahedralizationFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::GetInterpolatedProbe(::UnityEngine::Vector3  position, ::UnityEngine::Renderer*  renderer, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  probe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"GetInterpolatedProbe", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, renderer, probe);
}
inline int32_t UnityEngine::LightProbes::GetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"GetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::GetInterpolatedProbe_Injected(::by_ref<::UnityEngine::Vector3>  position, ::System::IntPtr  renderer, ::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  probe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbes*>(),
                        {"GetInterpolatedProbe_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, renderer, probe);
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbes::LightProbes()   {
}
