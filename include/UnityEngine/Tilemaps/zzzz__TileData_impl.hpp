#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileData.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileData.set_sprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Sprite*)>(&::UnityEngine::Tilemaps::TileData::set_sprite)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18224d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_sprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileData.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Color)>(&::UnityEngine::Tilemaps::TileData::set_color)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180ded510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileData.set_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Tilemaps::TileData::set_transform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235bde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileData.set_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileData::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Tilemaps::TileData::set_gameObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_gameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileData.set_flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Tilemaps::TileFlags)>(&::UnityEngine::Tilemaps::TileData::set_flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_flags", {}, {::i2c::type_of<::UnityEngine::Tilemaps::TileFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileData.set_colliderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileData::*)(::UnityEngine::Tilemaps::Tile_ColliderType)>(&::UnityEngine::Tilemaps::TileData::set_colliderType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_colliderType", {}, {::i2c::type_of<::UnityEngine::Tilemaps::Tile_ColliderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileData.CreateDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Tilemaps::TileData (*)()>(&::UnityEngine::Tilemaps::TileData::CreateDefault)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18235bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"CreateDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Tilemaps::TileData::setStaticF_Default(::UnityEngine::Tilemaps::TileData  value)  {
::cordl_internals::setStaticField<::UnityEngine::Tilemaps::TileData, "Default", ::UnityEngine::Tilemaps::TileData>(std::forward<::UnityEngine::Tilemaps::TileData>(value));
}
inline ::UnityEngine::Tilemaps::TileData UnityEngine::Tilemaps::TileData::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::UnityEngine::Tilemaps::TileData, "Default", ::UnityEngine::Tilemaps::TileData>();
}
inline void UnityEngine::Tilemaps::TileData::set_sprite(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_sprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::TileData::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::TileData::set_transform(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::TileData::set_gameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_gameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::TileData::set_flags(::UnityEngine::Tilemaps::TileFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_flags", {}, {::i2c::type_of<::UnityEngine::Tilemaps::TileFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::TileData::set_colliderType(::UnityEngine::Tilemaps::Tile_ColliderType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"set_colliderType", {}, {::i2c::type_of<::UnityEngine::Tilemaps::Tile_ColliderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Tilemaps::TileData UnityEngine::Tilemaps::TileData::CreateDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileData>(),
                        {"CreateDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileData>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColliderType", ty: "::UnityEngine::Tilemaps::Tile_ColliderType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileData::TileData(int32_t  m_Sprite, ::UnityEngine::Color  m_Color, ::UnityEngine::Matrix4x4  m_Transform, int32_t  m_GameObject, ::UnityEngine::Tilemaps::TileFlags  m_Flags, ::UnityEngine::Tilemaps::Tile_ColliderType  m_ColliderType) noexcept  {
this->m_Sprite = m_Sprite;
this->m_Color = m_Color;
this->m_Transform = m_Transform;
this->m_GameObject = m_GameObject;
this->m_Flags = m_Flags;
this->m_ColliderType = m_ColliderType;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileData::TileData()   {
}
