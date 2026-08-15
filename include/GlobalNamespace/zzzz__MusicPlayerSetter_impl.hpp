#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicPlayerSetter.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicPlayerSetter_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicPlayerSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayerSetter::*)()>(&::GlobalNamespace::MusicPlayerSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayerSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MusicGroup>& GlobalNamespace::MusicPlayerSetter::__cordl_internal_get_musicGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& GlobalNamespace::MusicPlayerSetter::__cordl_internal_get_musicGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr void GlobalNamespace::MusicPlayerSetter::__cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicGroup = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>& GlobalNamespace::MusicPlayerSetter::__cordl_internal_get_players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>> const& GlobalNamespace::MusicPlayerSetter::__cordl_internal_get_players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr void GlobalNamespace::MusicPlayerSetter::__cordl_internal_set_players(::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___players = value;
}
inline void GlobalNamespace::MusicPlayerSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayerSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicPlayerSetter* GlobalNamespace::MusicPlayerSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicPlayerSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicPlayerSetter::MusicPlayerSetter()   {
}
