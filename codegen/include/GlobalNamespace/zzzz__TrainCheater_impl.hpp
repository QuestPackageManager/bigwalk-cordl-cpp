#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainCheater.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrainCheater_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedTrain_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrainCheater.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainCheater::*)()>(&::GlobalNamespace::TrainCheater::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18041a090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCheater*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainCheater.SetDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::TrainCheater::SetDistance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18041a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCheater*>(),
                        {"SetDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainCheater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainCheater::*)()>(&::GlobalNamespace::TrainCheater::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCheater*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& GlobalNamespace::TrainCheater::__cordl_internal_get_networkedTrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTrain;
}
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& GlobalNamespace::TrainCheater::__cordl_internal_get_networkedTrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTrain;
}
constexpr void GlobalNamespace::TrainCheater::__cordl_internal_set_networkedTrain(::UnityW<::GlobalNamespace::NetworkedTrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedTrain = value;
}
inline void GlobalNamespace::TrainCheater::setStaticF_instance(::UnityW<::GlobalNamespace::TrainCheater>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::TrainCheater>, "instance", ::GlobalNamespace::TrainCheater*>(std::forward<::UnityW<::GlobalNamespace::TrainCheater>>(value));
}
inline ::UnityW<::GlobalNamespace::TrainCheater> GlobalNamespace::TrainCheater::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::TrainCheater>, "instance", ::GlobalNamespace::TrainCheater*>();
}
inline void GlobalNamespace::TrainCheater::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCheater*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrainCheater::SetDistance(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCheater*>(),
                        {"SetDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, distance);
}
inline void GlobalNamespace::TrainCheater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCheater*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrainCheater* GlobalNamespace::TrainCheater::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrainCheater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrainCheater::TrainCheater()   {
}
