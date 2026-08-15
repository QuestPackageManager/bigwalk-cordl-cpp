#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpecificTurnstile.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__SplitFlapGlyph_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviourSyncVar_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificTurnstile_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)()>(&::GlobalNamespace::PlayerSpecificTurnstile::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18040f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)()>(&::GlobalNamespace::PlayerSpecificTurnstile::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18040f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerSpecificTurnstile::OnChange)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18040f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"OnChange", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.RefreshPokeButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)()>(&::GlobalNamespace::PlayerSpecificTurnstile::RefreshPokeButton)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18040f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"RefreshPokeButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PlayerSpecificTurnstile::OnPeck)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18040f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.PickPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*)>(&::GlobalNamespace::PlayerSpecificTurnstile::PickPlayer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18040f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"PickPlayer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.OnChangeChosenPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)(::GlobalNamespace::PlayerCharacter*, ::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerSpecificTurnstile::OnChangeChosenPlayer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18040f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"OnChangeChosenPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.UpdateGlyphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)()>(&::GlobalNamespace::PlayerSpecificTurnstile::UpdateGlyphs)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18040fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"UpdateGlyphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)()>(&::GlobalNamespace::PlayerSpecificTurnstile::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)()>(&::GlobalNamespace::PlayerSpecificTurnstile::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.get_NetworkchosenPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PlayerSpecificTurnstile::*)()>(&::GlobalNamespace::PlayerSpecificTurnstile::get_NetworkchosenPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18040fc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"get_NetworkchosenPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.set_NetworkchosenPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)(::ByRefConst<::GlobalNamespace::PlayerCharacter*>)>(&::GlobalNamespace::PlayerSpecificTurnstile::set_NetworkchosenPlayer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18040fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"set_NetworkchosenPlayer", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::PlayerCharacter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::PlayerSpecificTurnstile::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18040f7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificTurnstile.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificTurnstile::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::PlayerSpecificTurnstile::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18040f370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_entryPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_entryPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryPose;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set_entryPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryPose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_playerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_playerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZone = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_lockSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_lockSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockSystem;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set_lockSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_pokeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pokeButton;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_pokeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pokeButton;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set_pokeButton(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pokeButton = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_chosenPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenPlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_chosenPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenPlayer;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set_chosenPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chosenPlayer = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_splitFlapGlyphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitFlapGlyphs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>> const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_splitFlapGlyphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitFlapGlyphs;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set_splitFlapGlyphs(::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitFlapGlyphs = value;
}
constexpr bool& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::Mirror::NetworkBehaviourSyncVar& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get____chosenPlayerNetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->______chosenPlayerNetId;
}
constexpr ::Mirror::NetworkBehaviourSyncVar const& GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_get____chosenPlayerNetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->______chosenPlayerNetId;
}
constexpr void GlobalNamespace::PlayerSpecificTurnstile::__cordl_internal_set____chosenPlayerNetId(::Mirror::NetworkBehaviourSyncVar  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->______chosenPlayerNetId = value;
}
inline void GlobalNamespace::PlayerSpecificTurnstile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::OnChange(::GlobalNamespace::PlayerCharacter*  changedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"OnChange", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedPlayer);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::RefreshPokeButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"RefreshPokeButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PlayerSpecificTurnstile::PickPlayer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  playersInZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"PickPlayer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(nullptr, ___internal_method, playersInZone);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::OnChangeChosenPlayer(::GlobalNamespace::PlayerCharacter*  oldValue, ::GlobalNamespace::PlayerCharacter*  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"OnChangeChosenPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::UpdateGlyphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"UpdateGlyphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PlayerSpecificTurnstile::get_NetworkchosenPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"get_NetworkchosenPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::set_NetworkchosenPlayer(::ByRefConst<::GlobalNamespace::PlayerCharacter*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(),
                        {"set_NetworkchosenPlayer", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::PlayerCharacter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::PlayerSpecificTurnstile::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerSpecificTurnstile*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::PlayerSpecificTurnstile* GlobalNamespace::PlayerSpecificTurnstile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSpecificTurnstile*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpecificTurnstile::PlayerSpecificTurnstile()   {
}
