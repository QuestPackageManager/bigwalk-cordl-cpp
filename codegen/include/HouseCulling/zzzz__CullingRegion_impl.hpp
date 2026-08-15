#pragma once
// IWYU pragma private; include "HouseCulling/CullingRegion.hpp"
#include "HouseCulling/zzzz__CullingState_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
#include "HouseCulling/zzzz__CullingLocation_def.hpp"
#include "HouseCulling/zzzz__CullingState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HouseCulling::CullingRegion.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HouseCulling::CullingState (::HouseCulling::CullingRegion::*)()>(&::HouseCulling::CullingRegion::get_state)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingRegion*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingRegion.set_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingRegion::*)(::HouseCulling::CullingState)>(&::HouseCulling::CullingRegion::set_state)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803bf1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingRegion*>(),
                        {"set_state", {}, {::i2c::type_of<::HouseCulling::CullingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingRegion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingRegion::*)()>(&::HouseCulling::CullingRegion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bf1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingRegion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*& HouseCulling::CullingRegion::__cordl_internal_get_connectedLocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedLocations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>* const& HouseCulling::CullingRegion::__cordl_internal_get_connectedLocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedLocations;
}
constexpr void HouseCulling::CullingRegion::__cordl_internal_set_connectedLocations(::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedLocations = value;
}
constexpr ::HouseCulling::CullingState& HouseCulling::CullingRegion::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::HouseCulling::CullingState const& HouseCulling::CullingRegion::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void HouseCulling::CullingRegion::__cordl_internal_set__state(::HouseCulling::CullingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline ::HouseCulling::CullingState HouseCulling::CullingRegion::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingRegion*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HouseCulling::CullingState>(this, ___internal_method);
}
inline void HouseCulling::CullingRegion::set_state(::HouseCulling::CullingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingRegion*>(),
                        {"set_state", {}, {::i2c::type_of<::HouseCulling::CullingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HouseCulling::CullingRegion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingRegion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseCulling::CullingRegion* HouseCulling::CullingRegion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseCulling::CullingRegion*>());
}
// Ctor Parameters []
constexpr ::HouseCulling::CullingRegion::CullingRegion()   {
}
