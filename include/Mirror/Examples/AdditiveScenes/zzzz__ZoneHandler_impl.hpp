#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/ZoneHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/AdditiveScenes/zzzz__ZoneHandler_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ZoneHandler.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ZoneHandler::*)(::UnityEngine::Collider*)>(&::Mirror::Examples::AdditiveScenes::ZoneHandler::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18156c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ZoneHandler*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ZoneHandler.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ZoneHandler::*)(::UnityEngine::Collider*)>(&::Mirror::Examples::AdditiveScenes::ZoneHandler::OnTriggerExit)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18156c8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ZoneHandler*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::ZoneHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::ZoneHandler::*)()>(&::Mirror::Examples::AdditiveScenes::ZoneHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ZoneHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mirror::Examples::AdditiveScenes::ZoneHandler::__cordl_internal_get_subScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subScene;
}
constexpr ::StringW const& Mirror::Examples::AdditiveScenes::ZoneHandler::__cordl_internal_get_subScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subScene;
}
constexpr void Mirror::Examples::AdditiveScenes::ZoneHandler::__cordl_internal_set_subScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subScene = value;
}
inline void Mirror::Examples::AdditiveScenes::ZoneHandler::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ZoneHandler*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Mirror::Examples::AdditiveScenes::ZoneHandler::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ZoneHandler*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Mirror::Examples::AdditiveScenes::ZoneHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::ZoneHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::AdditiveScenes::ZoneHandler* Mirror::Examples::AdditiveScenes::ZoneHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::AdditiveScenes::ZoneHandler*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveScenes::ZoneHandler::ZoneHandler()   {
}
