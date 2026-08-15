#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessRenderContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AutoExposure_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DebugOverlay_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__LogHistogram_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessDebugLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessResources_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheetFactory_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheet_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TemporalAntialiasing_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode::PostProcessRenderContext_StereoRenderingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode::PostProcessRenderContext_StereoRenderingMode()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode::MultiPass{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode::SinglePass{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode::SinglePassInstanced{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode::SinglePassMultiview{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_camera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_camera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_camera)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181fcab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_command
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_command)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_command", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_command
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_command)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_command", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_source)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fcaad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_source", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_source)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fcacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_source", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_destination)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fcaaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_destination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_destination)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fcac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_sourceFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_sourceFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_sourceFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_sourceFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_sourceFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_sourceFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_flip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_flip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_flip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_flip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_flip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_flip", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_resources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_resources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_resources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_resources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::PostProcessing::PostProcessResources*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_resources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_resources", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_propertySheets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_propertySheets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_propertySheets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_propertySheets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_propertySheets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803117a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_propertySheets", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_userData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_userData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_userData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_userData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_userData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180374490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_userData", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_debugLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_debugLayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_debugLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_debugLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_debugLayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_debugLayer", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_width)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_width)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_width", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_height)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181561f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_height)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_height", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_stereoActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_stereoActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805fa960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_stereoActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_stereoActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_stereoActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_stereoActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_xrActiveEye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_xrActiveEye)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804081d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_xrActiveEye", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_xrActiveEye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_xrActiveEye)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_xrActiveEye", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_numberOfEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_numberOfEyes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c9bb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_numberOfEyes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_numberOfEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_numberOfEyes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcacd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_numberOfEyes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_stereoRenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_stereoRenderingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_stereoRenderingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_stereoRenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_stereoRenderingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18182c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_stereoRenderingMode", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_screenWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_screenWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_screenWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_screenWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_screenWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_screenWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_screenHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_screenHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_screenHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_screenHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_screenHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_screenHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_isSceneView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_isSceneView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcaac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_isSceneView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_isSceneView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_isSceneView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_isSceneView", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_antialiasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_antialiasing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816bea70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_antialiasing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_antialiasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_antialiasing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcaaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_antialiasing", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.get_temporalAntialiasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_temporalAntialiasing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_temporalAntialiasing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.set_temporalAntialiasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_temporalAntialiasing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d3a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_temporalAntialiasing", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::Reset)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181fca750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.IsTemporalAntialiasingActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::IsTemporalAntialiasingActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fca6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"IsTemporalAntialiasingActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.IsDebugOverlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::PostProcessing::DebugOverlay)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::IsDebugOverlayEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fca6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"IsDebugOverlayEnabled", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::DebugOverlay>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.PushDebugOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::PushDebugOverlay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fca700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"PushDebugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.GetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::GetDescriptor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181fca370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.GetScreenSpaceTemporaryRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::UnityEngine::FilterMode, int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::GetScreenSpaceTemporaryRT)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181fca530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"GetScreenSpaceTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.GetScreenSpaceTemporaryRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::GetScreenSpaceTemporaryRT)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fca630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"GetScreenSpaceTemporaryRT", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext.UpdateSinglePassStereoState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)(bool, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::UpdateSinglePassStereoState)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fca970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"UpdateSinglePassStereoState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_m_Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_m_Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Camera = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__command_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____command_k__BackingField;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__command_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____command_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__command_k__BackingField(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____command_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__source_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__source_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__destination_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destination_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__destination_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destination_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destination_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureFormat& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__sourceFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceFormat_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureFormat const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__sourceFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceFormat_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__sourceFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceFormat_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__flip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flip_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__flip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flip_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__flip_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flip_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__resources_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resources_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__resources_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resources_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__resources_k__BackingField(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resources_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__propertySheets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertySheets_k__BackingField;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__propertySheets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertySheets_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__propertySheets_k__BackingField(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertySheets_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__userData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__userData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__userData_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userData_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__debugLayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugLayer_k__BackingField;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__debugLayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugLayer_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__debugLayer_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugLayer_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__width_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__width_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__width_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__height_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__height_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__height_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____height_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__stereoActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoActive_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__stereoActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoActive_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__stereoActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stereoActive_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__xrActiveEye_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrActiveEye_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__xrActiveEye_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrActiveEye_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__xrActiveEye_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrActiveEye_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__numberOfEyes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfEyes_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__numberOfEyes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfEyes_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__numberOfEyes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numberOfEyes_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__stereoRenderingMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoRenderingMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__stereoRenderingMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoRenderingMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__stereoRenderingMode_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stereoRenderingMode_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__screenWidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenWidth_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__screenWidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenWidth_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__screenWidth_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenWidth_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__screenHeight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenHeight_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__screenHeight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenHeight_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__screenHeight_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenHeight_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__isSceneView_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSceneView_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__isSceneView_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSceneView_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__isSceneView_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSceneView_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__antialiasing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____antialiasing_k__BackingField;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__antialiasing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____antialiasing_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__antialiasing_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____antialiasing_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__temporalAntialiasing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporalAntialiasing_k__BackingField;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get__temporalAntialiasing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporalAntialiasing_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set__temporalAntialiasing_k__BackingField(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____temporalAntialiasing_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet*& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_uberSheet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberSheet;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet* const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_uberSheet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberSheet;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_uberSheet(::UnityEngine::Rendering::PostProcessing::PropertySheet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uberSheet = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_autoExposureTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoExposureTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_autoExposureTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoExposureTexture;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_autoExposureTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoExposureTexture = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram*& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_logHistogram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logHistogram;
}
constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram* const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_logHistogram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logHistogram;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_logHistogram(::UnityEngine::Rendering::PostProcessing::LogHistogram*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logHistogram = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_logLut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLut;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_logLut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLut;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_logLut(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLut = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure>& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_autoExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoExposure;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure> const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_autoExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoExposure;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_autoExposure(::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoExposure = value;
}
constexpr int32_t& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_bloomBufferNameID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBufferNameID;
}
constexpr int32_t const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_bloomBufferNameID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBufferNameID;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_bloomBufferNameID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBufferNameID = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_physicalCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicalCamera;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_physicalCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___physicalCamera;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_physicalCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___physicalCamera = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_m_sourceDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_sourceDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_get_m_sourceDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_sourceDescriptor;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::__cordl_internal_set_m_sourceDescriptor(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_sourceDescriptor = value;
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_camera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_camera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_camera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_command()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_command", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_command(::UnityEngine::Rendering::CommandBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_command", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_source(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_source", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_destination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_destination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_destination(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_sourceFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_sourceFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_sourceFormat(::UnityEngine::RenderTextureFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_sourceFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_flip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_flip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_flip(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_flip", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_resources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_resources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_resources(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_resources", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_propertySheets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_propertySheets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_propertySheets(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_propertySheets", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_userData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_userData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_userData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_userData", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_debugLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_debugLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_debugLayer(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_debugLayer", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_width(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_width", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_height(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_height", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_stereoActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_stereoActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_stereoActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_stereoActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_xrActiveEye()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_xrActiveEye", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_xrActiveEye(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_xrActiveEye", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_numberOfEyes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_numberOfEyes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_numberOfEyes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_numberOfEyes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_stereoRenderingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_stereoRenderingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_stereoRenderingMode(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_stereoRenderingMode", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext_StereoRenderingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_screenWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_screenWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_screenWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_screenWidth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_screenHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_screenHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_screenHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_screenHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_isSceneView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_isSceneView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_isSceneView(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_isSceneView", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_antialiasing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_antialiasing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_antialiasing(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_antialiasing", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::get_temporalAntialiasing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"get_temporalAntialiasing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::set_temporalAntialiasing(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"set_temporalAntialiasing", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::IsTemporalAntialiasingActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"IsTemporalAntialiasingActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::IsDebugOverlayEnabled(::UnityEngine::Rendering::PostProcessing::DebugOverlay  overlay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"IsDebugOverlayEnabled", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::DebugOverlay>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, overlay);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::PushDebugOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::PostProcessing::PropertySheet*  sheet, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"PushDebugOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, sheet, pass);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::GetDescriptor(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method, depthBufferBits, colorFormat, readWrite);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::GetScreenSpaceTemporaryRT(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, ::UnityEngine::FilterMode  filter, int32_t  widthOverride, int32_t  heightOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"GetScreenSpaceTemporaryRT", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, nameID, depthBufferBits, colorFormat, readWrite, filter, widthOverride, heightOverride);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::GetScreenSpaceTemporaryRT(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  widthOverride, int32_t  heightOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"GetScreenSpaceTemporaryRT", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, depthBufferBits, colorFormat, readWrite, widthOverride, heightOverride);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::UpdateSinglePassStereoState(bool  isTAAEnabled, bool  isAOEnabled, bool  isSSREnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {"UpdateSinglePassStereoState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isTAAEnabled, isAOEnabled, isSSREnabled);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext::PostProcessRenderContext()   {
}
