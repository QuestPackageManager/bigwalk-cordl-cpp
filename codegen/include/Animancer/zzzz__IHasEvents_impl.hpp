#pragma once
// IWYU pragma private; include "Animancer/IHasEvents.hpp"
#include "Animancer/zzzz__IHasEvents_def.hpp"
#include "Animancer/zzzz__AnimancerEvent_def.hpp"
//  Writing Method size for method: ::Animancer::IHasEvents.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent_Sequence* (::Animancer::IHasEvents::*)()>(&::Animancer::IHasEvents::get_Events)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IHasEvents*>(),
                    {::i2c::class_of<::Animancer::IHasEvents*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IHasEvents.get_SerializedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> (::Animancer::IHasEvents::*)()>(&::Animancer::IHasEvents::get_SerializedEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IHasEvents*>(),
                    {::i2c::class_of<::Animancer::IHasEvents*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Animancer::AnimancerEvent_Sequence* Animancer::IHasEvents::get_Events()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IHasEvents*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> Animancer::IHasEvents::get_SerializedEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IHasEvents*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*>>(this, ___internal_method);
}
