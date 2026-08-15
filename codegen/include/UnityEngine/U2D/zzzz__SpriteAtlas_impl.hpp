#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteAtlas.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.CanBindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::U2D::SpriteAtlas::*)(::UnityEngine::Sprite*)>(&::UnityEngine::U2D::SpriteAtlas::CanBindTo)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1822b5520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                        {"CanBindTo", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.CanBindTo_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::U2D::SpriteAtlas::CanBindTo_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822b5510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                        {"CanBindTo_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::U2D::SpriteAtlas::CanBindTo(::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                        {"CanBindTo", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sprite);
}
inline bool UnityEngine::U2D::SpriteAtlas::CanBindTo_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                        {"CanBindTo_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, sprite);
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::SpriteAtlas::SpriteAtlas()   {
}
