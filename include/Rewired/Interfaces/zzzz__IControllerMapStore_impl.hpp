#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerMapStore.hpp"
#include "Rewired/Interfaces/zzzz__IControllerMapStore_def.hpp"
#include "Rewired/zzzz__ControllerIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IControllerMapStore.SaveControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IControllerMapStore::*)(int32_t, ::Rewired::ControllerMap*)>(&::Rewired::Interfaces::IControllerMapStore::SaveControllerMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerMapStore*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerMapStore*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerMapStore.LoadControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (::Rewired::Interfaces::IControllerMapStore::*)(int32_t, ::Rewired::ControllerIdentifier, int32_t, int32_t)>(&::Rewired::Interfaces::IControllerMapStore::LoadControllerMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerMapStore*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerMapStore*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Interfaces::IControllerMapStore::SaveControllerMap(int32_t  playerId, ::Rewired::ControllerMap*  controllerMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerMapStore*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controllerMap);
}
inline ::Rewired::ControllerMap* Rewired::Interfaces::IControllerMapStore::LoadControllerMap(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerMapStore*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(this, ___internal_method, playerId, controllerIdentifier, categoryId, layoutId);
}
