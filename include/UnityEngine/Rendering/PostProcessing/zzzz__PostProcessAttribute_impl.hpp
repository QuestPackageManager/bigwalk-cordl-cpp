#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessAttribute::*)(::System::Type*, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent, ::StringW, bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fbb700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessAttribute::*)(::System::Type*, ::StringW, bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fbb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::System::Type* const& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_set_renderer(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_eventType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent const& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_eventType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_set_eventType(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventType = value;
}
constexpr ::StringW& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_menuItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuItem;
}
constexpr ::StringW const& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_menuItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuItem;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_set_menuItem(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuItem = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_allowInSceneView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowInSceneView;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_allowInSceneView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowInSceneView;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_set_allowInSceneView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowInSceneView = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_builtinEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtinEffect;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_get_builtinEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtinEffect;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessAttribute::__cordl_internal_set_builtinEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builtinEffect = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessAttribute::_ctor(::System::Type*  renderer, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  eventType, ::StringW  menuItem, bool  allowInSceneView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, eventType, menuItem, allowInSceneView);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessAttribute::_ctor(::System::Type*  renderer, ::StringW  menuItem, bool  allowInSceneView)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, menuItem, allowInSceneView);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* UnityEngine::Rendering::PostProcessing::PostProcessAttribute::New_ctor(::System::Type*  renderer, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  eventType, ::StringW  menuItem, bool  allowInSceneView)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>(renderer, eventType, menuItem, allowInSceneView));
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* UnityEngine::Rendering::PostProcessing::PostProcessAttribute::New_ctor(::System::Type*  renderer, ::StringW  menuItem, bool  allowInSceneView)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>(renderer, menuItem, allowInSceneView));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute::PostProcessAttribute()   {
}
