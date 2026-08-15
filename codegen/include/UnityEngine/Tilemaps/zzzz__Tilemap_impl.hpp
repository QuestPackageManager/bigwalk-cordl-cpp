#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_impl.hpp"
#include "UnityEngine/zzzz__GridLayout_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Tile", ty: "::UnityW<::UnityEngine::Tilemaps::TileBase>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TileData", ty: "::UnityEngine::Tilemaps::TileData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTile::Tilemap_SyncTile(::UnityEngine::Vector3Int  m_Position, ::UnityW<::UnityEngine::Tilemaps::TileBase>  m_Tile, ::UnityEngine::Tilemaps::TileData  m_TileData) noexcept  {
this->m_Position = m_Position;
this->m_Tile = m_Tile;
this->m_TileData = m_TileData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTile::Tilemap_SyncTile()   {
}
// Ctor Parameters [CppParam { name: "hasSyncTileCallback", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasPositionsChangedCallback", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isBufferSyncTile", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings::Tilemap_SyncTileCallbackSettings(bool  hasSyncTileCallback, bool  hasPositionsChangedCallback, bool  isBufferSyncTile) noexcept  {
this->hasSyncTileCallback = hasSyncTileCallback;
this->hasPositionsChangedCallback = hasPositionsChangedCallback;
this->isBufferSyncTile = isBufferSyncTile;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings::Tilemap_SyncTileCallbackSettings()   {
}
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_bufferSyncTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Tilemaps::Tilemap::*)()>(&::UnityEngine::Tilemaps::Tilemap::get_bufferSyncTile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"get_bufferSyncTile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HasLoopEndedForTileAnimationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Tilemaps::Tilemap::HasLoopEndedForTileAnimationCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18235c200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HasLoopEndedForTileAnimationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HandleLoopEndedForTileAnimationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Tilemaps::Tilemap::HandleLoopEndedForTileAnimationCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HandleLoopEndedForTileAnimationCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.SendLoopEndedForTileAnimationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>)>(&::UnityEngine::Tilemaps::Tilemap::SendLoopEndedForTileAnimationCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"SendLoopEndedForTileAnimationCallback", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HasSyncTileCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Tilemaps::Tilemap::HasSyncTileCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18235c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HasSyncTileCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HasPositionsChangedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Tilemaps::Tilemap::HasPositionsChangedCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18235c220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HasPositionsChangedCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HandleSyncTileCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>)>(&::UnityEngine::Tilemaps::Tilemap::HandleSyncTileCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18235c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HandleSyncTileCallback", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HandlePositionsChangedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Tilemaps::Tilemap::HandlePositionsChangedCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235c120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HandlePositionsChangedCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.SendTilemapTileChangedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>)>(&::UnityEngine::Tilemaps::Tilemap::SendTilemapTileChangedCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18235c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"SendTilemapTileChangedCallback", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.SendTilemapPositionsChangedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>)>(&::UnityEngine::Tilemaps::Tilemap::SendTilemapPositionsChangedCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"SendTilemapPositionsChangedCallback", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.RefreshTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::Vector3Int)>(&::UnityEngine::Tilemaps::Tilemap::RefreshTile)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18235c270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTile", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.RefreshTilesNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(void*, int32_t)>(&::UnityEngine::Tilemaps::Tilemap::RefreshTilesNative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18235c2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTilesNative", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetLoopEndedForTileAnimationCallbackSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::by_ref<bool>)>(&::UnityEngine::Tilemaps::Tilemap::GetLoopEndedForTileAnimationCallbackSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18235c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"GetLoopEndedForTileAnimationCallbackSettings", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.DoLoopEndedForTileAnimationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Tilemaps::Tilemap::DoLoopEndedForTileAnimationCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"DoLoopEndedForTileAnimationCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetSyncTileCallbackSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::by_ref<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings>)>(&::UnityEngine::Tilemaps::Tilemap::GetSyncTileCallbackSettings)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18235c1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"GetSyncTileCallbackSettings", {}, {::i2c::type_of<::by_ref<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.DoSyncTileCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>)>(&::UnityEngine::Tilemaps::Tilemap::DoSyncTileCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18235c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"DoSyncTileCallback", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.DoPositionsChangedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(int32_t, ::System::IntPtr)>(&::UnityEngine::Tilemaps::Tilemap::DoPositionsChangedCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18235c120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"DoPositionsChangedCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.RefreshTile_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3Int>)>(&::UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18235c260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTile_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.RefreshTilesNative_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, void*, int32_t)>(&::UnityEngine::Tilemaps::Tilemap::RefreshTilesNative_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18235c2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTilesNative_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Tilemaps::Tilemap::__cordl_internal_get_m_BufferSyncTile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferSyncTile;
}
constexpr bool const& UnityEngine::Tilemaps::Tilemap::__cordl_internal_get_m_BufferSyncTile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferSyncTile;
}
constexpr void UnityEngine::Tilemaps::Tilemap::__cordl_internal_set_m_BufferSyncTile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BufferSyncTile = value;
}
inline void UnityEngine::Tilemaps::Tilemap::setStaticF_tilemapTileChanged(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>*, "tilemapTileChanged", ::UnityEngine::Tilemaps::Tilemap*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>* UnityEngine::Tilemaps::Tilemap::getStaticF_tilemapTileChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>*, "tilemapTileChanged", ::UnityEngine::Tilemaps::Tilemap*>();
}
inline void UnityEngine::Tilemaps::Tilemap::setStaticF_tilemapPositionsChanged(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*, "tilemapPositionsChanged", ::UnityEngine::Tilemaps::Tilemap*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* UnityEngine::Tilemaps::Tilemap::getStaticF_tilemapPositionsChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*, "tilemapPositionsChanged", ::UnityEngine::Tilemaps::Tilemap*>();
}
inline void UnityEngine::Tilemaps::Tilemap::setStaticF_loopEndedForTileAnimation(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*, "loopEndedForTileAnimation", ::UnityEngine::Tilemaps::Tilemap*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* UnityEngine::Tilemaps::Tilemap::getStaticF_loopEndedForTileAnimation()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*, "loopEndedForTileAnimation", ::UnityEngine::Tilemaps::Tilemap*>();
}
inline bool UnityEngine::Tilemaps::Tilemap::get_bufferSyncTile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"get_bufferSyncTile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Tilemaps::Tilemap::HasLoopEndedForTileAnimationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HasLoopEndedForTileAnimationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tilemap::HandleLoopEndedForTileAnimationCallback(int32_t  count, ::System::IntPtr  positionsIntPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HandleLoopEndedForTileAnimationCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::Tilemap::SendLoopEndedForTileAnimationCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"SendLoopEndedForTileAnimationCallback", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline bool UnityEngine::Tilemaps::Tilemap::HasSyncTileCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HasSyncTileCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Tilemaps::Tilemap::HasPositionsChangedCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HasPositionsChangedCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tilemap::HandleSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>  syncTiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HandleSyncTileCallback", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncTiles);
}
inline void UnityEngine::Tilemaps::Tilemap::HandlePositionsChangedCallback(int32_t  count, ::System::IntPtr  positionsIntPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"HandlePositionsChangedCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::Tilemap::SendTilemapTileChangedCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>  syncTiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"SendTilemapTileChangedCallback", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncTiles);
}
inline void UnityEngine::Tilemaps::Tilemap::SendTilemapPositionsChangedCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"SendTilemapPositionsChangedCallback", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline void UnityEngine::Tilemaps::Tilemap::RefreshTile(::UnityEngine::Vector3Int  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTile", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void UnityEngine::Tilemaps::Tilemap::RefreshTilesNative(void*  positions, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTilesNative", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions, count);
}
inline void UnityEngine::Tilemaps::Tilemap::GetLoopEndedForTileAnimationCallbackSettings(::by_ref<bool>  hasEndLoopForTileAnimationCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"GetLoopEndedForTileAnimationCallbackSettings", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasEndLoopForTileAnimationCallback);
}
inline void UnityEngine::Tilemaps::Tilemap::DoLoopEndedForTileAnimationCallback(int32_t  count, ::System::IntPtr  positionsIntPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"DoLoopEndedForTileAnimationCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::Tilemap::GetSyncTileCallbackSettings(::by_ref<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings>  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"GetSyncTileCallbackSettings", {}, {::i2c::type_of<::by_ref<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void UnityEngine::Tilemaps::Tilemap::DoSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>  syncTiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"DoSyncTileCallback", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syncTiles);
}
inline void UnityEngine::Tilemaps::Tilemap::DoPositionsChangedCallback(int32_t  count, ::System::IntPtr  positionsIntPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"DoPositionsChangedCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3Int>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTile_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position);
}
inline void UnityEngine::Tilemaps::Tilemap::RefreshTilesNative_Injected(::System::IntPtr  _unity_self, void*  positions, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Tilemaps::Tilemap*>(),
                        {"RefreshTilesNative_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, positions, count);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tilemap::Tilemap()   {
}
