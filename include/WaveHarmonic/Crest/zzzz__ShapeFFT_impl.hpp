#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeFFT.hpp"
#include "WaveHarmonic/Crest/zzzz__FFTCompute_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeWaves_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeFFT_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FFTCompute_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_LoopPeriod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_LoopPeriod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_LoopPeriod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_MinimumResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_MinimumResolution)> {
  constexpr static std::size_t size = 0xd7f0;
  constexpr static std::size_t addrs = 0x180720990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_MaximumResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_MaximumResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18255ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.GetFFTParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::FFTCompute_Parameters (::WaveHarmonic::Crest::ShapeFFT::*)(float_t)>(&::WaveHarmonic::Crest::ShapeFFT::GetFFTParameters)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18255e760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"GetFFTParameters", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ShapeFFT::OnUpdate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18255ea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::ShapeFFT::Draw)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18255e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.ReportMaxDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::ShapeFFT::ReportMaxDisplacement)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18255ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_WindDirRadForFFT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_WindDirRadForFFT)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18255eec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_WindDirRadForFFT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.GetWindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::GetWindTurbulence)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"GetWindTurbulence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18255e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18255e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::OnMigrate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255ea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_ApplyAdvancedSpectrumControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_ApplyAdvancedSpectrumControls)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_ApplyAdvancedSpectrumControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_ApplyAdvancedSpectrumControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(bool)>(&::WaveHarmonic::Crest::ShapeFFT::set_ApplyAdvancedSpectrumControls)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_ApplyAdvancedSpectrumControls", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_MaximumHorizontalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_MaximumHorizontalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_MaximumHorizontalDisplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_MaximumHorizontalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(float_t)>(&::WaveHarmonic::Crest::ShapeFFT::set_MaximumHorizontalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_MaximumHorizontalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_MaximumVerticalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_MaximumVerticalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821b8180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_MaximumVerticalDisplacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_MaximumVerticalDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(float_t)>(&::WaveHarmonic::Crest::ShapeFFT::set_MaximumVerticalDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_MaximumVerticalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_OverrideCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_OverrideCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_OverrideCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_OverrideCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(bool)>(&::WaveHarmonic::Crest::ShapeFFT::set_OverrideCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_OverrideCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_OverrideGlobalWindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_OverrideGlobalWindTurbulence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_OverrideGlobalWindTurbulence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_OverrideGlobalWindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(bool)>(&::WaveHarmonic::Crest::ShapeFFT::set_OverrideGlobalWindTurbulence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_OverrideGlobalWindTurbulence", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_TimeLoopLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_TimeLoopLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ebf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_TimeLoopLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_TimeLoopLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(float_t)>(&::WaveHarmonic::Crest::ShapeFFT::set_TimeLoopLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_TimeLoopLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_WindAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_WindAlignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_WindAlignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_WindAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(float_t)>(&::WaveHarmonic::Crest::ShapeFFT::set_WindAlignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_WindAlignment", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.get_WindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::get_WindTurbulence)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_WindTurbulence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT.set_WindTurbulence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)(float_t)>(&::WaveHarmonic::Crest::ShapeFFT::set_WindTurbulence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_WindTurbulence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeFFT._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeFFT::*)()>(&::WaveHarmonic::Crest::ShapeFFT::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255edf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__ApplyAdvancedSpectrumControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAdvancedSpectrumControls;
}
constexpr bool const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__ApplyAdvancedSpectrumControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAdvancedSpectrumControls;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__ApplyAdvancedSpectrumControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyAdvancedSpectrumControls = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__OverrideGlobalWindTurbulence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGlobalWindTurbulence;
}
constexpr bool const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__OverrideGlobalWindTurbulence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideGlobalWindTurbulence;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__OverrideGlobalWindTurbulence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideGlobalWindTurbulence = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__WindTurbulence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindTurbulence;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__WindTurbulence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindTurbulence;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__WindTurbulence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindTurbulence = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__WindAlignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindAlignment;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__WindAlignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindAlignment;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__WindAlignment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindAlignment = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__TimeLoopLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeLoopLength;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__TimeLoopLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeLoopLength;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__TimeLoopLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeLoopLength = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__OverrideCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideCulling;
}
constexpr bool const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__OverrideCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideCulling;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__OverrideCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideCulling = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__MaximumVerticalDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumVerticalDisplacement;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__MaximumVerticalDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumVerticalDisplacement;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__MaximumVerticalDisplacement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumVerticalDisplacement = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__MaximumHorizontalDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumHorizontalDisplacement;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__MaximumHorizontalDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumHorizontalDisplacement;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__MaximumHorizontalDisplacement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumHorizontalDisplacement = value;
}
constexpr bool& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__EnableBakedCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableBakedCollision;
}
constexpr bool const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__EnableBakedCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableBakedCollision;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__EnableBakedCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableBakedCollision = value;
}
constexpr int32_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__TimeResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeResolution;
}
constexpr int32_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__TimeResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeResolution;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__TimeResolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeResolution = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__SmallestWavelengthRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmallestWavelengthRequired;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__SmallestWavelengthRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmallestWavelengthRequired;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__SmallestWavelengthRequired(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SmallestWavelengthRequired = value;
}
constexpr float_t& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__BakedTimeLoopLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BakedTimeLoopLength;
}
constexpr float_t const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__BakedTimeLoopLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BakedTimeLoopLength;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__BakedTimeLoopLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BakedTimeLoopLength = value;
}
constexpr ::WaveHarmonic::Crest::FFTCompute*& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__FFTCompute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFTCompute;
}
constexpr ::WaveHarmonic::Crest::FFTCompute* const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__FFTCompute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FFTCompute;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__FFTCompute(::WaveHarmonic::Crest::FFTCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FFTCompute = value;
}
constexpr ::WaveHarmonic::Crest::FFTCompute_Parameters& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__OldFFTParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldFFTParameters;
}
constexpr ::WaveHarmonic::Crest::FFTCompute_Parameters const& WaveHarmonic::Crest::ShapeFFT::__cordl_internal_get__OldFFTParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldFFTParameters;
}
constexpr void WaveHarmonic::Crest::ShapeFFT::__cordl_internal_set__OldFFTParameters(::WaveHarmonic::Crest::FFTCompute_Parameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OldFFTParameters = value;
}
inline void WaveHarmonic::Crest::ShapeFFT::setStaticF_s_InstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InstanceCount", ::WaveHarmonic::Crest::ShapeFFT*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShapeFFT::getStaticF_s_InstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_InstanceCount", ::WaveHarmonic::Crest::ShapeFFT*>();
}
inline float_t WaveHarmonic::Crest::ShapeFFT::get_LoopPeriod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_LoopPeriod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeFFT::get_MinimumResolution()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeFFT::get_MaximumResolution()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::FFTCompute_Parameters WaveHarmonic::Crest::ShapeFFT::GetFFTParameters(float_t  gravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"GetFFTParameters", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::FFTCompute_Parameters>(this, ___internal_method, gravity);
}
inline void WaveHarmonic::Crest::ShapeFFT::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::ShapeFFT::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slice);
}
template<typename T>
inline void WaveHarmonic::Crest::ShapeFFT::SetRenderParameters(::WaveHarmonic::Crest::WaterRenderer*  water, T  wrapper)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 39}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, wrapper);
}
inline void WaveHarmonic::Crest::ShapeFFT::ReportMaxDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline float_t WaveHarmonic::Crest::ShapeFFT::get_WindDirRadForFFT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_WindDirRadForFFT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ShapeFFT::GetWindTurbulence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"GetWindTurbulence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShapeFFT::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShapeFFT::get_ApplyAdvancedSpectrumControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_ApplyAdvancedSpectrumControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_ApplyAdvancedSpectrumControls(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_ApplyAdvancedSpectrumControls", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeFFT::get_MaximumHorizontalDisplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_MaximumHorizontalDisplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_MaximumHorizontalDisplacement(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_MaximumHorizontalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeFFT::get_MaximumVerticalDisplacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_MaximumVerticalDisplacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_MaximumVerticalDisplacement(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_MaximumVerticalDisplacement", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeFFT::get_OverrideCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_OverrideCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_OverrideCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_OverrideCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::ShapeFFT::get_OverrideGlobalWindTurbulence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_OverrideGlobalWindTurbulence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_OverrideGlobalWindTurbulence(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_OverrideGlobalWindTurbulence", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeFFT::get_TimeLoopLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_TimeLoopLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_TimeLoopLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_TimeLoopLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeFFT::get_WindAlignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_WindAlignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_WindAlignment(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_WindAlignment", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShapeFFT::get_WindTurbulence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"get_WindTurbulence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeFFT::set_WindTurbulence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {"set_WindTurbulence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::ShapeFFT::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeFFT*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ShapeFFT* WaveHarmonic::Crest::ShapeFFT::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ShapeFFT*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeFFT::ShapeFFT()   {
}
