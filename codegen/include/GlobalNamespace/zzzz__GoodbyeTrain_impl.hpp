#pragma once
// IWYU pragma private; include "GlobalNamespace/GoodbyeTrain.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificTurnstile_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GoodbyeTrain_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedTrain_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GoodbyeTrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GoodbyeTrain::*)()>(&::GlobalNamespace::GoodbyeTrain::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyeTrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_networkedTrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTrain;
}
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_networkedTrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTrain;
}
constexpr void GlobalNamespace::GoodbyeTrain::__cordl_internal_set_networkedTrain(::UnityW<::GlobalNamespace::NetworkedTrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedTrain = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_loadingZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_loadingZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingZone;
}
constexpr void GlobalNamespace::GoodbyeTrain::__cordl_internal_set_loadingZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingZone = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_entryTurnstileLockSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryTurnstileLockSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_entryTurnstileLockSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryTurnstileLockSystem;
}
constexpr void GlobalNamespace::GoodbyeTrain::__cordl_internal_set_entryTurnstileLockSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryTurnstileLockSystem = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>>& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_exitTurnstiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitTurnstiles;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>> const& GlobalNamespace::GoodbyeTrain::__cordl_internal_get_exitTurnstiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitTurnstiles;
}
constexpr void GlobalNamespace::GoodbyeTrain::__cordl_internal_set_exitTurnstiles(::ArrayW<::UnityW<::GlobalNamespace::PlayerSpecificTurnstile>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitTurnstiles = value;
}
inline void GlobalNamespace::GoodbyeTrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GoodbyeTrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GoodbyeTrain* GlobalNamespace::GoodbyeTrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GoodbyeTrain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GoodbyeTrain::GoodbyeTrain()   {
}
