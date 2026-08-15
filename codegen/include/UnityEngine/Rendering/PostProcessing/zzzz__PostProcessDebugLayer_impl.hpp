#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessDebugLayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorBlindnessType_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DebugOverlay_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessDebugLayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DebugOverlay_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__HistogramMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__LightMeterMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MonitorType_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Monitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessDebugLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheet_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__VectorscopeMonitor_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__WaveformMonitor_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fc1220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_linearDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDepth;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_linearDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDepth;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_set_linearDepth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearDepth = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_motionColorIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionColorIntensity;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_motionColorIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionColorIntensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_set_motionColorIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionColorIntensity = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_motionGridSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionGridSize;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_motionGridSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionGridSize;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_set_motionGridSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionGridSize = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_colorBlindnessType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorBlindnessType;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_colorBlindnessType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorBlindnessType;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_set_colorBlindnessType(::UnityEngine::Rendering::PostProcessing::ColorBlindnessType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorBlindnessType = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_colorBlindnessStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorBlindnessStrength;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_get_colorBlindnessStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorBlindnessStrength;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::__cordl_internal_set_colorBlindnessStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorBlindnessStrength = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings* UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings::PostProcessDebugLayer_OverlaySettings()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.get_debugOverlayTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::get_debugOverlayTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"get_debugOverlayTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.set_debugOverlayTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::set_debugOverlayTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"set_debugOverlayTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.get_debugOverlayActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::get_debugOverlayActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"get_debugOverlayActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.set_debugOverlayActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::set_debugOverlayActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"set_debugOverlayActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.get_debugOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::DebugOverlay (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::get_debugOverlay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180e25b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"get_debugOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.set_debugOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(::UnityEngine::Rendering::PostProcessing::DebugOverlay)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::set_debugOverlay)> {
  constexpr static std::size_t size = 0x5f70;
  constexpr static std::size_t addrs = 0x180e25b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"set_debugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::DebugOverlay>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::OnEnable)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fc1620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fc1540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.DestroyDebugOverlayTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::DestroyDebugOverlayTarget)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fc13e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"DestroyDebugOverlayTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.RequestMonitorPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(::UnityEngine::Rendering::PostProcessing::MonitorType)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RequestMonitorPass)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fc1fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RequestMonitorPass", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MonitorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.RequestDebugOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(::UnityEngine::Rendering::PostProcessing::DebugOverlay)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RequestDebugOverlay)> {
  constexpr static std::size_t size = 0x5f70;
  constexpr static std::size_t addrs = 0x180e25b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RequestDebugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::DebugOverlay>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.SetFrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::SetFrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fc1ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"SetFrameSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.PushDebugOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::PushDebugOverlay)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181fc17a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"PushDebugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.GetCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::GetCameraFlags)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fc1510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.RenderMonitors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RenderMonitors)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181fc19d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RenderMonitors", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.RenderSpecialOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RenderSpecialOverlays)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181fc1cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RenderSpecialOverlays", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer.EndFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::EndFrame)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fc1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"EndFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_lightMeter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMeter;
}
constexpr ::UnityEngine::Rendering::PostProcessing::LightMeterMonitor* const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_lightMeter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMeter;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_lightMeter(::UnityEngine::Rendering::PostProcessing::LightMeterMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightMeter = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor*& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_histogram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___histogram;
}
constexpr ::UnityEngine::Rendering::PostProcessing::HistogramMonitor* const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_histogram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___histogram;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_histogram(::UnityEngine::Rendering::PostProcessing::HistogramMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___histogram = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::WaveformMonitor*& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveform;
}
constexpr ::UnityEngine::Rendering::PostProcessing::WaveformMonitor* const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveform;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_waveform(::UnityEngine::Rendering::PostProcessing::WaveformMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waveform = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_vectorscope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorscope;
}
constexpr ::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor* const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_vectorscope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorscope;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_vectorscope(::UnityEngine::Rendering::PostProcessing::VectorscopeMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorscope = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>*& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_m_Monitors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Monitors;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>* const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_m_Monitors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Monitors;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_m_Monitors(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::MonitorType,::UnityEngine::Rendering::PostProcessing::Monitor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Monitors = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_frameWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameWidth;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_frameWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameWidth;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_frameWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_frameHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameHeight;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_frameHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameHeight;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_frameHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameHeight = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get__debugOverlayTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugOverlayTarget_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get__debugOverlayTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugOverlayTarget_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set__debugOverlayTarget_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugOverlayTarget_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get__debugOverlayActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugOverlayActive_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get__debugOverlayActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugOverlayActive_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set__debugOverlayActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugOverlayActive_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::DebugOverlay& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get__debugOverlay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugOverlay_k__BackingField;
}
constexpr ::UnityEngine::Rendering::PostProcessing::DebugOverlay const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get__debugOverlay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugOverlay_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set__debugOverlay_k__BackingField(::UnityEngine::Rendering::PostProcessing::DebugOverlay  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugOverlay_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_overlaySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlaySettings;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings* const& UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_get_overlaySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlaySettings;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::__cordl_internal_set_overlaySettings(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer_OverlaySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlaySettings = value;
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::get_debugOverlayTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"get_debugOverlayTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::set_debugOverlayTarget(::UnityEngine::RenderTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"set_debugOverlayTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::get_debugOverlayActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"get_debugOverlayActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::set_debugOverlayActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"set_debugOverlayActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::PostProcessing::DebugOverlay UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::get_debugOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"get_debugOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::DebugOverlay>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::set_debugOverlay(::UnityEngine::Rendering::PostProcessing::DebugOverlay  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"set_debugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::DebugOverlay>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::DestroyDebugOverlayTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"DestroyDebugOverlayTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RequestMonitorPass(::UnityEngine::Rendering::PostProcessing::MonitorType  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RequestMonitorPass", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::MonitorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monitor);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RequestDebugOverlay(::UnityEngine::Rendering::PostProcessing::DebugOverlay  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RequestDebugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::DebugOverlay>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::SetFrameSize(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"SetFrameSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::PushDebugOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  sheet, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"PushDebugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, sheet, pass);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::GetCameraFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"GetCameraFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RenderMonitors(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RenderMonitors", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::RenderSpecialOverlays(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"RenderSpecialOverlays", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::EndFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {"EndFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer::PostProcessDebugLayer()   {
}
