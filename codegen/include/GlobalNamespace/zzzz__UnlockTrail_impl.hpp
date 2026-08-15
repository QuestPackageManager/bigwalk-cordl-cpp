#pragma once
// IWYU pragma private; include "GlobalNamespace/UnlockTrail.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UnlockTrail_def.hpp"
#include "GlobalNamespace/zzzz__UnlockTrailStation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnlockTrail.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrail::*)()>(&::GlobalNamespace::UnlockTrail::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18041a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrail*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnlockTrail._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnlockTrail::*)()>(&::GlobalNamespace::UnlockTrail::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrail*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>*& GlobalNamespace::UnlockTrail::__cordl_internal_get_stations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>* const& GlobalNamespace::UnlockTrail::__cordl_internal_get_stations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stations;
}
constexpr void GlobalNamespace::UnlockTrail::__cordl_internal_set_stations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stations = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::UnlockTrail::__cordl_internal_get_finalTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::UnlockTrail::__cordl_internal_get_finalTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalTarget;
}
constexpr void GlobalNamespace::UnlockTrail::__cordl_internal_set_finalTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalTarget = value;
}
inline void GlobalNamespace::UnlockTrail::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrail*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnlockTrail::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnlockTrail*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnlockTrail* GlobalNamespace::UnlockTrail::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnlockTrail*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnlockTrail::UnlockTrail()   {
}
