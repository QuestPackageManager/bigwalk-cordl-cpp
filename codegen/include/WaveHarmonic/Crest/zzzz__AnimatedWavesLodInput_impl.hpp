#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AnimatedWavesLodInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DisplacementPass_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__AnimatedWavesLodInput_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__AnimatedWavesLodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DisplacementPass_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportWaveDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::*)(::WaveHarmonic::Crest::AnimatedWavesLodInput*)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter.ReportDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::ReportDisplacement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18255bdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter.ReportWaveDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::*)(::WaveHarmonic::Crest::WaterRenderer*, float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::ReportWaveDisplacement)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255bf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput>& WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput> const& WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::__cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::_ctor(::WaveHarmonic::Crest::AnimatedWavesLodInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline bool WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, horizontal, vertical);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, displacement);
}
inline ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter* WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::New_ctor(::WaveHarmonic::Crest::AnimatedWavesLodInput*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*>(input));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr  WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::operator ::WaveHarmonic::Crest::IReportsDisplacement*() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportsDisplacement*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr ::WaveHarmonic::Crest::IReportsDisplacement* WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::i___WaveHarmonic__Crest__IReportsDisplacement() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportsDisplacement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr  WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::operator ::WaveHarmonic::Crest::IReportWaveDisplacement*() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportWaveDisplacement*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement* WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::i___WaveHarmonic__Crest__IReportWaveDisplacement() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportWaveDisplacement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter::AnimatedWavesLodInput_Reporter()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_DefaultMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_DefaultMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182550860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::Initialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1825504a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182550550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::Filter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182550420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.ReportDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::ReportDisplacement)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1825505e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.ReportWaveDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(::WaveHarmonic::Crest::WaterRenderer*, float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::ReportWaveDisplacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030b3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182550980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.SetRenderPostCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(bool, bool, bool)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::SetRenderPostCombine)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182550830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"SetRenderPostCombine", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::OnMigrate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825505c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182550900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182550940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_DisplacementPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::DisplacementPass (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_DisplacementPass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_DisplacementPass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.set_DisplacementPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(::WaveHarmonic::Crest::DisplacementPass)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::set_DisplacementPass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_DisplacementPass", {}, {::i2c::type_of<::WaveHarmonic::Crest::DisplacementPass>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_FilterByWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_FilterByWavelength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825508f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_FilterByWavelength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.set_FilterByWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(bool)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::set_FilterByWavelength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825509a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_FilterByWavelength", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_MaximumDisplacementHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_MaximumDisplacementHorizontal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_MaximumDisplacementHorizontal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.set_MaximumDisplacementHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::set_MaximumDisplacementHorizontal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_MaximumDisplacementHorizontal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_MaximumDisplacementVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_MaximumDisplacementVertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803826d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_MaximumDisplacementVertical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.set_MaximumDisplacementVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::set_MaximumDisplacementVertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182349c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_MaximumDisplacementVertical", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_OctaveWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_OctaveWavelength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d39c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_OctaveWavelength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.set_OctaveWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::set_OctaveWavelength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d3a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_OctaveWavelength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_RenderPostCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_RenderPostCombine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_RenderPostCombine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.set_RenderPostCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(bool)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::set_RenderPostCombine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825509b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_RenderPostCombine", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.get_ReportRendererBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::get_ReportRendererBounds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803826e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_ReportRendererBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLodInput.set_ReportRendererBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLodInput::*)(bool)>(&::WaveHarmonic::Crest::AnimatedWavesLodInput::set_ReportRendererBounds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180382820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_ReportRendererBounds", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::DisplacementPass& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__DisplacementPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplacementPass;
}
constexpr ::WaveHarmonic::Crest::DisplacementPass const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__DisplacementPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplacementPass;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__DisplacementPass(::WaveHarmonic::Crest::DisplacementPass  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisplacementPass = value;
}
constexpr bool& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__FilterByWavelength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterByWavelength;
}
constexpr bool const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__FilterByWavelength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterByWavelength;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__FilterByWavelength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FilterByWavelength = value;
}
constexpr float_t& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__OctaveWavelength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OctaveWavelength;
}
constexpr float_t const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__OctaveWavelength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OctaveWavelength;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__OctaveWavelength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OctaveWavelength = value;
}
constexpr float_t& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__MaximumDisplacementVertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumDisplacementVertical;
}
constexpr float_t const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__MaximumDisplacementVertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumDisplacementVertical;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__MaximumDisplacementVertical(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumDisplacementVertical = value;
}
constexpr float_t& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__MaximumDisplacementHorizontal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumDisplacementHorizontal;
}
constexpr float_t const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__MaximumDisplacementHorizontal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumDisplacementHorizontal;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__MaximumDisplacementHorizontal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumDisplacementHorizontal = value;
}
constexpr bool& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__ReportRendererBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReportRendererBounds;
}
constexpr bool const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__ReportRendererBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReportRendererBounds;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__ReportRendererBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReportRendererBounds = value;
}
constexpr ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__Reporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reporter;
}
constexpr ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter* const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__Reporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reporter;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__Reporter(::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reporter = value;
}
constexpr bool& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__RenderPostCombine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderPostCombine;
}
constexpr bool const& WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_get__RenderPostCombine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderPostCombine;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLodInput::__cordl_internal_set__RenderPostCombine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderPostCombine = value;
}
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::AnimatedWavesLodInput::get_DefaultMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::AnimatedWavesLodInput::get_Pass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLodInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline bool WaveHarmonic::Crest::AnimatedWavesLodInput::ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"ReportDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, horizontal, vertical);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLodInput::ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"ReportWaveDisplacement", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, displacement);
}
inline int32_t WaveHarmonic::Crest::AnimatedWavesLodInput::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::SetRenderPostCombine(bool  previous, bool  current, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"SetRenderPostCombine", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current, force);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AnimatedWavesLodInput::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::AnimatedWavesLodInput::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DisplacementPass WaveHarmonic::Crest::AnimatedWavesLodInput::get_DisplacementPass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_DisplacementPass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::DisplacementPass>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::set_DisplacementPass(::WaveHarmonic::Crest::DisplacementPass  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_DisplacementPass", {}, {::i2c::type_of<::WaveHarmonic::Crest::DisplacementPass>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::AnimatedWavesLodInput::get_FilterByWavelength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_FilterByWavelength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::set_FilterByWavelength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_FilterByWavelength", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLodInput::get_MaximumDisplacementHorizontal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_MaximumDisplacementHorizontal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::set_MaximumDisplacementHorizontal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_MaximumDisplacementHorizontal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLodInput::get_MaximumDisplacementVertical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_MaximumDisplacementVertical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::set_MaximumDisplacementVertical(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_MaximumDisplacementVertical", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLodInput::get_OctaveWavelength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_OctaveWavelength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::set_OctaveWavelength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_OctaveWavelength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::AnimatedWavesLodInput::get_RenderPostCombine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_RenderPostCombine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::set_RenderPostCombine(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_RenderPostCombine", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::AnimatedWavesLodInput::get_ReportRendererBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"get_ReportRendererBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLodInput::set_ReportRendererBounds(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLodInput*>(),
                        {"set_ReportRendererBounds", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::AnimatedWavesLodInput* WaveHarmonic::Crest::AnimatedWavesLodInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::AnimatedWavesLodInput*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AnimatedWavesLodInput::AnimatedWavesLodInput()   {
}
