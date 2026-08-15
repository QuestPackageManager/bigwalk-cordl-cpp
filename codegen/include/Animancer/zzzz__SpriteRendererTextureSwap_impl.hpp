#pragma once
// IWYU pragma private; include "Animancer/SpriteRendererTextureSwap.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/zzzz__SpriteRendererTextureSwap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::UnityEngine::SpriteRenderer>> (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::get_Renderer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"get_Renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.get_Texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::get_Texture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"get_Texture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.set_Texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SpriteRendererTextureSwap::*)(::UnityEngine::Texture2D*)>(&::Animancer::SpriteRendererTextureSwap::set_Texture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180315c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"set_Texture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.RefreshSpriteMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::RefreshSpriteMap)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803158e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"RefreshSpriteMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                    {::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                    {::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::LateUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180315860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                    {::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.ClearCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::ClearCache)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"ClearCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.GetSpriteMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>* (*)(::UnityEngine::Texture2D*)>(&::Animancer::SpriteRendererTextureSwap::GetSpriteMap)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180315770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"GetSpriteMap", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.TrySwapTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*, ::UnityEngine::Texture2D*, ::by_ref<::UnityEngine::Sprite*>)>(&::Animancer::SpriteRendererTextureSwap::TrySwapTexture)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803159e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"TrySwapTexture", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::Sprite*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.DestroySprites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*)>(&::Animancer::SpriteRendererTextureSwap::DestroySprites)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180315590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"DestroySprites", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap.DestroySprites
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::Animancer::SpriteRendererTextureSwap::DestroySprites)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180315640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"DestroySprites", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SpriteRendererTextureSwap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SpriteRendererTextureSwap::*)()>(&::Animancer::SpriteRendererTextureSwap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& Animancer::SpriteRendererTextureSwap::__cordl_internal_get__Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& Animancer::SpriteRendererTextureSwap::__cordl_internal_get__Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Renderer;
}
constexpr void Animancer::SpriteRendererTextureSwap::__cordl_internal_set__Renderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Renderer = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Animancer::SpriteRendererTextureSwap::__cordl_internal_get__Texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Animancer::SpriteRendererTextureSwap::__cordl_internal_get__Texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Texture;
}
constexpr void Animancer::SpriteRendererTextureSwap::__cordl_internal_set__Texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Texture = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*& Animancer::SpriteRendererTextureSwap::__cordl_internal_get__SpriteMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpriteMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>* const& Animancer::SpriteRendererTextureSwap::__cordl_internal_get__SpriteMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpriteMap;
}
constexpr void Animancer::SpriteRendererTextureSwap::__cordl_internal_set__SpriteMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpriteMap = value;
}
inline void Animancer::SpriteRendererTextureSwap::setStaticF_TextureToSpriteMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>*, "TextureToSpriteMap", ::Animancer::SpriteRendererTextureSwap*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>* Animancer::SpriteRendererTextureSwap::getStaticF_TextureToSpriteMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>*, "TextureToSpriteMap", ::Animancer::SpriteRendererTextureSwap*>();
}
inline ::by_ref<::UnityW<::UnityEngine::SpriteRenderer>> Animancer::SpriteRendererTextureSwap::get_Renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"get_Renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::SpriteRenderer>>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> Animancer::SpriteRendererTextureSwap::get_Texture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"get_Texture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void Animancer::SpriteRendererTextureSwap::set_Texture(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"set_Texture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::SpriteRendererTextureSwap::RefreshSpriteMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"RefreshSpriteMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SpriteRendererTextureSwap::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SpriteRendererTextureSwap::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SpriteRendererTextureSwap::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SpriteRendererTextureSwap::ClearCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"ClearCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>* Animancer::SpriteRendererTextureSwap::GetSpriteMap(::UnityEngine::Texture2D*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"GetSpriteMap", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>(nullptr, ___internal_method, texture);
}
inline bool Animancer::SpriteRendererTextureSwap::TrySwapTexture(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  spriteMap, ::UnityEngine::Texture2D*  texture, ::by_ref<::UnityEngine::Sprite*>  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"TrySwapTexture", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::Sprite*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spriteMap, texture, sprite);
}
inline void Animancer::SpriteRendererTextureSwap::DestroySprites(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  spriteMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"DestroySprites", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spriteMap);
}
inline void Animancer::SpriteRendererTextureSwap::DestroySprites(::UnityEngine::Texture2D*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {"DestroySprites", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture);
}
inline void Animancer::SpriteRendererTextureSwap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SpriteRendererTextureSwap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::SpriteRendererTextureSwap* Animancer::SpriteRendererTextureSwap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::SpriteRendererTextureSwap*>());
}
// Ctor Parameters []
constexpr ::Animancer::SpriteRendererTextureSwap::SpriteRendererTextureSwap()   {
}
