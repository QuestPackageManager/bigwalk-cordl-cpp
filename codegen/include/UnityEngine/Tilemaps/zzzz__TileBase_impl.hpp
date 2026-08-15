#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileBase.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileAnimationData_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.RefreshTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&::UnityEngine::Tilemaps::TileBase::RefreshTile)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18235b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                    {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::by_ref<::UnityEngine::Tilemaps::TileData>)>(&::UnityEngine::Tilemaps::TileBase::GetTileData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                    {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileDataNoRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Tilemaps::TileData (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&::UnityEngine::Tilemaps::TileBase::GetTileDataNoRef)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18235b960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"GetTileDataNoRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::by_ref<::UnityEngine::Tilemaps::TileAnimationData>)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                    {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationDataNoRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Tilemaps::TileAnimationData (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18235b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"GetTileAnimationDataNoRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationDataRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::by_ref<::UnityEngine::Tilemaps::TileAnimationData>, ::by_ref<bool>)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18235b920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"GetTileAnimationDataRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<::by_ref<::UnityEngine::Tilemaps::TileAnimationData>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.StartUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*)>(&::UnityEngine::Tilemaps::TileBase::StartUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                    {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.StartUpRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*, ::by_ref<bool>)>(&::UnityEngine::Tilemaps::TileBase::StartUpRef)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18235baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"StartUpRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)()>(&::UnityEngine::Tilemaps::TileBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Tilemaps::TileBase::RefreshTile(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, tilemap);
}
inline void UnityEngine::Tilemaps::TileBase::GetTileData(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::by_ref<::UnityEngine::Tilemaps::TileData>  tileData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, tilemap, tileData);
}
inline ::UnityEngine::Tilemaps::TileData UnityEngine::Tilemaps::TileBase::GetTileDataNoRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"GetTileDataNoRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileData>(this, ___internal_method, position, tilemap);
}
inline bool UnityEngine::Tilemaps::TileBase::GetTileAnimationData(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::by_ref<::UnityEngine::Tilemaps::TileAnimationData>  tileAnimationData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, tilemap, tileAnimationData);
}
inline ::UnityEngine::Tilemaps::TileAnimationData UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"GetTileAnimationDataNoRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileAnimationData>(this, ___internal_method, position, tilemap);
}
inline void UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::by_ref<::UnityEngine::Tilemaps::TileAnimationData>  tileAnimationData, ::by_ref<bool>  hasAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"GetTileAnimationDataRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<::by_ref<::UnityEngine::Tilemaps::TileAnimationData>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, tilemap, tileAnimationData, hasAnimation);
}
inline bool UnityEngine::Tilemaps::TileBase::StartUp(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::UnityEngine::GameObject*  go)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, tilemap, go);
}
inline void UnityEngine::Tilemaps::TileBase::StartUpRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::UnityEngine::GameObject*  go, ::by_ref<bool>  startUpInvokedByUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {"StartUpRef", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, tilemap, go, startUpInvokedByUser);
}
inline void UnityEngine::Tilemaps::TileBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::TileBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Tilemaps::TileBase* UnityEngine::Tilemaps::TileBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Tilemaps::TileBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileBase::TileBase()   {
}
