#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tile.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::Tile_ColliderType::Tile_ColliderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tile_ColliderType::Tile_ColliderType()   {
}
constexpr ::UnityEngine::Tilemaps::Tile_ColliderType  UnityEngine::Tilemaps::Tile_ColliderType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Tilemaps::Tile_ColliderType  UnityEngine::Tilemaps::Tile_ColliderType::Sprite{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Tilemaps::Tile_ColliderType  UnityEngine::Tilemaps::Tile_ColliderType::Grid{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_sprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_sprite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_sprite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_sprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Sprite*)>(&::UnityEngine::Tilemaps::Tile::set_sprite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_sprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_color)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Color)>(&::UnityEngine::Tilemaps::Tile::set_color)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815b93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_transform)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18235bf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Tilemaps::Tile::set_transform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18235bfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_gameObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Tilemaps::Tile::set_gameObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_gameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Tilemaps::TileFlags (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803becf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::TileFlags)>(&::UnityEngine::Tilemaps::Tile::set_flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_flags", {}, {::i2c::type_of<::UnityEngine::Tilemaps::TileFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_colliderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Tilemaps::Tile_ColliderType (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_colliderType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_colliderType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_colliderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::Tile_ColliderType)>(&::UnityEngine::Tilemaps::Tile::set_colliderType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18154a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_colliderType", {}, {::i2c::type_of<::UnityEngine::Tilemaps::Tile_ColliderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.GetTileData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::by_ref<::UnityEngine::Tilemaps::TileData>)>(&::UnityEngine::Tilemaps::Tile::GetTileData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18235be40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                    {::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18235bef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Sprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Sprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sprite;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sprite = value;
}
constexpr ::UnityEngine::Color& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Color;
}
constexpr ::UnityEngine::Color const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Color;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Color = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Transform(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Transform = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_InstancedGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancedGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_InstancedGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancedGameObject;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_InstancedGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstancedGameObject = value;
}
constexpr ::UnityEngine::Tilemaps::TileFlags& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr ::UnityEngine::Tilemaps::TileFlags const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Flags(::UnityEngine::Tilemaps::TileFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flags = value;
}
constexpr ::UnityEngine::Tilemaps::Tile_ColliderType& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_ColliderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderType;
}
constexpr ::UnityEngine::Tilemaps::Tile_ColliderType const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_ColliderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderType;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_ColliderType(::UnityEngine::Tilemaps::Tile_ColliderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ColliderType = value;
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Tilemaps::Tile::get_sprite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_sprite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_sprite(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_sprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::Tilemaps::Tile::get_color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Tilemaps::Tile::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_transform(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Tilemaps::Tile::get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_gameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_gameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::Tile::get_flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileFlags>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_flags(::UnityEngine::Tilemaps::TileFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_flags", {}, {::i2c::type_of<::UnityEngine::Tilemaps::TileFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Tilemaps::Tile_ColliderType UnityEngine::Tilemaps::Tile::get_colliderType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"get_colliderType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::Tile_ColliderType>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_colliderType(::UnityEngine::Tilemaps::Tile_ColliderType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {"set_colliderType", {}, {::i2c::type_of<::UnityEngine::Tilemaps::Tile_ColliderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::Tile::GetTileData(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::by_ref<::UnityEngine::Tilemaps::TileData>  tileData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, tilemap, tileData);
}
inline void UnityEngine::Tilemaps::Tile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Tilemaps::Tile* UnityEngine::Tilemaps::Tile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Tilemaps::Tile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tile::Tile()   {
}
