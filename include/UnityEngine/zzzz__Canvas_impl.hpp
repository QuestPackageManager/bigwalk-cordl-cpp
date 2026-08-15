#pragma once
// IWYU pragma private; include "UnityEngine/Canvas.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AdditionalCanvasShaderChannels_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Canvas_WillRenderCanvases._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas_WillRenderCanvases::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Canvas_WillRenderCanvases::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas_WillRenderCanvases.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas_WillRenderCanvases::*)()>(&::UnityEngine::Canvas_WillRenderCanvases::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(),
                    {::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Canvas_WillRenderCanvases::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Canvas_WillRenderCanvases::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Canvas_WillRenderCanvases*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Canvas_WillRenderCanvases* UnityEngine::Canvas_WillRenderCanvases::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Canvas_WillRenderCanvases*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Canvas_WillRenderCanvases::Canvas_WillRenderCanvases()   {
}
//  Writing Method size for method: ::UnityEngine::Canvas.add_preWillRenderCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::add_preWillRenderCanvases)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182514230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"add_preWillRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.remove_preWillRenderCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::remove_preWillRenderCanvases)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182514760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"remove_preWillRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.add_willRenderCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::add_willRenderCanvases)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825142c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"add_willRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.remove_willRenderCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas_WillRenderCanvases*)>(&::UnityEngine::Canvas::remove_willRenderCanvases)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825147f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"remove_willRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderMode (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_renderMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_renderMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(::UnityEngine::RenderMode)>(&::UnityEngine::Canvas::set_renderMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825149f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_renderMode", {}, {::i2c::type_of<::UnityEngine::RenderMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_isRootCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_isRootCanvas)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_isRootCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_scaleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_scaleFactor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_scaleFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_scaleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(float_t)>(&::UnityEngine::Canvas::set_scaleFactor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182514a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_scaleFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_referencePixelsPerUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825144c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_referencePixelsPerUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_referencePixelsPerUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(float_t)>(&::UnityEngine::Canvas::set_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825149a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_referencePixelsPerUnit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_pixelPerfect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_pixelPerfect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_pixelPerfect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_renderOrder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_overrideSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_overrideSorting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_overrideSorting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_overrideSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(bool)>(&::UnityEngine::Canvas::set_overrideSorting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_overrideSorting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_sortingOrder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825146a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(int32_t)>(&::UnityEngine::Canvas::set_sortingOrder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_targetDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_targetDisplay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825146e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_targetDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingLayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_sortingLayerID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingLayerID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingLayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(int32_t)>(&::UnityEngine::Canvas::set_sortingLayerID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingLayerID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_additionalShaderChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdditionalCanvasShaderChannels (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_additionalShaderChannels)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_additionalShaderChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_additionalShaderChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)(::UnityEngine::AdditionalCanvasShaderChannels)>(&::UnityEngine::Canvas::set_additionalShaderChannels)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_additionalShaderChannels", {}, {::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_rootCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_rootCanvas)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825145d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_rootCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderingDisplaySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_renderingDisplaySize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182514580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderingDisplaySize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_externBeginRenderOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<int32_t>* (*)()>(&::UnityEngine::Canvas::get_externBeginRenderOverlays)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182514390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_externBeginRenderOverlays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_externBeginRenderOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<int32_t>*)>(&::UnityEngine::Canvas::set_externBeginRenderOverlays)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825148c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_externBeginRenderOverlays", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_externRenderOverlaysBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<int32_t,int32_t>* (*)()>(&::UnityEngine::Canvas::get_externRenderOverlaysBefore)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825143d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_externRenderOverlaysBefore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_externRenderOverlaysBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<int32_t,int32_t>*)>(&::UnityEngine::Canvas::set_externRenderOverlaysBefore)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_externRenderOverlaysBefore", {}, {::i2c::type_of<::System::Action_2<int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_externEndRenderOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<int32_t>* (*)()>(&::UnityEngine::Canvas::get_externEndRenderOverlays)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825143b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_externEndRenderOverlays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_externEndRenderOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<int32_t>*)>(&::UnityEngine::Canvas::set_externEndRenderOverlays)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825148f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_externEndRenderOverlays", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.SetExternalCanvasEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Canvas::SetExternalCanvasEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"SetExternalCanvasEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_worldCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::get_worldCamera)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182514720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_worldCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetDefaultCanvasMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Canvas::GetDefaultCanvasMaterial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182514140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetDefaultCanvasMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetETC1SupportedCanvasMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Canvas::GetETC1SupportedCanvasMaterial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182514170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetETC1SupportedCanvasMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.ForceUpdateCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Canvas::ForceUpdateCanvases)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825140d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"ForceUpdateCanvases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.SendPreWillRenderCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Canvas::SendPreWillRenderCanvases)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825141c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"SendPreWillRenderCanvases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.SendWillRenderCanvases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Canvas::SendWillRenderCanvases)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825141f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"SendWillRenderCanvases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.BeginRenderExtraOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Canvas::BeginRenderExtraOverlays)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"BeginRenderExtraOverlays", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.RenderExtraOverlaysBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::Canvas::RenderExtraOverlaysBefore)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182514190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"RenderExtraOverlaysBefore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.EndRenderExtraOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Canvas::EndRenderExtraOverlays)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825140a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"EndRenderExtraOverlays", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Canvas::*)()>(&::UnityEngine::Canvas::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderMode (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_renderMode_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825144f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_renderMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::RenderMode)>(&::UnityEngine::Canvas::set_renderMode_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825149e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_renderMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_isRootCanvas_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_isRootCanvas_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825143f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_isRootCanvas_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_scaleFactor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_scaleFactor_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_scaleFactor_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_scaleFactor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Canvas::set_scaleFactor_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_scaleFactor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_referencePixelsPerUnit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_referencePixelsPerUnit_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825144b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_referencePixelsPerUnit_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_referencePixelsPerUnit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Canvas::set_referencePixelsPerUnit_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_referencePixelsPerUnit_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_pixelPerfect_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_pixelPerfect_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_pixelPerfect_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderOrder_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_renderOrder_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_overrideSorting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_overrideSorting_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_overrideSorting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_overrideSorting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Canvas::set_overrideSorting_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_overrideSorting_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingOrder_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_sortingOrder_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingOrder_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Canvas::set_sortingOrder_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_targetDisplay_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_targetDisplay_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825146d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_targetDisplay_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_sortingLayerID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_sortingLayerID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_sortingLayerID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Canvas::set_sortingLayerID_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_additionalShaderChannels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdditionalCanvasShaderChannels (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_additionalShaderChannels_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_additionalShaderChannels_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.set_additionalShaderChannels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::AdditionalCanvasShaderChannels)>(&::UnityEngine::Canvas::set_additionalShaderChannels_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_additionalShaderChannels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_rootCanvas_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_rootCanvas_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825145c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_rootCanvas_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_renderingDisplaySize_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Canvas::get_renderingDisplaySize_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderingDisplaySize_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.get_worldCamera_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Canvas::get_worldCamera_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_worldCamera_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetDefaultCanvasMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Canvas::GetDefaultCanvasMaterial_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetDefaultCanvasMaterial_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Canvas.GetETC1SupportedCanvasMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Canvas::GetETC1SupportedCanvasMaterial_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182514160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetETC1SupportedCanvasMaterial_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Canvas::setStaticF_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "preWillRenderCanvases", ::UnityEngine::Canvas*>(std::forward<::UnityEngine::Canvas_WillRenderCanvases*>(value));
}
inline ::UnityEngine::Canvas_WillRenderCanvases* UnityEngine::Canvas::getStaticF_preWillRenderCanvases()  {
return ::cordl_internals::getStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "preWillRenderCanvases", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "willRenderCanvases", ::UnityEngine::Canvas*>(std::forward<::UnityEngine::Canvas_WillRenderCanvases*>(value));
}
inline ::UnityEngine::Canvas_WillRenderCanvases* UnityEngine::Canvas::getStaticF_willRenderCanvases()  {
return ::cordl_internals::getStaticField<::UnityEngine::Canvas_WillRenderCanvases*, "willRenderCanvases", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF__externBeginRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<externBeginRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::getStaticF__externBeginRenderOverlays_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<externBeginRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF__externRenderOverlaysBefore_k__BackingField(::System::Action_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<int32_t,int32_t>*, "<externRenderOverlaysBefore>k__BackingField", ::UnityEngine::Canvas*>(std::forward<::System::Action_2<int32_t,int32_t>*>(value));
}
inline ::System::Action_2<int32_t,int32_t>* UnityEngine::Canvas::getStaticF__externRenderOverlaysBefore_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_2<int32_t,int32_t>*, "<externRenderOverlaysBefore>k__BackingField", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::setStaticF__externEndRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<externEndRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::getStaticF__externEndRenderOverlays_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<externEndRenderOverlays>k__BackingField", ::UnityEngine::Canvas*>();
}
inline void UnityEngine::Canvas::add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"add_preWillRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"remove_preWillRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"add_willRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"remove_willRenderCanvases", {}, {::i2c::type_of<::UnityEngine::Canvas_WillRenderCanvases*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::RenderMode UnityEngine::Canvas::get_renderMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderMode>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_renderMode(::UnityEngine::RenderMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_renderMode", {}, {::i2c::type_of<::UnityEngine::RenderMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Canvas::get_isRootCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_isRootCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Canvas::get_scaleFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_scaleFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_scaleFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_scaleFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Canvas::get_referencePixelsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_referencePixelsPerUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_referencePixelsPerUnit(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_referencePixelsPerUnit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Canvas::get_pixelPerfect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_pixelPerfect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Canvas::get_renderOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Canvas::get_overrideSorting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_overrideSorting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_overrideSorting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_overrideSorting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_sortingOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_sortingOrder(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Canvas::get_targetDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_targetDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Canvas::get_sortingLayerID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingLayerID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_sortingLayerID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingLayerID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdditionalCanvasShaderChannels UnityEngine::Canvas::get_additionalShaderChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_additionalShaderChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdditionalCanvasShaderChannels>(this, ___internal_method);
}
inline void UnityEngine::Canvas::set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_additionalShaderChannels", {}, {::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Canvas> UnityEngine::Canvas::get_rootCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_rootCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Canvas::get_renderingDisplaySize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderingDisplaySize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::get_externBeginRenderOverlays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_externBeginRenderOverlays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<int32_t>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::set_externBeginRenderOverlays(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_externBeginRenderOverlays", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Action_2<int32_t,int32_t>* UnityEngine::Canvas::get_externRenderOverlaysBefore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_externRenderOverlaysBefore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t,int32_t>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::set_externRenderOverlaysBefore(::System::Action_2<int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_externRenderOverlaysBefore", {}, {::i2c::type_of<::System::Action_2<int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Action_1<int32_t>* UnityEngine::Canvas::get_externEndRenderOverlays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_externEndRenderOverlays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<int32_t>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::set_externEndRenderOverlays(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_externEndRenderOverlays", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Canvas::SetExternalCanvasEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"SetExternalCanvasEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Canvas::get_worldCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_worldCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Canvas::GetDefaultCanvasMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetDefaultCanvasMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Canvas::GetETC1SupportedCanvasMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetETC1SupportedCanvasMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::ForceUpdateCanvases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"ForceUpdateCanvases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::SendPreWillRenderCanvases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"SendPreWillRenderCanvases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::SendWillRenderCanvases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"SendWillRenderCanvases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Canvas::BeginRenderExtraOverlays(int32_t  displayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"BeginRenderExtraOverlays", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::Canvas::RenderExtraOverlaysBefore(int32_t  displayIndex, int32_t  sortingOrder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"RenderExtraOverlaysBefore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex, sortingOrder);
}
inline void UnityEngine::Canvas::EndRenderExtraOverlays(int32_t  displayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"EndRenderExtraOverlays", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::Canvas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RenderMode UnityEngine::Canvas::get_renderMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_renderMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::RenderMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_renderMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Canvas::get_isRootCanvas_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_isRootCanvas_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Canvas::get_scaleFactor_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_scaleFactor_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_scaleFactor_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_scaleFactor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Canvas::get_referencePixelsPerUnit_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_referencePixelsPerUnit_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_referencePixelsPerUnit_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_referencePixelsPerUnit_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Canvas::get_pixelPerfect_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_pixelPerfect_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Canvas::get_renderOrder_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Canvas::get_overrideSorting_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_overrideSorting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_overrideSorting_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_overrideSorting_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_sortingOrder_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_sortingOrder_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Canvas::get_targetDisplay_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_targetDisplay_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Canvas::get_sortingLayerID_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_sortingLayerID_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::AdditionalCanvasShaderChannels UnityEngine::Canvas::get_additionalShaderChannels_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_additionalShaderChannels_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdditionalCanvasShaderChannels>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::set_additionalShaderChannels_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AdditionalCanvasShaderChannels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"set_additionalShaderChannels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::AdditionalCanvasShaderChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Canvas::get_rootCanvas_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_rootCanvas_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Canvas::get_renderingDisplaySize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_renderingDisplaySize_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::System::IntPtr UnityEngine::Canvas::get_worldCamera_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"get_worldCamera_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Canvas::GetDefaultCanvasMaterial_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetDefaultCanvasMaterial_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Canvas::GetETC1SupportedCanvasMaterial_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Canvas*>(),
                        {"GetETC1SupportedCanvasMaterial_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::UnityEngine::Canvas* UnityEngine::Canvas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Canvas*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Canvas::Canvas()   {
}
