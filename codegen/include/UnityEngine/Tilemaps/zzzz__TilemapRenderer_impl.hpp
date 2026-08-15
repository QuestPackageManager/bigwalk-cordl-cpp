#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TilemapRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TilemapRenderer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.RegisterSpriteAtlasRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(&::UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18235c020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"RegisterSpriteAtlasRegistered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.UnregisterSpriteAtlasRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(&::UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18235c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"UnregisterSpriteAtlasRegistered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.OnSpriteAtlasRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18235bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"OnSpriteAtlasRegistered", {}, {::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.OnSpriteAtlasRegistered_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18235bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"OnSpriteAtlasRegistered_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"RegisterSpriteAtlasRegistered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"UnregisterSpriteAtlasRegistered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas*  atlas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"OnSpriteAtlasRegistered", {}, {::i2c::type_of<::UnityEngine::U2D::SpriteAtlas*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atlas);
}
inline void UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  atlas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TilemapRenderer*>(),
                        {"OnSpriteAtlasRegistered_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, atlas);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TilemapRenderer::TilemapRenderer()   {
}
