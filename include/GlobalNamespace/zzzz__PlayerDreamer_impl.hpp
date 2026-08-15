#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDreamer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDreamer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "HouseHouse/Dream/zzzz__DreamController_def.hpp"
#include "HouseHouse/Dream/zzzz__Dream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer.get_currentDream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HouseHouse::Dream::Dream> (::GlobalNamespace::PlayerDreamer::*)()>(&::GlobalNamespace::PlayerDreamer::get_currentDream)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"get_currentDream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer.set_currentDream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDreamer::*)(::HouseHouse::Dream::Dream*)>(&::GlobalNamespace::PlayerDreamer::set_currentDream)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180467280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"set_currentDream", {}, {::i2c::type_of<::HouseHouse::Dream::Dream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer.get_isDreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerDreamer::*)()>(&::GlobalNamespace::PlayerDreamer::get_isDreaming)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18035be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"get_isDreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDreamer::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerDreamer::Initialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDreamer::*)()>(&::GlobalNamespace::PlayerDreamer::Update)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1804670c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer.ServerStartDream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDreamer::*)(::HouseHouse::Dream::DreamController*)>(&::GlobalNamespace::PlayerDreamer::ServerStartDream)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180467030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"ServerStartDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer.ServerStopDream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDreamer::*)(::HouseHouse::Dream::DreamController*)>(&::GlobalNamespace::PlayerDreamer::ServerStopDream)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180467060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"ServerStopDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDreamer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDreamer::*)()>(&::GlobalNamespace::PlayerDreamer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerDreamer::__cordl_internal_get__playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerDreamer::__cordl_internal_get__playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCharacter;
}
constexpr void GlobalNamespace::PlayerDreamer::__cordl_internal_set__playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerCharacter = value;
}
constexpr ::UnityW<::HouseHouse::Dream::Dream>& GlobalNamespace::PlayerDreamer::__cordl_internal_get__currentDream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDream;
}
constexpr ::UnityW<::HouseHouse::Dream::Dream> const& GlobalNamespace::PlayerDreamer::__cordl_internal_get__currentDream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDream;
}
constexpr void GlobalNamespace::PlayerDreamer::__cordl_internal_set__currentDream(::UnityW<::HouseHouse::Dream::Dream>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDream = value;
}
constexpr float_t& GlobalNamespace::PlayerDreamer::__cordl_internal_get_smoothDreamness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothDreamness;
}
constexpr float_t const& GlobalNamespace::PlayerDreamer::__cordl_internal_get_smoothDreamness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothDreamness;
}
constexpr void GlobalNamespace::PlayerDreamer::__cordl_internal_set_smoothDreamness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothDreamness = value;
}
constexpr float_t& GlobalNamespace::PlayerDreamer::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr float_t const& GlobalNamespace::PlayerDreamer::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::PlayerDreamer::__cordl_internal_set_velocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
inline ::UnityW<::HouseHouse::Dream::Dream> GlobalNamespace::PlayerDreamer::get_currentDream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"get_currentDream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::HouseHouse::Dream::Dream>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDreamer::set_currentDream(::HouseHouse::Dream::Dream*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"set_currentDream", {}, {::i2c::type_of<::HouseHouse::Dream::Dream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerDreamer::get_isDreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"get_isDreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDreamer::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerDreamer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDreamer::ServerStartDream(::HouseHouse::Dream::DreamController*  dreamController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"ServerStartDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dreamController);
}
inline void GlobalNamespace::PlayerDreamer::ServerStopDream(::HouseHouse::Dream::DreamController*  dreamController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {"ServerStopDream", {}, {::i2c::type_of<::HouseHouse::Dream::DreamController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dreamController);
}
inline void GlobalNamespace::PlayerDreamer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerDreamer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerDreamer* GlobalNamespace::PlayerDreamer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerDreamer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDreamer::PlayerDreamer()   {
}
