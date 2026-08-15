#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileMusicSet.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileMusicSet_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__PegTileMusicSet_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: Some("{}") }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair::PegTileMusicSet_PropGroupMusicPair(::GlobalNamespace::PropGroup  propGroup, int32_t  Index) noexcept  {
this->propGroup = propGroup;
this->Index = Index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair::PegTileMusicSet_PropGroupMusicPair()   {
}
//  Writing Method size for method: ::GlobalNamespace::PegTileMusicSet.FindMusicGroupAndIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MusicGroup> (::GlobalNamespace::PegTileMusicSet::*)(::GlobalNamespace::PropGroup, ::by_ref<int32_t>)>(&::GlobalNamespace::PegTileMusicSet::FindMusicGroupAndIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180406580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileMusicSet*>(),
                        {"FindMusicGroupAndIndex", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileMusicSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileMusicSet::*)()>(&::GlobalNamespace::PegTileMusicSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileMusicSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MusicGroup>& GlobalNamespace::PegTileMusicSet::__cordl_internal_get_musicGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& GlobalNamespace::PegTileMusicSet::__cordl_internal_get_musicGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr void GlobalNamespace::PegTileMusicSet::__cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicGroup = value;
}
constexpr ::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair>& GlobalNamespace::PegTileMusicSet::__cordl_internal_get_mappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mappings;
}
constexpr ::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair> const& GlobalNamespace::PegTileMusicSet::__cordl_internal_get_mappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mappings;
}
constexpr void GlobalNamespace::PegTileMusicSet::__cordl_internal_set_mappings(::ArrayW<::GlobalNamespace::PegTileMusicSet_PropGroupMusicPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mappings = value;
}
inline ::UnityW<::GlobalNamespace::MusicGroup> GlobalNamespace::PegTileMusicSet::FindMusicGroupAndIndex(::GlobalNamespace::PropGroup  propGroup, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileMusicSet*>(),
                        {"FindMusicGroupAndIndex", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MusicGroup>>(this, ___internal_method, propGroup, index);
}
inline void GlobalNamespace::PegTileMusicSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileMusicSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PegTileMusicSet* GlobalNamespace::PegTileMusicSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PegTileMusicSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileMusicSet::PegTileMusicSet()   {
}
