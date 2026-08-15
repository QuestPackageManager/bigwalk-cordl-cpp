#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectHeadset.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectHeadset_def.hpp"
#include "GlobalNamespace/zzzz__ListenerMover_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectHeadset.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectHeadset::*)()>(&::GlobalNamespace::PeckEffectHeadset::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180449840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectHeadset.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectHeadset::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectHeadset::Peck)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804498f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectHeadset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectHeadset::*)()>(&::GlobalNamespace::PeckEffectHeadset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectHeadset.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectHeadset::*)()>(&::GlobalNamespace::PeckEffectHeadset::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_peckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_peckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystem;
}
constexpr void GlobalNamespace::PeckEffectHeadset::__cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystem = value;
}
constexpr ::GlobalNamespace::PeckPlayerReference& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_playerReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr ::GlobalNamespace::PeckPlayerReference const& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_playerReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReference;
}
constexpr void GlobalNamespace::PeckEffectHeadset::__cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerReference = value;
}
constexpr ::UnityW<::GlobalNamespace::ListenerMover>& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_listenerMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerMover;
}
constexpr ::UnityW<::GlobalNamespace::ListenerMover> const& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_listenerMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerMover;
}
constexpr void GlobalNamespace::PeckEffectHeadset::__cordl_internal_set_listenerMover(::UnityW<::GlobalNamespace::ListenerMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerMover = value;
}
constexpr ::StringW& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::StringW const& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void GlobalNamespace::PeckEffectHeadset::__cordl_internal_set_token(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
constexpr bool& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_localPlayerIsListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerIsListening;
}
constexpr bool const& GlobalNamespace::PeckEffectHeadset::__cordl_internal_get_localPlayerIsListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerIsListening;
}
constexpr void GlobalNamespace::PeckEffectHeadset::__cordl_internal_set_localPlayerIsListening(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerIsListening = value;
}
inline void GlobalNamespace::PeckEffectHeadset::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectHeadset::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectHeadset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectHeadset::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectHeadset*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectHeadset* GlobalNamespace::PeckEffectHeadset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectHeadset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectHeadset::PeckEffectHeadset()   {
}
