#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/ITilemap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::ITilemap::*)()>(&::UnityEngine::Tilemaps::ITilemap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.RefreshTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::ITilemap::*)(::UnityEngine::Vector3Int)>(&::UnityEngine::Tilemaps::ITilemap::RefreshTile)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18235b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"RefreshTile", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Tilemaps::ITilemap* (*)()>(&::UnityEngine::Tilemaps::ITilemap::CreateInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18235b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"CreateInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.FindAllRefreshPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Tilemaps::ITilemap*, int32_t, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Tilemaps::ITilemap::FindAllRefreshPositions)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18235b300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"FindAllRefreshPositions", {}, {::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.GetAllTileData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Tilemaps::ITilemap*, int32_t, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Tilemaps::ITilemap::GetAllTileData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18235b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"GetAllTileData", {}, {::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Tilemaps::Tilemap>& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_Tilemap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Tilemap;
}
constexpr ::UnityW<::UnityEngine::Tilemaps::Tilemap> const& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_Tilemap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Tilemap;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__cordl_internal_set_m_Tilemap(::UnityW<::UnityEngine::Tilemaps::Tilemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Tilemap = value;
}
constexpr bool& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_AddToList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddToList;
}
constexpr bool const& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_AddToList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddToList;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__cordl_internal_set_m_AddToList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddToList = value;
}
constexpr int32_t& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_RefreshCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshCount;
}
constexpr int32_t const& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_RefreshCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshCount;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__cordl_internal_set_m_RefreshCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RefreshCount = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_RefreshPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshPos;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> const& UnityEngine::Tilemaps::ITilemap::__cordl_internal_get_m_RefreshPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshPos;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__cordl_internal_set_m_RefreshPos(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RefreshPos = value;
}
inline void UnityEngine::Tilemaps::ITilemap::setStaticF_s_Instance(::UnityEngine::Tilemaps::ITilemap*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Tilemaps::ITilemap*, "s_Instance", ::UnityEngine::Tilemaps::ITilemap*>(std::forward<::UnityEngine::Tilemaps::ITilemap*>(value));
}
inline ::UnityEngine::Tilemaps::ITilemap* UnityEngine::Tilemaps::ITilemap::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::Tilemaps::ITilemap*, "s_Instance", ::UnityEngine::Tilemaps::ITilemap*>();
}
inline void UnityEngine::Tilemaps::ITilemap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::ITilemap::RefreshTile(::UnityEngine::Vector3Int  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"RefreshTile", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline ::UnityEngine::Tilemaps::ITilemap* UnityEngine::Tilemaps::ITilemap::CreateInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"CreateInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::ITilemap*>(nullptr, ___internal_method);
}
inline void UnityEngine::Tilemaps::ITilemap::FindAllRefreshPositions(::UnityEngine::Tilemaps::ITilemap*  tilemap, int32_t  count, ::System::IntPtr  oldTilesIntPtr, ::System::IntPtr  newTilesIntPtr, ::System::IntPtr  positionsIntPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"FindAllRefreshPositions", {}, {::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tilemap, count, oldTilesIntPtr, newTilesIntPtr, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::ITilemap::GetAllTileData(::UnityEngine::Tilemaps::ITilemap*  tilemap, int32_t  count, ::System::IntPtr  tilesIntPtr, ::System::IntPtr  positionsIntPtr, ::System::IntPtr  outTileDataIntPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::ITilemap*>(),
                        {"GetAllTileData", {}, {::i2c::type_of<::UnityEngine::Tilemaps::ITilemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tilemap, count, tilesIntPtr, positionsIntPtr, outTileDataIntPtr);
}
inline ::UnityEngine::Tilemaps::ITilemap* UnityEngine::Tilemaps::ITilemap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Tilemaps::ITilemap*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::ITilemap::ITilemap()   {
}
