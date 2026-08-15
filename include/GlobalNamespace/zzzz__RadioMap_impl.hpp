#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioMap.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RadioMap_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__RadioMap_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "musicGroup", ty: "::UnityW<::GlobalNamespace::MusicGroup>", modifiers: "", def_value: Some("{}") }, CppParam { name: "miniature", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RadioMap_MusicMapEntry::RadioMap_MusicMapEntry(::UnityW<::GlobalNamespace::MusicGroup>  musicGroup, ::UnityW<::UnityEngine::Transform>  miniature) noexcept  {
this->musicGroup = musicGroup;
this->miniature = miniature;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadioMap_MusicMapEntry::RadioMap_MusicMapEntry()   {
}
//  Writing Method size for method: ::GlobalNamespace::RadioMap.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioMap::*)()>(&::GlobalNamespace::RadioMap::OnEnable)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1804083e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioMap.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioMap::*)()>(&::GlobalNamespace::RadioMap::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804082e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioMap.OnUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioMap::*)(int32_t)>(&::GlobalNamespace::RadioMap::OnUnlock)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180408560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {"OnUnlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RadioMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RadioMap::*)()>(&::GlobalNamespace::RadioMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry>& GlobalNamespace::RadioMap::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry> const& GlobalNamespace::RadioMap::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void GlobalNamespace::RadioMap::__cordl_internal_set_entries(::ArrayW<::GlobalNamespace::RadioMap_MusicMapEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
inline void GlobalNamespace::RadioMap::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioMap::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RadioMap::OnUnlock(int32_t  stationIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {"OnUnlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stationIndex);
}
inline void GlobalNamespace::RadioMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RadioMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RadioMap* GlobalNamespace::RadioMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RadioMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RadioMap::RadioMap()   {
}
